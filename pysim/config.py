import re
import math


class Config:
    def __init__(self, file_path):
        self.DIM = 1024

        # when size is `2 ** n - 1`, the quantinization equals to extracting the MSB of the accumulation result
        self.SMP_SIZE = 28
        self.SET_SIZE = 256
        self.CLS_NUM = 2
        self.load_from_file(file_path)
        self.SMP_DW = math.ceil(math.log2(self.SMP_SIZE))
        self.SET_DW = math.ceil(math.log2(self.SET_SIZE))
        self.CLS_DW = math.ceil(math.log2(self.CLS_NUM))

    def load_from_file(self, file_path):
        """
        Function
        ===
        Reading ``define` in SV from file using regexp:
        `define DIM 1024

        Input
        ---
        file_path:
        """
        var_pattern = re.compile(r'^\s*`define\s+(\w+)\s+(\d+)$')

        try:
            with (open(file_path, 'r')) as file:
                for line in file:
                    match = var_pattern.match(line.strip())
                    if match:
                        var_name = match.group(1)
                        var_value = int(match.group(2))

                        if hasattr(self, var_name):
                            setattr(self, var_name, var_value)
                        else:
                            print(
                                f"Warning: {var_name} is not a recognized configuration parameter.")
        except FileNotFoundError:
            print(f"File {file_path} not found.")
        except Exception as e:
            print(f"Error: {e}.")

    def print_vars(self):
        """
        Function
        ===
        Print all the vars within the class.
        `vars(self)` is a build-in function to get the `__dict__` attribute,
        which is a dictionary containing all the writable attributes and their values.
        """
        for attr, value in vars(self).items():
            print(f"{attr}: {value}.")

# test_runner.py

import os
from pathlib import Path
import glob

from cocotb.runner import get_runner


def test_my_design_runner():

    # add all file paths
    proj_path = Path(__file__).resolve().parent.parent
    sources = glob.glob(str(proj_path / "rtl/*.sv"))
    sources += glob.glob(str(proj_path / "rtl/dff/*.sv"))
    sources += glob.glob(str(proj_path / "rtl/cnt/*.sv"))
    hdl_top = "Rchdc"
    test_module = "testbench,"

    # compiler arguments
    wave_en = True
    sim = os.getenv("SIM", "verilator")
    # include "define.sv"
    build_args = ['-I' + str(proj_path / "rtl")]
    build_dir = str(proj_path / "sim/build_verilator")
    log_file = str(proj_path / "sim/run_verilator.log")

    compiler = 'i'
    if compiler == 'i':
        sim = os.getenv("SIM", "icarus")
        build_args = ['-g2005-sv', '-I', str(proj_path / "rtl")]
        build_dir = str(proj_path / "sim/build_icarus")
        log_file = str(proj_path / "sim/run_icarus.log")
    else:
        pass

    # cocotb runner
    runner = get_runner(sim)
    runner.build(
        sources=sources,
        hdl_toplevel=hdl_top,
        waves=wave_en,
        build_args=build_args,
        build_dir=build_dir
    )

    runner.test(
        hdl_toplevel=hdl_top,
        test_module=test_module,
        waves=wave_en,
        # log_file=log_file
    )


if __name__ == "__main__":
    test_my_design_runner()

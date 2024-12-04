# test_runner.py

import os
from pathlib import Path
import glob

from cocotb.runner import get_runner


def test_my_design_runner():
    # sim = os.getenv("SIM", "verilator")
    sim = os.getenv("SIM", "icarus")
    proj_path = Path(__file__).resolve().parent.parent

    sources = glob.glob(str(proj_path / "rtl/*.sv"))
    sources += glob.glob(str(proj_path / "rtl/dff/*.sv"))
    
    runner = get_runner(sim)
    runner.build(
        sources=sources,
        hdl_toplevel="rchdc",
        build_args=['-g2005-sv', '-I', str(proj_path / "rtl")]
    )

    # runner.test(hdl_toplevel="rchdc", test_module="testbench,")


if __name__ == "__main__":
    test_my_design_runner()
#!/usr/bin/fish

# 获取当前激活的 conda 环境名称
set current_env (conda info --envs | string match -r '^\*' | cut -d ' ' -f 2)

# 检查当前环境是否是 hdc
if test "$current_env" != hdc
    # 如果不是 hdc，则激活 hdc 环境
    echo "Activating hdc environment..."
    conda activate hdc
else
    echo "Already in hdc environment."
end

python3 ./pysim/test.py

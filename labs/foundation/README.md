# 阶段 0 实验程序

- 源码：`stage0_lab.c`
- 本机轻量编译器：TinyCC 0.9.27（Windows x64，约 478 KB），路径 `tools/tcc/tcc.exe`（不入库）
- 编译：`..\..\tools\tcc\tcc.exe -g -o stage0_lab.exe stage0_lab.c`
- 运行期望：`stack=132 heap=327`（已实测通过）
- 运行期望：`stack=132 heap=327`

## 在 Ghidra 里对照（对应掌握确认）

1. 导入 `stage0_lab.exe`，Analyze 全开。
2. 找到 `foo`（或 `FUN_*` 后按参数个数和循环改名为 foo）。
3. **传参**：x64 Windows 下 `a,b,c,d` 应来自 rcx/rdx/r8/r9；第五参 `p` 从栈取。
4. **栈**：看 `foo` 开头 prologue（push rbp / sub rsp），返回地址在保存的 rip 槽。
5. **循环**：`for (i=0;i<4;i++) acc += p->hist[i]` → 反编译应能指回；Listing 里常见 `hist` 的 `index*4`。
6. **三处对象**：`g_bias` 全局；`stack_s` / `acc` 栈；`heap_s` 来自 `malloc`。

把口述结果写进 `lab-log/` 和 `docs/methods/foundation-map.md`。

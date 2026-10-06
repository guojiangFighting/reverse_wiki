# 阶段 1：工具

## 知识点

- Ghidra：工程、导入、Analyze、Symbol Tree、Listing、Decompiler
- 改名、改类型、交叉引用是分析本身
- 调试器：软件断点、单步、寄存器、栈、内存窗口
- 静态先定位，动态验证比较点

## 实操

1. 用阶段 0 的程序建 Ghidra 工程，从 entry 找到 `foo`/`main`。
2. 给函数和关键局部变量改名。
3. x64dbg 加载同一程序，在 `foo` 入口下断，看参数寄存器/栈。
4. 卡操作再对照书第2–3章或 [Ghidra 文档](https://ghidra-sre.org/)、[x64dbg](https://help.x64dbg.com/)。

## 掌握确认

- [ ] 不靠别人提示能导入并找到目标函数
- [ ] 会用 xref 从字符串或 call 跳到函数
- [ ] 调试器能在指定函数停下并看到参数
- [ ] `docs/methods/ghidra-first.md` 或 `user-debug.md` 写出你的点击路径（自己的话）

# 阶段 4：ARM（固件与 Android 的前置）

## 知识点

ARM32 与 AArch64 寄存器、传参、LR、Thumb、交叉编译；Ghidra 选错架构的后果。

## 书 / 课

| 资源 | 说明 |
|------|------|
| [Azeria Labs ARM](https://azeria-labs.com/) | 目前最好的免费 ARM 逆向课之一 |
| Practical Reverse Engineering 第 2–3 章（ARM/Win） | 纸书补全 |
| ARM Architecture Reference 当字典 | 不要通读 |

## 博客

- Azeria 同站文章（调用约定、栈）
- Android NDK 官方交叉编译说明（为 APK 里 so 做准备）

## 然后实操站点

- Azeria 课内练习
- [Microcorruption](https://microcorruption.com/) 嵌入式风格调试（MSP430，练「外设+调试」思维，不是 ARM 本身）
- crackmes.one 过滤 ARM（若题量少，用自己交叉编译的 hello + 简单校验程序代替）

**笔记**：`methods/arm-elf.md`（参数寄存器清单自己抄熟）。

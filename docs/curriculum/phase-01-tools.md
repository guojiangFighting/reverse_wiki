# 阶段 1：工具链

## 知识点

项目/导入、自动分析、反编译窗口、重命名与类型；调试器：断点、单步、内存/寄存器。静态为主、动态为辅。

## 书 / 官方课

| 资源 | 说明 |
|------|------|
| **《加密与解密》第2章、第3章** | 主教材：动态/静态工作流 |
| [Ghidra 官方文档](https://ghidra-sre.org/) | 用第3.3节 IDA 操作清单在 Ghidra 复做 |
| [x64dbg 文档](https://help.x64dbg.com/) | 对应书 2.2；2.1 Olly 只浏览 |
| GDB / gef | 阶段 3 再用 |

## 博客 / 视频课

- [OALabs](https://www.youtube.com/@OALabs) Ghidra/x64dbg 工作流（质量稳定）
- [MalwareUnicorn RE101](https://malwareunicorn.org/workshops) 免费工作坊
- [begin.re](https://www.begin.re/) 入门路径图

## 然后实操

- Ghidra 自带 `docs`/教程程序（安装目录下的 example）
- MalwareUnicorn 工作坊配套练习
- 仍用**自己编译的程序**练断点，不上野生样本

**笔记**：`methods/ghidra-first.md`、`methods/user-debug.md`

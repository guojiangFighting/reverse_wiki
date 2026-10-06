# 阶段 3：Linux ELF

## 知识点

- ELF class、endian、interpreter、NEEDED
- 段（加载）vs 节（链接）
- GOT/PLT 是动态调用的路标
- strip 后如何用字符串和 libc 调用找回逻辑

## 实操

1. 自己编译 ELF，`file`/`readelf -h -d -s`，再 strip 一份对比。
2. Ghidra 打开 strip 后的文件，靠字符串 xref 找回校验或主逻辑。
3. [crackmes.one](https://crackmes.one/) Linux 入门 **1 道**，或 picoCTF Reverse 一题。

卡链接概念再翻《程序员的自我修养》装载章。

## 掌握确认

- [ ] 能报出 class、interpreter、至少一个 NEEDED
- [ ] 能说明 strip 少了什么、你靠什么当路标
- [ ] 无符号仍能找到比较/校验函数
- [ ] `docs/methods/elf-triage.md`

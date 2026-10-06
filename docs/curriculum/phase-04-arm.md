# 阶段 4：ARM

## 知识点

- Ghidra Language 必须和 `file` 一致
- AArch64：参数 x0–x7，返回 x0，lr/x30
- ARM32：r0–r3，lr；可能有 Thumb
- 交叉编译出的文件才能当练习对象

## 实操

1. 交叉编译阶段 0 那个 C 为 ARM 或 AArch64 hello/foo。
2. Ghidra 选对处理器，指出参数寄存器。
3. 补充：[Azeria Labs](https://azeria-labs.com/) 只看「寄存器与调用」几页，或看雪 ARM 入门帖对一下。
4. 可选：Microcorruption 做 1 关练调试思维（不是 ARM）。

## 掌握确认

- [ ] 记录你选的 Ghidra Language
- [ ] 能指出至少 3 个：第1参数、返回值、返回地址寄存器
- [ ] 故意选错架构能说出「反编译为什么像错的」
- [ ] `docs/methods/arm-elf.md`

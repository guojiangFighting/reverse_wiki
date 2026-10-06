# 阶段 3：Linux ELF

## 知识点

ELF 头、Program Header vs Section、动态链接、GOT/PLT、strip、解释器。

## 书 / 长文

| 资源 | 说明 |
|------|------|
| 《程序员的自我修养》ELF 章 | 中文首选 |
| [System V ABI / ELF 规范](https://refspecs.linuxfoundation.org/) | 查字段 |
| Practical Reverse Engineering 中 ARM/x86 与 Linux 示例 | 有则读对应节 |

## 博客

- [LWN 等对 ELF/加载器的解释文](https://lwn.net/) 按需搜 `ELF loading`
- GDB/gef 作者博客（动态看 GOT）

## 然后实操站点

- [crackmes.one](https://crackmes.one/) Linux ELF
- [pwnable.kr](https://pwnable.kr/) 里偏 reverse 的入门题（注意与 pwn 题区分，先做 reverse）
- [Root-Me](https://www.root-me.org/) ELF 相关
- PicoCTF 往年 Reverse 题：https://picoctf.org/

**笔记**：`methods/elf-triage.md`；strip 前后对比必须写。

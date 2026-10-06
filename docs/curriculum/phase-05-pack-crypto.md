# 阶段 5：加壳、混淆、算法识别

## 知识点

高熵节、入口不在 .text、导入表异常；UPX 对照；XOR/Base64；哈希/AES 常量识别。识别 ≠ 攻击。

## 书

| 资源 | 说明 |
|------|------|
| **《加密与解密》第6章** | 哈希/对称/RSA 与 6.5 库识别 |
| **第15章、第16章 16.1–16.2、16.8.1 UPX** | 先认壳与 UPX，再考虑更深脱壳 |
| 第18章 | 选读，常见反跟踪清单 |

## 博客

- hasherezade 关于 PE 与壳的文章
- OALabs unpacking 系列（看思路，跟工具版本）
- 算法常量：搜 “RTTI / crypto constants in IDA Ghidra”（FindCrypt 类插件说明）

## 然后实操

- **自己**对 hello 做 `upx` 再对比（合法、可重复）
- crackmes.one 带 packer 标签的入门题
- FLARE-ON 往年较简单的编码题（对照 writeup）

**笔记**：`methods/packer-id.md`、`methods/crypto-id.md`。本阶段不要求写通用脱壳器。

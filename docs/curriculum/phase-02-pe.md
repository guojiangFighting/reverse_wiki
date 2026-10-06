# 阶段 2：Windows PE

## 知识点

DOS/NT 头、节区、入口、导入/导出、TLS、资源；32/64 位差异；与阶段 0 调用约定合拢。

## 书

| 资源 | 说明 |
|------|------|
| **《加密与解密》第11章 PE** | 主教材，字段级 |
| 同书第5章 | 只读保护机制，配合 crackme 找比较点 |
| [Microsoft PE 格式](https://learn.microsoft.com/en-us/windows/win32/debug/pe-format) | 与第11章对照的字典 |

## 博客

- [hasherezade](https://www.youtube.com/@hasherezade) / 其 GitHub 工具说明（PE 结构可视化）
- Hex-Rays / HexRaysGhidra 博客里 Windows 示例（有则看）

## 然后实操站点

- [crackmes.one](https://crackmes.one/) 过滤：Windows、难度 1–2、无恶意
- [reversing.kr](http://reversing.kr/) 入门题
- [Root-Me](https://www.root-me.org/) Cracking 区 Windows 题
- 进阶季节性： [FLARE-ON](https://flare-on.com/) 往年 writeup 对照自己做（先读规则）

**笔记**：`methods/pe-triage.md` + 至少 1 道 crackme 案例（校验逻辑，不发布 keygen）。

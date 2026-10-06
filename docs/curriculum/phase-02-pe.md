# 阶段 2：Windows PE

## 知识点

- DOS/NT 头、节区、入口、特征
- 导入表：DLL 与 API 列表的意义
- 入口落在哪个节；正常 PE 长什么样
- （可选）TLS、资源目录的存在即可，细节卡住再查第11章

## 实操

1. 对自己的 exe：DIE + Ghidra 或 PE-bear，画出节区表和导入。
2. [crackmes.one](https://crackmes.one/)：Windows、难度 1、无恶意标签，做 **1 道**。只要求说明校验从哪进、和什么比。
3. 机制对照可扫书第5章标题，不要求做注册机。

## 掌握确认

- [ ] 能手写：Machine、节区名、入口节、3 个关键导入
- [ ] 能判断「像不像加壳」（有依据，哪怕结论是未加壳）
- [ ] crackme：能指出比较点（cmp/memcmp/字符串）
- [ ] `docs/methods/pe-triage.md` 一页

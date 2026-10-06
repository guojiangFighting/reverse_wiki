# 学习路线（先确认）

原则：**先路线 → 再书/博客把知识点学透 → 最后上实操站动手 → 把笔记蒸馏进本 wiki。**  
不做「无资料的刷题清单」。旧版 T00–T20 练习册已废弃。

**已确认（2026-10-06）**

- 顺序：下列 10 段（2 与 3 可并行；4 在 7 前；6 在死磕家族前）
- 主教材：[《加密与解密》第4版](https://book.douban.com/subject/30288807/)（段钢）
- 章节对照与周计划：[reading-plan.md](reading-plan.md)

```text
0 基础（C / 汇编 / OS）
 → 1 工具（Ghidra、调试器）
 → 2 Windows PE
 → 3 Linux ELF
 → 4 ARM（为固件/Android 铺路）
 → 5 加壳、混淆、算法识别
 → 6 恶意软件通论（窃密 / RAT / Loader）
 → 7 固件 + IoT Botnet
 → 8 托管与文档（.NET / Python / APK / JS / Office）
 → 9 流量与协议侧写
 → 10 把经验写进知识库
```

2 与 3 可部分并行；**4 必须在 7 之前**；**6 的通论必须在死磕某个家族之前**。  
8、9 可在 6 之后穿插，不必等 7 全部结束。

| 阶段 | 你要能讲清楚 | 过关 |
|------|----------------|------|
| 0 | 栈、调用约定、进程/内存 | 书或 OST2 对应课 + 自己编译并反编译 hello |
| 1 | Ghidra/调试器工作流 | 官方教程做完 + 一页手法笔记 |
| 2 | PE 节区、导入、入口 | 书章节 + crackme 入门站 |
| 3 | ELF 段、动态链接、strip | 同上（Linux 站） |
| 4 | ARM 传参、Thumb、交叉工具链 | Azeria 课 + ARM crackme |
| 5 | 如何判断 packed、常见编码 | 书第6、15、16 章 + 自己 UPX 对照 |
| 6 | 恶意软件分析流程与能力分类 | 《恶意代码分析实战》（PMA 中译）流程章 + 合法实验 |
| 7 | 解包固件、认服务、bot 谱系概念 | 官方固件 + 公开论文 |
| 8 | 遇到托管代码先换工具 | 各形态一个小实操 |
| 9 | 从 pcap 做 C2 侧写 | MTA 或 Wireshark 样本 |
| 10 | 案例+手法进站 | 每月蒸馏 |

阶段细目（资料与站点）见：

- [《加密与解密》阅读计划](reading-plan.md)

- [阶段 0 基础](phase-00-foundation.md)
- [阶段 1 工具](phase-01-tools.md)
- [阶段 2 PE](phase-02-pe.md)
- [阶段 3 ELF](phase-03-elf.md)
- [阶段 4 ARM](phase-04-arm.md)
- [阶段 5 加壳与算法](phase-05-pack-crypto.md)
- [阶段 6 恶意软件通论](phase-06-malware.md)
- [阶段 7 固件与 IoT](phase-07-firmware-iot.md)
- [阶段 8 托管与文档](phase-08-managed.md)
- [阶段 9 流量](phase-09-network.md)
- [阶段 10 沉淀](phase-10-wiki.md)

# 阶段 7：固件与 IoT Botnet

## 知识点

固件镜像布局、squashfs 等文件系统、BusyBox、启动脚本、路由器上的 Web/服务二进制；Mirai 谱系是 **Linux ELF + 弱服务面**，与 Windows 窃密不是同一套工具。

## 书

| 资源 | 说明 |
|------|------|
| *The IoT Hacker’s Handbook*（Aditya Gupta 等） | 固件与 IoT 分析通论 |
| *Practical IoT Hacking* | 偏实践，选固件章节 |
| 阶段 3–4 的 ELF/ARM 书 | 这里会反复用到 |

## 博客 / 论文（优质、可引用）

- [Azeria / 嵌入式与 ARM](https://azeria-labs.com/)
- 360 Netlab 对 Mozi 等的公开分析（防御向）
- Microsoft 关于 Mozi 的防御博客
- Mirai 原始论文：Antonakakis et al., *Understanding the Mirai Botnet*（USENIX）
- 厂商安全公告（如 D-Link SAP）只作版本与组件对照

## 然后实操站点 / 对象

- **官方固件下载站**（首选实操对象，不是漏洞利用平台）
- [DVRF](https://github.com/praetorian-inc/DVRF)（路由器漏洞研究练习靶，在隔离网；本 wiki 只写分析与加固理解，不写 PoC）
- OWASP IoT 相关项目（Goat 等，按官方文档做）
- 学术数据集哈希对照（如 Tangled IoT 论文配套，**不把样本推进 git**）

**笔记**：`methods/firmware-unpack.md` + `firmware-rce/<型号-版本>.md` + `botnet/iot-embedded/mirai-lineage.md`。

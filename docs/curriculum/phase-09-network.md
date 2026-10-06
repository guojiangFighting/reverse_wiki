# 阶段 9：流量与协议侧写

## 知识点

以太网/IP/TCP、DNS、HTTP(S)、TLS Client Hello；周期性心跳、可疑域名——用来理解 C2 **长什么样**，不是去打 C2。

## 书

| 资源 | 说明 |
|------|------|
| Wireshark 官方文档 / 《Wireshark 网络分析就这么简单》类入门 | 抓包与显示过滤 |
| PMA 中动态分析与网络相关章 | 和恶意软件课合拢 |
| TCP/IP Illustrated 选读 | 过深可跳过 |

## 博客 / 教材站

- [malware-traffic-analysis.net](https://www.malware-traffic-analysis.net/) 带 writeup 的公开 pcap（按站点许可使用）
- Wireshark University / 官方 sample captures：https://wiki.wireshark.org/SampleCaptures
- 厂商报告里的 C2 描述（JA3、域名生成）当「阅读材料」

## 然后实操

1. 先抓**自己**的浏览器流量，认握手与 TLS。
2. 再选 MTA 或 Wireshark 一份已有分析的 pcap，列出侧写字段。
3. 不要对公网做扫描或连接报告里的活 C2。

**笔记**：`methods/pcap-triage.md`

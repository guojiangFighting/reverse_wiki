# 分类规则

一级按**业务能力**，二级按**平台**。

| 一级 | 放什么 |
|------|--------|
| stealers | 一次性/批量凭证与文件窃取 |
| spyware | 长期监控（与 stealer 分开） |
| botnet | 受控网络，IoT 为主放 `iot-embedded/` |
| rat | 交互式远控 |
| loaders | 下载/解密/注入后续载荷 |
| ransomware / wipers / worms / rootkits | 有案例再开目录 |
| firmware-rce | 固件组件与已公开漏洞的分析入口，不是 exploit 库 |

跨类：正文只放主目录，`families/` 做别名。APT 不是类型，用 front matter `actor`。

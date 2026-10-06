# 阶段 9：流量侧写

## 知识点

- 帧：以太 → IP → TCP/UDP → 应用层
- DNS / HTTP / TLS Client Hello 看起来像什么
- 侧写：周期、域名、长连接、证书异常——用来理解 C2 外观，不去连活 C2

## 实操

1. 抓自己的浏览器 HTTPS + 本地 `python -m http.server` 的 HTTP。
2. 过滤器：`dns` `http` `tls.handshake`。
3. 再选 Wireshark Sample 或 malware-traffic-analysis 一份**已有 writeup** 的 pcap，列 5 个值得继续看的字段。

## 掌握确认

- [ ] 能在自己的包里指出握手或 HTTP 请求行
- [ ] 公开 pcap：5 个侧写字段 + 一句「为什么可疑或不可疑」
- [ ] `docs/methods/pcap-triage.md`

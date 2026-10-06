# 阶段 5：加壳与算法识别

## 知识点

- packed 启发式：异常节名、高熵、入口不在 .text、导入很少
- UPX 对照：加壳前后差异
- XOR 循环、Base64 表、MD5/SHA IV、AES S-box
- 识别算法和「会不会破解」不是一回事

## 实操

1. 对自己的 exe/elf 做官方 UPX，DIE + 节区对比未加壳版本。
2. 写两个小程序：XOR 缓冲区；调用 SHA256 或 MD5。Ghidra 里不看源码标出来。
3. 可选：crackmes 带 packer 标签的入门题只做识别。

卡壳查书第6、15、16.1、16.8.1。

## 掌握确认

- [ ] 三列表：未加壳 / UPX /（可选）其他，节区与 DIE
- [ ] 能指出 XOR 循环或哈希常量/库调用
- [ ] `docs/methods/packer-id.md` 与 `crypto-id.md`（可合并一页）

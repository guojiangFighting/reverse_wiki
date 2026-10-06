# 阶段 7：固件与 IoT

## 知识点

- 固件是镜像：内核、rootfs、bootloader 可能拼在一个文件
- squashfs/jiffs 等解出后就是 Linux 根文件系统
- 启动脚本 → 服务 ELF（httpd 等）
- IoT bot（Mirai 谱系）是 ELF + 暴露服务，与 Windows 窃密工具链不同

## 实操

1. **官方站点**下一份家用路由固件，`binwalk` 先看签名再提取。
2. 列出 `/etc/init.d` 或等价启动链中的一个服务，`file` 看 ARM/MIPS。
3. Ghidra 打开该 ELF，找到 main 或 `bind`/`socket` 引用（能到哪写到哪）。
4. 读一篇 Mirai/Mozi **厂商或论文**，填「C2 形态 / 设备类型」表。不编译传播模块。

## 掌握确认

- [ ] 有官方 URL + 版本 + binwalk 关键行解读
- [ ] 能指出一个服务的路径与架构
- [ ] `methods/firmware-unpack.md` + `firmware-rce/<型号>.md` 或 `botnet/iot-embedded/` 谱系提纲

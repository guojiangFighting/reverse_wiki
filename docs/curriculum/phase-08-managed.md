# 阶段 8：托管代码与文档（.NET / Python / Android / JS / Office）

遇到这些形态**先换工具**，不要当原生 PE/ELF 硬啃。本阶段可与 6、7 穿插。

## 知识点

CLR/IL、PyInstaller 布局、APK/Manifest/JNI、JS 混淆与 Wasm、OLE/VBA 宏。

## 书 / 官方文档

| 形态 | 资源 |
|------|------|
| .NET | **《加密与解密》第24章** + dnSpy/ILSpy 文档 |
| Python | PyInstaller 官方文档 |
| Android | Android 官方文档（Manifest、权限）；《Android Security Internals》选读 |
| JS/Wasm | MDN；WebAssembly 官方说明 |
| Office | Microsoft VBA 文档；oletools README |

## 博客

- .NET 恶意软件分析：搜 OALabs / Mandiant “.NET malware” 分析文（学工具链）
- Android：NowSecure / 官方安全文档；jadx 项目 README
- oletools：https://github.com/decalage2/oletools

## 然后实操

- 自己写 C# / Python / 带宏的 docx / 小 APK / 混淆 JS，再逆向回来（最安全）
- F-Droid 开源 APK 对照源码
- crackmes.one 的 .NET 过滤
- JS：自己混淆 + beautify；Wasm 用 emscripten 最小例子

**笔记**：每种形态一页 `methods/`（dotnet、pyinstaller、apk-static、js-wasm、oletools）。

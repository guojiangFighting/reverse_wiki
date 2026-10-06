# 阶段 8：托管与文档

## 知识点

先认形态再换工具：.NET → dnSpy；Python 打包 → 提取 pyc；APK → jadx/apktool；宏 → oletools；JS/Wasm → beautify/wabt。

## 实操（每种做一个自己的小程序即可，不必全周铺开）

1. C# 校验字符串 → dnSpy 找到方法（对照书第24章概念）。
2. PyInstaller 打包自己的脚本再拆开。
3. 自己的 debug APK 或 F-Droid 开源包，Manifest + 主 Activity。
4. 带 MsgBox 宏的 docx，`olevba` 扫出 Auto*。
5. 自己混淆一段 JS 再还原。

## 掌握确认

- [ ] 拿到文件能在 1 分钟内判断该用哪条工具链（写决策树一页）
- [ ] 至少 **两种** 形态完成「自己写 → 再逆向回来」
- [ ] `docs/methods/managed-decision.md`

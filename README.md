# stringUtility
String utility

# features
Convert string to Integer
Convert string to wstring
Convert wstring to string

# How To Install
Run this commands in this repo
```
cd builddir
meson .. .
sudo ninja install
```

# Trouble shooting
## tinyasm is not found in my pkgconfig but tinyasm.pc exists in /usr/local/lib/pkgconfig
1. Run this command `cp /usr/local/lib/pkgconfig/tinyasm.pc /usr/lib/pkgconfig/tinyasm.pc`
2. Make symbolic link of tinyasm.h
```sh
ln /usr/local/include/tinyasm.h /usr/include/tinyasm.h
```

3. Edit prefix's declare(usually in 1st line) of `/usr/lib/pkgconfig/tinyasm.pc`
```diff
- prefix=/usr/local
+ prefix=/usr
```

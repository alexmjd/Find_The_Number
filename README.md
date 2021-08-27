#Find The Number

Little game about finding a random number in specific range

Installation :
- Make sure that you got the G++ compiler installed
- Make sure that you've got SFML installed

# Cross Compilation

## SFML
To cross compile an SFML project from MacOs to Windows,
you'll need to download the correct sfml library from their website,
according to your windows compiler:

- for example, `GCC 7.3.0 MinGW (SEH) - 64-bit` for `mingw-w64`)

Then, extract the folder and copy it inside the `sfml_windows` directory, at the root project.

```
cross_compile
|
|-- cmake-build-debug
|
|-- cmake-build-windows
|
|-- sfml_windows
|   |
|   |-- SFML-2.5.1
|       |
|       |-- bin/
|       |
|       |-- doc/
|       |
|       |-- examples/
|       |
|       |-- include/
|       |
|       |-- lib/
|       |
|       |-- license.md
|       |
|       |-- readme.md
|
|-- CMakeLists.txt
|
|-- main.cpp
|
|-- README.md
|
|-- windows_toolchain.cmake
```
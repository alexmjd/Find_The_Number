# Sample toolchain file for building for Windows from MacOs.
#
# Typical usage:
#    *) install cross compiler: `brew install mingw-w64`
#    *) mkdir windows_build && cd windows_build
#    *) cmake -DCMAKE_TOOLCHAIN_FILE=../windows_toolchain.cmake ..

# Target OS
set(CMAKE_SYSTEM_NAME WindowsStore)
set(CMAKE_SYSTEM_VERSION 10.0)

# Compiler 64bits
set(TOOLCHAIN_PREFIX x86_64-w64-mingw32)

# Compiler 32bits
#set(TOOLCHAIN_PREFIX i686-w64-mingw32)

# which compilers to use for C and C++
SET(CMAKE_C_COMPILER ${TOOLCHAIN_PREFIX}-gcc)
SET(CMAKE_CXX_COMPILER ${TOOLCHAIN_PREFIX}-g++)
SET(CMAKE_RC_COMPILER ${TOOLCHAIN_PREFIX}-windres)
set(CMAKE_RANLIB ${TOOLCHAIN_PREFIX}-ranlib)

# Setting flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

# Link the `libstdc++-6.dll` inside of the binary file.
# The final user won't need to get all involved libs because they'll be in the bin
set(CMAKE_EXE_LINKER_FLAGS "-static")

# SFML FOR CROSS COMPILATION
# Set sfml library to static (include libs into the .exe file)
set(SFML_STATIC_LIBRARIES TRUE)

# Include `include` directory and linking libraries to .exe file
set(SFML_GLOBAL_DIR "sfml_windows/SFML-2.5.1")
set(SFML_INCLUDE_DIR "${SFML_GLOBAL_DIR}/include")
include_directories(${SFML_INCLUDE_DIR})
set(SFML_LIBRARY_DIR "${SFML_GLOBAL_DIR}/lib")
link_directories(${SFML_LIBRARY_DIR})

# Specify where SFMLConfig.cmake is located
set(SFML_DIR "${SFML_GLOBAL_DIR}/lib/cmake/SFML")

# adjust the default behaviour of the FIND_XXX() commands:
# search headers and libraries in the target environment, search
# programs in the host environment
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)

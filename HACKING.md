
Build from repository
---------------------

This project uses the [CMake](https://cmake.org) build system.
Use the following commands to build (it is recommended to build in a separate directory as shown here):

``` shell
$ mkdir build && cd build
$ cmake ..
$ make
```
or select platform dependent [generator](https://cmake.org/cmake/help/latest/manual/cmake-generators.7.html) for your favorite IDE.


This has been tested on Visual Studio 2019 - your experiences with other IDE's may vary.


Dependencies
------------

* [SDL2](https://www.libsdl.org/download-2.0.php) - crossplatform media framework
* [FFmpeg](https://ffmpeg.zeranoe.com/builds/) - video support
* [OpenAL](https://www.openal.org/downloads/OpenAL11CoreSDK.zip) - audio support
* [zlib](http://gnuwin32.sourceforge.net/packages/zlib.htm) - compression

These are now auto-resolved during CMake build.


Instructions
------------
You will require the following installed on your computer: Git and Visual Studio 2019.

* Clone, fork or download the repo "https://github.com/gp-alex/world-of-might-and-magic.git"
* Open the folder in Visual Studio
* Select build configuration (x32 or x64) and wait for CMake cache to complete
* Select startup item as World of Might and Magic
* Run!

Still having problems? Try the discord chat [![](https://img.shields.io/badge/chat-on%20discord-green.svg)](https://discord.gg/jRCyPtq)


Coding style
------------
For the C++ code we are following the [Google C++ Style Guide](http://google.github.io/styleguide/cppguide.html).<br />
Source code is automatically checked against it, and Pull Request will fail if you don't follow it.<br />
For style check on Windows platform, you can use [Visual Studio Code cpplint plugin](https://marketplace.visualstudio.com/items?itemName=mine.cpplint).

In visual studio, style can be checked (Python requred). Go to Solution Explorer->Change Views->CMake targets
Right click and build check_style, errors will be listed in output

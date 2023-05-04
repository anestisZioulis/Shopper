<a name="readme-top"></a>

<pre align="center">
****************************************************
**           _____ _                              **
**          |   __| |_ ___ ___ ___ ___ ___        **
**          |__   |   | . | . | . | -_|  _|       **
**          |_____|_|_|___|  _|  _|___|_|         **
**                        |_| |_|                 **
**                                                **
**                by Anestis Zioulis              **
**                 www.azioulis.com               **
****************************************************
</pre>

<!-- TABLE OF CONTENTS -->
### <p align="center"><a href="#about">About</a> - <a href="#demo">Demo</a> - <a href="#installation">Installation</a> - <a href="#tools">Tools</a> - <a href="#sources">Sources</a></p>

<!-- ABOUT -->
# <pre align="center">About</pre>

**Shopper** is a simple introductory object-oriented C++ program. 

It emulates a simple "e-shop" in console. A list of available products, imported from a file,
are provided to the customer in order to "buy" them and add them to his cart. Lastly he can
check out and see the overall cost of the order.

> This program was created as an **assignment** for the lesson "Object-Oriented Programming" at the **IHU**
(_International Hellenic University - Serres Campus_) by Anestis Zioulis.

<br>
<hr>
<div align="left">
    <b><a href="#about">About</a> - <a href="#demo">Demo</a> - <a href="#installation">Installation</a> - <a href="#tools">Tools</a> - <a href="#sources">Sources</a></b>
</div>

<div align="right">
    (<a href="#readme-top"><b>back to top 🠉</b></a>)
</div>
<hr>
<br>

<!-- DEMO -->
# <pre align="center">Demo</pre>

You can access a runnable demo hosted on `replit.com` from the following link:

> https://replit.com/@anestisZioulis/Shopper?v=1
In case it's down, you can watch the .gif file below to get an idea.

<div align="center">

| ![](/files/images/demo.gif) |
|:---------------------------:|

</div>

<br>
<hr>
<div align="left">
    <b><a href="#about">About</a> - <a href="#demo">Demo</a> - <a href="#installation">Installation</a> - <a href="#tools">Tools</a> - <a href="#sources">Sources</a></b>
</div>

<div align="right">
    (<a href="#readme-top"><b>back to top 🠉</b></a>)
</div>
<hr>
<br>


<!-- INSTALLATION -->
# <pre align="center">Installation</pre>
To use this program you can download the latest <a href="https://github.com/anestisZioulis/Shopper/releases/">release</a> and use the executable inside.
Also, you can compile the source code manually or through an IDE with a bundled compiler:
<hr>

<ul>
  <li>[1] Download the latest <a href="https://github.com/anestisZioulis/Shopper/releases/">release</a> and run the executable.</li>
  <h4 align="center">or</h4>
  <li>[2] Download JetBrains CLion or another IDE that includes the compiler.</li>
  <h4 align="center">or</h4>
  <li>[3] Download a tool chain, like MinGW, through the web and install it.</li>
</ul>
<hr>

<br>

- [3] If you opted to compile the source code yourself.
- You downloaded the tool chain that has the compiler and installed it.
- Then open `cmd`, change directory to the folder the source file is and check if `g++`
  is available with the following command:
  ```shell
   g++ -v
  ```

<br>

- If you see something like this you are good to compile:
  ```c
  Using built-in specs.
  COLLECT_GCC=g++
  COLLECT_LTO_WRAPPER=c:/mingw/bin/../libexec/gcc/mingw32/9.2.0/lto-wrapper.exe
  Target: mingw32
  Configured with: ../src/gcc-9.2.0/configure --build=x86_64-pc-linux-gnu --host=mingw32 --target=mingw32 --disable-win32-registry --with-arch=i586 --with-tune=generic --enable-static --enable-shared --enable-threads --enable-languages=c,c++,objc,obj-c++,fortran,ada --with-dwarf2 --disable-sjlj-exceptions --enable-version-specific-runtime-libs --enable-libgomp --disable-libvtv --with-libiconv-prefix=/mingw --with-libintl-prefix=/mingw --enable-libstdcxx-debug --disable-build-format-warnings --prefix=/mingw --with-gmp=/mingw --with-mpfr=/mingw --with-mpc=/mingw --with-isl=/mingw --enable-nls --with-pkgversion='MinGW.org GCC Build-20200227-1'
  Thread model: win32
  gcc version 9.2.0 (MinGW.org GCC Build-20200227-1)
  ```

<br>

- Type:
  ```c
  g++ -o Shopper.exe main.cpp class/Customer.cpp class/Product.cpp
  ```
  and your executable should have been compiled.

<br>

- You can run it in `cmd` by just typing it:
  ```c
  Shopper.exe
  ```

<br>
<hr>
<div align="left">
    <b><a href="#about">About</a> - <a href="#demo">Demo</a> - <a href="#installation">Installation</a> - <a href="#tools">Tools</a> - <a href="#sources">Sources</a></b>
</div>

<div align="right">
    (<a href="#readme-top"><b>back to top 🠉</b></a>)
</div>
<hr>
<br>


<!-- TOOLS -->

# <pre align="center">Tools</pre>

<p align="center">The tools used to create this assignment.</p>
<br>

- MingGW_GCC 9.2.0 compiler from [MinGW-w64](https://www.mingw-w64.org/)
- Jetbrains CLion (Student/full version)
- C++14 Standard

<br>
<hr>
<div align="left">
    <b><a href="#about">About</a> - <a href="#demo">Demo</a> - <a href="#installation">Installation</a> - <a href="#tools">Tools</a> - <a href="#sources">Sources</a></b>
</div>

<div align="right">
    (<a href="#readme-top"><b>back to top 🠉</b></a>)
</div>
<hr>
<br>


<!-- SOURCES -->

# <pre align="center">Sources</pre>

<p align="center">Sources I used material to create the project and readme.</p>

<br>

* [Text to ASCII generator](https://patorjk.com/software/taag/)
* [Best-README-Template](https://github.com/othneildrew/Best-README-Template/)

<br>
<hr>
<div align="left">
    <b><a href="#about">About</a> - <a href="#demo">Demo</a> - <a href="#installation">Installation</a> - <a href="#tools">Tools</a> - <a href="#sources">Sources</a></b>
</div>

<div align="right">
    (<a href="#readme-top"><b>back to top 🠉</b></a>)
</div>
<hr>
<br>
# Source code for EPITA Ani3D labs

## Download

* Beware: Do not download the code via the github "Download ZIP" (cgp submodule are not included)

### Via Clone

```
git clone --recurse-submodules git@github.com:drohmer/epita_ani3d_code.git
```

or 

```
git clone git@github.com:drohmer/epita_ani3d_code.git
cd inf443_practice_code/
git submodule init
git submodule update
```

## Compilation

Scenes are in a directory _scenes_epita_ani3d/xx_Name/_


Each scene is provided with its own CMakeLists.txt and Makefile

Compilation via CMake
```
cd scenes_inf443/01_introduction/
cmake -B build/
cd build/
make -j$(nproc)
./00_introduction
```

Compilation via Makefile
```
cd scenes_inf443/01_introduction/
make -j$(nproc)
./00_introduction
```

More details are provided in the dedicated [Installation setup and Compilation page](https://imagecomputing.net/cgp/compilation) if needed (Windows, Linux, Mac).

## Requirement

The code requires the GLFW library in Linux.

ex. on Ubuntu

```
sudo apt-get install libglfw3-dev
```



## Links

* [Lab class exercises](https://damienrohmer.com/data/teaching/2022_2023/x-inf443/practice/index.html)
* [Documentation on CGP library](https://imagecomputing.net/cgp/index.html)


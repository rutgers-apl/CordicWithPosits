# CordicWithPosits

### Introduction

This repository contains the implementation of cordic algorithm with posits. The cordic algorithm is also modified based on our CF-2020 paper, "Approximating Trigonometric Functions for Posits Using the CORDIC Method."

### Installation

* Prerequisite: our cordic algorithm uses the SoftPosit library to compute posit expressions.

1. Install SoftPosit
```
$ git clone https://gitlab.com/cerlane/SoftPosit.git
$ cd SoftPosit/build/Linux-x86_64-GCC/
$ make
$ cd ../../..
```

2. Set the following environment:
```
export SOFTPOSITPATH = <path to SoftPosit directory>
```

3. Download and build CordicWithPosits
```
git clone https://github.com/rutgers-apl/CordicWithPosits.git
cd CordicWithPosit
make
```

4. Test CordicWithPosits 
```
export SOFTPOSITPATH = <path to SoftPosit directory>
cd example
make
./example
```
You should see the program output sin(1), cos(1), and tan(2/1).

### Using CordicWithPosits
Our cordic library is built in lib/lib_cordic.a and header file is in include/cordic.h. To compile the program using our cordic library, you also have to include the SoftPosit library. Please refer to the source file and Makefile in the example directory.

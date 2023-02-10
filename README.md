# OER
A program to automatically run the problem "3n+1" in multiple modes.

# What is the "3n+1" problem?
The "3n+1" problem, or also called many other names, as example "Ulam Conjecture", is a math problem simply math problem noone can solve at the moment.

The rules are:
* Is the number odd, then multiply it by 3 and add 1.
* Is the number even, then divide it by 2.

It always come down the the integer of 1.

# What does OER mean
It basically just means "Odd Even Rule".


**That's it**

# File gets flagged by Windows Defender
Don't panic, you can trust me. If you don't, look at the source code in OER/Source/main.cpp

# Known Bugs
Segmentations fault on Termux. Linux on Desktop not tested yet. Windows apparently works.

# How to build

Download Git directory before compiling

- **Windows:**
C++ Compiler needed
`````g++ main.cpp`````

- **Linux:**
Needed, if not already installed:
`````apt install clang`````
,then:
`````clang++ main.cpp`````, `````./a.out`````

- **macOS:**
Don't know yet

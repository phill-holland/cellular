# Implementation of Wolfram's Cellular Automata Algorithms in C++

A cellular automata system can be described as a simple set of instructions (or programs) that may lead to more complex behaviour.

This code demonstrates the implementation of the 256 rules created by Stephen Wolfram "A New Kind of Science".

# Method

1. we start with a 2D grid, each grid cell can be either on or off. We start with every cell in the grid set to off.

2. We seed the grid, by setting a single cell to on. (x = width / 2, y = 0)

3. We move one row down (y = y + 1), and iterate through the entire row, determining whether to switch on/off each cell based on the cell, from the previous row above.

4. Repeat until y > height


# Sample Output (rule 30)

```
                                                 X                                                                         1
                                                XXX                                                                        2
                                               XX  X                                                                       3
                                              XX XXXX                                                                      4
                                             XX  X   X                                                                     5
                                            XX XXXX XXX                                                                    6
                                           XX  X    X  X                                                                   7
                                          XX XXXX  XXXXXX                                                                  8
                                         XX  X   XXX     X                                                                 9
                                        XX XXXX XX  X   XXX                                                                10
                                       XX  X    X XXXX XX  X                                                               11
                                      XX XXXX  XX X    X XXXX                                                              12
                                     XX  X   XXX  XX  XX X   X                                                             13
                                    XX XXXX XX  XXX XXX  XX XXX                                                            14
                                   XX  X    X XXX   X  XXX  X  X                                                           15
                                  XX XXXX  XX X  X XXXXX  XXXXXXX                                                          16
                                 XX  X   XXX  XXXX X    XXX      X                                                         17
                                XX XXXX XX  XXX    XX  XX  X    XXX                                                        18
                               XX  X    X XXX  X  XX XXX XXXX  XX  X                                                       19
                              XX XXXX  XX X  XXXXXX  X   X   XXX XXXX                                                      20
                             XX  X   XXX  XXXX     XXXX XXX XX   X   X                                                     21
                            XX XXXX XX  XXX   X   XX    X   X X XXX XXX                                                    22
                           XX  X    X XXX  X XXX XX X  XXX XX X X   X  X                                                   23
                          XX XXXX  XX X  XXX X   X  XXXX   X  X XX XXXXXX                                                  24
                         XX  X   XXX  XXXX   XX XXXXX   X XXXXX X  X     X                                                 25
                        XX XXXX XX  XXX   X XX  X    X XX X     XXXXX   XXX                                                26
                       XX  X    X XXX  X XX X XXXX  XX X  XX   XX    X XX  X                                               27
                      XX XXXX  XX X  XXX X  X X   XXX  XXXX X XX X  XX X XXXX                                              28
                     XX  X   XXX  XXXX   XXXX XX XX  XXX    X X  XXXX  X X   X                                             29
                    XX XXXX XX  XXX   X XX    X  X XXX  X  XX XXXX   XXX XX XXX                                            30
                   XX  X    X XXX  X XX X X  XXXXX X  XXXXXX  X   X XX   X  X  X                                           31
                  XX XXXX  XX X  XXX X  X XXXX     XXXX     XXXX XX X X XXXXXXXXX                                          32
                 XX  X   XXX  XXXX   XXXX X   X   XX   X   XX    X  X X X        X                                         33
                XX XXXX XX  XXX   X XX    XX XXX XX X XXX XX X  XXXXX X XX      XXX                                        34
               XX  X    X XXX  X XX X X  XX  X   X  X X   X  XXXX     X X X    XX  X                                       35
              XX XXXX  XX X  XXX X  X XXXX XXXX XXXXX XX XXXXX   X   XX X XX  XX XXXX                                      36
             XX  X   XXX  XXXX   XXXX X    X    X     X  X    X XXX XX  X X XXX  X   X                                     37
            XX XXXX XX  XXX   X XX    XX  XXX  XXX   XXXXXX  XX X   X XXX X X  XXXX XXX                                    38
           XX  X    X XXX  X XX X X  XX XXX  XXX  X XX     XXX  XX XX X   X XXXX    X  X                                   39
          XX XXXX  XX X  XXX X  X XXXX  X  XXX  XXX X X   XX  XXX  X  XX XX X   X  XXXXXX                                  40
         XX  X   XXX  XXXX   XXXX X   XXXXXX  XXX   X XX XX XXX  XXXXXX  X  XX XXXXX     X                                 41
        XX XXXX XX  XXX   X XX    XX XX     XXX  X XX X  X  X  XXX     XXXXXX  X    X   XXX                                42
       XX  X    X XXX  X XX X X  XX  X X   XX  XXX X  XXXXXXXXXX  X   XX     XXXX  XXX XX  X                               43
      XX XXXX  XX X  XXX X  X XXXX XXX XX XX XXX   XXXX         XXXX XX X   XX   XXX   X XXXX                              44
     XX  X   XXX  XXXX   XXXX X    X   X  X  X  X XX   X       XX    X  XX XX X XX  X XX X   X                             45
    XX XXXX XX  XXX   X XX    XX  XXX XXXXXXXXXXX X X XXX     XX X  XXXXX  X  X X XXX X  XX XXX                            46
   XX  X    X XXX  X XX X X  XX XXX   X           X X X  X   XX  XXXX    XXXXXX X X   XXXX  X  X                           47
  XX XXXX  XX X  XXX X  X XXXX  X  X XXX         XX X XXXXX XX XXX   X  XX      X XX XX   XXXXXXX                          48
 XX  X   XXX  XXXX   XXXX X   XXXXXX X  X       XX  X X     X  X  X XXXXX X    XX X  X X XX      X                         49
XX XXXX XX  XXX   X XX    XX XX      XXXXX     XX XXX XX   XXXXXXXX X     XX  XX  XXXX X X X    XXX                        50
X  X    X XXX  X XX X X  XX  X X    XX    X   XX  X   X X XX        XX   XX XXX XXX    X X XX  XX  X                       51
                                                                                                                           52
```

# Requirements

This code was written on an Linux based machine, with GCC and CMake pre-installed.

A VSCode development container is also included to help with the portability of this project.

# Building and Running

From the comand line, to build;

```
cmake .
make

```
To Run;

```
cd build
./cellular
```

There is also a set of VSCode launch.json and task.json files for ease of running inside the IDE.

# References

1. [A New Kind Of Science](https://en.wikipedia.org/wiki/A_New_Kind_of_Science)

2. [256 Rules](https://plato.stanford.edu/entries/cellular-automata/supplement.html) 


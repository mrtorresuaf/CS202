[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/aMREd_Ye)
# Part A (13%)

### What you should do

In this subdirectory:

* Copy your `Link.h`, `Link.cpp`, `LinkedList.h`, and `LinkedList.cpp` files from `part_a`

* Add the following function to the `Link` class
  - `void processEachLink(std::function<void(Link*)> aFunction)`

The body of the function should call `aFunction` on each `Link` object, starting at the beginning of the list.


* In `hw.cpp`
  - Write a stand-alone function `void fancyPrint(Link * link)` that prints the `Link`
  - In `main`, create a list and print the list using `list.processEachLink(fancyPrint);`




### What the results should look like

<pre>$ make
g++ -std=c++17 -c hw.cpp
g++ -std=c++17 -c Link.cpp
g++ -std=c++17 -c LinkedList.cpp
g++ -std=c++17 -o hw hw.o Link.o LinkedList.o
./hw

LinkedList:

 @ 5eb0
┏━━━━━━━━━━━━━━━━┓
┃                ┃
┃ value: 37.00   ┃
┃  next: 5ed0    ┃
┃                ┃
┗━━━━━━━━━━━━━━━━┛

 @ 5ed0
┏━━━━━━━━━━━━━━━━┓
┃                ┃
┃ value: 100.50  ┃
┃  next: 5ef0    ┃
┃                ┃
┗━━━━━━━━━━━━━━━━┛

 @ 5ef0
┏━━━━━━━━━━━━━━━━┓
┃                ┃
┃ value: -17.50  ┃
┃  next: nullptr ┃
┃                ┃
┗━━━━━━━━━━━━━━━━┛

</pre>



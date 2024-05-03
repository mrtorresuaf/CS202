[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/72lpjkPa)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-7f7980b617ed060a017424585567c406b6ee15c891e84e1186181d67ecf80aa0.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=13884407)
# HW

### What you should do

* Declare an abstract base class called `Box` in `Box.h` and implement it in `Box.cpp`
  - The constructor should take:
    * `int w` representing the width of the box
    * `int h` representing the height of the box
  - Implement the following methods:
    * `int getWidth() const` that returns the width of the box
    * `int getHeight() const` that returns the height of the box
    * `virtual std::string asString() const = 0;` 
  - Store the following as protected member variables:
    * `int width`
    * `int height`
* Declare a class called `HollowBox` in `HollowBox.h` and implement it in `HollowBox.cpp`
  - inherits from `Box`
  - has a constructor that takes a width, height, and character, and calls the Box constructor to initialize the width and height
  - has a protected member variable called `char border`
  - implements `std::string asString() const override`
* Implement `int main()` in hw.c++ that reads a width, height, and character from `argv`, then prints the box to cout. Print an appropriate usage message to `cerr` if appropriate parameters are not provided. Use `std::stoi` to convert `argv[1]` and `argv[2]` into integers.
* Implement a makefile with appropriate dependencies. Your makefile must be able to handle at least all of the following
  - `make all`
  - `make hw`     
  - `make hw.o`   
  - `make Box.o`
  - `make HollowBox.o`
  - `make clean`


### What the results should look like

A successful run of the program should look like this:

<pre>$ ./hw
Usage: ./hw width height character
</pre>


<pre>$ ./hw 10 5 x
xxxxxxxxxx
x        x
x        x
x        x
xxxxxxxxxx
</pre>



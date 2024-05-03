[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/HKgz5lRL)
# Part D


### What you should do

In this subdirectory:

* Link class
  - Create a file called `Link.h` that contains a `Link` class as described below:
    * A public constructor that takes a `double`
	* A public destructor
	* A public member variable `double value`
	* A public member variable `Link * next`
  - Create a file called `Link.cpp` that implements the methods of the `Link` class.
    * The constructor should
	  - set the member variables, setting `next` to `nullptr` and value to `0.0`
	  - print a message to `cerr` stating that the constructor is being called
	* The destructor should 
	  - print a message to `cerr` stating that the destructor is being called
	  - `delete next`
	  - print a message to `cerr` stating that the destructor has been called

* A main function in `hw.cpp` that
  - Constructs a Link object

* A makefile that contains the following targets:
  - run (runs ./hw)
  - hw (links `hw.o` and `Link.o` into `hw`)
  - hw.o (compiles `hw.cpp` into `hw.o`)
  - Link.o (compiles `Link.cpp` into `Link.o`)
  - clean (deletes `hw` and `*.o`)


### What the results should look like

Your code should successfully compile, link, and run with no errors and no warnings using
<pre>$ make
g++ -std=c++17 -c hw.cpp
g++ -std=c++17 -c Link.cpp
g++ -std=c++17 -o hw hw.o Link.o
./hw
Link object constructed using Link() default constructor
Link(0) object is being destructed using ~Link() destructor
Link(0) object has been destructed using ~Link() destructor
</pre>


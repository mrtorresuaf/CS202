[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/6VEF_awi)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-7f7980b617ed060a017424585567c406b6ee15c891e84e1186181d67ecf80aa0.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=13778138)
# HW


### What you should do

* In `FilledBox.h`, declare the class `FilledBox` and its constructor and methods and member variables
* In `FilledBox.cpp`, implement the bodies of the constructor and the methods
  - The constructor should take:
    * int w representing the width of the box
    * int h representing the height of the box
    * char c representing the character that will be used to fill the box
  - Implement the following methods:
    * int getWidth() const that returns the width of the box
    * int getHeight() const that returns the height of the box
    * std::string asString() const that returns a string representation of the filled box
  - Store the following as private member variables:
    * int width
    * int height
    * char fill

* Implement `int main(int argc, char** argv)` in hw.cpp that prompts the user for a width, height, and fill character, then prints the box to cout



### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_d 10 5 "+"
++++++++++
++++++++++
++++++++++
++++++++++
++++++++++
</pre>


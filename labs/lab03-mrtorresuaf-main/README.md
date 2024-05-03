[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/Wo_bnojV)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-7f7980b617ed060a017424585567c406b6ee15c891e84e1186181d67ecf80aa0.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=13884382)
### What you should do

* In `Line.h`, declare the class `Line` and its constructor and methods and member variables
* In `Line.cpp`, implement the bodies of the constructor and the methods
  - The constructor should take:
    * `int w` representing the width of the box
  - Implement the following methods:
    * int getWidth() const that returns the width of the box
    * std::string asString() const that returns a string representation of the filled box
  - Store the following as private member variables:
    * int width

* Implement `int main(int argc, char** argv)` in hw.cpp that prompts the user for a width then prints the line to cout



### What the results should look like

A successful run of the program should look like this:
<pre>$ ./hw 10
xxxxxxxxxx
</pre>


## Challenge

Use color:
* https://github.com/dowobeha/aurora/blob/main/aurora.sh
* https://en.wikipedia.org/wiki/ANSI_escape_code
* https://en.wikipedia.org/wiki/ANSI_escape_code#SGR_(Select_Graphic_Rendition)_parameters



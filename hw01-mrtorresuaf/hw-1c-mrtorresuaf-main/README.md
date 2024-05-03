[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/5UCHfn41)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-7f7980b617ed060a017424585567c406b6ee15c891e84e1186181d67ecf80aa0.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=13736152)
# HW

### What you should do

Create a file called hw.cpp that contains a main function `int main(int argc, char ** argv) { ... }`. Within `main`:

* Create a `string` variable called `program_name` that is initialized to the value of the program. Hint: get this from `argv[0]`
* If the user did not provide a filename as an argument, print a usage message to `std::cerr` and return 1
* Otherwise, create a `string` variable called `input_filename` that is initialized to the value of the filename provided by the user. Hint: get this from `argv[1]`
* Treat the user-provided argument provided by the user as an input file name (consisting of floating point numbers separated by whitespace)
* Using `ifstream` and `cout`, read the contents of the input file one token at a time using `>>`, writing each number to its own line using `cout`. The `cout` stream must be configured such that each floating point number will be printed using only 2 digits after the decimal point (see `std::fixed` and `std::setprecision`)


### What the results should look like

A successful run of the program should look like this:
<pre>$ ./hw ; echo "Return value is $?"
Usage: ./hw input.txt
Return value is 1
</pre>


<pre>$ ./hw input.txt
3.14
100.00
-1.01
1.00
1.11
10.00
</pre>




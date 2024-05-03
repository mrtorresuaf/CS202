[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/eEGPRk_C)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-7f7980b617ed060a017424585567c406b6ee15c891e84e1186181d67ecf80aa0.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=13738187)
# HW

### What you should do

Create a file called hw.cpp that contains a main function `int main(int argc, char** argv) { ... }`. Within `main`:

* Create a `string` variable called `program_name` that is initialized to the value of the program. Hint: get this from `argv[0]`
* If the number of arguments provided by the user is not equal to 2, print a usage message to `std::cerr` and return 1
* Otherwise, create a `vector<string>` variable called `arguments` that is initialized to the values of the command line arguments provided by the user
* Treat the first argument provided by the user as an input file name (consisting of floating point numbers separated by whitespace), and the second argument as an output file name (which will consist of floating point numbers rounded to exactly 2 decimal points)
* Using your `arguments` variable, `ifstream`, and `ofstream`, read the contents of the input file one token at a time using `>>`, writing each number to its own line in the output file using `<<`. The `ofstream` must be configured such that each floating point number will be printed using only 2 digits after the decimal point (see `std::fixed` and `std::setprecision`)
* If there is a failure in opening the input file stream, print an appropriate error message to `std::cerr` and return `2`
* If there is a failure in opening the output file stream, print an appropriate error message to `std::cerr` and return `3`
* If the program fails to read the entire input file, print an appropriate error message to `std::cerr` and return `4`


### What the results should look like

A successful run of the program should look like this:
<pre>$ ./hw ; echo "Return value is $?"
Usage: ./hw input.txt output.txt
Return value is 1
</pre>

<pre>$ ./hw /input/file/does/not/exist output.txt ; echo "Return value is $?"
Error opening file /input/file/does/not/exist for reading
Return value is 2
</pre>

<pre>$ ./hw input.txt /output/file/does/not/exist ; echo "Return value is $?"
Error opening file /output/file/does/not/exist for writing
Return value is 3
</pre>

<pre>$ $ ./hw bad.txt output.txt ; echo "Return value is $?"
Failed to read entire input file bad.txt
Return value is 4
</pre>

<pre>$ rm -f output.txt; ./hw input.txt output.txt && cat output.txt
3.14
100.00
-1.01
1.00
1.11
10.00
</pre>


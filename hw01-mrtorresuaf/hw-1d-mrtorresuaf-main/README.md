[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/xr1MR5N-)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-7f7980b617ed060a017424585567c406b6ee15c891e84e1186181d67ecf80aa0.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=13736157)
# HW

### What you should do


Within the `main` function in `hw.cpp`:

* Create a `string` variable called `program_name` that is initialized to the value of the program. Hint: get this from `argv[0]`
* If the user did not provide a filename as an argument, print a usage message to `std::cerr` and return 1
* Otherwise, create a `string` variable called `input_filename` that is initialized to the value of the filename provided by the user. Hint: get this from `argv[1]`
* Treat the user-provided argument provided by the user as an input file name (consisting of floating point numbers separated by whitespace)
* Using `ifstream` and `cout`, read the contents of the input file one token at a time using `>>`, writing each number to its own line using `cout`


### What the results should look like

A successful run of the program should look like this:
<pre>$ ./hw ; echo "Return value is $?"
Usage: ./hw input.txt
Return value is 1
</pre>

<pre>$ ./hw input.txt
3.1415
99.999
-1.00999
1.00007
1.11111
9.99999
</pre>


Your prompts should exactly match those shown above, and the format of your response to the user should exactly match that shown above.

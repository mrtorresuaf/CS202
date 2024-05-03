[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/7T8cpUY8)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-7f7980b617ed060a017424585567c406b6ee15c891e84e1186181d67ecf80aa0.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=13513424)
# Lab

Practice basic C++ concepts and syntax from CS 201.

For each of the following concepts, spend a few minutes where you attempt to complete the task completely from memory.

If you get stuck, sample code with the answer is in the 
`examples` directory.

**Write comments in each file stating how well you remembered and how much you had to use the example code**

As a reminder for compiling:
```
g++ -std=c++17 -Wall -Wextra -o name_of_result name_of_code.cpp
```

And to run your code:
```
./name_of_result
```


## Standard output

Write a program called `standard_output.cpp`

* Print messages to standard output
* Some of these should include the contents of variables



## Standard input

Write a program called `standard_input.cpp`

* Print a prompt to the user
* Read a value from standard input into a variable
* Confirm the value to the user


## For loop

Write a program called `for_loop.cpp`

* Write a basic for loop
* Within the for loop, print the value of the variable



## For-each loop

Write a program called `for_each.cpp`

* Create a vector of integers
* Use a for-each loop to iterate over each value in the vector
* Within the for loop, print the value of the variable




## while loop with standard input

Write a program called `while_input.cpp`

* Create an empty vector of integers
* Create a while loop whose condition reads an integer from user input
* Within the for loop, append the integer to the vector
* After the loop, use a for-each loop to print the value of all of the numbers



## command line arguments

Write a program called `command_line_args.cpp`

* Use `int argc` and `char** argv` as arguments to `main`
* Print the value of `argc`
* Print the value of `argv[0]`
* Run the program and observe the result.
* Run the program with additional parameters. The value of `argc` should change.



## makefile

Write a makefile for the above programs.


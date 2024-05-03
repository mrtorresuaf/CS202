[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/VuE14_70)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-7f7980b617ed060a017424585567c406b6ee15c891e84e1186181d67ecf80aa0.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=13664346)
# Lab

Work through use of `argc` and `argv`

As a reminder for compiling:
```
g++ -std=c++17 -Wall -Wextra -o name_of_result name_of_code.cpp
```

And to run your code:
```
./name_of_result
```



## command line arguments

Write a program called `command_line_args.cpp`

* Use `int argc` and `char** argv` as arguments to `main`
* Print the value of `argc`
* Print the value of `argv[0]`
* Run the program and observe the result.
* Run the program with additional parameters. The value of `argc` should change.



## makefile

Write a makefile for the above programs.



## Converting arguments to a vector of strings


Write a program that does the following:

* Convert the arguments to a vector of strings:

```
vector<string> args(argv, argv+argc);
```

* Write code that prints the argument(s) to the user

The printing can be simple, but I encourage you to try something fancy, like centering the message and enclosing it in a box.



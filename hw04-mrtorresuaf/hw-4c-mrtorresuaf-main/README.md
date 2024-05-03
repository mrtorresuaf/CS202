[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/OKeslI5j)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-7f7980b617ed060a017424585567c406b6ee15c891e84e1186181d67ecf80aa0.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=14798752)
# Part C


### What you should do


* The [Control sequence](https://en.wikipedia.org/wiki/ANSI_escape_code) `"\x1B[2J"` can be sent to `cout` to clear the screen
* The [Control sequence](https://en.wikipedia.org/wiki/ANSI_escape_code) `"\x1B[H"` can be sent to `cout` to reset the cursor position to the beginning of the screen

Extend Part D:

* Add a `makefile` if you don't already have one
* In your `main` function, use a loop to:
    * Send the two control sequences to `cout` to clear the screen and reset the cursor position
    * Print the board
    * Print instructions for movement
    * Read user input
    * Exit the loop if the user input was `'q'`
    * Otherwise continue the loop

You do **not** have to change the game board based on user data

### What the results should look like

Your code should successfully compile, link, and run with no errors and no warnings .
<pre>$ ./hw game/data.txt
XXXXZXXXXX
X        X
X XX XXX X
X XX     X
X XX XXXXX
X    XXXXX
XXXX XXXXX
XXXX XXXXX
XXXXAXXXXX
XXXXXXXXXX

Quit (q) or Move (ijkl): q
</pre>


all: command_line_args for_each for_loop standard_input standard_output while_input 

%: %.cpp
	g++ -std=c++17 -Wall -Wextra -o $@ $<

clean:
	rm -f command_line_args for_each for_loop standard_input standard_output while_input

.PHONY: all clean

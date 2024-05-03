all: out in floop feach winput command
	./output
	./input
	./floop
	./feach
	./winput
	./command

out: standard_output.cpp
	g++ -std=c++17 -Wall -Wextra -o output standard_output.cpp

in: standard_input.cpp
	g++ -std=c++17 -Wall -Wextra -o input standard_input.cpp

floop: for_loop.cpp
	g++ -std=c++17 -Wall -Wextra -o floop for_loop.cpp

feach: for_each.cpp
	g++ -std=c++17 -Wall -Wextra -o feach for_each.cpp

winput: while_input.cpp
	g++ -std=c++17 -Wall -Wextra -o winput while_input.cpp

command: command_line_args.cpp
	g++ -std=c++17 -Wall -Wextra -o command command_line_args.cpp

clean:
	rm -f output input floop feach winput command

.PHONY: all clean

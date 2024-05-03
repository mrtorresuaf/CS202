all: command_line_args stargs
	./stargs

%: %.cpp
	g++ -std=c++17 -Wall -Wextra -o $@ $<

clean:
	rm -f command_line_args stargs

.PHONY: all clean

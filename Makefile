# Makefile
# Build rules for Code Jam Qualification Round 2017 A

# Compiler
CXX = g++

# Set this at the command line using: make debug_or_optimize=<flag> <target> ...
debug_or_optimize = -O1

# Compiler flags
CXXFLAGS = --std=c++11 -Wall -Werror -pedantic $(debug_or_optimize)

main.exe: main.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -vf *.exe *.out.txt *.out.ppm

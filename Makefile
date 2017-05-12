CXX=g++
CXXFLAGS=-Wall -ansi
CC=g++
CCFLAGS=-Wall -ansi

all: esrtool

esrtool: Patcher.cpp esrtool.c

.PHONY: static
static:
	$(CXX) $(CXXFLAGS) -static esrtool.c Patcher.cpp -o esrtool-static

clean:
	rm -f esrtool esrtool-static

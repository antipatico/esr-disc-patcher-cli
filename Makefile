CXX=g++
CXXFLAGS=-Wall -ansi

all: esrpatch esrunpatch

esrpatch: esrpatch.cpp Patcher.cpp

esrunpatch: esrunpatch.cpp Patcher.cpp

clean:
	rm -f esrpatch esrunpatch

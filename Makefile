CXX=g++
CXXFLAGS=-Wall -ansi

all: esrpatch esrunpatch

esrpatch: esrpatch.cpp Patcher.cpp

esrunpatch: esrunpatch.cpp Patcher.cpp

.PHONY: static
static:
	$(CXX) $(CXXFLAGS) -static esrpatch.cpp Patcher.cpp -o esrpatch-static
	$(CXX) $(CXXFLAGS) -static esrunpatch.cpp Patcher.cpp -o esrunpatch-static

clean:
	rm -f esrpatch esrunpatch esrpatch-static esrunpatch-static

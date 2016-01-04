CXX=g++
CXXFLAGS=-Wall -ansi

esrpatch: esrpatch.cpp Patcher.cpp

esrunpatch: esrunpatch.cpp Patcher.cpp

clean:
	rm -f esrpatch esrunpatch

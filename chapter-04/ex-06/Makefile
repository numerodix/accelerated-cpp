CXX := c++
CXXFLAGS := -Wall -Werror -g

all: main
	./main

median.o: median.h median.cpp

grade.o: grade.h grade.cpp median.o

student_info.o: student_info.h student_info.cpp grade.o

main: grade.o student_info.o median.o

clean:
	-rm *.o
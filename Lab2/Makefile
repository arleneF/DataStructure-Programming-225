all: lab2

lab2: lab2.o Basic_int_stack.o
	g++ lab2.o Basic_int_stack.o -o lab2

lab2.o: lab2.cpp
	g++ -c lab2.cpp -o lab2.o

Basic_int_stack.o: Basic_int_stack.cpp
	g++ -c Basic_int_stack.cpp -o Basic_int_stack.o


clean:
	rm -rf *o lab2

all: test

test: test.o
	g++ -Wall -o test test.o

test.o: AListTest.cpp AList.h 
	g++ -Wall -o test.o -c AListTest.cpp 

clean:
	rm -f test *.o

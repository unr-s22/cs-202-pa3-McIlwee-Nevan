all: main.o money.o
	g++ -std=c++11 -o PA3 main.o money.o

main.o: main.cpp money.h
	g++ -std=c++11 -c main.cpp

money.o: money.cpp money.h
	g++ -std=c++11 -c money.cpp

clean:
	rm -f *.o PA3
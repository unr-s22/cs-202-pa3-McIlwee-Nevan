all: main.o money.o account.o
	g++ -std=c++11 -o PA3 main.o money.o account.o

main.o: main.cpp money.h account.h
	g++ -std=c++11 -c main.cpp

money.o: money.cpp money.h
	g++ -std=c++11 -c money.cpp

account.o: account.cpp money.h account.h
	g++ -std=c++11 -c account.cpp

clean:
	rm -f *.o PA3
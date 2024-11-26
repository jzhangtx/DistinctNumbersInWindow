DistinctNumbersInWindow: DistinctNumbersInWindow.o
	g++ -g -o DistinctNumbersInWindow.exe DistinctNumbersInWindow.o -pthread    

DistinctNumbersInWindow.o: DistinctNumbersInWindow/DistinctNumbersInWindow.cpp
	g++ -g  -c -pthread DistinctNumbersInWindow/DistinctNumbersInWindow.cpp

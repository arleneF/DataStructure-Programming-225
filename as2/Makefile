all: QT2

QT2: QT2.o queue.o
	g++ QT2.o queue.o -o QT2

QT2.o: QT1.cpp
	g++ -c QT2.cpp -o QT2.o

queue.o: queue.cpp
	g++ -c queue.cpp -o queue.o


clean:
	rm -rf *o QT2

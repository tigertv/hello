CC = g++
# OPTS = -lstdc++
OPTS = -std=c++11 -Wall
all: main.o messager.o messagerDecorator.o
	$(CC) $(OPTS) main.o messager.o messagerDecorator.o -o main
main.o: main.cpp
	$(CC) $(OPTS) -c main.cpp -o main.o
messager.o: messager.cpp
	$(CC) $(OPTS) -c messager.cpp -o messager.o
messagerDecorator.o: messagerDecorator.cpp
	$(CC) $(OPTS) -c messagerDecorator.cpp -o messagerDecorator.o
clean:
	rm -f main *.o

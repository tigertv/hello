CC = g++
# OPTS = -lstdc++
OPTS = -std=c++11 -Wall
all: main.o box.o
	$(CC) $(OPTS) main.o box.o -o main
main.o: main.cpp
	$(CC) $(OPTS) -c main.cpp -o main.o
box.o: box.cpp
	$(CC) $(OPTS) -c box.cpp -o box.o
clean:
	rm -f main *.o

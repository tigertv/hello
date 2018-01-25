CC = g++
# OPTS = -lstdc++
OPTS = -std=c++17 -Wall
SRC = $(wildcard *.cpp) 
OBJ=$(SRC:.cpp=.o)
.PHONY: clean

all: $(OBJ) 
	$(CC) $(OPTS) $(OBJ) -o main
main.o: main.cpp
	$(CC) $(OPTS) -c main.cpp -o main.o
%.o: %.cpp
	$(CC) $(OPTS) -c $< -o $@ 
clean:
	rm -f main *.o


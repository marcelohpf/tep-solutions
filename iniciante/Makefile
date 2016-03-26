TARGET=1049
SRC=$(TARGET).cpp
OBJ=$(SRC:.cpp=.o)

CC=g++
FLAGS= -std=c++11 -O2 -lm -pedantic -Wall -Wextra

build: all
	@echo
	cat entrada.in | ./$(TARGET) > result.out
	diff result.out saida.out

all: $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

$(OBJ):$(SRC)
	$(CC) -c $(SRC) $(FLAGS)

clean:
	rm -rf $(TARGET) $(TARGET).o

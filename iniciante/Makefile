TARGET=1044
SRC=$(TARGET).cpp
OBJ=$(SRC:.cpp=.o)

CC=g++
FLAGS= -std=c++11 -O2 -lm -pedantic -Wall -Wextra

build: all
	@echo
	./$(TARGET)

all: $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

$(OBJ):$(SRC)
	$(CC) -c $(SRC) $(FLAGS)

clean:
	rm -rf $(TARGET) $(TARGET).o

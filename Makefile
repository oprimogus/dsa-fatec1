CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
SRC = $(wildcard src/*.c)
BIN = out/main

default: run

.PHONY: build
build:
	$(CC) $(CFLAGS) $(SRC) -o $(BIN)

.PHONY: run
run: build
	@clear
	./$(BIN)

.PHONY: clean
clean:
	rm -f $(BIN)

# Makefile — Compilation du projet
CC = gcc
CFLAGS = -Wall -Wextra -O2
LDFLAGS = -lGL -lGLU -lglut -lm
TARGET = game
SRCS = main.c

all: $(TARGET)
$(TARGET): $(SRCS)
 $(CC) $(CFLAGS) -o $(TARGET) $(SRCS) $(LDFLAGS)
clean:
 rm -f $(TARGET) *.o
run: $(TARGET)
 ./$(TARGET)
.PHONY: all clean run

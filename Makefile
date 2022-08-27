# gcc main.c -o game.exe -O1 -Wall -std=c99 -Wno-missing-braces -I include/ -L
# lib/ -lraylib -lopengl32 -lgdi32 -lwinmm
# Name of output file
NAME = game

#Linker flags
LIBS  = -lm -lraylib -lopengl32 -lgdi32 -lwinmm

#Compiler flags
CFLAGS =  -O1 -Wall -std=c99 -Wno-missing-braces

#Includes 
INCLUDES_DIRS= include/

LIB_DIRS = lib/
#Compiler
CC = gcc

SRC= main.c pong.c

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $^ -o $@ $(CFLAGS) $(LIBS) -I$(INCLUDES_DIRS) -L$(LIB_DIRS)

clean: 
	rm -rf *.o $(NAME) 
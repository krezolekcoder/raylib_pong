# Simple makefile 

NAME = pong

#Linker flags
LIBS  = -lm -lraylib -lopengl32 -lgdi32 -lwinmm

#Compiler flags
CFLAGS =  -O1 -Wall -std=c99 -Wno-missing-braces

#Includes 
INCLUDES_DIRS= include/

LIB_DIRS = lib/
#Compiler
CC = gcc

SRC= main.c pong_ui.c pong_app.c 

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $^ -o $@ $(CFLAGS) $(LIBS) -I$(INCLUDES_DIRS) -L$(LIB_DIRS)

clean: 
	rm -rf *.o $(NAME) 
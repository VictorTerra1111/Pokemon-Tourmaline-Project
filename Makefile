# Makefile for the pokemon game

# Compiler and flags
CC = g++
CFLAGS = -Wall -g -IHPPS

# Directories
CPP_DIR = CPPS
HPP_DIR = HPPS
MAIN_DIR = MAIN
OBJ_DIR = OBJS

# Source files
SRCS = $(MAIN_DIR)/main.cpp \
       $(CPP_DIR)/interface.cpp \
       $(CPP_DIR)/item.cpp \
       $(CPP_DIR)/pokemon.cpp \
       $(CPP_DIR)/Routes.cpp \
       $(CPP_DIR)/trainer.cpp \
	   $(CPP_DIR)/first_partner.cpp \
	   $(CPP_DIR)/professor_dialogue.cpp \
	   $(CPP_DIR)/team.cpp \
	   $(CPP_DIR)/file_manage.cpp

# Object files
OBJS = $(OBJ_DIR)/main.o \
       $(OBJ_DIR)/interface.o \
       $(OBJ_DIR)/item.o \
       $(OBJ_DIR)/pokemon.o \
       $(OBJ_DIR)/Routes.o \
       $(OBJ_DIR)/trainer.o \
	   $(OBJ_DIR)/first_partner.o \
	   $(OBJ_DIR)/professor_dialogue.o \
	   $(OBJ_DIR)/team.o \
	   $(OBJ_DIR)/file_manage.o


# Target executable
TARGET = game

# Default rule
all: $(TARGET)

# Linking object files into the final executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

# Compile .cpp files into .o files, placing them in OBJS directory
$(OBJ_DIR)/%.o: $(MAIN_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(CPP_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule to remove object files and the executable
clean:
	rm -rf $(OBJ_DIR)/*.o $(TARGET)

# Phony targets
.PHONY: all clean

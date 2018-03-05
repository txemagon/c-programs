EXE = triangle

SRC_DIR = src
OBJ_DIR = obj
INCLUDE = ./include

SRC = $(wildcard $(SRC_DIR)/*.cpp)
OBJ = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

CPPFLAGS +=-I${INCLUDE} # Preprocessor flags
CFLAGS += -Wall         # Compiler flags
LDFLAGS += -Llib        # Linker flags
LDLIBS += -lGL -lGLEW -lSDL2

CC=g++

.PHONY: all clean

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(LDFLAGS) $^ $(LDLIBS) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)





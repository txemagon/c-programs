CC=g++
CFLAGS=-g
DEPS=$(wildcard *.h)
SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
OUT=pol

$(OUT): $(OBJ) $(DEPS)
	$(CC) $(CFLAGS) $(OBJ)  -o $(OUT)

%.o: %.cpp $(DEPS)
	$(CC) -c $< $(CFLAGS)

.PHONY: clean dist

clean:
	$(RM) *.o

dist: $(OUT) clean
	mv $(OUT) dist

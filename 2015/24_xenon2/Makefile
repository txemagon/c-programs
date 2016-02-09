TARGET=xenon2
LIBS=-lallegro -lallegro_image -lallegro_dialog
CC=g++
CFLAGS=-g

OBJECTS = $(patsubst %.cpp, %.o, $(wildcard *.cpp))
HEADERS = $(wildcard *.h)


.PHONY: default all clean

default: $(TARGET)

all: default

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

.PRECIOUS: $(TARGET) $(OBJECTS)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -Wall -o $@ $(LIBS)

clean:
	-rm -f *.o
	-rm -f $(TARGET)

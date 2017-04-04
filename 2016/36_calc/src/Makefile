CC = g++

DDIR = ../dist
IDIR = ./include

CFLAGS = -g
LDFLAGS = -I$(IDIR)

TARGET = calc
OBJS = $(patsubst %.cpp, %.o,  $(wildcard *.cpp))

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@ $(LDFLAGS)


.PHONY: clean

clean:
	$(RM) *.o

dist: $(TARGET) clean
	mv $(TARGET) $(DDIR)


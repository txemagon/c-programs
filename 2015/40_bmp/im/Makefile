CC = g++
CFLAGS = -g
objects := $(patsubst %.cpp,%.o,$(wildcard *.cpp))

im : $(objects)
	$(CC) $(CFLAGS) -o foo $(objects)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

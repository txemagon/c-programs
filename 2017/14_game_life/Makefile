CC = g++

.PHONY: clean

all: life


life: interfaz.o life.o
	$(CC) -o life life.o interfaz.o

%.o: %.cpp
	$(CC) -c $<

clean:
	$(RM) *.o

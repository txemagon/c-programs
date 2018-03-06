.PHONY: clean

all: life


life: interfaz.o life.o
	gcc -o life life.o interfaz.o

interfaz.o: interfaz.cpp
	gcc -c interfaz.cpp

life.o: life.cpp
	gcc -c life.cpp

clean:
	$(RM) *.o

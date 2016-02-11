CC=g++
LDLIBS=-lallegro

calc: suma.o calculadora.o
	$(CC) suma.o calculadora.o -o calc $(LDLIBS)

suma.o: suma.cpp suma.h
	$(CC) -c suma.cpp

calculadora.o: calculadora.cpp suma.h
	$(CC) -c calculadora.cpp


.PHONY: clean

clean:
	rm *.o calc

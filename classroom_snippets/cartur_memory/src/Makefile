SHELL = /bin/bash
CC = g++
CXXFLAGS = -g

OBJECTS = cartur.o cartas.o

cartur : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS) -lncurses

cartas.o : cartas.h

.PHONY : clean indent copy release

clean :
	rm cartur $(OBJECTS) *\~

indent :
	indent *.cpp *.h

copy :
	cp cartur ../bin/

release : copy clean

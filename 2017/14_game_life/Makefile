.PHONY: clean

all: life


life: interfaz.o life.o
	gcc -o life life.o interfaz.o

%.o: %.cpp
	gcc -c $<

clean:
	$(RM) *.o

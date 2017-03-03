CC = g++

el2: main.o imprime.o
	$(CC) imprime.o main.o -o el2

%.o: %.cpp
	$(CC) -c $<

.PHONY: clean

clean:
	$(RM) *.o

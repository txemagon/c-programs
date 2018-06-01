CC = g++

fraccion: fc.o pila.o
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) -c $<

.PHONY: clean
clean:
	$(RM) *.o

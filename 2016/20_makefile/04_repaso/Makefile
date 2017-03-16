DEPS = aritmetica.h

suma: main.o aritmetica.o
	g++ main.o aritmetica.o -o suma

main.o: main.cpp $(DEPS)
	g++ -c main.cpp

aritmetica.o: aritmetica.cpp $(DEPS)
	g++ -c aritmetica.cpp


.PHONY: clean

clean:
	$(RM) *.o

dependencies=pila.o funciones.o

all: interprete0 interprete1 interprete2 interprete3

interprete0: interprete0.o $(dependencies)
	g++ -o $@ $^

interprete1: interprete1.o $(dependencies)
	g++ -o $@ $^

interprete2: interprete2.o $(dependencies)
	g++ -o $@ $^

interprete3: interprete3.o $(dependencies)
	g++ -o $@ $^

interprete4: interprete4.o interfaz0.o $(dependencies)
	g++ -o $@ $^

interprete5: interprete5.o interfaz1.o $(dependencies)
	g++ -o $@ $^ -lreadline



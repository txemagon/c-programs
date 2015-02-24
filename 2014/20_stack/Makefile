LDLIBS = -lncurses

hanoi: print.o stack.o hanoi.o
	g++ print.o stack.o hanoi.o -o hanoi $(LDLIBS)

stack.o: stack.cpp
	g++ -c stack.cpp

hanoi.o: hanoi.cpp
	g++ -c hanoi.cpp

print.o: print.cpp
	g++ -c print.cpp 

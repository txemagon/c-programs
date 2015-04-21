CFLAGS=-g

enqueue: enqueue.o display.o
	g++ -o enqueue enqueue.o display.o $(CFLAGS) $(LDFLAGS)

enqueue.o: enqueue.cpp
	g++ -c enqueue.cpp $(CFLAGS)

display.o: display.cpp
	g++ -c display.cpp $(CFLAGS)


.PHONY: clean
clean: 
	$(RM) *.o enqueue

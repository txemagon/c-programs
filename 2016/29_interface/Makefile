CC=g++
CFLAGS=-g
LDLIBS=-lncurses
DEPS=interfaz.h
OBJS = main.o interfaz.o

magic: $(OBJS)
	$(CC) $^ -o magic $(CFLAGS) $(LDLIBS)


%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c $<

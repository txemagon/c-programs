IDIR = ../include
DDIR = ../dist

CC = g++
CFLAGS = -g -I$(IDIR)

DEPF = imprime.h
DEPS = $(pathsubst %,$(IDIR)/%,$(DEPF))
OBJS = imprime.o main.o
EXEC = el2

$(EXEC): $(OBJS)
	$(CC) $^ -o $(EXEC) $(CFLAGS)

all: $(EXEC) dist

dist: clean
	mv el2 $(DDIR)
%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c $<

.PHONY: clean

clean:
	$(RM) *.o


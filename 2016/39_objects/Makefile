CC = gcc
CFLAGS = -g

OBJS = $(patsubst %.o, %.c, $(wildcard *.c))

EXE = objetos

$(EXE): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $(EXE)

%.o: %.c
	$(CC) $(CFLAGS) -C $<

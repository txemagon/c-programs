CC = cc

CFLAGS = -g
LDLIBS = 

DEPS = $(wildcard *.h)
OBJS = $(patsubst %.o, %.c, $(wildcard *.c))

EXE  = chess

all: $(EXE) clean

$(EXE): $(OBJS) $(DEPS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LDLIBS)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $<

.PHONY: clean

clean:
	$(RM) *.o

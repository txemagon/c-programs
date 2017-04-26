all: hello

hello: main.c
	gcc -g -O0 -o $@ $+

check: all
	./jupiter | grep "Hello from .*hello!"
	@echo "*** ALL TESTS PASSES ***"

clean:
	-rm hello

.PHONY: all clean check


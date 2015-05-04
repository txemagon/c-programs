LDLIBS = -lallegro

bouncy: bouncy.o pelota.o
	g++ -o bouncy bouncy.o pelota.o $(LDLIBS)


pelota.o: pelota.cpp
	g++ -c pelota.cpp


bouncy.o: bouncy.cpp
	g++ -c bouncy.cpp


.PHONY: clean

clean:
	$(RM) *.o *~


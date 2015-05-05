CXX = gcc
CXXFLAGS = -g
LDLIBS = -lallegro -lallegro_image

DEPS = pelota.h
OBJ = pelota.o bouncy.o

bouncy: $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDLIBS)


%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

.PHONY: clean

clean:
	$(RM) *.o *~


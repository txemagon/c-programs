CXX = g++
CXXFLAGS = -g
LDLIBS = -lallegro -lallegro_image -lallegro_dialog

DEPS = mi_allegro.h pelota.h 
OBJ = mi_allegro.o pelota.o bouncy.o

bouncy: $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDLIBS)


%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

.PHONY: clean

clean:
	$(RM) *.o *~


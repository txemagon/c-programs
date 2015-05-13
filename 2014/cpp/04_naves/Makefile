CXX = g++ 
CXXFLAGS = -g 
LDLIBS = -lallegro -lallegro_image -lallegro_dialog 

DEPS = mi_allegro.h arma.h nave.h prota.h 
OBJ = mi_allegro.o arma.o nave.o prota.o game.o 

game: $(OBJ) 
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDLIBS) 
	
%.o: %.cpp $(DEPS) 
	$(CXX) -c -o $@ $< $(CXXFLAGS)
	
.PHONY: clean 

clean:
	$(RM) *.o *~

#Complier
CXX: g++-10

#Flags for the compiler
CXXFLAGS = -c -std=c++14 -O0
#-c is used to not link files

#Main Rule
all: main.o Cube.o HSLAPixel.o Game.o Stack.o
	$(CXX) main.o Cube.o HSLAPixel.o Game.o Stack.o -o main

Cube.o: ./uiuc/Cube.cpp
	$(CXX) $(CXXFLAGS) $< -o $@
#$@ is the name of the target: Cube.o
#$< is the first prerequisite: Cube.cpp

main.o: main.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

HSLAPixel.o: ./uiuc/HSLAPixel.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

Game.o: Game.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

Stack.o: Stack.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm *.o
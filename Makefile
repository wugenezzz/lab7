CXX = g++
CXXFLAGS = -std=c++11 -Wall -Iinc

EXE = Lab07
CPP = main
HEAD = Cylinder

SRC_DIR = src
INC_DIR = inc

OBJ = $(CPP).o $(HEAD).o

all: $(EXE)

$(EXE): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(EXE)

$(CPP).o: $(CPP).cpp $(INC_DIR)/$(HEAD).h
	$(CXX) $(CXXFLAGS) -c $(CPP).cpp

$(HEAD).o: $(SRC_DIR)/$(HEAD).cpp $(INC_DIR)/$(HEAD).h
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/$(HEAD).cpp -o $(HEAD).o

clean:
	rm -rf *.o $(EXE)

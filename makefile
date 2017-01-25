COMP=g++
OPTS=-std=c++11
OBJECTS=neuron.o 
EXE=main

main: $(OBJECTS) $(EXE).cpp
	$(COMP) $(OBJECTS) $(EXE).cpp -o $(EXE) $(OPTS) 

neuron.o: neuron.cpp
	$(COMP) -c $(OPTS) neuron.cpp 

clean:
	rm -rf *.o *~

tar:
	tar cvzf ppoo.tgz *.cpp *.h makefile readme.txt
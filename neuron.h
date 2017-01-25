#include "definitions.h"
#include "neuronalNeworkFunctions.h"

class neuron{
public:
	//normal constructor
	neuron(unsigned numinputs,double bias);
	//put the new imputs 
	void putInputs(double* inputs);
	//calculate the output
	double calculate();
	//put new weight
	void putWeight(unsigned pos, double value);

	~neuron();

private:
	//default constructor
	neuron();
	//weights of the neuron
	double* weights;
	//imputs of the neuron
	double* inputs;
	//value of bias
	double 	bias;
	//value of output
	double 	output;
	//num of imputs
	unsigned numinputs;
	//value of the sum of all weights * imputs - bias
	double e;
	//init weights
	void initWeights();


};
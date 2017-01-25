#include "neuron.h"

neuron::neuron(){}
neuron::neuron(unsigned numinputs,double bias){
	this->bias = bias;
	this->numinputs = numinputs;
	this->weights = new double[numinputs + 1];
	this->inputs = new double[numinputs];
	this->output = 0;
	this->initWeights();
}
neuron::~neuron(){
	this->bias = 0;
	this->numinputs = 0;
	this->output = 0;
	delete[] this->weights;
	delete[] this->imputs;
}
double neuron::calculate(){
	double total = 0;
	for(unsigned i = 0; i < this->numinputs; ++i){
		//TODO test
		total += this->weights[i]*this->inputs[i];
	}
	//TODO test
	//adding the bias value with his weight
	total += this->weights[this->numinputs]* this->bias;
	//e calculated
	this->e = total;
	//activation function
	this->output = activationFunctions::sigmoid(this->e);

	return this->output;
	
}

void neuron::putInputs(double* inputs){
	//TODO posible optimization using memcpy
	for(unsigned i = 0; i < this->numinputs; ++i){
		this->inputs[i] = inputs[i];
	}
}
void neuron::putWeight(unsigned pos, double value){
	this->weights[pos] = value;
}
double getE(){
	return this->e;
}
void neuron::initWeights(){
	for(unsigned i = 0; i < this->numinputs + 1; ++i){
		this->weights[i] = ((double) rand() / (RAND_MAX));
	}
}
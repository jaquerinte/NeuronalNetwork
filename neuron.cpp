#include "neuron.h"

neuron::neuron(){}
neuron::neuron(unsigned numinputs,double bias){
	this->bias = bias;
	this->numinputs = numinputs;
	this->weights = new double[numinputs];
	this->inputs = new double[numinputs];
	this->output = 0;
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
		total += this->weights[i]*this->imputs[i];
	}
	//TODO test
	total -= this->bias;
	this->e = total;
	
}
void neuron::putInputs(double* inputs){
	//TODO posible optimization using memcpy
	for(unsigned i = 0; i < this->numinputs; ++i){
		this->inputs[i] = inputs[i];
	}
}
void neuron::initWeights(){
	for(unsigned i = 0; i < this->numinputs; ++i){
		this->weights[i] = ((double) rand() / (RAND_MAX));
	}
}
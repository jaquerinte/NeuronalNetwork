#include "definitions.h"
#include "neuron.h"

#define BIAS 0.8
#define ITERATIONS 200
#define FI 0.2

int main(int argc, char** argv){
	srand(time(NULL));

	neuron a = neuron(usigned(2),BIAS);
	double* inputs = new double[3];
	double salida = 0;
	double delta = 0;
	double newWeight = 0;

	//trainig
	for(usigned i = 0; i < ITERATIONS; ++i){
		double exitvalue = 0;
		//value 1 1 output 1
		inputs[0] = 1:
		inputs[1] = 1;
		inputs[2] = BIAS;
		a.putInput(inputs);
		salida = a.calculate();
		delta = 1 - salida;
		exitvalue = FI * delta * activationFunctions::derivateSigmoid(a.getE());
		for(usigned j = 0; j < 3; ++j){
			a.putWeight(j,a.getWeight(j) + exitvalue*inputs[j]); 
		}
		//value 1 0 output 0
		inputs[0] = 1:
		inputs[1] = 0;
		inputs[2] = BIAS;
		a.putInput(inputs);
		salida = a.calculate();
		delta = 0 - salida;
		exitvalue = FI * delta * activationFunctions::derivateSigmoid(a.getE());
		for(usigned j = 0; j < 3; ++j){
			a.putWeight(j,a.getWeight(j) + exitvalue*inputs[j]); 
		}
		//value 0 1 output 0
		inputs[0] = 0:
		inputs[1] = 1;
		inputs[2] = BIAS;
		a.putInput(inputs);
		salida = a.calculate();
		delta = 0 - salida;
		exitvalue = FI * delta * activationFunctions::derivateSigmoid(a.getE());
		for(usigned j = 0; j < 3; ++j){
			a.putWeight(j,a.getWeight(j) + exitvalue*inputs[j]); 
		}
		//value 0 0 output 0
		inputs[0] = 0:
		inputs[1] = 0;
		inputs[2] = BIAS;
		a.putInput(inputs);
		salida = a.calculate();
		delta = 0 - salida;
		exitvalue = FI * delta * activationFunctions::derivateSigmoid(a.getE());
		for(usigned j = 0; j < 3; ++j){
			a.putWeight(j,a.getWeight(j) + exitvalue*inputs[j]); 
		}

	}
        inputs[0] = 0:
		inputs[1] = 0;
		inputs[2] = BIAS;
	a.putInput(inputs);
	std::cout<<"input 0,0 output: "a.calculate()<<std::endl;
	 inputs[0] = 1:
	 inputs[1] = 1;
	 inputs[2] = BIAS;
	a.putInput(inputs);
	std::cout<<"input 1,1 output: "a.calculate()<<std::endl;
	 inputs[0] = 1:
	 inputs[1] = 0;
	 inputs[2] = BIAS;
	a.putInput(inputs);
	std::cout<<"input 1,0 output: "a.calculate()<<std::endl;



}
#include "activationFunctions.h"

double activationFunctions::sigmoid(double s){
	return (1/(1 + exp(-s)));
}
double activationFunctions::derivateSigmoid(double e){
	double fvalue = sigmoid(e);
	return (fvalue*(1 - fvalue));
}
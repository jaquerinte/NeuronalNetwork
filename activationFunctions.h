#ifndef ACTIVATION_FUNCTIONS_H
#define ACTIVATION_FUNCTIONS_H

#include "definitions.h"

class activationFunctions
{
public:
	static double sigmoid(double e);
	static double derivateSigmoid(double e);
	activationFunctions();
	~activationFunctions();
	
};


#endif
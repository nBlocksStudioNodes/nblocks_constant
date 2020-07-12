/**
 * @brief       constant.h
 * @details    	Header file for a constant node, this is a simple node that takes the constant values as a parameter
 *              and outputs that value when the input is triggered.
 * @pre         This code belongs to Nimbus Centre ( http://www.nimbus.cit.ie ).
 */
#ifndef __NB_CONSTANT
#define __NB_CONSTANT

#include "nworkbench.h"

class nBlock_Constant: public nBlockSimpleNode<1>{
	
	
	
	public:
	
		nBlock_Constant(uint32_t value);
	
		void triggerInput(uint32_t inputNumber, uint32_t value);
		void endFrame();
	
	
	private:
	
		const uint32_t _constant_value;// this constant in initialized by the constructor.
	
};


#endif
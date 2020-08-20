#include "constant.h"


/**
* @brief    nBlock_Constant()
* @details  The internal constant is initialized with the value passed as a constructor parameter.
* @param    The constant value inputed to node by user.
* @return   NA.
* 
*/

nBlock_Constant :: nBlock_Constant(uint32_t value): _constant_value (value){  // this will initilaize (not assign) the constant with the parameter value.
	
		
	
}

/**
* @brief    triggerInput()
* @details  When an Input is triggered the constant value will be output from the node.
* @param    Number of the input, value of the input
* @return   NA.
* 
*/

void nBlock_Constant :: triggerInput(nBlocks_Message message){
	
	
	//todo not sure if a constant requires a trigger input put trigger input code into endframe so value is outputted constantly
	
	
}

void nBlock_Constant :: endFrame(){
	
	output[0] = _constant_value;
	
	available[0] = 1;
	
	
}
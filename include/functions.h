//     Functions - flow control of the "main" function - what does it do
// provide initial values to variables
// NOTE: since all the variables are GLOBAL in scope, all logic within these functions affects the actual values of the variables
void InitializeVariables();
// expose initial values of variables and the size of each
void SizeofVariables();
// provide initial values to pointers
void InitializePointers();
// expose addresses of pointers, initial values and the size of each
void SizeofPointers();
// expose values pointed to ->
void ValuesofPointers();
// expose integer values of pointers ->
void IntegerValuesofPointers();
// provide initial values to arrays
void InitializeArrays();
// expose values within arrays
void ValuesofArrays();
// provide values to structures - bad way
void InitializeStructuresX();
// provide values to structures - good way
void InitializeStructures();
// expose values within structures
void ValuesofStructues();
// Delete HEAP
void DeleteHeap();
//
//     Functions - with an input value - parameter
//     Functions - with input values - parameters
//     Functions - with a return value
//     Functions - with a return value and input values - parameters
//     Functions - with return values
//     Functions - with return values and an input value
//     Functions - with return values and input values - parameters
//
//     Classes & Methods
// Threads
// std::this_thread::sleep_for(1s);
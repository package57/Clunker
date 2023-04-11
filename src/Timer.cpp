#include "Timer.h"
// constructor   
Timer::Timer()  
{
    std::cout << "Start Timer\n";
    start = std::chrono::high_resolution_clock::now();    
} 
// destructor
Timer::~Timer()  
{
    end = std::chrono::high_resolution_clock::now();  
    duration = end - start; 
    ms = duration.count() * 1000.0f;
    std::cout << "Elapsed Time " << ms << "milliseconds\n";
    std::cout << "End Timer\n"; 
}
// Methods
void Timer::dummy()
{
// this 'method' exists only to show the difference using the method
// if Timer is used from the stack - static allocation (call)
// or if Timer is used from the heap - dynamic allocation (call) - aka allocated as 'new'
    std::cout << "Timer - dummy\n";

}
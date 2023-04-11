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
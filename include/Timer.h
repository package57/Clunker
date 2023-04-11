#ifndef TIMER_H
#define TIMER_H
#include <iostream>
#include <chrono>
class Timer
{
    public:

        std::chrono::time_point<std::chrono::high_resolution_clock> start;
        std::chrono::time_point<std::chrono::high_resolution_clock> end;
        std::chrono::duration<float> duration;
        float ms;

        Timer();
        virtual ~Timer();

    protected:

    private:

};
#endif // TIMER_H

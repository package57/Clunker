#ifndef TIMER_H
#define TIMER_H
#include <chrono>

class Timer
{
    public:

        std::chrono::time_point<std::chrono::steady_clock> start;
        std::chrono::time_point<std::chrono::steady_clock> end;
        std::chrono::duration<float> duration;

        Timer();
        virtual ~Timer();

    protected:

    private:

};
#endif // TIMER_H
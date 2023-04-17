#ifndef AirplaneWaitingQueue_H
#define AirplaneWaitingQueue_H
#include <iostream>
#include "deque.h"
using namespace std;
template <typename T>
class AirplaneWaitingQueue : public Deque<T>
{
private:
    const int Tmax = 360;
    const int tLanding = 10;
    int t;
    int RemTime;
    const double avTime = 6;
    double probArr;
    double Tarrival;
    double averageWaitTime;

public:
    AirplaneWaitingQueue();
    ~AirplaneWaitingQueue();
};

#endif
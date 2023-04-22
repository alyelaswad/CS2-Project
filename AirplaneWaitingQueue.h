#ifndef AirplaneWaitingQueue_H
#define AirplaneWaitingQueue_H
#include <iostream>
#include "deque.h"
using namespace std;
template <typename T>
class AirplaneWaitingQueue : Deque<T>
{
private:
    const int Tmax;
    const int tLanding;
    const double avTime;
    int t;
    int RemTime;
    double probArr;
    int Tarrival;
    double averageWaitTime;
    static int JobCount;
    int WaitTotal;

public:
    int getT();

    int getRemTime();

    void setT(int t);

    void setRemTime(int RemTime);

    double getProbArr();

    void setProbArr(double probArr);

    int getTarrival();

    void setTarrival(int Tarrival);

    double getAverageWaitTime();

    void setAverageWaitTime(double averageWaitTime);

    void Arrival();

    void Service();

    void ExitLine();

    int getWaitTotal();

    void setWaitTotal(int WaitTotal);

    double AverageWait();
};

#endif
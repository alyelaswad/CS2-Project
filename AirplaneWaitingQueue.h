#ifndef AirplaneWaitingQueue_H
#define AirplaneWaitingQueue_H
#include <iostream>
#include "deque.h"
using namespace std;
template <typename T>
class AirplaneWaitingQueue : Deque<T>
{
private:
    const int Tmax = 360; // as instructed in the paper, these variables should be assumed with an unchanged value. (hence why it is a const)
    const int tLanding = 10;
    const double avTime = 6;
    int t;
    int RemTime; // remaining time to land.
    double probArr; //probability of arrival per unit time.
    int Tarrival; // arrival time.
    double averageWaitTime; 
    static int JobCount; // the number of planes landing.
    int WaitTotal; // total wait time.

public:
    int getT(); //setter and getters.

    int getRemTime();

    void setT(int t);

    void setRemTime(int RemTime);

    double getProbArr();

    void setProbArr(double probArr);

    int getTarrival();

    void setTarrival(int Tarrival);

    double getAverageWaitTime();

    void setAverageWaitTime(double averageWaitTime);

    void Arrival(); // Test for Arrival & Arrival Processing

    void Service(); // Test for server ready. If ready, exit line and start service.

    void ExitLine(); // exits the landing line.

    int getWaitTotal(); //getter

    void setWaitTotal(int WaitTotal); //setter

    double AverageWait(); // Computes average wait tim

    void DisplayActivity(); // displays the process happening at the queue.
};

#endif

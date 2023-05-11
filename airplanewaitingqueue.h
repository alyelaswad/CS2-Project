#ifndef AIRPLANEWAITINGQUEUE_H
#define AIRPLANEWAITINGQUEUE_H
#include "deque.h"

class AirplaneWaitingQueue : public Deque
{
private:
    const int Tmax = 360;
    const int tLanding = 10;
    const double avTime = 6;
    int t;
    int RemTime;
    double probArr;
    int Tarrival;
    double WaitTime;
    int JobCount;
    int WaitTotal;
// one sec
public:
    int getT();
    AirplaneWaitingQueue();
    ~AirplaneWaitingQueue();

    int getRemTime();

    void setT(int t);

    void setRemTime(int RemTimeo);

    double getProbArr();

    void setProbArr(double probArro);

    int getTarrival();

    void setTarrival(int Tarrivalo);

    double getWaitTime();

    void setWaitTime(double WaitTimeo);

    double RandNum(int i, int j);

    void Arrival();

    void Service();

    void ExitLine();

    int getWaitTotal();

    void setWaitTotal(int WaitTotalo);

    double AverageWait();

    void DisplayActivity();
     void setJobCount(int j);
     int getJobCount();
};

#endif // AIRPLANEWAITINGQUEUE_H

#include "airplanewaitingqueue.h"
#include "deque.h"
#include "deque.cpp"
#include <QString>



double AirplaneWaitingQueue ::RandNum(int i, int j)
{
    unsigned int seed = time(NULL);
    const unsigned int a = 25173;
    const unsigned int b = 13849;
    const unsigned int m = 65536;

    int x = (a * seed + b) % m;
    seed = x;

    double r = double(seed) / double(65536);
    return i + r * (j - i);
}
void AirplaneWaitingQueue ::Arrival()
{
    double R = RandNum(0, 1);
    if (R < probArr)
    {
        Tarrival = t;
        // DEQ FULL

        QString myString = QString::number(Tarrival);
        this->Add_Rear(myString);
    }
}

void AirplaneWaitingQueue ::ExitLine()
{
    if (AirplaneWaitingQueue::DEQisEmpty())
    {
        // OUT LINE IS EMPTY
    }
    else
    {
        AirplaneWaitingQueue::Remove_Front();
        WaitTime = t;
    }
}

AirplaneWaitingQueue ::AirplaneWaitingQueue()
{
    Tarrival = RandNum(0, 6);
    probArr = 1 / avTime;
    RemTime = 0;
    t = 0;
    WaitTotal = 0;
    WaitTime = 0;
    setJobCount(0);
}

void AirplaneWaitingQueue ::Service()
{
    if (RemTime == 0 && AirplaneWaitingQueue::DEQisEmpty())
    {
        ExitLine();
        RemTime = tLanding;
    }
}

double AirplaneWaitingQueue ::AverageWait()
{
    if (JobCount == 0)
    {
        return 0;
    }
    else
    {
        return (WaitTotal / JobCount);
    }
}

void AirplaneWaitingQueue ::DisplayActivity()
{
    while (t < Tmax)
    {
        this->Arrival();
        this->Service();
        if (RemTime > 0)
        {
            RemTime--;
        }
    }
    this->AverageWait();
    JobCount++;
}

AirplaneWaitingQueue ::~AirplaneWaitingQueue()
{
}

 void AirplaneWaitingQueue ::setJobCount(int j)
{
    JobCount=j;
}
 int AirplaneWaitingQueue ::getJobCount()
{return JobCount;}
int AirplaneWaitingQueue::getRemTime()  {
    return RemTime;
}

// Setter for RemTime
void AirplaneWaitingQueue::setRemTime(int RemTimeo) {
    RemTime = RemTimeo;
}

// Getter for probArr
double AirplaneWaitingQueue::getProbArr()  {
    return probArr;
}

// Setter for probArr
void AirplaneWaitingQueue::setProbArr(double probArro) {
    probArr = probArro;
}

// Getter for tArrival
int AirplaneWaitingQueue::getTarrival()  {
    return Tarrival;
}

// Setter for tArrival
void AirplaneWaitingQueue::setTarrival(int Tarrivalo) {
    Tarrival = Tarrivalo;
}

// Getter for WaitTime
double AirplaneWaitingQueue::getWaitTime()  {
    return WaitTime;
}

// Setter for WaitTime
void AirplaneWaitingQueue::setWaitTime(double WaitTimeo) {
    WaitTime = WaitTimeo;
}

// Getter for WaitTotal
int AirplaneWaitingQueue::getWaitTotal()  {
    return WaitTotal;
}

// Setter for WaitTotal
void AirplaneWaitingQueue::setWaitTotal(int WaitTotalo) {
    WaitTotal = WaitTotalo;
}

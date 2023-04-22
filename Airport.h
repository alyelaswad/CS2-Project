#include <iostream>
#include <vector>
#include "AirplaneWaitingQueue.h"
using namespace std;

class Airport
{

private:
    static int arrivals;
    int nSponsor;
    vector<string> sponsors;
    int gateNumber;
    AirplaneWaitingQueue<int> WaitingQueue;

public:
    vector<string> getSponsors();

    void setSponsors(vector<string> sponsors);

    int getGateNumber();

    void setGateNumber(int gateNumber);

    static int getArrivals();

    void displayLogs();

    bool gateisavailable();

    Airport();
    ~Airport();

    void ComputeQueue();
};

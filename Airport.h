#include <iostream>
#include <vector>
#include "AirplaneWaitingQueue.h"
using namespace std;
class Airport
{
private:
    static int arrivals;
    int nSponsors = 10;
    vector<string> sponsors;
    int gateNumber;

public:
    Airport();
    void displayLogs();
    bool gateisavailable();
    ~Airport();
};
#include <iostream>
#include <vector>
#include "AirplaneWaitingQueue.h"
using namespace std;
// this is a class that we came up with to have more of our ideas and implement extra functionalities like sponsors and gate numbers.
class Airport
{

private:
    static int arrivals; // number of arrivals from that landing way.
    int nSponsor; // number of sponsors
    vector<string> sponsors; // vector of the sponsors.
    int gateNumber; // gate number to expect the arrivals.
    AirplaneWaitingQueue<int> WaitingQueue; // composition of the queue to be implemented.

public:
    vector<string> getSponsors(); // getters and setters.

    void setSponsors(vector<string> sponsors);

    int getGateNumber();

    void setGateNumber(int gateNumber);

    static int getArrivals();

    void displayLogs(); // displays the logs of simulating the queue.

    bool gateisavailable(int n); // checks if a certain gate is available

    Airport(); //constructor and destructor
    ~Airport();

    void ComputeQueue(); // operates the queue with all its functionalities.
};

//This is test to see what happens when we delete an object when its already
//dead.
#include<iostream>
using namespace std;

class MerryGoRound
{
public:    
     MerryGoRound();
    ~MerryGoRound();
    
    bool StartMerryGoRound();
    bool StopMerryGoRound();
    bool startMotor;
};

MerryGoRound::MerryGoRound()
{   
    startMotor = false;
    cout << "New Merry Go Round Created..." << endl;
}

MerryGoRound::~MerryGoRound()
{
    cout << "Merry Go Round Destroyed..." << endl;
}

bool MerryGoRound::StartMerryGoRound()
{
    cout << "Merry Go Round Started..." << endl;
    return true;
}

bool MerryGoRound::StopMerryGoRound()
{
    cout << "Merry Go Round Stopped..." << endl;
    delete this;  // We are deleting an object here. 
                  // This will affect the program when Destructer is Called. 
    return false;
}

int main()
{
    MerryGoRound me;
    me.StartMerryGoRound();
    me.StopMerryGoRound();
    return 0;
}

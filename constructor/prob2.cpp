#include<iostream>
using namespace std;

class sample
{
    public:
    sample()
    {
        cout<<"\nHiiiiiii";
    }

    ~sample()
    {
        cout<<"\nByeeeee";
    }
};

int main()
{
    sample *obj = new sample();
    delete (obj);
    return 0;

}
# include <iostream>
using namespace std;

int main()
{
    int marks[4]={23,45,67,89};

    int*p=marks;

    cout<<"The marks at [0] is "<<*p <<endl;
    cout<<"The marks at [1] is "<<*p+1 <<endl;
    cout<<"The marks at [2] is "<<*p+2 <<endl;
    cout<<"The marks at [3] is "<<*p+3 <<endl;

    return 0 ;
}


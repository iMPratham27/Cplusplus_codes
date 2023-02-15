#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //as endl is one of the manupulator, similarly setw is also a kind of manupulator which justify all values to right

    int a=3, b=45, c=345;
    cout<<"the value of a without setw is: "<<a<<endl;
    cout<<"the value of b without setw is: "<<b<<endl;
    cout<<"the value of c without setw is: "<<c<<endl;


    cout<<"the value of a  setw is: "<<setw(4)<<a<<endl;
    cout<<"the value of b  setw is: "<<setw(4)<<b<<endl;
    cout<<"the value of c  setw is: "<<setw(4)<<c<<endl;

    return 0;





}
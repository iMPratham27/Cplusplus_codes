# include <iostream>
using namespace std;

// base class
class Employee
{
    public:
    int id;
    float salary;
    Employee(int inpid)
    {
        id=inpid;
        salary=50.0;
    }
    Employee(){}
};

// derived class
/*
syntax=>   class (derived class name) : (visibility mode) (base class name)

Note:
1) By default visibility mode is private
2) Public visibility mode : Public members of base class becomes Public members of derived class
3) Private visibility mode : Public members of base class becomes Private members of derived class
4) Private members of base class can not be inherited
*/
class Programmer : Employee
{
    public:
    Programmer (int inpid)
    {
        id=inpid;
    }
    int languageCode=7;

    void getData()
    {
        cout<<id<<endl;
    }
};

int main()
{
    Employee Pratham(7);
    cout<<Pratham.salary<<endl;

    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    skillF.getData();

    return 0;                
}
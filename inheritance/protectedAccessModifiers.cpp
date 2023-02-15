/*
Protected=>  variables which are private but can be inherited

                        Public derivation       Private derivation         Protected derivation
1)Private member         Not inherited           Not inherited               Not inherited
2)Protected members      Protected               Private                     Protected
3)Public members         Public                  Private                     Protected

*/

# include <iostream>
using namespace std;

class Base
{
    protected:
      int a;
    private:
      int b;  
};

class Derived : protected Base
{
   void showDisplay()
   {
    cout<<"Derived class is protected "<<endl;
   }
};

int main()
{
    Base b;
    Derived d;
    
    return 0;
}
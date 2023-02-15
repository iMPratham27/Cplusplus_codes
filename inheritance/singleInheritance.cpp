# include <iostream>
using namespace std;

class Base
{
    int data1;
    public:
      int data2;
      void setdata()
      {
        data1=10;
        data2=20;
      }

      int getData1()
      {
        return data1;
      }

      int getData2()
      {
        return data2;
      }
};

class Derived : public Base
{
    int data3;
    public:
      void process()
      {
        data3= data2 * getData1();
      }

      void display()
      {
        cout<<"Value of data1 "<<getData1()<<endl;
        cout<<"Value of data2 "<<data2<<endl;
        cout<<"Value of data3 "<<data3<<endl;
      }
};

int main()
{
    Derived der;
    der.setdata();
    der.process();
    der.display();

    return 0;
}
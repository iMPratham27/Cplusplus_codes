# include <iostream>
using namespace std;
// ambiguity in multiple inheritance
//1
class Base1
{
    public:
      void greet()
      {
        cout<<"How r u ?"<<endl;
      }
  
};

class Base2
{
    public:
      void greet()
      {
        cout<<"Kaise ho ?"<<endl;
      }
  
};

class Derived : public Base1 , public Base2 
{
    public:
      void greet()
      {
        Base1::greet();   // use scope resolution operator & specify the base class from which the fuction u want
      }
};

//2
class B
{
    public:
      void say()
      {
        cout<<"Hello"<<endl;
      }
};
/* if there is no func written in class D, it will inherit it from class B;
 but there is func in D so it will override & the function will operate */
class D : public B   
{
    public:
      void say()
      {
        cout<<"Wasssup guyzz !! "<<endl;
      }
};


int main()
{
    Base1 b1;
    b1.greet();

    Base2 b2;
    b2.greet();

    Derived d1;
    d1.greet();

    B b;
    b.say();

    D d;
    d.say();

    return 0;
}
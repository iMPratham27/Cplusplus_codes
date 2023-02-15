# include <iostream>
using namespace std;

class Employee 
{
    private:
     int a ,b ,c ;
    public:
     int d ,e ;
     
     void setData(int a1, int b1, int c1)
     {
        a=a1;
        b=b1;
        c=c1;
     } 
     void getData() //print
     {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
     } 
};


int main()
{
    Employee pratham; //here pratham is an object 
    pratham.d=4;
    pratham.e=5;
    pratham.setData(1,2,3);
    pratham.getData();
    return 0;
    
}
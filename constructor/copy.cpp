# include <iostream>
using namespace std;

class Copy
{
    private:
      int a,b ;

    public:
      Copy(int a1, int b1)
      {
        a=a1;
        b=b1;

      }

      Copy(const Copy &p2)  // copy constructor
      {
        a=p2.a ; b=p2.b ;
      }

      int getA()
      {
        return a;
      }

      int getB()
      {
        return b;
      }
};

int main()
{
    Copy c1(10,20);
    Copy c2=c1;
    cout<<"c1.a= "<< c1.getA() <<" c1.b= "<< c1.getB() <<endl;
    cout<<"c2.a= "<< c2.getA() <<" c2.b= "<< c2.getB() <<endl;
    return 0 ;
}
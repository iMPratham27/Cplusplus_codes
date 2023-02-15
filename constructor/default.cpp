/* Contructor=> -it is special function with same name as that of class
                -it is used to initialize the objects
                -it is automatically invoked whenever an object is created
                -should be declared in public section  
    Default constructor=> it takes no parameter            
*/
# include <iostream>
using namespace std;

class Complex
{
    private:
    int a ,b ;

    public:

    Complex(void) // default constructor 
    {
        a=12;
        b=23;
    }
    
    void printNumber()
    {
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};


int main ()
{
    Complex c;
    c.printNumber();
    return 0;
}

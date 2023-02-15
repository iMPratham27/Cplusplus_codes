# include <iostream>
# include <string.h>
using namespace std;

class String
{
    char str[20];
    public:
        void read()
        {
            cout<<"Enter a string = ";
            cin>>str;
        }
        int operator ==(String X)  // == operator is overloaded
        {
            if(strcmp(str,X.str)==0)  //strcmp = predefined function in string.h
              return 1;
            else
              return 0;  
        }
};

int main()
{
    String s1,s2;
    s1.read();
    s2.read();

    if(s1==s2)
    {
        cout<<"Both strings are equal"<<endl;
    }
    else
    {
        cout<<"Both strings are not equal"<<endl;
    }
    
    return 0;
}
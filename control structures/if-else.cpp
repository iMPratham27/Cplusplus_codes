#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"tell me your age: "<<endl;
    cin>>age;

    if(age<18)
    {
        cout<<"buddy you're not allowed"<<endl;
    }
    
    else if(age==18)
    {
        cout<<"kid you can come to the party"<<endl;
    }

    else
    {
        cout<<"welcome to the party"<<endl;
    }


    return 0;
}
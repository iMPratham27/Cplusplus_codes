# include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n1,n2;
        cin>>n1>>n2;

        if(n1<n2)
        {
            cout<<"FIRST"<<endl;
        }

        else if(n1==n2)
        {
            cout<<"ANY"<<endl;
        }

        else{
            cout<<"SECOND"<<endl;
        }
    }

    return 0 ;
}
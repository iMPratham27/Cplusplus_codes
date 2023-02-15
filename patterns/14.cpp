# include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n= ";
    cin>>n;

    int i=1;
    char value='A';

    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            value=value+1;
            cout<<value<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
    return 0;

}
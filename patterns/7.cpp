/*
1
22
333
4444
*/
# include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter value of n: ";
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
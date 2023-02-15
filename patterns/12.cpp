// some error

# include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int i=1;
    char value='A';

    while(i<=n)
    {
      int j=1;
      while(j<=n)
      {
        
        value = value + 1;
        cout<<value<<" ";
        
        j=j+1;
      }
      cout<<endl;
      i=i+1;
    }
    return 0;
}
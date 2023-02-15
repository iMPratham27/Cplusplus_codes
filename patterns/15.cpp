/*
   $
  $$
 $$$
$$$$  
for this first print space and then $*/
# include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int space = n-i;    // printing space
        while(space)
        {
            cout<<" ";
            space=space-1;
        }

        int j=1;          // printing $
        while(j<=i)
        {
            cout<<"$";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
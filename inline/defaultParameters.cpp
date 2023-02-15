# include <iostream>
using namespace std ;

// default Parameters 
//here c & d are default parameters 
// default arguments should be written from rightmost to left
int sum(int a ,int b ,int c=0 ,int d=5)
{
    return(a+b+c+d);
}

int main()
{
    cout<<"The sum of 1,2,3,4 is: "<<sum(1,2,3,4)<<endl;

    cout<<"The sum of 3,4 is: "<<sum(3,4);

    return 0;
}
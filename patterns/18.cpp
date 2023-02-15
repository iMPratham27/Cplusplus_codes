/*
1234554321
1234**4321
123****321
12******21
1********1
*/
#include <iostream>
using namespace std;

int main()
{
   
  int n;
  cin>>n;
  int row=1;
  
  
  while(row<=n){
      
      //first triangle
      int col=1;
      while(col<=n-row+1){
          cout<<col;
          col++;
      }
      //star print (second triangle)
      int star=2*(row-1);
      while(star){
          cout<<"*";
          star--;
      }
      
       //third triangle
       
        col=1;
      while(col<=n-row+1){
          cout<<(n-row-col+2);
          col++;
      }


     
     
      cout<<endl;
     row++;
  }
  

    return 0;
}
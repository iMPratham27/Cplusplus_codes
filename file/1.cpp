#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //connecting our file with out stream
    ofstream out("sample.txt");
    
    //creating a name string & filling it with string entered by user
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    
    //writing a string to the file
    out<<name + " is my name";

    out.close();

    ifstream in("sample.txt");
    string content;
    in>>content;
    cout<<"The content of this file is: "<<content;
    in.close();

    return 0;
}
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample2.txt");
    out<<"This is me!!";
    out.close();

    ifstream in;
    string st;
    in.open("sample2.txt");

    while(in.eof()==0)      // eof=end of file
    {
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();

    return 0;
}
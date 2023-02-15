#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v)
{
    cout<<"\nElements in vector=>";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>vec1;
    int element,size;
    cout<<"\nEnter the size of vector: ";
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cout<<"\nEnter element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);
    }

    display(vec1);

    cout<<endl;

    vector<int> :: iterator itr=vec1.begin();
    vec1.insert(itr,69);
    display(vec1);
}
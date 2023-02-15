// Structure ->  are a way to group several related variables into one place
// Unlike an array, a structure can contain many different data types (int, string, bool, etc)

# include <iostream>
using namespace std;

struct employee
{
    int id;
    char favChar;
    float salary;
};

int main ()
{
    struct employee pratham;
    pratham.id=7;
    pratham.favChar ='s';
    pratham.salary = 120000;

    cout<<"The id of Pratham is: "<<pratham.id<<endl;
    cout<<"The favChar of Pratham is: "<<pratham.favChar<<endl;
    cout<<"The salary of Pratham is: "<<pratham.salary<<endl;

    return 0 ;

}
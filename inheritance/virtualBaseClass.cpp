# include <iostream>
using namespace std;

/*
           student
       ______|______
      |             |
     test          sport
      |______ ______|
             |
          result 
*/

class Student
{
    protected:
     int roll_no;
    public:
     void set_num(int a)
     {
        roll_no=a;
     }

     void get_num()
     {
        cout<<"Your roll no is: "<<roll_no<<endl;
     } 

};

class Test : virtual public Student 
{
    protected:
      float maths , physics ;
    public:
      void set_marks(int m1,int m2)
      {
        maths=m1;
        physics=m2;
      }

      void get_marks()
      {
        cout<<"Marks in maths are: "<<maths<<endl;
        cout<<"Marks in physics are: "<<physics<<endl;
      }
};

class Sport : virtual public Student
{
    protected:
      int score;
    public:
      void set_score(int sc)
      {
        score=sc;
      }

      void get_score()
      {
        cout<<"Your PT score is: "<<score<<endl;
      }  
};

class Result : public Test , public Sport 
{
    private:
      float total;
    public:
      void display()
      {
        total=maths + physics + score;
        cout<<"The final result is: "<<total<<endl;
        get_num();
        get_marks();
        get_score();
      }
};

int main()
{
    Result pratham;
    pratham.set_num(7);
    pratham.set_marks(94,92);
    pratham.set_score(9);
    pratham.display();

}
#include<iostream>
using namespace std;
class assignment3
{
    private:
        int rollno;
        string name;
        int marks;

    public:
        void initstudent()
        {
            rollno=1;
            name="NIRAJ";
            marks=100;
            cout<<"Rollnumber: "<<rollno<<endl<<"NAME: "<<name<<endl<<"MARKS"<<marks<<endl;
        }
        void acceptStudentFromConsole()
        {
            cout<<"enter ROLL NO:";
            cin>>rollno;
            cout<<"enter NAME:";
            cin>>name;
            cout<<"enter MARKS:"<<endl;
            cin>>marks;
        }
        void printStudentOnConsole()
        {
            cout<<"roll no:"<<rollno<<endl;
            cout<<"NAME:"<<name<<endl;
            cout<<"Marks:"<<marks<<endl;

        }
        void enterchoice()
        {
            int choice=1;
            
            while(choice != 0)
            {
            cout<<"\n Enter your choice:  \n1: DEFAULT VALUE \n2 Accept student information \n3 print data \n";
            cin>>choice;
                switch(choice)
                {
                    case 0: break;
                    case 1: initstudent();
                    break;
                    case 2: acceptStudentFromConsole();
                    break;
                    case 3: printStudentOnConsole();
                    break;
                    default: cout<<"\n wrong choice\n";
                }

                }
            }
        };

int main()
{
    assignment3 a;
    a.enterchoice();
    return 0;
}
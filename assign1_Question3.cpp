#include<iostream>
using namespace std;

class Student{
    
    private:
        int roll_num;
        string name;
        int marks;

    public:
        void initStudent()
        {

            this->roll_num = 10;
            this->name = "Hrishi";
            this->marks = 12;
        }

        void printDateOnConsole()
        {
            cout<< "Roll no: " << roll_num;
            cout<< "Name: " << name;
            cout<< "Marks: " << marks;
        }

        void acceptStudentFromConsole()
        {
                cout << "Enter Roll no: ";
                cin >> roll_num;
                cout << "Enter Name: ";
                cin >> name;
                cout << "Enter Marks: ";
                cin >> marks;
        }
        void Menu()
        {
            int choice=1;
            
            cout << "Enter your choice below";
            cout << "\n0. For Exit";
            cout << "\n1. For Setting the datamembers to the default values";
            cout << "\n2. For Printing the current date on the console";
            cout << "\n3. For accepting date from the user \n";
            cin >> choice;

            while(choice != 0)
            {
            
                switch(choice){   
                    case 1: initStudent();
                        break;
                    case 2: printDateOnConsole();
                        break;
                    case 3: acceptStudentFromConsole();
                        break;
                    default: 
                       cout << "Please enter a valid choice";
                       }
                    

            }
        }
        
        


};

int main()
{
    Student S1;
    S1.Menu();
    return 0;
}
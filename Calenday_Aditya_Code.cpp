#include <iostream>

using namespace std;

struct Date{
    int day;
    int month;
    int year; 
};
void initDate(struct Date* ptrDate)
{   ptrDate->day = 23;
    ptrDate->month = 5;
    ptrDate->year = 2002;
    cout<<"\nThe date is successfully saved to default...:)";
    
}
void printDateOnConsole(struct Date* ptrDate){
    cout<<"\nCurrent date is"<<ptrDate->day<<" : "<<ptrDate->month<<" : "<<ptrDate->year; 
}
void acceptDateFromConsole(struct Date* ptrDate){
    int count =0;
    while(true){
        if(count == 0){
            cout<<"\nEnter Month";
            cin>>ptrDate->month;
            if(ptrDate->month>12 || ptrDate->month<1){
                cout<<"\nEnter month between 1 and 12";
                continue;
            }
            count++;
        }
        cout<<"Enter Day";
        cin>>ptrDate->day;
        if(ptrDate->month ==1 || ptrDate->month ==3 || ptrDate->month ==5 || ptrDate->month ==7 || ptrDate->month ==8 || ptrDate->month ==10 || ptrDate->month ==12){
            if(ptrDate->day<=31){
                break;
            }
            else{
                cout<<"\nEnter day between 1 to 31\n";
                continue;
            }
        }
        if(ptrDate->month ==2){
            if(ptrDate->day==28 ||ptrDate->day == 29){
                break;
            }
            else{
                cout<<"\nEnter day between 1 to 28 for non leap year and 1 to 29 for leap year";
                continue;
            }
        }
        else{
            if(ptrDate->day<=30){
                break;
            }
            else{
                cout<<"Enter day between 1 to 30";
                continue;
            }
        }
    }    
    cout<<"Enter year";
    cin>>ptrDate->year;
        
}

void enterChoice(struct Date* s1){
    int choice=1;
    while(choice!=0){
        cout<<"\nEnter your choice:\n1 : add date\n2 : Show date\n3 : set date to default\n";
        cin>>choice;
        switch(choice){
            case 1: acceptDateFromConsole(s1);
                    break;
            case 2: printDateOnConsole(s1);
                    break;
            case 3: initDate(s1);
                    break;
            default: cout<<"\nWrong choice";  
                    break;              
        }
    }
}

bool isLeap(int year){
    if(year%100!=0 && year%4==0){
        return true;
    }
    else if(year%100==0 && year%400==0){
        return true;
    }
    return false;
}


int main(){
    struct Date s1;
    enterChoice(&s1);
    cout<<"Thank you bhaiiLog...";
    return 0;
    

}
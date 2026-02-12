#include <iostream>
using namespace std;
class Employee
{
    public:
    string name;
    int salary;
    string badge;
    
    void display(){
         if(salary>=60000){
            badge = "Excelent";
        }
        else if(salary<60000 && salary>=40000){
            badge = "Good";
        }
        else if(salary<40000 && salary>=20000){
            badge = "Average";
        }
        else{
            badge = "Weak";
        }
        cout<<name<<" "<<salary<<" "<<badge;
    }
};

int main()
{
    string name1;
    int salary1;
    string badge1;
    
    cout<<"Enter Your Name:"<<endl;
    cin>>name1;
    
    cout<<"Enter Your Salary:"<<endl;
    cin>>salary1;
    
    
    Employee e1;
    
    e1.name = name1;
    e1.salary = salary1;
    e1.badge = badge1; 
    
    e1.display();
    return 0;
}
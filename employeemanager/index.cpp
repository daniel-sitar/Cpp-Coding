#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    struct employee{
        int id;
        string firstName;
        string lastName;
        string department;
        int salary;
        string performance;
    };

    map<int, employee> workers;

    int workerAddAmount;
    cout << "How many workers do you want to add? : ";
    cin >> workerAddAmount;

    
    for(int i = 1; i <= workerAddAmount; i++){
        cout << "First name : ";
        string firstName;
        cin >> firstName;
        cout << "Second name : ";
        string secondName;
        cin >> secondName;
        cout << "Department : ";
        string department;
        cin >> department;
        cout << "Salary : ";
        int salary;
        cin >> salary;

    }
    






    return 0;
}
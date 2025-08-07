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
    };

    map<int, employee> workers;

    int workerAddAmount;
    cout << "How many workers do you want to add? : ";
    cin >> workerAddAmount;
    
    for(int i = 1; i <= workerAddAmount; i++){
        cout << "First name : ";
        string firstName;
        cin >> firstName;
        cout << "Last name : ";
        string lastName;
        cin >> lastName;
        cout << "Department : ";
        string department;
        cin >> department;
        cout << "Salary : ";
        int salary;
        cin >> salary;
        int id = workers.size() + 1;

        workers[id] = employee{id,firstName,lastName,department,salary};
    };
    int size = workers.size();
    for(int n = 1; n <= size; n++){
        cout << workers[n].id << "\n";
        cout << workers[n].firstName << "\n";
        cout << workers[n].lastName << "\n";
        cout << workers[n].department << "\n";
        cout << workers[n].salary << "\n";
    };

    return 0;
}
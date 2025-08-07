#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    map<int,string>users;
    users.insert({1,"Adam"});
    users.insert({2,"Ben"});
    users.insert({3,"Sam"});
    users.insert({4,"Joel"});
    users.insert({5,"Lizzie"});

    cout << "There is " << users.size() << " " << "entries";
    for(auto user : users){
        cout << "The user id is : " << " " << user.first << "\n";
        cout << "The username is : " << " " << user.second << "\n";
    }

    return 0;
}
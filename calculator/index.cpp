#include <iostream>
#include <string>
using namespace std;

void add(int x, int y) {
  cout << "Result : " << x+y;
}

void subtract(int x, int y){
    cout << "Result : " << x-y;

}
void multiply(int x, int y) {
  cout << "Result : " << x*y;
}

void divide(int x, int y){
    cout << "Result : " << x/y;

}

int main() {
    int firstNum,secondNum;
    cout << "Type in the first number :";
    cin >> firstNum;
    cout << "Type in seocond number :";
    cin >> secondNum;
    cout << "Please type in the operator that you wish to use (+,-,*,/) :";
    string userInput;
    cin >> userInput;

    if(userInput == "+" ){
        add(firstNum,secondNum);
    }
    else if(userInput ==  "-" ){
        subtract(firstNum,secondNum);
    }
    else if(userInput ==  "*" ){
        multiply(firstNum,secondNum);
    }
    else if(userInput ==  "/" ){
        divide(firstNum,secondNum);
    }
    else{
        cout << "The operator you typed doesn\'t exist";
    }







  return 0;
}
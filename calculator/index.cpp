#include <iostream>
#include <string>
using namespace std;

void Plus(int x, int y) {
  cout << "Result : " << x+y;
}

void Subtract(int x, int y){
    cout << "Result : " << x-y;

}
void Multiply(int x, int y) {
  cout << "Result : " << x*y;
}

void Divide(int x, int y){
    cout << "Result : " << x/y;

}
int main() {
  Plus(5,7);
  return 0;
}
#include <iostream>
#include <string>
using namespace std;

//function declaration syntax
/*
   return-type function-name (parameter-list) {
      function-body
   }
*/

//declare a function
//1st type: function without parameter and no return value
void sayHello() {
    cout << "Hello World!\n";
}
//2nd type: function with parameter but no return value
void sayWelcome(string name) {    //name : parameter
    cout << "Welcome " << name << " to Vietnam !\n";
}
//3rd type: function without parameter but return value
int getCurrentYear() {
    return 2024;
}
//4th type: function with parameter and also return value
double calculateTotal(double a, double b) {
    return a + b;
}

int main()
{
    //call a function
    cout << "Total of 5.8 and 7.9 is " << calculateTotal(5.8, 7.9) << endl;
    cout << "We are living in  " << getCurrentYear() << endl;
    sayWelcome("Joe Biden");      //Joe Biden : argument
    sayHello();
}
 
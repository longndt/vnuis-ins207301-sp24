#include <iostream>
#include <string>
using namespace std;

int main()
{
    //conditional structure : if else, switch case
    //task: return student year based on user's input (1-4)
    int student_year;
    cout << "Enter your student year (1-4): ";
    cin >> student_year;
    switch (student_year)
    {
    case 1:
        cout << "You are first-year student\n";
        break;  //never forget this
    case 2:
        cout << "You are second-year student\n";
        break;  //never forget this
    case 3:
        cout << "You are third-year student\n";
        break;  //never forget this
    case 4:
        cout << "You are last-year student\n";
        break;  //never forget this
    default:
        cout << "Invalid input\n";
        break;
    }

    //task: return health status based on BMI value
    /*
    Underweight = <18.5              => if
    Normal weight = 18.5–24.9        => else if
    Overweight = 25–29.9             => else if
    Obesity = BMI of 30 or greater   => else
    */
    cout << "Enter your BMI value: ";
    double bmi;
    cin >> bmi;
    if (bmi < 18.5 && bmi > 0)
        cout << "You are underweight\n";
    else if (bmi >= 18.5 && bmi <= 24.9)
        cout << "You are normal weight\n";
    else if (bmi >= 25 && bmi <= 29.9)
        cout << "You are over weight\n";
    else   //bmi >= 30.0
        cout << "You are obesity\n";

    //cout: output (machine => human)
    //cin : input  (human   => machine)
    cout << "What is your city ? ";
    string city;
    //cin >> city;   //only use for "non-space" response
    getline(cin, city);  //can be used to work for response with space
    cout << "How old are you ? ";
    int age;
    cin >> age;
    cout << "You are " << age << " years old now\n";
    cout << "You are living in " << city << endl;


    /* 2 ways to move to new line
    * 1st: \n
    * 2nd: endl
    */
    cout << "Hello World!\n";  //double quotes around string (text)
    cout << "Today is Thursday" << endl;
    cout << "We are learning C++\n";
    //cout << 'Coding is interesting'; => Incorrect: single quotes
    //cout << "Hanoi is the capital of Vietnam" => Incorrect: missing semicolon

    int year = 2024;
    //quotes around variable name => display variable's name only
    //no quotes around variable name => display variable's value
    cout << year << endl; 
    string is = "VNU IS";  //remember to include string library first
    cout << is << " is a member of VNU";
}

 

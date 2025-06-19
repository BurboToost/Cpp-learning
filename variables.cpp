#include<iostream>

int main()
{
    //int x; // declaration
    //x = 5; // aignment
    int x = 5;
    int y = 6;
    int sum = x + y;

    //integer (whole number)
    int age = 21;
    int days = 7;
    int year = 2025;

    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    //single character
    char grade = 'A';
    char initial = 'C';
    char sign = '$';

    // boolean (true or false)
    bool student = false;
    bool power = true;
    bool forsale = true;
     
    // string (object that represents a sequence of text
    std::string name = "Apon";
    std::string day = "Friday";
    std::string food = "Biriyani";
    std::string address = "12th Cumilla";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old." << '\n';



    //std::cout << x << '\n';
    //std::cout << y << '\n';
    //std::cout << sum << '\n';

    return 0;
}
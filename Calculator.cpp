//Cristian Del Cid
//1/27/2026
//COSC 1436 V02 Spring 2026

/*
This program is going to use scanf () function to read two intigers and then
calculate the sum, difference, product, quotient, abd reminder as results.
Afterwards, the if statements will be used to compare these two numbers with
relational operators.
*/

#include<iostream> //library package
using namespace std;

int main()
{
//declare variables 
int number1, number2; 
int sum; 
int lenght, width; //for rectnagle
int area;
int product;
int remainder;
int differnece;
int quotient;


cout << "Part I: Finding sum, difference, product, quotient, and remainder of two numbers";
cout << endl;
cout << "Enter the first intiger:\n"; //prompting user
cin >> number1; //reading first intiger

cout << "Enter the second intiger:\n"; //promnting user
cin >> number2; //reading second intiger

sum = number1 + number2; //adding two and save it to sum

cout <<number1 << "+" << number2 << "=" << sum << endl;

cout<< "\nPart II: Using if statements to compare number1 and number2\n" << endl; 

if (number1 > number2)
    cout << number1 << " is greater than " << number2 << endl; 

if (number1 < number2)
    cout<< number1 << " is less than " << number2 << endl;

if (number1 == number2)
    cout << number1 << " equals " << number2 << endl; 

if (number1 != number2)
    cout << number1 << " does not equal " << number2 << endl;  

if (number1 > 0 ) 
cout << "Positive number";

else 
cout << "Negative number";

    cout << "\nPartIII ; calculating are of rectangle.\n" << endl;

    cout << "Please enter te length and width for a rectangle in feet:" <<endl;// prompting
    cin >> lenght >> width;

    area =lenght * width;

    cout << "\nThis is the area of your rectangle " << area << " square feet " << endl; 
    cout << "\n";
   
   cout << "calculate and print out the product between number1 and number2" << endl;
    cout<< "\n";
   
   cout << "Enter first intiger:";
    cin >> number1;

    cout << "\nEnter second intiger:";
    cin >> number2;

    product = number1 * number2;

    cout << "\nThe product is:  " << product << endl; 

    cout << "\nCalculate and print out the remainder between number 1 and number 2"; 
    cout << "\n";

    cout << "Enter first intiger:"; 
    cin >> number1;

    cout << "\nEnter second intiger:";
    cin >> number2; 

    remainder = number1 % number2; 
    cout << "\n";
    cout << "the remainder is:  " << remainder << endl; 
    
    cout << "calculate and print out the difference between number 1 and number 2:"; 
    cout << "\n";
    cout << "Enter first intiger:"; 
    cin >> number1;
    cout << "\n";

    cout << "Enter second intiger:";
    cin >> number2;
    cout <<"\n";
    
    differnece = number1 - number2; 

    cout << "the difference is :" << differnece << endl;

    cout << "\ncalculate and print out the quiotient between number 1 and number 2"; 
    cout << "\n";
    cout << "\nEnter first intiger:";
    cin >> number1;
    cout << "\n";

    cout << "Enter second intiger";
    cin >> number2;
    cout <<"\n";

    quotient = number1/number2;

    cout << "The quotient is:" << quotient << endl;


system("pause");
return 0;
}

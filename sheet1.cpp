
#include <iostream>
using namespace std;
int main()
{
//---------------------------------------------------------
/*                     sheet 1
 ICPC Problem solving 
 12 problem level 0
 16/11/ 2026
 *https://docs.google.com/document/d/1gOsPO464cAqVHiRqJCWcgurIjBjL_oF9FNyoSJsMLjA/edit?tab=t.0#heading=h.fddvzsz11m0o*
*/
//---------------------------------------------------------
/*              problem 1
Circle Area
*/
cout << "Enter a radius = ";
float radius;
float area;
cin >> radius;
area = 3.14 * radius * radius;
cout << area << endl;

//---------------------------------------------------------
/*              problem 2
Average of Three Numbers
*/
float num1, num2, num3;
float av;
cout << "Enter num 1 " << endl;
cin >> num1;
cout << "Enter num 2 " << endl;
cin >> num2;
cout << "Enter num 3 " << endl;
cin >> num3;
av = (num1 + num2 + num3) / 3;
cout << "The average is: " << av << endl;

//---------------------------------------------------------
/*              problem 3
Swap Two Numbers
*/
int A, B, temporary;
cout << "Enter A = " << endl;
cin >> A;
cout << "Enter B = " << endl;
cin >> B;
temporary = A;
A = B;
B = temporary;
cout << "A = " << A << endl;
cout << "B = " << B << endl;

//---------------------------------------------------------
/*              problem 4
Simple Calculator
*/
float num4, num5;
char op;

cout << "Enter num 4 " << endl;
cin >> num4;
cout << "Enter operation " << endl;
cin >> op;
cout << "Enter num 5 " << endl;
cin >> num5;

if (op == '+') {
    cout << num4 + num5 << endl;
}
else if (op == '-') {
    cout << num4 - num5 << endl;
}
else if (op == '*') {
    cout << num4 * num5 << endl;
}
else if (op == '/') {
    if (num5 == 0) {
        cout << "Cannot divide by zero" << endl;
    }
    else {
        cout << num4 / num5 << endl;
    }
}

//---------------------------------------------------------
/*              problem 5
Positive, Negative, or Zero
*/
int E;
cout << "Enter a number = " << endl;
cin >> E;

if (E > 0) {
    cout << "Positive" << endl;
}
else if (E < 0) {
    cout << "Negative" << endl;
}
else {
    cout << "Zero" << endl;
}

//---------------------------------------------------------
/*              problem 6
Grade Calculator
*/
float mark;
cout << "please enter your mark ";
cin >> mark;

if (mark >= 90 && mark <= 100) {
    cout << "Excellent" << endl;
}
else if (mark >= 80 && mark < 90) {
    cout << "Very Good" << endl;
}
else if (mark >= 70 && mark < 80) {
    cout << "Good" << endl;
}
else if (mark >= 50 && mark < 70) {
    cout << "Pass" << endl;
}
else if (mark < 50 && mark >= 0) {
    cout << "Fail" << endl;
}

//---------------------------------------------------------
/*              problem 7
Largest of Two Numbers
*/
float L, S;
cout << "please enter first number " << endl;
cin >> L;
cout << "please enter second number " << endl;
cin >> S;

if (L > S) {
    cout << L << endl;
}
else if (L < S) {
    cout << S << endl;
}
else if (L == S) {
    cout << S << endl;
}

//---------------------------------------------------------
/*              problem 8
Temperature Converter
*/
float temp, Fahrenheit;
cout << "please enter temperature in Celsius" << endl;
cin >> temp;
Fahrenheit = (temp * 9 / 5) + 32;
cout << "temperature in Fahrenheit = " << Fahrenheit << endl;

//---------------------------------------------------------
/*              problem 9
Simple Login
*/
string username;
string password;

cout << "please enter a username ";
cin >> username;
cout << "please enter a password ";
cin >> password;

if (username == "admin" && password == "1234") {
    cout << "Login successful" << endl;
}
else {
    cout << "Invalid username or password" << endl;
}

//---------------------------------------------------------
/*              problem 10
Age Permission
*/
int age;
cout << "please enter your age" << endl;
cin >> age;

if (age < 13 || age > 60) {
    cout << "Special Permission" << endl;
}
else {
    cout << "Regular Permission" << endl;
}

//---------------------------------------------------------
/*              problem 11
Shopping Bill
*/
float price, totalafter, discount, totalbefore;
int quantity;

cout << "enter the price of product" << endl;
cin >> price;
cout << "enter the quantity of product" << endl;
cin >> quantity;

discount = 0;
totalbefore = price * quantity;
totalafter = totalbefore;

if (totalbefore >= 1000) {
    totalafter = (totalbefore * 90) / 100;
    discount = totalbefore - totalafter;
}

cout << "Total: " << totalbefore << endl;
cout << "Discount: " << discount << endl;
cout << "Final Price: " << totalafter << endl;

//---------------------------------------------------------
return 0;
}

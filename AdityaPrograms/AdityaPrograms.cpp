// AdityaPrograms.cpp : Defines the entry point for the console application.
//All the programs in one file

#include "stdafx.h"
#include<iostream>
#include<Windows.h>
#include<cmath>//#include<math.h>
//#include<conio.h>
using namespace std;

void one()
{
	int ctr = 0;
	cout << "Hello program spectator, please take your seats.\nGet ready to enjoy my game. It\'s very fun game.\nYou have to do some simple tasks:- \n";
	int a;
	cout << "1. Test your eye power\nCount number of lines in this program:- \n - - - - -\n>";
	cin >> a;
	if (a == 5)
	{
		cout << "Wrong, You are blind! There are 7 lines\n";
		cout << "One from \"task:-\" and another from \"program:-\":-)";
		ctr += 2;
	}
	else if (a != 7)
	{
		cout << "Count properly you blind man!\n";
	}
	else
	{
		cout << "Good boy\n";
		ctr += 5;
	}

	int b, as;
	cout << "2. Test your math:- \nAdd the following numbers\n8 6 7\n>";
	cin >> b;
	if (b == 21)
	{
		do
		{
			cout << "Same mistake again?\nCheck that I'm included \"1.\" and \"2.\"in this program";
			cout << "\nBe honest!\n1. Sorry, I've not seen!\n2. I was confident with my answer anyhow. Proceed\n>";
			cin >> as;
			if (as == 1)
			{
				cout << "Okay, wrong answer you've typed!";
				ctr += 2;
			}
			else if (as == 2)
			{
				cout << "Correct answer!\n";
				ctr += 5;
			}
			else
			{
				cout << "Type again...";
			}
		} while (as != 1 && as != 2);
	}
	else if (b == 24)
	{
		cout << "Don't be oversmart! I've asked for following program!\nWrong amswer!";
		ctr += 2;
	}
	else cout << "You are poor in maths\nYou maybe came wrong place to see program\nWrong answer!";

	int c;
	cout << "\nHow many programs are there in this program?\n>";
	cin >> c;
	if (c == 6)
	{
		cout << "You are legend observer!";
		ctr += 5;
	}
	else if (c == 3)
	{
		cout << "Not number of questions! Count the word 'program'";
		ctr += 2;
	}
	else cout << "Blunder! Why Wrong Answer? Answer correctly!";
	cout << "\nYour score is " << ctr << endl;
}

void two()
{
	float a = 0.0; //here we declare the variables and use float because we
	float b = 0.0; //are dealing with square roots
	float c = 0.0;
	float x1 = 0.0;
	float x2 = 0.0;
	float x3 = 0.0;
	float x4 = 0.0;

	//this section gets user input and displays message
	cout << "Enter the coefficients a , b , c for equation in the form ax^ + bx + c = 0:\n";
	cout << "Enter value for a:\n";
	cin >> a;
	cout << "Enter value for b:\n";
	cin >> b;
	cout << "Enter value for c:\n";
	cin >> c;

	//are all the coefficients 0? if so both roots are 0
	if (a == 0 && b == 0 && c == 0) {
		x1 = 0;
		x2 = 0;
		cout << "The roots are:"
			"\n"
			<< "x1 = " << x1 << " , "
			<< "x2 = " << x2 << "\n";
	}

	//is c the only non-zero number? if so tell the user
	if (a == 0 && b == 0 && c != 0) {
		c = c;
		cout << "There are no roots"
			"\n"
			<< "c = " << c << "\n";
	}
	//is a zero? if so solve the resulting linear equasion and notify user
	if (a == 0 && b != 0 && c != 0) {
		cout << "The values entered do not make a quadratic expression"
			"\n"
			<< "x = " << -c / b << "\n";
	}

	//if b is zero and c is zero tell user
	if (a == 0 && b != 0 && c == 0) {
		x1 = 0;
		x2 = 0;
		cout << "The roots are:"
			"\n"
			<< "x1 = " << x1 << " , "
			<< "x2 = " << x2 << "\n";
	}
	//if b and c are equal to zero then ax^=0 and since a cannot be zero without x being
	// zero also let user know
	if (a != 0 && b == 0 && c == 0) {
		x1 = 0;
		x2 = 0;
		cout << "The values entered result in ax^= 0; so both roots are 0"
			"\n"
			<< "x1 = " << x1 << " , "
			<< "x2 = " << x2 << "\n";
	}
	//factor out x from ax^+bx=0 and either x = 0 or ax + b =0
	//then solve the linear equation
	if (a != 0 && b != 0 && c == 0) {
		x1 = 0;
		x2 = -b / a;
		cout << "The roots are:"
			"\n"
			<< "x1 = " << x1 << " , "
			<< "x2 = " << x2 << "\n";
	}

	//now we get to use the square root function and let the user
	//know they have some imaginary numbers to deal with
	if (a < 0 && b == 0 && c < 0) {

		x1 = -b / (2 * a);
		x4 = (b * b) - (4 * a * c);
		x4 = -x4;
		x2 = sqrt(x4) / (2 * a);
		x3 = -sqrt(x4) / (2 * a);

		cout << "The roots are not real numbers:"
			"\n"

			<< "x1 =" << x1 << " + " << x2 << " * i "
			<< "\n"
			<< "x2 =" << x1 << " + " << x3 << " * i "
			<< "\n";
	}

	if (a > 0 && b == 0 && c > 0) {

		x1 = -b / (2 * a);
		x4 = (b * b) - (4 * a * c);
		x4 = -x4;
		x2 = sqrt(x4) / (2 * a);
		x3 = -sqrt(x4) / (2 * a);

		cout << "The roots are not real numbers:"
			"\n"

			<< "x1 =" << x1 << " + " << x2 << " * i "
			<< "\n"
			<< "x2 =" << x1 << " + " << x3 << " * i "
			<< "\n";
	}
	//now a and c are opposite signs so the answer will be real

	if (a > 0 && b == 0 && c < 0) {

		x1 = (-b + (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);
		x2 = (-b - (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);

		cout << "The roots are:"
			"\n"
			<< "x1 =  " << x1 << " , "
			<< "x2 = " << x2 << "\n";
	}
	if (a < 0 && b == 0 && c > 0) {

		x1 = (-b + (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);
		x2 = (-b - (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);

		cout << "The roots are:"
			"\n"
			<< "x1 =  " << x1 << " , "
			<< "x2 = " << x2 << "\n";
	}

	//ok now if we end up not having to take the square root of a neg
	// do the math
	if (a != 0 && b != 0 && c != 0 && (4 * a * c) <= pow(b, 2)) {

		x1 = (-b + (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);
		x2 = (-b - (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);

		cout << "The roots are:"
			"\n"
			<< "x1 = " << x1 << " , "
			<< "x2 = " << x2 << "\n";
	}

	//here we have to deal with non x intercepts ie: sqrt(-1)
	// alter the formula slightly to give correct output and
	// let the user know
	if (a != 0 && b != 0 && c != 0 && (4 * a * c) > pow(b, 2)) {

		x1 = -b / (2 * a);
		x4 = (b * b) - (4 * a * c);
		x4 = -x4;
		x2 = sqrt(x4) / (2 * a);
		x3 = -sqrt(x4) / (2 * a);

		cout << "The roots are not real numbers"
			"\n"

			<< "x1 =" << x1 << " + " << x2 << " * i "
			<< "\n"
			<< "x2 =" << x1 << " + " << x3 << " * i "
			<< "\n";
	}
}

void three()
{
	int num1, num2;
	char opr, a;
	do {
		cout << "Enter first integers: ";
		cin >> num1;
		cout << endl;
		cout << "Enter operator: + (addition), - (subtraction)," << " * (multiplication), / (division): ";
		cin >> opr;
		cout << endl;
		cout << "Enter second integers: ";
		cin >> num2;
		cout << endl;
		cout << num1 << " " << opr << " " << num2 << " = ";
		switch (opr) {
		case '+':
			cout << num1 + num2 << endl;
			break;
		case'-':
			cout << num1 - num2 << endl;
			break;
		case'*':
			cout << num1 * num2 << endl;
			break;
		case'/':
			if (num2 != 0)
				cout << num1 / num2 << endl;
			else
				cout << "ERROR \nCannot divide by zero" << endl;
			break;
		default:
			cout << "Illegal operation" << endl;
		}
		cout << "Hit y to continue calculation or n to exit\n(y/n): ";
		cin >> a;
		switch (a) {
		case'y':
			cout << "Rerunning the program...\n";
			break;
		case'Y':
			cout << "Rerunning the program...\n";
			break;
		case'n':
			cout << "\nThank You for using my calculator. \n";
			break;
		case'N':
			cout << "\nThank You for using my calculator. \n";
			break;
		}
	} while (a == 'y' || a == 'Y');
}

void four()
{
	float p, r, t, si, ci;//Declaration of variables
	cout << "Enter Principal: ";
	cin >> p;
	cout << "\nEnter Rate per annum: ";
	cin >> r;
	cout << "\nEnter number of years: ";
	cin >> t;
	si = (p * r * t) / 100;
	ci = p * pow((1 + r / 100), t) - p;
	cout << "\nYour Simple interest is: " << si << "\nYour Compound Interest is: " << ci;
}

void five()
{
	float s1, s2, s3, s, p, a;/*s1,s2,s3,s,p,a stands for first side, second side,
							  third side, semi-perimeter, perimeter, areas respectively*/
	cout << "Enter the first side:- ";
	cin >> s1;
	cout << "\nEnter the second side:- ";
	cin >> s2;
	cout << "\nEnter the third side:- ";
	cin >> s3;
	s = (s1 + s2 + s3) / 2;
	p = s1 + s2 + s3;
	a = sqrt(s*(s - s1)*(s - s2)*(s - s3));
	cout << "\nPerimeter= " << p;
	cout << "\n Area= " << a;
}

void six()
{
	float a, b, c, D, r1, r2;
	cout << "\nEnter the coefficient of x^2:";
	cin >> a;
	cout << "\nEnter the coefficient of x:";
	cin >> b;
	cout << "\nEnter the constant:";
	cin >> c;
	cout << "\nQuadratic equation is:\n" << a << "x^2" << "+" << b << "x" << "+" << c;
	D = pow(b, 2) - (4 * a * c);
	if (D > 0)
	{
		cout << "\nTwo unequal roots are there:";
		r1 = (-b + sqrt(D)) / (2 * a);
		r2 = (-b - sqrt(D)) / (2 * a);
		cout << "\nValue of the zeroes:" << r1 << "," << r2;
	}
	else if (D == 0)
	{
		cout << "\nTwo equal roots are there:";
		r1 = -b / 2 * a;
		r2 = r1;
		cout << "\nValue of the zeroes:" << r1 << "," << r2;
	}
   else cout << "\nSorry no real roots:";
}

void seven()
{
	cout << "Under Develpoment...";
}

int main()
{
	//clrscr();
	int g;
	cout << "Select the program to execute";
	cout << "\n1. Mind game";
	cout << "\n2. Quadratic Equation";
	cout << "\n3. Calculator";
	cout << "\n4. SI and CI";
	cout << "\n5. Perimeter and area of triangle";
	cout << "\n6. Simple Quadratic Equation";
	cout << "\n7. Game";
	cout << endl << '>';
	cin >> g;
	cout << endl;
	//clrscr();
	if (g == 1) one();
	else if (g == 2) two();
	else if (g == 3) three();
	else if (g == 4) four();
	else if (g == 5) five();
	else if (g == 6) six();
	else if (g = 7) seven();
	else cout << "Wrong Input. Exitting...";
	cout << "\n\nAll of these programs are made by S Aditya\n";
	Sleep(5000);//getch();
	return 0;
}



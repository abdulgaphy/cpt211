#include<iostream>
#include<cmath>
/*
NAME: RAJI ABDULGAFAR 
MATRIC NO: 2016/1/******
DEPARTMENT: CYBERSECURITY SCIENCE
*/
using namespace std;
void myFunc(){
	// declaring the variables
	double a,b,c,solve, root1,root2;
	cout<< "Given a Quadratic equation determine the two root: take a as x^2, b as x and c as the constant respectively." <<endl;
	cout<< "Enter the value of a: ";
	// taking input from user
	cin>> a;
	cout<< "Enter the value of b: ";
	// taking input from user
	cin>> b;
	cout<< "Enter the value of c: ";
	// taking input from user
	cin>> c;
	// computing your values
	solve = sqrt(b*b - 4*a*c);
	root1  = (-b - solve )/(2*a);
	root2  = (-b + solve )/(2*a);
	// printing result to screen
	cout<< "The first root is " << root1 ; 
	cout << endl;
	cout<< "The second root is " << root2 ;
}
int main() {

    myFunc();

    
    
}

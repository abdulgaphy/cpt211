#include<iostream>
#include<cmath>
/*
NAME: RAJI ABDULGAFAR 
MATRIC NO: 2016/1/******
DEPARTMENT: CYBERSECURITY SCIENCE
*/
using namespace std;
int main(){
	// declaring the variables
	double x,y , ans;
	cout<< "Enter the value of x: ";
	// taking input from user
	cin>> x;
	cout<< "Enter the value of y: ";
	// taking input from user
	cin>> y;
	// computing the values
	ans = sqrt(x+y);
	// printing the result to screen
	cout<<"The Square root of "<< x <<" + " << y << " is " << ans;
}

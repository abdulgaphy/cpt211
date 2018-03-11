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
	int x,y,z, ans;
	cout<< "Enter the value of x: ";
	// taking input from user
	cin>> x;
	cout<< "Enter the value of y: ";
	// taking input from user
	cin>> y;
	// computing the values
	z = y+7;
	ans = pow(x,z);
	// printing the result to screen
	cout<< x << " Raise to power of " << y <<" + 7 is " << ans;
}
int main() {

    myFunc();

    
    
}

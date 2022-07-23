#include<iostream>
using namespace std;
int main ()
{
	// declaring variables
	float num_1, num_2;
	float sum, difference, product;
	float quotient;
	
	// Taking inputs from user
	cout<<"Enter number 1: ";
	cin>>num_1;
	cout<<"Enter number 2: ";
	cin>>num_2;
	
	// Calculting Sum, Difference,Product & Quotient
	sum = num_1 + num_2;
	difference = num_1 - num_2;
	product = num_1 * num_2;
	quotient = num_1 / num_2;
	
	// Displaying Sum, Difference,Product & Quotient
	cout<<endl<<"Sum of "<<num_1<<" and "<<num_2<<" is "<<sum<<endl;
	cout<<"Difference of "<<num_1<<" and "<<num_2<<" is "<<difference<<endl;
	cout<<"Product of "<<num_1<<" and "<<num_2<<" is "<<product<<endl;
	cout<<"Quotient of "<<num_1<<" and "<<num_2<<" is "<<quotient<<endl;
  
	return 0;
}

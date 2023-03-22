//============================================================================
// Name        : lab4.cpp
// Author      : Krishna Ramlall
// Version     :
// Copyright   : 
// Description : LAB 4 FOR EMT 2410!
//============================================================================

#include <iostream>
using namespace std;

//Declaration of Functions:
float findAverage(float num[],int n);
float findMax(float num[],int n);
float findMin(float num[],int n);

//A function that will find average of numbers:
float findAverage(float num[],int n)
{
	float total=0;
	for(int i=0;i<n;i++){
		total+=num[i];
	}
	return(total/n);
}
//A function that will find the Maximum of numbers:
float findMax(float num[],int n)
{
	float max=num[0];
	for(int i=1;i<n;i++){
		if(max<num[i])
			max=num[i];
	}
	return max;
}
//A function that will find the Minimum of numbers:
float findMin(float num[],int n)
{
	float min=num[0];
	for(int i=1;i<n;i++){
		if(min>num[i])
			min=num[i];
	}
	return min;
}
//Main:
int main() {
	float *UsrInputPtr=new float[100];
	float *NumStartPtr=new float[100];
	int counter=0;

	//Request the user input:
	cout<<"Please enter of float numbers: \n";
	cout<<"(Type '999999' to end intake of input!) \n";
	cin>>*UsrInputPtr;
	NumStartPtr=UsrInputPtr;
	//Reading user input until '999999' is entered:
	while(*UsrInputPtr!=999999){
		counter++;
		UsrInputPtr++;
		cin>>*UsrInputPtr;
	}
	cout<<"This is the Number of Valid Numbers Entered: "<<counter<<"\n";
	//Display the number and its address:
	cout<<"\n The Entered Number and its address is: \n";
	for(int j=0;j<counter;j++){
		cout<<*(NumStartPtr+j)<<"--->"<<(NumStartPtr+j)<<"\n";
	}
	//Calculating the average, minimum, and maximum:
	float average=findAverage(NumStartPtr,counter);
	float myMax=findMax(NumStartPtr,counter);
	float myMin=findMin(NumStartPtr,counter);
	//Displaying the average, minimum, and maximum:
	cout<<"\nAverage : "<<average<<"\n";
	cout<<"Maximum : "<<myMax<<"\n";
	cout<<"Minimum : "<<myMin<<"\n";

	return 0;



}

#include<iostream>
using namespace std;

int main()
{
	int lowest,highest=0,num,i=0;
	float avg;
	
	cout<<"Please enter how many numbers to enter:";
	cin>>num;
	int *nums= new int [num];
		
	while(i!=num)
	{
	
		cout<<"Please enter the numbers"<<i+1<<":";
		cin>>nums[i];
		i++;
	}
		lowest=nums[0];
		
	for(int i=0;i<num;i++)
	{
		if(lowest>nums[i])
		{
			lowest=nums[i];
		}
		if(highest<nums[i])
		{
			highest=nums[i];
		}
	
	}
	avg=(highest+lowest)/2;	 	
	cout<<"Highest and lowest number's avarage is "<<avg;
}

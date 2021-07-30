//Priyanshu 18EJICS124
#include<iostream>
using namespace std;
int main(){
	float salary,tax;
	int age;
	char gen[50];
	cout<<"Enter Salary: "<<endl;
	cin>>salary;
	cout<<"Enter age: "<<endl;
	cin>>age;
	cout<<"Enter Gender(male/female): "<<endl;
	cin>>gen;
	cout<<"Salary: "<<salary<<"  Gender: "<<gen<<"  Age: "<<age;	
	  if(salary<=250000)
    {
        tax = 0;
    }
    else if(salary>250000 && salary<=500000)
    {
        tax = (salary-250000)*10/100;
    }
    else if(salary>500000 && salary<=1000000)
    {
        tax = (salary-250000)*10/100;
        tax = tax + (salary-500000)*20/100;
    }
    else
    {
        tax = (salary-250000)*10/100;
        tax = tax + (salary-500000)*20/100;
        tax=tax+(salary-1000000)*30/100;
        if (age>=60)
        {
            tax = (salary-250000)*10/100;
            tax = tax + (salary-500000)*20/100;
            tax=tax+(salary-1000000)*25/100;
            if(gen=="female")
            {
                tax = (salary-250000)*10/100;
                tax = tax + (salary-500000)*20/100;
                tax=tax+(salary-1000000)*22/100;            
            }
        }
    }
    cout<<"Your Tax Deduction is: "<<tax;
}

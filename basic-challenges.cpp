#include<iostream>
using namespace std;
int main(){
double miles, km;
cout<<"enter value of miles: ";
cin>>miles;
km=miles*1.6093;
cout<< "The value of kilometer is:"<<km<<endl;

double pounds,kg;
cout<<"enter value of Pound to convert in KG:";
cin>>pounds;
kg=pounds*0.453;
cout<<"The value of Pound into kg is: "<<kg<<endl;

double cel, fah;
cout<<"Enter the value of celcius: ";
cin>>cel;
fah=(cel-32)*5.0/9.0;
cout<<"the value of fah is:"<<fah<<endl;

double ft, cm;
cout<<"enter value of centimeter to convert in feet: ";
cin>>cm;
ft=cm * 0.0328;
cout<<"The feet value is:"<<ft<<endl;

double length, width, area;
cout<<"enter values of length: ";
cin>>length;
cout<<"enter the value of width: ";
cin>>width;
area=length*width;
cout<<"The area of square is: "<<area<<endl;

double volume, length2;
cout<<"enter values of 1-length: ";
cin>>length2;
cout<<"enter values of 2-length: ";
cin>>length2;
cout<<"enter values of 3-length: ";
cin>>length2;
volume=length2*length2*length2;
cout<<"The volume is: "<<volume<<endl;

double num1,num2,num3, avg;
cout<<"enter value of number 1,2,3:";
cin>>num1>>num2>>num3;
avg=(num1+num2+num3)/3;
cout<<"the average value is:"<<avg<<endl;


int numb1,numb2,numb3;
//5 num1
//7 num2
cout<<"The value of 1st number is: ";
cin>>numb1;
cout<<"The value of 2nd  number is: ";
cin>>numb2;
//numb(5)=numb(5)
numb3=numb1;
//numb1(7)=numb(7)
numb1=numb2;
//numb2(5)=numb(5)
numb2=numb3;
cout<<"the value of number 1 from 5 to = "<<numb1<<endl;
cout<<"the value of number 2 from 7 to = "<<numb2<<endl;

double child,choco,avg2;
cout<<"The Number of child are = ";
cin>>child;
cout<<"The number of choco = ";
cin>>choco;
avg2 = choco/child;
cout<<"The average of chocolates per student: "<<avg2<<endl;

double stud, comb;
cout<<"No of students: ";
cin>>stud;
comb=(stud * (stud-1))/2;
cout<<comb<<endl;

return 0;
}

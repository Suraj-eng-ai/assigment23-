#include<iostream>
using namespace std;
int sum1(int,int);
int area( int);
int coboid(int ,int, int);
int average(int,int,int);
int square(int);
int swap(int,int);
int max(int,int);
int add(int[]);
int main()
{ 
//varaible for array addition
int arr[10];
int i;
int addoutput;
//variabl for maximum of number
int num4;
int maxoutput;
int num5;
//varaible for swap
int num2;
int num3;
int swapoutput;
//variable for add
int a;
int b;
//varaible for area of circle
int r;
int areais;
//varaible for cuboid 
int l;
int w;
int h;
int valumeofcoboid;
//varaible for square of a number
int num1;
int square1;
//varaible for average
int avg;
int first;
int secand;
int third;
///Name print 
	cout<<"HELLO ";
	cout<<endl;
	cout<<"SURAJ JII GIVE ME SOME INPUT I WILL GIVE YOU PERFECT ANSWER";
	cout<<endl;
	cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
		cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
		cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
	cout<<endl;
	//addition of number
	cout<<"sum of two number program.................................."<<endl;
	int sum;
sum=sum1(a,b);
cout<<"Sum of two number is="<<sum;
cout<<endl;
//Area of circle
cout<<"area of circle is ..........................................................";
areais=area(r);
cout<<endl;
cout<<"area of circle is "<<areais;
cout<<endl;
cout<<"................................................................................................";
cout<<endl;
//cuboid program
cout<<" Program Value of cuboid ";
cout<<endl;
valumeofcoboid=coboid(l,b,h);
cout<<"The valume of cuboid is "<<valumeofcoboid;
cout<<endl;
cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
cout<<endl;
//Average of three number
cout<<"Program of average of three number ";
avg=average(first,secand,third);
cout<<endl<<"Average of three number is="<<avg;
cout<<endl;
cout<<endl;
cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
cout<<endl;
//square of three number
cout<<"Program square of a number ";
square1=square(num1);
cout<<endl<<"Square of  number is="<<square1;
cout<<endl;
//swap of two number wihout using third varaible
cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
cout<<endl<<"Program of swaping";
cout<<endl;
swapoutput=swap(num2,num3);
//cout<<"After swaping number is "<<endl<<swapoutput;
cout<<endl<<"??????????????????????????????????????????????????????????????????????"<<endl;
cout<<"Program of maximum of two number";
maxoutput=max(num4,num5);
cout<<endl<<"maximum number is ="<<maxoutput;
//Array addition of 10 number
cout<<endl<<"&&&&&&&&&&&&&&& &&&&&&&& &&&&&&&&&&&&&&& &&&&&&&&&&&&&&&&&& &&&&&&&&&&&&&&&&&&"<<endl;
cout<<"program of additional of n  number size of array"<<endl;
addoutput=add(arr);
cout<<"sum of array is ="<<addoutput;
}
// sum of two number
sum1(int a,int b)
{
	cout<<"please enter value a and b" <<endl;
	cin>>a>>b;
	return a+b;
}
//Sum of two number 
area(int r)
{
	cout<<endl;
	cout<<"Enter area of circle "<<endl;
	cin>>r;
	return 3.14*r*r;
}
//proram of cubaid
coboid(int l,int w,int h)
{
	cout<<endl;
	cout<<"Enter value of lenght width and hight";
	cout<<endl;
	cin>>l>>w>>h;
	return l*w*h;
}
//Average of three number program
average(int first,int secand,int third)
{
	cout<<endl<<"Enter three value who want find AVERAGE of number "<<endl;
	cin>>first>>secand>>third;
	return (first+secand+third)/3;
}
//Square of two number is -
square(int num1){
	cout<<endl<<"Enter one number for square "<<endl;
	cin>>num1;
	return num1*num1;	
}
//swap of two number program
swap(int num2,int num3){
	cout<<endl<<"Enter two number for swaping "<<endl;
	cin>>num2>>num3;
	cout<<endl<<"Before swaping number is  ="<<num2 <<" & "<<num3;
	num2=num2+num3;
	num3=num2-num3;
	num2=num2-num3;
	cout<<endl<<"After swaping  number is="<<num2<<" & "<<num3;
	return 0;
}
//maximum of two number program
max(int num4,int num5)
{
	cout<<endl<<"Enter two number  for finding who is biggest number"<<endl;
	cin>>num4>>num5;
	if(num4>num5){
		return num4;
	}
	else{
		return num5;
	}
}
add(int arr[])
{
	int i;
	int n;
	int res;
	cout<<endl<<"Enter number who want to print sum starting  with zero"<<endl;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		res=res+i;
	}
	return res;
}

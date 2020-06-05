#include <iostream>
using namespace std;
int main()

{
int n1;
int n2;
int Menu;
cout<<"Enter first number : ";
cin>>n1;
cout<<"Enter second number : ";
cin>>n2;
cout<<"Menu\n";
cin>>Menu;
cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Remainder";
int Add,Sub,Mul,Div,Rem;
cout<<endl;
switch(Menu){
case 1:Add=n1+n2;
cout<<Add;
break;
case 2:Sub=n1-n2;
cout<<Sub;
break;
case 3:Mul=n1*n2;
cout<<Mul;
break;
case 4:Div=n1/n2;
cout<<Div;
break;
case 5: Rem=n1%n2;
cout<<Rem;
break;
default:cout<<"Invalid operation";
}
}
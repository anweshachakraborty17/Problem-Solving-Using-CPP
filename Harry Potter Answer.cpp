#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int a=0, i=0, r1, r2, ar[10];

cin>>a;

i=0;

while(a!=0)
{

r1=(a%10);
ar[i] = r1;
i++;
a=a/10;

}

r2= (ar[0]+ar[3]) ;
cout<<r2;

return 0;
}

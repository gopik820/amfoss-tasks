#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

int t=0;
cin>>t;
for(int i=0;i<t;i++)
{
 int n1,n2,n3;
 n1=0;
 n2=1;
 n3=0;
 int N=0;
 cin>>N;
 int sum=0;

while(n3<N)
{
 if(n3%2==0)
 sum=sum+n3;

 n3=n1+n2;
 n1=n2;
 n2=n3;
}
cout<<sum<<endl;
}
getch();
}
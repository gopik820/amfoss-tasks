#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int t=0;
cin>>t;
for(int i=0;i<t;i++)
{int sum=0;
 int n=0;
 cin>>n;

 for(int j=0;j<n;j++)
 {
  if((j%3==0)||(j%5==0))
   sum=sum+j;
  }
 cout<<sum<<endl;
 getch();
}
}
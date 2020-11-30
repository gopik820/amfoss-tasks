#include <iostream.h>
#include<conio.h>
#include<math.h>


int maxprime(int n)
{


    int max = -1;

    while (n % 2 == 0)
     {
	max = 2;
	n =n/2;
     }

      for (int i = 3; i <= sqrt(n); i =i+ 2) {
	while (n % i == 0) {
	    max = i;
	    n = n / i;
	}
    }


    if (n > 2)
	max = n;

    return max;
}

void main()
{   clrscr();
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    int n=0;
    cin>>n;
    cout<<maxprime(n)<<endl;
    }
    getch();

}

#include<iostream>
#include<math.h>
#define pi 3.1415926535898
using namespace std;

double b, c;

double func(double x) 

{
    double funct = (x*x + b*x + c)/sin(x);
    return funct;
}



double BinarySearch(double l, double r)

{
    double mid = (l + r)/2;
    double minvalue = func(mid);
    double lhl = func(mid - 0.000001);
    double rhl = func(mid + 0.000001);
    
    if(lhl < minvalue) 
    {
        if(abs(lhl - minvalue) <= 0.00000000001)
        return minvalue;
        return BinarySearch(l, mid);
    }
    else
    {
        if(abs(rhl - minvalue) <= 0.00000000001) 
        return minvalue;
        return BinarySearch(mid, r);
    }
}

int main() 

{
    int test;
    cin >> test;
    cout.precision(11);
    for(int i = 0; i < test; i++)
    
    {
        cin >> b >> c;
        double minvalue = BinarySearch(0, pi/2);
        cout << minvalue << endl;
    }
    
   return 0; 
}


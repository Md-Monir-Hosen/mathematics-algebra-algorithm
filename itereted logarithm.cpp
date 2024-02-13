#include<bits/stdc++.h>
using namespace std;
int _log(double x,double b)
{
    return (int)(log(x)/log(b));
}
double recursiveLogStar(double n,double b)
{
    if(n>1.0)
    {
        return 1.0+recursiveLogStar(_log(n,b),b);
    }
    else
    {
        return 0;
    }
}
int main()
{
     int n = 100, base = 5;
    cout << "Log*(" << n << ") = "
         << recursiveLogStar(n, base) << "\n";
    return 0;
}

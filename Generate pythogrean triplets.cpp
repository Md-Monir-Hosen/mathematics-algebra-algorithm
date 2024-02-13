#include<bits/stdc++.h>
using namespace std;
void pythagoreanTriplets(int l)
{
    int a,b,c=0;
    int m=2;
    while(c<l)
    {
        for(int i=1;i<m;i++)
        {
            a=m*m-i*i;
            b=2*m*i;
            c=m*m+i*i;
            if(c>l)
            {
                break;
            }
            cout<<a<<" "<<b<<" "<<c;
        }
        m++;
    }
}
int main()
{
    int limit = 20;
    pythagoreanTriplets(limit);
    return 0;
}

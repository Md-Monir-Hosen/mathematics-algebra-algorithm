#include<bits/stdc++.h>
using namespace std;
int countIntegralSolutions(int n)
{
    int result=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<=(n-i-j);k++)
            {
                if(i+j+k==n)
                {
                    result++;
                }
            }
        }
    }
    return result;
}
int main()
{
     int n = 3;
    cout <<  countIntegralSolutions(n);
    return 0;
}

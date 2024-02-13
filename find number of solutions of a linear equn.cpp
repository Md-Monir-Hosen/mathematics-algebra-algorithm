#include<bits/stdc++.h>
using namespace std;
int countSol(int coeff[],int start,int End,int rhs)
{
    if(rhs==0)
    {
        return 1;
    }
    int result=0;
    for(int i=start;i<End;i++)

    {
        if(coeff[i]<=rhs)
        {
            result+=countSol(coeff,i,End,rhs-coeff[i]);
        }
    }
    return result;
}
int main()
{
     int coeff[] = {2, 2, 5};
    int rhs = 4;
    int n = sizeof(coeff) / sizeof(coeff[0]);
    cout << countSol(coeff, 0, n - 1, rhs);
    return 0;
}

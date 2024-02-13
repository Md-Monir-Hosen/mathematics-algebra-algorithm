#include<bits/stdc++.h>
using namespace std;
float correlationCoeffient (int x[],int y[],int n)
{
    int sumx=0,sumy=0,sumxy=0;
    int squareSumx=0,squareSumy=0;
    for(int i=0;i<n;i++)
    {
        sumx=sumx+x[i];
        sumy=sumy+y[i];
        sumxy=sumxy+x[i]*y[i];
        squareSumx=squareSumx+x[i]*x[i];
        squareSumy=squareSumy+y[i]*y[i];
    }
    float corr=(float)(n*sumxy-sumx*sumy)/sqrt((n*squareSumx-sumx*sumx)*(n*squareSumy-sumy*sumy));
    return corr;
}
int main()
{
    int X[] = {15, 18, 21, 24, 27};
    int Y[] = {25, 25, 27, 31, 32};

    //Find the size of array.
    int n = sizeof(X)/sizeof(X[0]);

    //Function call to correlationCoefficient.
    cout<<correlationCoeffient(X, Y, n);

    return 0;
}

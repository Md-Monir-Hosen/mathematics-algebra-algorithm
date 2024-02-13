#include<bits/stdc++.h>
using namespace std;
int Max(int m,int n)
{
    return (m>n) ? m : n;
}
int* add(int a[],int b[],int m,int n)
{
    int s=Max(m,n);
    int* sum=new int [s];
    for(int i=0;i<m;i++)
    {
        sum[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum[i]+=b[i];
    }
    return sum;
}
void printPoly(int poly[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<poly[i];
        if(i!=0)
        {
            cout<<"x^"<<i;
        }
        if(i!=n-1)
        {
            cout<<" + ";
        }
    }
}
int main()
{
     int A[] = { 5, 0, 10, 6 };

    // The following array represents polynomial 1 + 2x +
    // 4x^2
    int B[] = { 1, 2, 4 };
    int m = sizeof(A) / sizeof(A[0]);
    int n = sizeof(B) / sizeof(B[0]);

    cout << "First polynomial is \n";
    printPoly(A, m);
    cout << "\nSecond polynomial is \n";
    printPoly(B, n);

    int* sum = add(A, B, m, n);
    int s = Max(m, n);

    cout << "\nsum polynomial is \n";
    printPoly(sum, s);

    return 0;
}

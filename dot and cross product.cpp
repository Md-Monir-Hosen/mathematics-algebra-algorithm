#include<bits/stdc++.h>
#define n 3
using namespace std;
int dotProduct(int vect_a[],int vect_b[])
{
    int product=0;
    for(int i=0;i<n;i++)
    {
        product=product+vect_a[i]*vect_b[i];
    }
    return product;
}
int crossProduct(int vect_a[],int vect_b[],int cross_p[])
{
    cross_p[0]=vect_a[1]*vect_b[2]-vect_a[2]*vect_b[1];
    cross_p[1]=vect_a[2]*vect_b[0]-vect_a[0]*vect_b[2];
    cross_p[2]=vect_a[0]*vect_b[1]-vect_a[1]*vect_b[0];
}
int main()
{
     int vect_A[] = { 3, -5, 4 };
    int vect_B[] = { 2, 6, 5 };
    int cross_P[n];

    // dotProduct function call
    cout << "Dot product:";
    cout << dotProduct(vect_A, vect_B) << endl;

    // crossProduct function call
    cout << "Cross product:";
    crossProduct(vect_A, vect_B, cross_P);

    // Loop that print
    // cross product of two vector array.
    for (int i = 0; i < n; i++)

        cout << cross_P[i] << " ";
    return 0;
}

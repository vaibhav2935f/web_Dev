/* create A 2D array by using pointer*/
/*
#include<iostream>
using namespace std;
int main()
{
 int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};
 int i , j ;
 int *B[3];
 int **C;
 
 B[0] = new int [4];
 B[1] = new int [4];
 B[2] = new int [4];
 
 C =new int*[3];
 C[0] = new int[4];
 C[0] = new int[4];
 C[0] = new int[4];

 for(i=0;i<3;i++)
 {
 for(j=0;j<4;j++)
 cout<<C[i][j]<<endl;
 }
 return 0;
}
*/
/*array data TYPE */
#include<iostream>
using namespace std;
struct array
{
    int *A;
    int size;
    int length;
};
int main()
{
    struct array arr;
    cout<<"Enter the size of array";
    cin>> arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;
    return 0;
}

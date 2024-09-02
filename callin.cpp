#include<iostream>
using namespace std;
void swap(int x, int y)
{
    int swap;
    swap = x;
    x = y;
    y = swap;
    cout<<"Call by value: "<<endl;
    cout<<"swapped values: "<<x<<" "<<y<<endl;;
}
void swap_reference(int *x, int *y)
{
    int swap;
    swap = *x;
    *x = *y;
    *y = swap;
    cout<<"Call by reference: "<<endl;
    // original data altered therefore no need of printing here 
}
int main()
{
    int a,b;
    cout<<"Enter 2 variables"<<endl;
    cin>>a>>b;
    swap(a,b); // call by value 
    cout<<"\nValue of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
    int x,y;
    cout<<"Enter the value of 2 varibles: "<<endl;
    cin>>x>>y;
    swap_reference(&x,&y); // call by refernce 
    cout<<"Value of swapped x is: "<<x<<endl;
    cout<<"Value of swapped y is: "<<y<<endl;
    return 0;
}
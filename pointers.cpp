#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *aptr = &a;
    cout<<"dereferencing the pointer of a: "<<*aptr<<endl;
    *aptr = 20;
    cout<<"updating value using pointer: "<<a<<endl;

    float f = 100.009;
    float *fptr = &f;
    cout<<"value off f"<<f<<endl;
    cout<<"pointer of f"<<fptr<<endl;
    cout<<"dereferencing f "<<*fptr<<endl;
    cout<<"referencing f"<<&f<<endl;

    char ch = 'c';
    char *chptr = &ch;
    cout<<"character: "<<ch<<endl;
    cout<<"pointer of character"<<chptr<<endl;
    cout<<"referncing character: "<<&ch<<endl;
    cout<<"dereferencing"<<*chptr<<endl;

    int arr[] = {5,90,30};
    int *arr_ptr = &arr[3];
    cout<<arr_ptr<<endl;
    cout<<"printing an array by dereferencing its pointers: "<<endl;
    for(int i = 0;i<3;i++)
    {
        cout<<(*(arr+i))<<endl; // printing the array using pointers 
    }

    cout<< "Creating an arrray using pointers: "<<endl;
    int *p = new int[5];
    for(int i = 0;i<5;i++)
    {
        p[i] = 10*(i+1);
    }
    // printing the values 
    cout<< *p<<endl;
    cout<< *p+1<<endl;
    cout<< *(p+1)<<endl;
    cout<<2[p]<<endl;
    cout<<p[2]<<endl;
    *p++;
    cout<<*p;

    return 0;
}
# Pointers
# Experiment 9 To study and implement C++ Pointer basics

## Aim: -
To learn about pointers, how to implemnent pointers for different data types, how to make and print an array using pointers.

## Theory:-
Pointers are symbolic representations of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures. Iterating over elements in arrays or other data structures is one of the main use of pointers. 
The address of the variable you’re working with is assigned to the pointer variable that points to the same data type (such as an int or string).

### Advantages of pointers 
1. Dynamic memory allocation
2. Return multiple values from a function
3. Alter original data
4. Passing data between functions efficently
5. Optimzing data memory
6. Efficient data structures
7. Enables call by reference

### Disadvantages of pointers
1. Pointers are a bit difficult to understand.
2. Pointers can cause several errors, such as segmentation errors or unrequired memory access.
3. If a pointer has an incorrect value, it may corrupt the memory.
4. Pointers may also cause memory leakage.

### Applications of pointers 
1. to allocate new objects on the heap,
2. to pass functions to other functions
3. to iterate over elements in arrays or other data structures.

## Code: -
~~~
// sundaravadivelan karthikeyan 
// 23070123136

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
~~~

## Code Output: 

![](https://github.com/Sundar13905/Pointers/blob/main/pointer_output.png)

## Conclusion: -
In this experiment we learnt the basics of pointers
We learnt how to create and print an array using pointers 

---------------------------------------------------------------------

# Experiment 10  To study and implement  Pointer Operations (Call by value and Call by reference)

## Aim
To run and execute a code using call by value and call by reference in C++

## Theory 
Here's a table highlighting the key differences between **call by value** and **call by reference** in C++:


| **Feature**             | **Call by Value**                                    | **Call by Reference**                                    |
|-------------------------|-----------------------------------------------------|----------------------------------------------------------|
| **Definition**          | Passes a copy of the argument's value to the function. | Passes the actual memory address of the argument to the function. |
| **Effect on Arguments** | Changes made to the parameter inside the function do not affect the original argument. | Changes made to the parameter inside the function directly affect the original argument. |
| **Memory Usage**        | Requires more memory as a copy of the argument is created. | Requires less memory as no copy is created; only the reference is passed. |
| **Performance**         | Can be slower due to copying large data structures.  | Faster, especially for large data structures, since no copying is involved. |
| **Syntax**              | Uses the argument directly (e.g., `func(x)`).        | Uses `&` to denote a reference parameter (e.g., `func(int &x)`). |
| **Safety**              | Safer, as original data cannot be accidentally modified. | Riskier, as the original data can be modified, potentially leading to unintended side effects. |

## Code input 
~~~
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
~~~

## Code Output 
![](https://github.com/Sundar13905/Pointers/blob/main/Exp10_out.png)

## Conclusion
- We learnt how to use the methods call by value and call by reference
- We learnt the difference between call by value and call by reference

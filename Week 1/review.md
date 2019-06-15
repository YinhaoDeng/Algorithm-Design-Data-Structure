# Outline
- Review the concepts of pointers
- Talk about pointer arithmetic
- Discuss arrays and pointers


## Pointer variables definition
>A pointer variable is a variable pointing to the memory address of another variable. It gives us more control on the computer’s memory.

## how to create pointer variables?
create by using *
```c++
double *ptr1, ptr2;
double* ptr1, ptr2;
double *ptr1, ptr2;
````
```c++
typedef double* DoublePtr;
DoublePtr ptr1, ptr2;
```

## how to use them pointer in c++
You can refer to the address of a variable using &.

## why we use pointers/references? 
- Instead of passing large quantities of data between functions, we can 
    - just pass the pointer to the start of the data 
    - saves memory and data transfer 
    
- Dynamic memory usage
- Pass parameters to a function by reference

## Pass-by-reference
```c++
//not use pointer
void swapByValue(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

//use pointer
void swapByValue(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
```

# Dynamic Variables
## What are dynamic variables?
- Variables that are created by using **new** operator. 
- They are created and destroyed while the program is running.
```c++
//program to demonstrate pointers and dynamic variables.
#include <iostream>
using namespace std;

int main()
{
    int *p1, *p2;

    p1 = new int;

    *p1 = 42;
    p2 = p1;
    cout << "p1 == " << *p1 << endl;
    cout << "2 == " << *p2 << endl;

    *p2 = 53;

    cout << "p1 == " << *p1 << endl;
    cout << "2 == " << *p2 << endl;

    p1 = new int;
    *p1 = 88;
    cout << "p1 == " << *p1 << endl;
    cout << "2 == " << *p2 << endl;

    return 0;
}
```

- (**new** allocates a part of memory as the dynamic variable.)
- We need to “delete” dynamic variables after use, to prevent memory leak

>  type * ptr= new type;  
Set a value to *ptrand use it.  
When you no longer need it: delete ptr;

- The C++ standard specifies that if there is no sufficient memory available to create the new variable -> the new operator, by default, terminates the program. **_horrible!!!!_**

## Where are the variables stored?
![memory diagram](dynamic_variables.png "memory diagram")
- Static variables and parameters are stored in Stack.
- The rest of the allocated memory is used as the heap; for dynamic memory allocation
- The stack and heap are in a shared area.
- The memory that is allocated to variables and parameters from stack is not released until their function is returned. Unlike memory allocation in Heap.

## Pointers vs Integers
- Pointers are variables of the same size as integers
- but they are not same
    - Abstraction
    - Compile time: the compiler knows some more information about a pointer variable

    _ptr = ptr+1; (increments ptrby sizeof(*ptr))_

## Pointer Arithmetic Example
```c++
int *xp = &p;
double *yp = &d;
class
{
    int temp=[1000];
}c1, *cp = &c1;

cout<<xp<<endl;
cout<<yp<<endl;
cout<<cp<<endl;

cout<<xp+1<<endl;
cout<<yp+1<<endl;
cout<<zp+1<<endl;

output result:
0x7fff5fbff598 
0x7fff5fbff5a8
0x7fff5fbfe5d8

0x7fff5fbff59c  前一个＋4bit
0x7fff5fbff5b0
0x7fff5fbff578   
```
- You cannot perform the normal arithmetic operations on pointers.
    1. multiplication or division is not allowed
    2. Addition and subtraction are different

- The pointer arithmetic depends on the size of the type that pointer is of that type.
- Pointer arithmetic (+/-) shifts the address by a number of bytes equal to the size of the pointer type 
  ```c++
  int i=100;
  int * ip=&i;
  ```
  |Address|Name|Value|
  |-------|----|-----|
  |0xbffff380|ip|0xbffff374|
  0xbffff381|ip=1|0xbffff378|
  |0xbffff382|||
  |0xbffff383|||

## Pointer Arithmetic
|Operation|Result|
|---|---|
|Address + number|Address|
|Address - number|Address|
|Address - Address|Number|
|Address + Address|**illegal**|

### Example
```c++
int *ptr1, *ptr2;
ptr1 = 100;
ptr2 = 108;
cout<< ptr2-ptr1 <<endl;
```
_what about 'cout<< *ptr2-*ptr1 <<endl'_

## Pointers and Arrays
In C++, an array variable is actually a pointer variable that points to the first indexed variable of the array. 

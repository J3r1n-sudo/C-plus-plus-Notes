<h1>I'M BACK!</h1>

# Pointers

Pointers, which are the addresses of variables, can be accessed in C++.

For example in this code snippet:
`
int a = 54;
`
54 is the value of the variable, in other words, it is the value that is stored in the location reserved the the variable called 'a'.

Now, let's ask ourselves, where is a? The location of 'a' can be found using a pointer!
```
     int a = 54;
     std::cout<< &a<<"\n"; //This will print the LOCATION of 'a'
```
More information about pointers can be found at: Pointers

![image](https://user-images.githubusercontent.com/71806917/120203459-5d5f7100-c245-11eb-8e74-8c2433e9ebd3.png)

But what if we have a pointer and want to access the value stored in that address? That process is called **dereferencing**, and it is indicated by adding the operator * before the variable's name. This same operator should be used to declare a variable that is meant to store a pointer.

```
#include <iostream>
int main(){
int a = 54;

// this is a pointer that holds the address of the variable 'a'.
// if 'a' was a float, rather than int, so should be its pointer.
int * pointerToA = &a;

// If we were to print pointerToA, we'd obtain the address of 'a':
std::cout << "pointerToA stores " << pointerToA << '\n';

// If we want to know what is stored in this address, we can dereference pointerToA:
std::cout << "pointerToA points to " << * pointerToA << '\n';
}
```
output: -
```
g++ -o deref.out pointer_deref.cpp
:~/c++$ ./deref.out
pointerToA stores 0x7ffe8f506f8c
pointerToA points to 54
```

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
```
Program to do the following...

/*For this program print for each variable
**print the value of the variable, 
**then print the address where it is stored. 
*/
#include<iostream>
#include<string>

int main()
{
    std::string name;
    int givenInt;
    float givenFloat;
    double givenDouble;
    std::string givenString;
    char givenChar;
    int *pointerGivenInt;
    int **pointerPointerGivenInt;

    pointerGivenInt = &givenInt;
    pointerPointerGivenInt = &pointerGivenInt;

   //Get the values of each variable
    std::cout<<"integer = \n";
    std::cin>>givenInt;
    std::cout<<"float = \n";
    std::cin>>givenFloat;
    std::cout<<"double = \n";
    std::cin>>givenDouble;
    //We need to use cin.ignore so cin will ignore 
   //the characters in the buffer leftover
   //from the givenDouble
    std::cin.ignore();
    std::cout<<"character = \n";
    std::cin>>givenChar;

    std::cout<<"string = \n";
    std::cin.ignore();
    std::getline (std::cin,givenString);


    //The value stored in the data
    std::cout<<"integer = "<<givenInt<<"\n";
    std::cout<<"float = "<<givenFloat<<"\n";
    std::cout<<"double = "<<givenDouble<<"\n";
    std::cout<<"string = "<<givenString<<"\n";
    std::cout<<"character = "<<(char)givenChar<<"\n\n";

    //The address of the data - use pointers
    std::cout<<"address integer = "<<&givenInt<<"\n";
    std::cout<<"address float = "<<&givenFloat<<"\n";
    std::cout<<"address double = "<<&givenDouble<<"\n";
    std::cout<<"address string = "<<&givenString<<"\n";
    std::cout<< "address character = " << (void *) &givenChar<<"\n\n";

   //Use indirection to the get the value stored at the address
    std::cout<< "pointer of givenInt = " << *pointerGivenInt<<"\n";
    std::cout<< "pointer of pointer of givenInt = " << **pointerPointerGivenInt<< "\n";

    return 0;
}
```

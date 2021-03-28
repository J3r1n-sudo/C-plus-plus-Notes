Book used for reference : C++ Programming Language 4th edition

**(1) Program Structure**
  
The c++ program structure consists of two major parts **Preprocessor Directives** & **Main Fucntion**
  
  Lets take an example of a program...
 
 ```
 #include <iostream>
 int main() 
   {
      std::cout << "Hello world, I am ready for C++";
      return 0;
   }
 ```
    
  Any word which starts with a hash sign is called the pre processor directive
  
After the hash sign we have the word include. There are several preprocessor directives available in C++, but include is the one we see and use the most often.
Include means add the declarations of the given library. In this case we are adding the declarations of the iostream library.

![Screenshot](Images/image.png)

Important:-

You can declare the library by using either " " or < > 
The brackets ( <> ) say “Look for this file in the directory where all the standard libraries are stored”. C++ also allows us to specify the library name using double quotes.
The double quotes (" ") say “look in the current directory, if the file is not there, then look in the directory where the standard libraries are stored”.

std::cout --> (Standard) it is used to take that particular command from the library (iostream) in this case ...  cout --> prints 

**(2) How to use commnents**

Comments helps in explaining the piece of code you have wrote and also helps other viewers and collaborators to work on it for the same....
in C++ comments are given as /* comment */

Comments can be added in two ways:
- As a comment block
- As a single line

Comment block can be added as---
/* Hi This is Jerin
*** currently learning C++
*/

Single line comment can be given as ---
//Single line Quoting

**(3)Style Guide**

As with all programming languages, there are many different ways to style the code we write. For this course, we are not using a standard style. We are trying to remain consistent throughout the course, while making the codes as readable as possible.

There are a number of style guides available, the best one is the one used by the people who are paying you.

A straightforward style guide is:
               [Modern C++ Coding Guidelines](https://github.com/Microsoft/AirSim/blob/master/docs/coding_guidelines.md)

For a more detailed guideline:
               [Google C++ Style Guideline](https://google.github.io/styleguide/cppguide.html)
               
**(4) Compiling C++**
             
Now the question you are asking is … what does it mean to get it right? What did I get right?

When you click on the submit button, the program is compiled and run.


The command to compile is :
```
 g++  main.cpp -o main.out
```
G++ for the C++ compiler. The file name is main.cpp. -o is for the name of the output. Main.out is the name of the output.

To run the output file, main.out.

We run:
```
  ./main.out
```  

**(5) Using namespace**

At times using std:: can be a tad bit irritating in such cases to simplify the script "namespace std;" is used
eg:
```
#include<iostream>
using namespace std;
int main(){
cout << "Hello World!";
return 0;
}
```
There is some controversy about using namespace. When the commands are not explicitly defined, there is a possibility that when your code is added to a large project, your code might reference a command from a different library.

**(7) Adding Variables and blank lines**

Any string literal must be enclosed in double quotes. Numbers do not require double quotes. If a variable name is used, the value of the variable is printed.
We can have multiple insertions to cout.
A program snippet:
```
 int integer = 4543;
 std::cout<<”The value of integer is “<<integer<<"\n";
```
Output: The value of integer is 4543

Also, note that cout does not automatically add newlines. You must add them using the escape sequence “\n”

**(8) printing variable size**

As with other programming languages, the size a variable is allocated in memory is dependent upon its type. To determine how many bytes each variable type uses, C++ provides the function sizeof(variableType)

"\n" and "endl" works the same but has a distinct feature of using .flush() function.

**(9) Defining Constants**

Inorder to define a constant variable we can use ```constant``` 
Eg: 
```
#include <iostream>
using namespace std;
int main(){
constant int variableName= 100;
cout << variableName <<endl;
return 0;
}
```

**(9) Enumerated Constants**

C++ also allows for enumerated constants. This means the programmer can create a new variable type and then assign a finite number of values to it.
```
enum type_name {
  value1,
  value2,
  value3,
  .
  .
} object_names;
```
For Example:-
``` enum MONTH {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec}; ```

Example for enum usage:-
```
/*Enum example*/

#include <iostream>
using namespace std;
int main()
{
    //define MONTHS as having 12 possible values
    enum MONTHS {Jan, Feb, Mar, Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
    
    //define bestMonth as a variable type MONTHS
    MONTHS bestMonth;
    
    //assign bestMonth one of the values of MONTHS
    bestMonth = Jan;
    
    //now we can check the value of bestMonths just 
    //like any other variable
    if(bestMonth == Jan)
    {
        cout<<"I'm not so sure January is the best month\n";
    }
    return 0;
}
```

**(10) Formatting Output**

For formatting outputs we can use escape sequences....as they arent to be called using any library!
Most commonly used escape charachters are:-
-\n Newline
-\t Tab

We can also use a library in C++ called ```<iomanip>``` which can serve the same purpose..
one can use ```setw(setwidth)``` to control the spacing between charachters!
```
#include <iomanip>
std::cout<<"\n\nThe text without any formating\n";
std::cout<<"Ints"<<"Floats"<<"Doubles"<< "\n";
std::cout<<"\nThe text with setw(15)\n";
std::cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)<<"Doubles"<< "\n";
std::cout<<"\n\nThe text with tabs\n";
std::cout<<"Ints\t"<<"Floats\t"<<"Doubles"<< "\n";
```

Results:-
```
The text without any formating
IntsFloatsDoubles

The text with setw(15)
Ints         Floats        Doubles


The text with tabs
Ints    Floats    Doubles
```
**(11) File IO**
File IO Steps:

 - Include the ```<fstream>``` library (fstream is a library that deals with all the file reading and writing) 
 - Create a stream (input, output, both)
      - ofstream myfile; (for writing to a file)
      - ifstream myfile; (for reading a file)
      - fstream myfile; (for reading and writing a file)
 - Open the file  myfile.open(“filename”);
 - Write or read the file
 - Close the file myfile.close();

```
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string line;
    //create an output stream to write to the file
    //append the new lines to the end of the file
    ofstream myfileI ("input.txt", ios::app);
    if (myfileI.is_open())
    {
        myfileI << "\nI am adding a line.\n";
        myfileI << "I am adding another line.\n";
        myfileI.close();
    }
    else cout << "Unable to open file for writing";

    //create an input stream to read the file
    ifstream myfileO ("input.txt");
    //During the creation of ifstream, the file is opened. 
    //So we do not have explicitly open the file. 
    if (myfileO.is_open())
    {
        while ( getline (myfileO,line) )
        {
            cout << line << '\n';
        }
        myfileO.close();
    }

    else cout << "Unable to open file for reading";

    return 0;
}
```
**(12) Header files**

![image](https://user-images.githubusercontent.com/71806917/112716970-a62a3f00-8f0f-11eb-8d46-d9730d65fcf5.png)

As we have seen we can include additional libraries in C++, we can also include our own libraries.

Traditionally, these files are called header files and they have an .hpp extension. Although any extension will work.

-Header files contain information about how to do a task.
-The main program contains information about what to do.

-main.cpp: all the code on what the program does goes in this file.
-main.hpp: all the code on how the program does a task goes in this file.

Let us take an example of hello world program...

Instead of writing the entire headers i.e

``` 
#include <iostream>
using namespace std;
```
we can put this in an .hpp header file and refer it our code as...

```
#include "headers.hpp"
```

**(13) User Input**

![image](https://user-images.githubusercontent.com/71806917/112755819-06001300-9000-11eb-99a1-ab32bb7dc26a.png)

In C++ we use std::cout for writing to the console.
And we have std::cin for reading from the console.

*What does std::cin do about strings?*
```
A string can be declared and initialized by using a pointer or an array of characters. cin String input from the keyboard, but cin does not input a space character. It stops input a string when it reads a space character.
```

**(14) User Input**

So, we now know that std::cin will not retrieve strings that have a space in them. It will see the space as the end of the input. We will obviously need a method to enter strings.

C++ has a function called getline.
The basic form of getline is:

```getline```: it will retrieve characters from the std::cin source and stores them in the variable called variableName. It will retrieve all characters until the newline or “\n” is detected.

The programmer can also specify a different delimiter if the newline character is not desired. 

```
#include<iostream>
#include<string>

int main()
{
    std::string userName; 
    std::cout<<"Tell me your nickname?: ";
    std::getline(std::cin, userName);
    std::cout<<"Hello "<<userName<<"\n";
    return 0;
}
```
**(15) More on Strings**





# Control Flow
- - - -

1. Relational Operators
    
  <img src="https://user-images.githubusercontent.com/71806917/113581209-76341780-9644-11eb-8c18-3d8f76c4b304.png" width="300" height="300">
    
   ```
   /*Goal: learn if-else statements in C++*/

#include<iostream>
#include<string>

int main()
{
    //instead of printing 0 and 1, create an array where 
    //0 = False, 1 = True
    std::string TorF[] = {"False", "True"};
    
    int a = 100;
    int b = 33;
    int c = 33;
    
    //Print out the string values of each relational operation
    std::cout<<"a < b is "<<TorF[a<b];
    std::cout<<"\na > b is "<<TorF[a>b];
    std::cout<<"\na != b is "<<TorF[a!=b];
    std::cout<<"\nc >= b is "<<TorF[c>=b];
    std::cout<<"\nc <= b is "<<TorF[c<=b];    
    return 0;
}
```

2. Logic Operators

![image](https://user-images.githubusercontent.com/71806917/113583917-d9737900-9647-11eb-9988-c4a24da19617.png)

```
/*Goal: understand the logical operators supported by C++
*/

#include<iostream>
#include<string>

int main()
{
    int A = 5;
    int B = 4;
    int C = 5;
    int D = 0;
    
    std::string TorF[] = {"False", "True"};
    
    //The && operator
    std::cout<<"A == C is "<<TorF[A==C];
    std::cout<<"\n(B == D) is "<<TorF[B==D]; 
    std::cout<<"\n(B > D) is "<<TorF[B>D]; 
    //A true && false = false
    std::cout<<"\n\n(A ==C) && (B == D) is "<<TorF[(A ==C) && (B == D)];  
    //A true and true = true
    std::cout<<"\n(A ==C) && (B > D) is "<<TorF[(A ==C) && (B > D)];     

    //The || operator
    //A true || false = true
    std::cout<<"\n\n(A ==C) || (B == D) is "<<TorF[(A ==C) || (B == D)];  
    //A true || true = true
    std::cout<<"\n(A ==C) || (B > D) is "<<TorF[(A ==C) || (B > D)];  
    
    //The 'Not' operator
    std::cout<<"\n\nA < B is "<<TorF[A<B];
    std::cout<<"\n!(A < B) is "<<TorF[!(A<B)];
    
    std::cout<<"\n\nA == C is "<<TorF[A==C];
    std::cout<<"\n!(A == C) is "<<TorF[!(A==C)];    
    
    return 0;
}
```
3. if statements

```
if(boolean expression)
{
     //statements to execute if the boolean expression is true
}
```

4. if else statements

```

if(boolean expression)
{
     //statements to execute if the boolean expression is true
}
else
{
     //statements to execute if the boolean expression is false
}
```

5. if else if

```
if(boolean expression)
{
     //statements to execute if the boolean expression is true
}
else if (boolean expression #2)
{
     //statements to execute if the 'else if' boolean expression  #2 is true
}

else
{
     //statements to execute if the boolean expressions 
    //'if' and 'else if'  are false
}
```

Sample Code:- 

```
#include<iostream>

int main()
{
    int TARGET = 33;
    int guess;
    std::cout<<"Guess a number between 0 - 100\n";
    std::cin>>guess;
    
    std::cout<<"You guessed: "<<guess<<"\n";
    
    
    if(guess < TARGET)
    {
        std::cout<<"Your guess is too low.\n";
    }
    else if(guess > TARGET)
    {
        std::cout<<"Your guess is too high.\n";
    }
    else
    {
        std::cout<<"Yay! You guessed correctly.\n";
    }
    
    
    return 0;
}
```

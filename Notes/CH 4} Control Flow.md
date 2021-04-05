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


**(1) Arithmetic Operations**

![image](https://user-images.githubusercontent.com/71806917/112998433-a9c9fa00-918b-11eb-9997-9dbe09468104.png)

When doing math operations you may need to include the ```<cmath>``` library, it contains a number of useful functions.

One that you may find useful is: std::pow(base, exponent).

     #include<cmath>

     std::pow(base, exponent)
For example:

     //3^5 is equal to std::pow(3, 5)
     std::pow(3, 5)
Also, for the next programming quiz …. M_PI is equivalent to pi.

 #include<cmath>

 //pi is equal to M_PI
M_PI = 3.14159265358979323846


```
#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    //Dimension of the cube
    float cubeSide = 5.4;
    //Dimension of sphere
    float sphereRadius = 2.33;
    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;
    
    float volCube, volSphere, volCone = 0;
    
    volCube = pow(cubeSide,3);
    volSphere = (4/3) * M_PI * pow(sphereRadius,3);
    volCone = M_PI * pow(coneRadius,2) * (coneHeight/3);
    
    cout << "Cube Volume = "<<volCube<<endl;
    cout << "Sphere Volume = "<<volSphere<<endl;
    cout << "Cone Volume = "<<volCone<<endl;
    
    return 0;
}
```

**(2) Prefix and Postfix**

incrementing :
- a++
- ++a

decrementing :
- a--
- --a

![image](https://user-images.githubusercontent.com/71806917/113001601-979d8b00-918e-11eb-81e7-e8e466de35bb.png)


```
#include<iostream>

using namespace std;

int main()
{
    int a, b = 0;
    int post, pre = 0;
    cout<<"Inital values: \t\t\tpost = "<<post<<" pre= "<<pre<<"\n";
    post = a++;
    pre = ++b;
    cout<<"After one postfix and prefix: \tpost = "<<post<<" pre= "<<pre<<"\n";
    post = a++;
    pre = ++b;
    cout<<"After two postfix and prefix: \tpost = "<<post<<" pre= "<<pre<<"\n";  
    return 0;
}
```

```
Inital values: 			post = 0 pre= 0
After one postfix and prefix: 	post = 0 pre= 1
After two postfix and prefix: 	post = 1 pre= 2
```

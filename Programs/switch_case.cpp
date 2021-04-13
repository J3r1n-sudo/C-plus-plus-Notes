#include <iostream>

int main()
{
    float in1, in2,in3;
    char op;
    std::cout<<"Enter two numbers:\n";
    std::cin>>in1;
    std::cin>>in2;
    std::cout<<"Enter the operation '+','-','*','/':\n";
    std::cin>>op;
    
    switch(op)
    {
        case '+': 
        in3=in1+in2;
        std::cout<<in1<<" + "<<in2<<" = "<<in3<<"\n";
        break;
        
        case '-': 
        in3=in1-in2;
        std::cout<<in1<<" - "<<in2<<" = "<<in3<<"\n";
        break;
        
        case '*': 
        in3=in1*in2;
        std::cout<<in1<<" * "<<in2<<" = "<<in3<<"\n";
        break;
        
        case '/': 
        in3=in1/in2;
        std::cout<<in1<<" / "<<in2<<" = "<<in3<<"\n";
        break;
        
        default:
        std::cout<<"invalid operator";
    }
    return 0;
}

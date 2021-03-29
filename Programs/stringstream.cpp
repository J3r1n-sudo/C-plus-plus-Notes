#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    
    string lengthNum,widthNum;
    float length = 0;
    float width = 0;
    float area  = 0;
    
    cout << "Enter Length of room \n";
    getline(cin,lengthNum);
    stringstream(lengthNum) >> length;
    
    cout << "Enter Width of room \n";
    getline(cin,widthNum);
    stringstream(widthNum) >> width;
    
    area = length*width;
    
    cout << "Area of Room :\n"<<area;
    
}

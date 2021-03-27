/*Formatting Output 
**Goal: practice using cout to format output to console
**Print the variables in three columns:
**Ints, Floats, Doubles
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;

    cout <<"The three columns are :\n";
    cout <<"Ints"<<setw(20)<<"Floats"<<setw(20)<<"Doubles\n";
    cout <<a<<setw(20)<<b<<setw(20)<<c<<endl;
    cout <<aa<<setw(20)<<bb<<setw(20)<<cc<<endl;
    cout <<aaa<<setw(20)<<bbb<<setw(20)<<ccc;
    return 0;
}

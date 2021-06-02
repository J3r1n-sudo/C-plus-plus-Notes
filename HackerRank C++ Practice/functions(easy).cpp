/*
Input Format

Input will contain four integers -  , one per line.

Output Format :

Return the greatest of the four integers.
PS: I/O will be automatically handled.

Sample Input

3
4
6
5
Sample Output

6
*/

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d)
{
    int greatest;
    if(a>b && a>c && a>d)
    {
        greatest = a;
    }
    else if(b>a && b>c && b>d)
    {
        greatest = b;
    }
    else if(c>a && c>b && c>d)
    {
        greatest = c;
    }
    else if(d>a && d>b && d>c)
    {
        greatest = d;
    }
return greatest;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

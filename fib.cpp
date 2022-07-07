#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define MOD 1000000007;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n ;
    int a,b,c;
    if(n==1)
    {
        cout<<a<<"\n";
        return 0;
    }
    if(n==2)
    {
        cout<<b<<"\n";
        return 0;
    }
    for(int i = 3; i<=n; i++)
    {
        c = a + b;
        a =b;
        b = c;
    }
    cout<<c<<"\n";
    return 0;
}
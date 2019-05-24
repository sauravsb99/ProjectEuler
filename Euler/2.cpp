#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    vector<int> v;
    int a,b,c;
    a=1;
    b=2;
    c=a+b;
    long int sum=0;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    for(;c<4000000;){
        a=b;
        b=c;
        c=a+b;
        v.push_back(c);
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]%2==0)
            sum=sum+v[i];
    }
    cout<<sum;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

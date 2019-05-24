#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int a=600851475143;
    // cout<<a;
    long int m=0;
    int flag=0;
    vector<long int> v;
    for(long int i=2;i<a;i++)
    {
        // m=i;
        flag=0;
        for(long int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;

            }
        }
        if(flag==0)
        v.push_back(i);
    }

    for(int j=0;j<v.size();j++)
    {
        if(a%v[j]==0)
            m=v[j];
    }
     cout<<m;
    return 0;
}

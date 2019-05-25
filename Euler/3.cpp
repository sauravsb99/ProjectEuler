#include <iostream>

using namespace std;
int main()
{
    const long num=600851475143;
    long a=num;
    // cin>>a;
    int max;
    int counter=2;
    while(counter*counter<=a){
            if(a%counter==0)
            {
                a=a/counter;
                max=counter;
            }
            else
            {
                counter++;
            }     

    }
    if(a>max)
    max=a;
    cout<<max;
}
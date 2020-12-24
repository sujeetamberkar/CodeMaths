#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long  num;
    cout<<"Enter the upper limit  ";
    cin>>num;


     long double var0 =1.442695041 ,sum=0,varn=0,var=0,answer;

    for(int i=3;i<=num;i++)
    {

        if(i!=num)
        {
            var=(1/log(i));
            sum=sum+var;
        }
        else
            varn=(1/log(num));
    }

    answer=((var0+varn)+2*(sum))/2;

    cout<<"There are total "<<int(answer)<<" from 2 to "<<num;

    return 0;
}

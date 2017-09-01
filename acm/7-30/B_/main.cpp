#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
const double ESP=1e-3;
const double PI=3.141592654;
int s;
double caculate(double r)
{
    double l=(s-r*r*PI)/PI/r;
    double h=sqrt(l*l-r*r);
    return r*r*h*PI/3;
}
double c_h(double r)
{
    double l=(s-r*r*PI)/PI/r;
    return sqrt(l*l-r*r);
}
int main()
{


    while(scanf("%d",&s)!=EOF)
    {
        double high,low,mid,midmid,cmid,cmidmid;
        low=0;
        high=sqrt(s/2*PI);
        while(low+ESP<high)
        {
            mid=(low+high)/2;
            midmid=(mid+high)/2;
            cmid=caculate(mid);
            cmidmid=caculate(midmid);
            if(cmid<cmidmid)
            {
                low=mid;
            }
            else
                high=midmid;

        }

        printf("%.2f\n%.2f\n%.2f\n",cmid,c_h(low),high);
    }
    return 0;
}

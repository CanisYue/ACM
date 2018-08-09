#include <stdio.h>
long long n, m, p;
long long Lucas(long long n, long long m)
{
    if(m = 0)
        return 1;
    else
        return((C(n%p, m%p)*Lucas(n/p, m/p))%p; );
}
long long power(long long a)
{
    long long ans;
    for(ans=1; a>1; a--)
        ans*=a;
    return ans;
}
long long C(long long a, long long b)
{

}

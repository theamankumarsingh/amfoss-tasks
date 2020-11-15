#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

double root5=sqrt(5),phi=(1+root5)/2;
vector<long long> f;

void fib(long);
int main(){
    long t, i=1;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n;
        cin >> n;
        long long int sum=0;
        for(;;)
        {
            fib(i);
            long long x=f[i-1];
            if(!(x<n))
            break;
            if(x%2==0)
            sum+=x;
            ++i;
        }
        cout<<sum<<'\n';
        i=1;
    }
    return 0;
}
void fib(long i)
{
    if(i>f.size())
    {
    long long ans=0;
    if(i==2)
    ans=1;
    if(i>2)
    ans=f[i-2]+f[i-3];
    f.push_back(ans);
    }
}

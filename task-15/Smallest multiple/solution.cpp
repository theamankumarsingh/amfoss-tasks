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

long long int hcf(long long int, long long int);
long long int lcm(long long int);
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<lcm(n)<<'\n';
    }
    return 0;
}
long long int lcm(long long int n)
{
    long long int ans=1;
    for(long long int i=2; i<=n; i++)
    {
        ans=(ans*i)/hcf(ans,i);
    }
    return ans;
}
long long int hcf(long long int a, long long int b)
{
    if(b)
    return hcf(b,a%b);
    return a;
}

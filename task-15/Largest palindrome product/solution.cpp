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

int isThreeDigit(long long);
long long getPalindrome(long long);
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<getPalindrome(n)<<'\n';
    }
    return 0;
}
long long getPalindrome(long long n)
{
    long long max,pal;
    for(long long p=999; p>99; p--)
    {
        pal=p*1000+(p%10)*100+(p/10%10)*10+(p/100);
        for(int i=90; i>9; i--)
        {
            if(pal%(i*11)==0 && pal<n && isThreeDigit(pal/(i*11)))
            {
            return pal;}
        }
    }
    return 0;
}
int isThreeDigit(long long x)
{
    int c=0;
    while(x!=0)
    {
        x=x/10;
        c++;
    }
    if(c==3)
    return 1;
    return x;
}

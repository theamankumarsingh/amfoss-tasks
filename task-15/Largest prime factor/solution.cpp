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

long long maxprime(long long);
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n;
        cin >> n;
        if(n>2){
        cout<<maxprime(n)<<'\n';
        }
    }
    return 0;
}
long long maxprime(long long n)
{
    long long max = 0; 
    //dividing by 2 till we get odd number
    while (n % 2 == 0) { 
        max = 2; 
        n >>= 1;
    }
    //finding factors of odd number
    for (int i = 3; i <= sqrt(n); i += 2) { 
        while (n % i == 0) { 
            max = i; 
            n = n / i; 
        } 
    } 
    //in case n is not reduced to 1, the number itself is prime
    if (n!=1) 
        max = n; 
  
    return max; 
}

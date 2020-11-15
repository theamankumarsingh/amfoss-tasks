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


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        n=n-1;
        long sum_3=3*(n/3)*(n/3+1)/2;
        long sum_5=5*(n/5)*(n/5+1)/2;
        long sum_15=15*(n/15)*(n/15+1)/2;
        cout<<sum_3+sum_5-sum_15<<'\n';
    }
    return 0;
}

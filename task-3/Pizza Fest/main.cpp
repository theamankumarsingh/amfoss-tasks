#include <map>
#include <vector>
#include <iostream>

using namespace std;
int main() {
    int n, k;
    long long value;
    cin >> n >> k;
    //using map to map IDs to house :
    map<long long, vector<int> > m;
    for(int i = 0; i < n; ++i) {
        cin >> value;
        m[value].push_back(i+1);
    }
    //printing result list
    for(int i = 0; i < k; ++i) {
        cin >> value;
        if(m[value].empty())
            cout << -1 << " ";
        else {
            cout << m[value][m[value].size()-1] << " ";
            m[value].pop_back();
        }
    }
    return 0;
}

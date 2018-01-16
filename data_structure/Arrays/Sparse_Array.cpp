#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;


int main() {
    /* use unordered_multiset, which is implemented using hash tables
    insertion, find, deletion O(1), worst(n)
    */

    int i, n, q;
    string word;
    unordered_multiset<std::string> set;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> word;
        set.insert(word);
    }
    cin >> q;
    for(i = 0; i<q; i++)
    {
        cin >> word; 
        cout << set.count(word) << endl;
    }
    
    
    return 0;
}

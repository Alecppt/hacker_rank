#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q, lastAnswer = 0, i, x, y, type, index;
    cin >> n;
    cin >> q;
    vector< vector<int> > arr;
    arr.resize(n);
    for ( i = 0; i < q; i++)
    {
        cin >> type;
        cin >> x;
        cin >> y;
        index = (x ^ lastAnswer) % n;
        if(type == 1)
        {
            arr[index].push_back(y);    
        
        }
        else if (type == 2)
        {

            lastAnswer = arr[index].at(y%arr[index].size());
            cout << lastAnswer << endl;
        }
    }
    return 0;
}


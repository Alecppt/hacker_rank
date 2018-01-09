#include <bits/stdc++.h>

using namespace std;

vector <int> leftRotation(vector <int> a, int d) {
    
    // brick-force iterating method O(n*d)
    /*
    int i, temp, c = 0;
    while (c!=d)
    {
        temp = a[0];
        for ( i=0; i< a.size();i++)
        {
            if(i == a.size() - 1)
            {
                a[i] = temp;
            }
            else
            {
                a[i] = a[i+1];    
            }
        }
        c++;
    }
    */
    
    // one pass O(n), space(n)
    int i, k;
    k = a.size();
    vector<int> tmp(k);
    for( i=0; i<k;i++)
    {
        tmp[(i + k - d)% k ] = a[i];
    }
    return tmp;
}

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector <int> result = leftRotation(a, d);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}

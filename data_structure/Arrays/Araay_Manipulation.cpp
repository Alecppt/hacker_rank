#include <bits/stdc++.h>

using namespace std;

int main() {

    long int max = 0, sum = 0, n, m;
    cin >> n >> m;
    long int *arr = new long int[n]();
    for(int a0 = 0; a0 < m; a0++){
        long int a, b, k;
        cin >> a >> b >> k;
        /*
        record the difference of addtion
        at starting index and end index O(1)
        */
        arr[a-1] += k;
        if(b <=n)
        {
            arr[b]-=k;
        }
    }
    /*
    adding all difference and find the max of the difference
    O(N)
    */
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if(sum > max) max = sum;
    }
    cout << max <<endl;
    return 0;
}

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
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    int i, j, top, middle, bottom, sum = -63; 
    
    for (i = 0; i < 4; i++ )
    {
        for(j = 0; j <4; j++)
        {
            top =  arr[i][j]+ arr[i][j+1]+ arr[i][j+2];
            middle = arr[i+1][j+1];
            bottom =  arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            int result =  top + middle + bottom;
            if (sum < result) 
            {
                sum = result;   
            }
        }
    }
    cout << sum;
    return 0;
}



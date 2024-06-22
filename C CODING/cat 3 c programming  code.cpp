#include <bits/stdc++.h>
using namespace std;
 
void min_identical_bottles(int* arr, int n)
{
    map<int, int> m;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        m[arr[i]]++;
        ans = max(ans, m[arr[i]]);
    }
 
    cout << "Maximum number of "
         << "identical  Bottles are: "
         << ans << endl;
}
 
// Driver code
int main()
{
    int n = 8;
    int arr[] = { 1, 1, 2, 3, 4, 5, 5, 4 };
 
    // Find the solution
    min_identical_bottles(arr, 1);
 
    return 0;
}
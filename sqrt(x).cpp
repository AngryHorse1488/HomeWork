#include <iostream>
int mySqrt(int x) {
    if (x == 0) return 0; 
    
    int left = 1;
    int right = x;
    int ans = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (mid <= x / mid) { 
            ans = mid; 
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
    
    return ans;
}

using namespace std;
int main() {

    
    int x1 = 4;
    int x2 = 8;
    
    int result1 = mySqrt(x1);
    int result2 = mySqrt(x2);
    
    cout << result1 << "\n";
    cout << result2 <<"\n";
    
    return 0;
}

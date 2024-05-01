#include <iostream>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        return ((n & (n - 1)) == 0);
    }
};

int main() {
    Solution solution;
    
    // Test cases
    int n1 = 4;
    int n2 = 6;
    
    cout << "Is " << n1 << " a power of two? " << (solution.isPowerOfTwo(n1) ? "Yes" : "No") << endl;
    cout << "Is " << n2 << " a power of two? " << (solution.isPowerOfTwo(n2) ? "Yes" : "No") << endl;
    
    return 0;
}

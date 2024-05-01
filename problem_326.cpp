#include <iostream>

using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 0) return false;
        if (n == 1) return true;
        
        return (n % 3 == 0) && (isPowerOfThree(n / 3));
    }
};

int main() {
    Solution solution;

    // Test cases
    int n1 = 27;
    int n2 = 10;
    
    cout << n1 << " is power of three? " << (solution.isPowerOfThree(n1) ? "Yes" : "No") << endl;
    cout << n2 << " is power of three? " << (solution.isPowerOfThree(n2) ? "Yes" : "No") << endl;
    
    return 0;
}

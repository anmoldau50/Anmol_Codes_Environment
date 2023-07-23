#include<bits/stdc++.h>


using namespace std;

class Solution {
public:

    int trailingZeroes(int n) {
        
        int num=floor((n)/log10(5));
        int cc=0;
        for(int i=1;i<=num;i++){
            cc=cc+floor(n/int(pow(5,i)));
        }
        return cc;
    }
};

int main() {
    int n = 101;
    Solution func;
    int p = func.trailingZeroes(n);
    cout << p << endl;
    return 0;
}

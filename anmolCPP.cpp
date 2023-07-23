
#include<bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;



class Solution {
public:

    
    int countVowelStrings(vector<int>target,int n) {
 
        
        vector<string>arr;

        int i=1;
        int ind=0;
        int k=target.size();

        while(i<=n){
            
            
            if(i<target[ind]){
                arr.push_back("Push");
                arr.push_back("Pop");
                i++;
            }
            else{
                arr.push_back("Push");
                ind++;
                i++;
                k--;
            }
        }


        for(auto i:arr){
            cout<<i<<endl;
        }

        return 0;

    }
};


int main() {

    vector<int> nums = {1,2};

//    vector<int> nums = {183,219,57,193,94,233,202,154,65,240,97,234,100,249,186,66,90,238,168,128,177,235,50,81,185,165,217,207,88,80,112,78,135,62,228,247,211};

    int n=4;

    Solution func;
    int p=func.countVowelStrings(nums,n);
    cout<<p;

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int minIncrementsForDivisibleBy3(vector<int>& arr) {
    int count0 = 0, count1 = 0, count2 = 0;

    // Count the number of elements with each remainder value when divided by 3
    for (int num : arr) {
        int remainder = num % 3;
        if (remainder == 0) count0++;
        else if (remainder == 1) count1++;
        else if (remainder == 2) count2++;
    }

    int totalCount = count0 + count1 + count2;
    int minIncrements = 0;

    // Case 1: All elements have the same remainder when divided by 3
    if (count0 == totalCount || count1 == totalCount || count2 == totalCount) {
        // No increments needed as the sum of every three consecutive elements is already divisible by 3
        return 0;
    }

    // Case 2: Two different remainder values
    if ((count0 > 0 && count1 > 0) || (count1 > 0 && count2 > 0) || (count0 > 0 && count2 > 0)) {
        minIncrements = min(count0 % 3,min(count1 % 3, count2 % 3));
        minIncrements = (3 - minIncrements) % 3;
    }

    // Case 3: All three different remainder values
    else if (count0 > 0 && count1 > 0 && count2 > 0) {
        minIncrements = min(count0 % 3,min(count1 % 3, count2 % 3));
        int diff = max(count0,max(count1, count2)) - min(count0, min(count1, count2));
        minIncrements += (3 - diff % 3) % 3;
    }

    return minIncrements;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
    	cin >> arr[i];
    }

    int minIncrements = minIncrementsForDivisibleBy3(arr);
    cout << minIncrements <<endl;

    return 0;
}

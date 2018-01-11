//
//  main.cpp
//  LeetCode179_LargestNumber
//
//  Created by Rui on 1/10/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int res;
        
        //sort the nums in the order in string if a, b are elements in nums, ab > ba then sort in ab
        sort(nums.begin(), nums.end(), [](int a, int b)
        {
            return (to_string(a) + to_string(b) > (to_string(b) + to_string(a)))
        })
            
        for(int i = 0; i < nums.size(); i++)
            res += to_string(nums[i]);
        
        return res[0] == '0' ? "0" : res;
        
    }
};

//
//  main.cpp
//  indices of the two numbers
//
//  Created by Abhilash on 25/3/18.
//  Copyright © 2018 abhi. All rights reserved.
//


// Given an array of integers, return indices of the two numbers such that they add up to a specific target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
//
// Example:
// Given nums = [2, 7, 11, 15], target = 9,
// Because nums[0] + nums[1] = 2 + 7 = 9,
// return [0, 1].

// The solution address O(n^2)
#include <iostream>
#include <vector>
using namespace std;

class MySolution {
public:
    vector<int> sumTwo(vector<int>& number, int target) {
        
        int n = (int)number.size();
        for (int i = 0 ; i<n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i != j) {
                    if(number[i] + number[j] == target) {
                        //return (i,j)
                        vector<int> ret{i,j};
                        return ret;
                    }
                }
            }
        }
        vector<int> ret1{-1, -1};
        return ret1;
    }
    
};

int main(int argc, const char * argv[]) {
    vector<int> nums {2, 7, 11, 15};
    vector<int> indices;
    
    MySolution mysln;
    indices =  mysln.sumTwo(nums, 17);
    
    // output format will be [0, 3]
    cout<< "["<<indices[0] <<", "<< indices[1]<<"]";
    return 0;
}

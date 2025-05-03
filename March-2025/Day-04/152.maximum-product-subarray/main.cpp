class Solution {
public:
    int maxProduct(std::vector<int>& nums) {
        int result = nums[0];
        int maxSoFar = nums[0];
        int minSoFar = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int curr = nums[i];

            if (curr < 0)
                std::swap(maxSoFar, minSoFar);

            maxSoFar = std::max(curr, maxSoFar * curr);
            minSoFar = std::min(curr, minSoFar * curr);

            result = std::max(result, maxSoFar);
        }

        return result;
    }
};


// class Solution {
// public:
//     std::vector<std::vector<int>> vectorSplitByZero(std::vector<int>& nums) {
//         std::vector<std::vector<int>> result;
//         std::vector<int> current;
//         for (int num : nums) {
//             if (num == 0) {
//                 if (!current.empty()) {
//                     result.push_back(current);
//                     current.clear();
//                 }
//             } else {
//                 current.push_back(num);
//             }
//         }
//         if (!current.empty()) {
//             result.push_back(current);
//         }
//         return result;
//     }

//     int maxProduct(std::vector<int>& nums) {
//         int maxSoFar = INT_MIN;
//         std::vector<std::vector<int>> subarrays = vectorSplitByZero(nums);

//         for (const std::vector<int>& subarray : subarrays) {
//             for (int i = 0; i < subarray.size(); ++i) {
//                 int prod = 1;
//                 for (int j = i; j < subarray.size(); ++j) {
//                     prod *= subarray[j];
//                     maxSoFar = std::max(maxSoFar, prod);
//                 }
//             }
//         }
//         for (int num : nums) {
//             if (num == 0) {
//                 maxSoFar = std::max(maxSoFar, 0);
//             }
//         }

//         return maxSoFar;
//     }
// };


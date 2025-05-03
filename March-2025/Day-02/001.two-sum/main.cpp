#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> solution(std::vector<int> nums, int target) {
  std::unordered_map<int, int> umap;

  for (int i = 0; i < nums.size(); i++) {
    int find = target - nums[i];
    if (umap.find(find) != umap.end()) {
      return {umap[find], i};
    }
  umap[nums[i]] = i;
  }
}


// Helper function to print result
void printVector(const std::vector<int>& vec) {
  std::cout << "[";
  for (size_t i = 0; i < vec.size(); i++) {
    std::cout << vec[i];
    if (i < vec.size() - 1) std::cout << ", ";
  }
  std::cout << "]" << std::endl;
}

int main() {
  printVector(solution({2, 7, 11, 15}, 9));
  printVector(solution({3, 2, 4}, 6));
  printVector(solution({3, 3}, 6));
  return 0;
}

/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> umap;

        for (int i = 0; i < nums.size(); i++) {
            int find = target - nums[i];
            if (umap.find(find) != umap.end()) {
                return {umap[find], i};
            }
            umap[nums[i]] = i;
        }   
        return {-1, -1};
    }
};
*/
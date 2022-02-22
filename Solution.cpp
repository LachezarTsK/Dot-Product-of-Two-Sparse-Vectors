
#include <unordered_map>
#include <vector>
using namespace std;

class SparseVector {
    
public:
    unordered_map<size_t, int>indexToNonzeroValue;

    SparseVector(vector<int>& nums) {
        const size_t size = nums.size();
        for (size_t i = 0; i < size; i++) {
            if (nums[i] != 0) {
                indexToNonzeroValue[i] = nums[i];
            }
        }
    }

    int dotProduct(SparseVector& vec) {
        int productSum = 0;
        for (const auto& entry : indexToNonzeroValue) {
            if (vec.indexToNonzeroValue.find(entry.first) != vec.indexToNonzeroValue.end()) {
                productSum += indexToNonzeroValue[entry.first] * vec.indexToNonzeroValue[entry.first];
            }
        }
        return productSum;
    }
};

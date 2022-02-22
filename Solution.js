
/**
 * @param {number[]} nums
 * @return {SparseVector}
 */
var SparseVector = function (nums) {
    this.indexToNonzeroValue = new Map();
    const size = nums.length;
    for (let i = 0; i < size; i++) {
        if (nums[i] !== 0) {
            this.indexToNonzeroValue.set(i, nums[i]);
        }
    }
};


/**
 * @param {SparseVector} vec
 * @return {number}
 */
SparseVector.prototype.dotProduct = function (vec) {
    let productSum = 0;
    for (let index of this.indexToNonzeroValue.keys()) {
        if (vec.indexToNonzeroValue.has(index)) {
            productSum += this.indexToNonzeroValue.get(index) * vec.indexToNonzeroValue.get(index);
        }
    }
    return productSum;
};

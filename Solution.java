
import java.util.Map;
import java.util.HashMap;

public class SparseVector {

    Map<Integer, Integer> indexToNonzeroValue;

    SparseVector(int[] nums) {
        indexToNonzeroValue = new HashMap<>();
        final int size = nums.length;
        for (int i = 0; i < size; i++) {
            if (nums[i] != 0) {
                indexToNonzeroValue.put(i, nums[i]);
            }
        }
    }

    public int dotProduct(SparseVector vec) {
        int productSum = 0;
        for (int index : indexToNonzeroValue.keySet()) {
            if (vec.indexToNonzeroValue.containsKey(index)) {
                productSum += indexToNonzeroValue.get(index) * vec.indexToNonzeroValue.get(index);
            }
        }
        return productSum;
    }
}

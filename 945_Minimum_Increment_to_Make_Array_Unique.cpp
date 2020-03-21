class Solution {
public:
    int minIncrementForUnique(vector<int>& A) {
        if (A.size() == 0) {
            return 0;
        }
        int count = 0;
        sort(A.begin(), A.end());
        int min = *A.begin();
        for (auto it = A.begin(); it != A.end(); it++) {
            if (*it <= min) {
                count += min - *it;
            } else {
                min = *it;
            }
            min++;
        }
        return count;
    }
};

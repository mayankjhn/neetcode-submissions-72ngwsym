class Solution {
public:
    int maxArea(vector<int>& arr) {
        int i = 0, j = arr.size() - 1;
        int maxArea = 0;

        while (i < j) {
            int height = min(arr[i], arr[j]);
            int width = j - i;
            maxArea = max(maxArea, height * width);

            if (arr[i] < arr[j]) {
                i++;
            } else {
                j--;
            }
        }

        return maxArea;
    }
};
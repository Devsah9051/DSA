class Solution {
public:
    int maxFrequency(vector<int>& no, int k) {
         sort(no.begin(), no.end());

    long long current_sum = 0;
    int left = 0;
    int max_freq = 0;
    for (int right = 0; right < no.size(); right++) {
        current_sum += no[right];
        while ((long long)(right - left + 1) * no[right] - current_sum > k) {
            current_sum -= no[left];
            left++; 
        }
        max_freq = max(max_freq, right - left + 1);
    }

    return max_freq;
    }
};
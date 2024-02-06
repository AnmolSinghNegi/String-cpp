#include <string>
#include <unordered_map>
#include <climits>

class Solution {
public:
    int findSubString(std::string str) {
        int count = 0;
        std::unordered_map<char, int> mpp;

        for (int i = 0; i < str.size(); i++) {
            if (!mpp.count(str[i])) {
                count++;
                mpp[str[i]]++;
            }
        }

        mpp.clear();

        int min_len = INT_MAX;
        int left = 0, right = 0;

        while (right < str.size()) {
            mpp[str[right]]++;

            while (mpp.size() == count) {
                min_len = std::min(min_len, right - left + 1);
                mpp[str[left]]--;

                if (mpp[str[left]] == 0) {
                    mpp.erase(str[left]);
                }

                left++;
            }

            right++;
        }

        return (min_len == INT_MAX) ? 0 : min_len;
    }
};
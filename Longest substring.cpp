#include<bits/stdc++.h>
using namespace std;
class Solution {

    // Time : O(n)
    // Space : O(1)

public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        int h[128] = {0};
        int c = 0;
        int mc = 0;
        while(j < s.size()) // O(n)
        {
            if(h[s[j]] >= 1)
            {
                while(s[i] != s[j])
                {
                    h[s[i]]--;
                    i++;
                }
                h[s[i]]--;
                i++;
            }
            h[s[j]]++;
            j++;
            c = j - i;
            mc = max(c, mc);
        }
        return mc ;
    }
};
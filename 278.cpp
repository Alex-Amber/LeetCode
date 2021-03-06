#include <bits/stdc++.h>

using namespace std;
using ull = uint64_t;
using ll = int64_t;
using ld = long double;

bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1, r = n, mid;
        while (r - l > 1) {
            mid = l + (r - l) / 2;
            if (isBadVersion(mid))
                r = mid;
            else
                l = mid;
        }
        if (isBadVersion(l))
            return l;
        else
            return r;
    }
};

# Approach 1: Sliding Window

## Algorithm:
1. Declare `m` and `n` as variables, and initialize them with the length of `needle` and `haystack` respectively.
2. Declare the `window_start` variable, and initialize it with `0`. Now, iterate `window_start` till starting index of the last substring of length `m`, i.e till `n - m`.
3. For each `window_start`, iterate variable `i` from `0` to `m - 1`. Check if the `i^{th}` character in the `window` i.e index `window_start + i` is equal to the `i^{th}` character in the `needle`, if yes, then increment `i` by `1`. If not, reset `window_start` to `window_start + 1`.
4. If all the `i^{th}` characters in the window are equal to the `i^{th}` characters of `needle`, then return the `window_start`.
5. If we are done iterating over all values of `window_start` and none of them return a match, then return `-1`.

## Implementation:
```c++
class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = needle.length();
        int n = haystack.length();

        for (int windowStart = 0; windowStart <= n - m; windowStart++) {
            for (int i = 0; i < m; i++) {
                if (needle[i] != haystack[windowStart + i]) {
                    break;
                }
                if (i == m - 1) {
                    return windowStart;
                }
            }
        }

        return -1;
    }
};
```

# Approach 2: Rabin-Karp Algorithm (Single Hash)

# Approach 3: Rabin-Karp algorithm (Double Hash)

# Approach 4: Knuth–Morris–Pratt Algorithm


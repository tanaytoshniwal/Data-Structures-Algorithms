# Longest Common Subsequence

Given two sequences, find the length of longest subsequence present in both of them. A subsequence is a sequence that appears in the same relative order, but not necessarily contiguous. For example, “abc”, “abg”, “bdf”, “aeg”, ‘”acefg”, .. etc are subsequences of “abcdefg”.

### Observations

For the given input strings:

    input_string_1 = 'AGGTABPIXIL'
    input_string_2 = 'GXTXAYBPXL'
the output were as follows:

using recurssion:

    7
    13.635635375976562

using memoization(dynamic):

    7
    0.15354156494140625

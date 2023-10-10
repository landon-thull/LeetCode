# [973 - K Closest Points to Origin](https://leetcode.com/problems/k-closest-points-to-origin/)

## Approach 1 - Sorted Array

### Intuition
Calculate the distance from the origin of each `point` in `points` and add it to an array. Sort the array lowest to highest and return the first `k` elements.

### Algorithm
1. Initialize a list `distances` (`vector<pair<int, int>>`), this will hold a given points distance from the origin, and its index in `points`.
2. Iterate through each `point` in `points`, calculate its distance from the origin and append it to `distances`.
3. Sort `distances` by each points distance from the origin.
4. Return the associated `point` for the first `k` elements in `distances`.

### Complexity Analysis
- Time Complexity: `O(N log N)`, where `N` is the length of `points`.
- Space Complexity: `O(N)`.
// source : https://leetcode.com/problems/k-closest-points-to-origin
// author : Landon Thull
// date   : 10-09-2023

class Solution {
public:
  int calcDistance(vector<int>& point) {
    return (point[0] * point[0] + point[1] * point[1]);
  }

  vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    vector<pair<int, int>> distances;

    for (int i = 0; i < points.size(); i++) {
      distances.push_back({calcDistance(points[i]), i});
    }

    sort(distances.begin(), distances.end());

    vector<vector<int>> res;

    for (int i = 0; i < k; i++) {
      res.push_back(points[distances[i].second]);
    }

    return res;
  }
};
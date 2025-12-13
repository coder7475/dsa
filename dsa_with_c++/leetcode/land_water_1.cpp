#include <climits>
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  int earliestFinishTime(vector<int> &landStartTime, vector<int> &landDuration,
                         vector<int> &waterStartTime,
                         vector<int> &waterDuration) {

    int min_ft = INT_MAX;

    for (size_t i = 0; i < landStartTime.size(); i++) {
      for (size_t j = 0; j < waterStartTime.size(); j++) {
        // land to water
        int land_cost = landStartTime[i] + landDuration[i];
        int water_start = max(land_cost, waterStartTime[j]);
        int lw_time = water_start + waterDuration[j];
        // water to land
        int water_cost = waterStartTime[j] + waterDuration[j];
        int land_start = max(water_cost, landStartTime[i]);
        int wl_time = land_start + landDuration[i];

        int min_cy = min(lw_time, wl_time);
        min_ft = min(min_ft, min_cy);
      }
    }

    return min_ft;
  }
};

int main() {
  vector<int> lt = {2, 8}, ld = {4, 1}, wt = {6}, wd = {3};
  vector<int> lt2 = {5}, ld2 = {3}, wt2 = {1}, wd2 = {10};

  Solution obj;

  cout << obj.earliestFinishTime(lt, ld, wt, wd) << endl;
  cout << obj.earliestFinishTime(lt2, ld2, wt2, wd2) << endl;

  return 0;
}

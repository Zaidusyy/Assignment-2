/*Problem 994: Rotting Oranges
*You are given an m x n grid where each cell can have one of three values:
*0 representing an empty cell,
*1 representing a fresh orange, or
*2 representing a rotten orange.
*Every minute, any fresh orange that is 4-directionally adjacent to a rotten orange becomes rotten.
*Return the minimum number of minutes that must elapse until no cell has a fresh orange. If this is impossible, return -1.
*/

#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();         
        int cols = grid[0].size();       
        int freshCount = 0;              
        queue<pair<int, int>> rottenQueue; 
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (grid[i][j] == 2) {
                    rottenQueue.emplace(i, j);
                } else if (grid[i][j] == 1) {
                    ++freshCount;
                }
            }
        }
      
        int minutesElapsed = 0;
        vector<int> directions = {-1, 0, 1, 0, -1};
      
        while (!rottenQueue.empty() && freshCount > 0) {
            ++minutesElapsed;
            for (int i = rottenQueue.size(); i > 0; --i) {
                auto position = rottenQueue.front();
                rottenQueue.pop();
                for (int j = 0; j < 4; ++j) {
                    int newRow = position.first + directions[j];
                    int newCol = position.second + directions[j + 1];
                    if (newRow >= 0 && newRow < rows && newCol >= 0 && newCol < cols && grid[newRow][newCol] == 1) {
                        --freshCount;               
                        grid[newRow][newCol] = 2;  
                        rottenQueue.emplace(newRow, newCol);
                    }
                }
            }
        }
      
        if (freshCount > 0) {
            return -1; 
        } else {
            return minutesElapsed; 
        }
    }
};
/*Problem 886: Possible Bipartition
*We want to split a group of n people (labeled from 1 to n) into two groups of any size. Each person may dislike some other people, and they should not go into the same group.
*Given the integer n and the array dislikes where dislikes[i] = [ai, bi] indicates that the person labeled ai does not like the person labeled bi, return true if it is possible to split everyone into two groups in this way.
*/

#include <vector>    
#include <numeric>   
#include <unordered_map> 
#include <functional>

class Solution {
public:
    bool possibleBipartition(int n, std::vector<std::vector<int>>& dislikes) {
        std::vector<int> parent(n);
        iota(parent.begin(), parent.end(), 0);
      
        std::unordered_map<int, std::vector<int>> graph;
        for (const auto& edge : dislikes) {
            int a = edge[0] - 1; 
            int b = edge[1] - 1; 
            graph[a].push_back(b); 
            graph[b].push_back(a); 
        }

        std::function<int(int)> find = [&](int node) -> int {
            if (parent[node] != node) {
                parent[node] = find(parent[node]);
            }
            return parent[node];
        };

        for (int i = 0; i < n; ++i) {
            if (!graph[i].empty()) {
                int parentI = find(i);
                int firstDislike = graph[i][0]; 
                for (int dislikeNode : graph[i]) {
                    if (find(dislikeNode) == parentI) return false;
                  
                    parent[find(dislikeNode)] = find(firstDislike);
                }
            }
        }

        return true;
    }
};
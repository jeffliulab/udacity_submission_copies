#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main(){
    vector<vector<int>> grid {
        {0,1,0,0,0,0},
        {0,1,0,0,0,0},
        {0,1,0,0,0,0},
        {0,1,0,0,0,0},
        {0,0,0,0,1,0}
        };

    // 遍历输出二维 vector
    for (auto& row : grid) {
        for (auto& val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }
}
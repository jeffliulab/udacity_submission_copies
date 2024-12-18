#include <iostream>
using std::cout;
#include <vector>
using std::vector;

int main(){
    vector<int> v {1,2,3};

    for(int i = -3; i <= 10; i++){
        cout << i << " ";
    }

    vector<vector<int>> b {{1,2},
    {3,4},{5,6}};

    for(int i = 0 ; i < b.size() ; i++){
        for(int j = 0; j < b[0].size() ; j++){
            cout << b[i][j] << " ";
        }

    }
}
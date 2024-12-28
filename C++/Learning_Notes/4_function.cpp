#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// Define a function "AdditionFunction" here.
// Instead of just two ints, this function should accept a vector<int> 
// as the argument, and it should return the sum of all the ints in the vector.

int AdditionFunction(const vector<int>& v){
    int sum = 0;
    for(int num: v){
        sum += num;
    }
    return sum;
}

void PrintBoard(const vector<vector<int>>& board){
    for (const auto& row: board){
        for(const auto& val: row){
            cout << val << " ";
        }
        cout << "\n";
    }

}

int main() 
{
    vector<int> v {1, 2, 3};
    
    // Uncomment the following line to call your function:
    //cout << AdditionFunction(v) << "\n";

    cout << AdditionFunction(v) << "\n";

    vector<vector<int>> grid {
        {0,1,0,0,0,0},
        {0,1,0,0,0,0},
        {0,1,0,0,0,0},
        {0,1,0,0,0,0},
        {0,0,0,0,1,0}
    };

    PrintBoard(grid);
}
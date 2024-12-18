#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main(){
    cout << "hello" << "\n";
    int a = 100;
    cout << a << "\n";

    vector<int> v_1{0,1,2};
    vector<int> v_2{3,4,5};
    vector<int> v_3;
    v_3 = {6};

    vector<vector<int>> v {{1,2},{3,4}};
    cout << "create a 2d vector" << "\n";
    //2d vector will be used in A* algorithm

    /*
    why use vector in cpp?
    because in cpp, array is hard to use,
    and it is not like in java.
    so for new learners, learn vector is better.
    */

}
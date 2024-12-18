#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using std::cout;

int main(){
    string a("1,2,3");

    istringstream my_stream(a);

    int n;
    char c;

    // the most common way to use my_stream
    while(my_stream >> n){
        cout << n << "\n";
        my_stream >> c;        
    }
    cout << "No string any more!\n";
}
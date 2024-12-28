// Parsing（解析）是一种将输入数据（通常是文本）按照特定规则
// 进行分解、分析并理解的过程。
// 在编程和计算机科学中，
// 解析通常指把输入的数据结构化并转换成程序可以处理的形式。

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;

// ParseLine 函数：解析一行字符串为整数 vector
vector<int> ParseLine(string line) {
    vector<int> row;       // 存储解析后的整数
    istringstream sstream(line); // 用于解析字符串
    int number;
    char comma;

    // 逐个提取整数和逗号
    while (sstream >> number) { 
        row.push_back(number);   // 存储整数
        sstream >> comma;        // 跳过逗号
    }
    return row;
}

// 读取文件内容并将其存储为 vector<vector<int>> 格式
vector<vector<int>> ReadBoardFile(string path) {
    ifstream myfile(path);      // 打开文件
    vector<vector<int>> board;  // 存储整个棋盘
    if (myfile) {
        string line;
        while (getline(myfile, line)) {
            vector<int> row = ParseLine(line); // 调用 ParseLine 解析每一行
            board.push_back(row);              // 将解析结果添加到棋盘中
        }
    }
    return board;
}

// 打印棋盘内容
void PrintBoard(const vector<vector<int>> board) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    // 读取文件并解析
    vector<vector<int>> board = ReadBoardFile("grid.board");

    // 打印解析后的棋盘
    PrintBoard(board);
    return 0;
}

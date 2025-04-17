#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    // 创建输入输出文件流
    ifstream infile("input.txt");
    ofstream outfile("aligned_output.txt");

    // 检查文件是否成功打开
    if (!infile.is_open() || !outfile.is_open()) {
        cerr << "错误：无法打开文件" << endl;
        return 1;
    }

    // 设置列对齐格式
    outfile << right;  // 右对齐所有输出
    
    int count, channel;
    
    // 处理数据并写入文件
    while (infile >> count >> channel) {
        outfile << setw(6) << count    // Count列6位宽
                << "    "              // 列间4空格分隔
                << setw(4) << channel  // Channel列4位宽
                << endl;
    }

    // 关闭文件流
    infile.close();
    outfile.close();

    cout << "数据已对齐保存到 aligned_output.txt" << endl;
    return 0;
}

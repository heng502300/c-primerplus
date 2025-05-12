#include <iostream>
#include <fstream>
#include <string>


int main() 
{
    using namespace std;
    string file_name;
    cout << "Enter the file name: ";
    cin >> file_name;
    ofstream fout(file_name);
    fout << "Hello, world!" << endl;
    cout << "Enter your secret number: ";
    float secret;
    cin >> secret;
    fout << "Your secret number is " << secret << endl;
    fout.close();

    ifstream fin(file_name);
    cout << "Here are the contents of " << file_name << ":\n";
    char ch;
    while (fin.get(ch))
        cout << ch;
    cout << "Done\n";
    fin.close();

    return 0;
}
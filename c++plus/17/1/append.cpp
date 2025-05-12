#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

const char * file_name = "file.txt";

int main()
{
    using namespace std;
    char ch;
    ifstream fin(file_name);
    if (fin.is_open())
    {
        cout << "Here are the contents of " << file_name << ":\n";
        while (fin.get(ch))
            cout << ch;
        fin.close();
    }

    ofstream fout(file_name, ios_base::out | ios_base::app);
    if (!fout.is_open())
    {
        cerr << "Can't open " << file_name << ". Bye.\n";
        exit(EXIT_FAILURE);
    }
    cout << "Enter gust names (empty line to quit):\n";
    string name;
    while (getline(cin, name) && name.size() > 0)
        fout << name << endl;
    fout.close();

    fin.clear();
    fin.open(file_name);
    if (fin.is_open())
    {
        cout << "Here are the new contents of " << file_name << ":\n";
        while (fin.get(ch))
            cout << ch;
        fin.close();
    }
    cout << "Done.\n";

    return 0;

}
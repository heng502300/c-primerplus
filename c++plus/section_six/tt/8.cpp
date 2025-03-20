#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

int main()
{
    char ch;
    int count = 0;
    string filename;    
    ifstream infile;
    infile.open(filename);
    cout << "Please enter filename : ";
    getline(cin,filename);

    if(!infile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating." << endl;
        exit(EXIT_FAILURE);
    }
    //else if()
    while(infile.get(ch) && infile.good())
    {
        count++;  
        cout.put(ch);
    }

    cout << count << " characters in the filename " << filename << endl;
   

    infile.close();
    return 0;
}

#include<iostream>
#include"dma.h"

int main()
{
    using namespace std;

    baseDMA shirt("aaa",8);
    lacksDMA ballon("red","bbb",4);
    hasDMA map("Mercator","ccc",5);
    cout << "Displaying baseDMA object:\n";
    cout << shirt << endl;
    cout << "Displaying lacksDMA object:\n";
    cout << ballon << endl;
    cout << "Displaying hasDMA object: \n";
    cout << map << endl;
    lacksDMA ballon2(ballon);
    cout << "Result of lacksDMA copy: \n";
    cout << ballon2 << endl;
    hasDMA map2 = map;
    cout << "Result of hasDMA assignment: \n";
    cout << map2 << endl;
    return 0;
}
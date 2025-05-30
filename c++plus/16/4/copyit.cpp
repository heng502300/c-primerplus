#include <iostream>
#include<iterator>
#include<vector>

using namespace std;

int main()
{
    int cats[10] =  {6,7,2,9,4,11,8,7,10,5};
    vector<int> dice(10);
    copy(cats, cats+10, dice.begin());
    cout << "Let the dice be cat!\n";
    ostream_iterator<int, char> out_iter(cout , " ");
    copy(dice.begin(),dice.end(),out_iter);
    cout << endl;
    cout << "Implicit use of reverse iterator.\n";
    copy(dice.rbegin(),dice.rend(),out_iter);
    cout << endl;
    cout << "Explicit use of reverse iterator.\n";
    vector<int>::reverse_iterator ri;
    for(ri = dice.rbegin(); ri != dice.rend(); ri++)
        cout << *ri << " ";    
    cout << endl;

    return 0;
}

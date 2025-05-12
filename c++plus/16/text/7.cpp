#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <ctime>
using namespace std;

vector<int> lotto(int dot_len, int random_len);

int main()
{
    vector<int> winners;
    winners = lotto(51,6);
    copy(winners.begin(),winners.end(),ostream_iterator<int,char>(cout , " " ));
    cout << endl;
    return 0;
}

vector<int> lotto(int dot_len, int random_len)
{
    vector<int> temp(dot_len);
    vector<int> num(random_len);

    for (size_t i = 0; i < dot_len; i++)
    {
        temp[i] = i + 1;
    }
    random_shuffle(temp.begin(), temp.end());
    num.assign(temp.begin(),temp.begin() + random_len);
    return num;
}
#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;


int main()
{
    const int ASIZE = 6;
    string s1[ASIZE] = {"buffalo", "think", "for", "yourself", "ask", "again"};
    string  s2[ASIZE] = {"ask", "again", "future", "buffalo", "buffal", "buffao"};

    set<string> A(s1,s1+ASIZE);
    set<string> B(s2,s2+ASIZE);

    ostream_iterator<string, char> out(cout," ");
    cout << "Set A: ";
    copy(A.begin(),A.end(),out);
    cout << endl;
    cout << "Set B: ";
    copy(B.begin(),B.end(),out);
    cout << endl;

    cout << "Union of A and B: ";
    set_union(A.begin(),A.end(),B.begin(),B.end(),out);
    cout << endl;
    cout << "Intersection of A and B: ";
    set_intersection(A.begin(),A.end(),B.begin(),B.end(),out);
    cout << endl;
    cout << "Difference of A and B: ";
    set_difference(A.begin(),A.end(),B.begin(),B.end(),out);
    cout << endl;

    set<string> C;
    cout << "Set C: ";
    set_union(A.begin(),A.end(),B.begin(),B.end(),inserter(C,C.begin()));
    copy(C.begin(),C.end(),out);
    cout << endl;

    string s3("grantees");
    C.insert(s3);
    cout << "Set C after insertion: ";
    copy(C.begin(),C.end(),out);
    cout << endl;
   
    cout << "Showing a range: \n";
    copy(C.lower_bound("ask"),C.upper_bound("singer"),out);
    cout << endl;
    return 0;

}
#include<iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void value_show(box a);
void addr_show(box *a);
int main()
{
    box temp = {"cube",10,20,15,20};
    value_show(temp);
    addr_show(&temp);
    return 0;
}


void value_show(box a)
{
    cout << a.maker << endl;
    cout << a.height << endl;
    cout << a.width << endl;
    cout << a.length << endl;
    cout << a.volume << endl;
}

void addr_show(box *a)
{
    a -> volume = a -> height + a -> width;
    cout << a->maker << endl;
    cout << a->height << endl;
    cout << a->width << endl;
    cout << a->length << endl;
    cout << a->volume << endl;
}

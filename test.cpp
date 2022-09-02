#include<iostream>
using namespace std;
int a = 1;
int& b = a;

class c
{
private:
    int& _d;
public:
    c(int& d): _d(d)
    {
    }

    int& getD()
    {
        return _d;
    }
};

int main()
{
    c myC(b);
    cout << b << endl;
    b = 2;
    cout << myC.getD() << endl;
}

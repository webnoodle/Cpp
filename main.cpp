#include <iostream>

using namespace std;

string PIN; //I'm using PIN as a string to avoid problems while PIN start with "0".
int main()
{
    cout << "Welcome to Our Bank!" << endl;
    cout << "Enter Your PIN:";
    cin >> PIN;

    if(PIN=="0125")
    {
        cout << "PIN Accepted";
    }
    else
    {
        cout << "PIN NotAccepted!";
    }

    return 0;
}

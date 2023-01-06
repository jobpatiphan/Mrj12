// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string x = "Press Enter 3 times to reveal your future.";
    string a;
    cout << x << endl;
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int z = rand() % 9;
    if (z == 0)
    {
        a = "A";
    }
    else if (z == 1)
    {
        a = "B+";
    }
    else if (z == 2)
    {
        a = "B";
    }
    else if (z == 3)
    {
        a = "C+";
    }
    else if (z == 4)
    {
        a = "C";
    }
    else if (z == 5)
    {
        a = "D+";
    }
    else if (z == 6)
    {
        a = "D";
    }
    else if (z == 7)
    {
        a = "F";
    }
    else if (z == 8)
    {
        a = "W";
    }
    cout << "You will get " << a << " in this 261102." << endl;
    return 0;
}


    
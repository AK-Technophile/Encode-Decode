#include <iostream>
#include <string>
using namespace std;

int main()
{ // 32-126.

    string str, line = " ";
    cout << "Enter ur string ->> " << endl;

    //======================================================================================================================================================

    string key = "123456";

    int shift{};
    int count{};

    //======================================================================================================================================================

    while (true)
    {
        getline(cin, line);

        if (key.size() == count)
        {
            count = 0;
        }

        if (line.empty())
        {
            break;
        }

        shift = key[count] - 48;

        for (int i = 0; i < line.size(); i++)
        {
            line[i] = ((line[i] - 32 + shift) % (126 - 32 + 1)) + 32;             // HEART and BRAIN of THE FUNCTION.
        }

        count++;

        str += line + "\n";
    }

    //======================================================================================================================================================

    cout << "Encoding is : \n"
         << str << endl;
    cout << endl;

    return 0;
}
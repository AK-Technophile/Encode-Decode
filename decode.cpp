#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str, line;
    cout << "Enter ur string ->> " << endl;

    //======================================================================================================================================================

    string key = "123456";

    int shift;
    int count{};

    // int time = key[0] - 48;

    //======================================================================================================================================================

    while (true)
    {
        getline(cin, line);

        if (line.empty())
        {
            break;
        }

        if (key.size() == count)
        {
            count = 0;
        }

        shift = key[count] - 48;

        for (int i = 0; i < line.size(); i++)
        {
            line[i] = ((line[i] - 32 - shift + (126 - 32 + 1)) % (126 - 32 + 1)) + 32; // HEART and BRAIN of THE FUNCTION.
        }

        count++;

        str += line + "\n";
    }

    //======================================================================================================================================================

    cout << "Decoding is : \n"
         << str << endl;
    cout << endl;

    return 0;
}
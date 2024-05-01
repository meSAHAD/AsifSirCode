#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string line;
    bool found = false;

    getline(cin, line);

    istringstream iss(line);
    string word;
    while (iss >> word)
    {
        if (word == "Ratul")
        {
            found = true;
        }
    }
    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
#include <string>
#include <iostream>
using namespace std;
__declspec(dllexport) bool LetterINWord(char letter, string word)
{
    string str = word;
    int count = 0;
    for (int i = 0; i <= str.length(); i++)
    {
        if (str[i] == letter) {
            count++;
        }
    }
    if (count == 0)
    {
        cout << "Bykva no likvid" << endl;
        return false;
    }
    else if (count > 0)
    {
        cout << "there is " + to_string(count) + " bykva " + letter + " imeetsa " + str << endl;
        return true;
    }
}

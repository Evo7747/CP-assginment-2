#include <iostream>
using namespace std;

void analyzeString(string text)
{
    int chars = 0, spaces = 0, tabs = 0, lines = 1;

    for(int i = 0; i < text.length(); i++)
    {
        chars++;

        if(text[i] == ' ')
            spaces++;

        if(text[i] == '\t')
            tabs++;

        if(text[i] == '\n')
            lines++;
    }

    cout << "Characters = " << chars << endl;
    cout << "Spaces = " << spaces << endl;
    cout << "Tabs = " << tabs << endl;
    cout << "Lines = " << lines << endl;
}

int main()
{
    string text;

    cout << "Enter text:\n";
    getline(cin, text);

    analyzeString(text);

    return 0;
}
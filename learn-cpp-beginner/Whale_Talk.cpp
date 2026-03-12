#include <iostream>
#include <vector>

using namespace std;

int main()
{

    string input;
    vector<char> vowels{'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    vector<char> result;

    cout << "This is Whale language translator\n Enter a sentence:\n";
    cin >> input;

    for (int i = 0; i < input.size(); i++)
    {

        for (int j = 0; j < vowels.size(); j++)
        {

            if (input[i] == vowels[j])
            {
                
                result.push_back(input[i]);

                if (input[i] == 'e' || input[i] == 'u')
                {

                    result.push_back(input[i]);
                }
            }
        }
    }

    // output

    cout << "Whale Tongue Translation: \n";

    for (int x = 0; x < result.size(); x++)
    {

        cout << result[x];
    }

    return 0;
}
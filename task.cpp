// Variant 17

#include <iostream>
#include <vector>
#include <string>


int main()
{
    std::string str;
    str = "London is the capital of Great Britian, english lesson phrase number 1.";

    std::vector<std::string> words;
    std::string word;

    for (size_t i = 0; i < str.size(); ++i)
    {
        if (isalpha(str[i]) || (isdigit(str[i])))
        {
            word.push_back(str[i]);
        }
        else if (!word.empty())
        {
            words.push_back(word);
            word.clear();
        }
    }

    int n = words.size();
    std::vector<std::string> new_words;
    for (int i = 0; i < n / 2 ; ++i)
    {   
        int j = n / 2 + i;
        std::string tmp = words[i];
        words[i] = words[j];
        words[j] = tmp;
    }

    std::string newStr;
    for (int i = 0; i < n; ++i)
    {
        newStr += words[i];
        if (i < n - 1)
        {
            newStr += " ";
        }
        else
        {
            newStr += ".";
        }
    }

    std::cout << newStr << std::endl;

    return 0;
}

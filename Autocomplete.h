#include <iostream>
#include <vector>

class Autocomplete
{
    public:
        Autocomplete* children[26];
        bool isWordEnd;
    
        Autocomplete();
    
        std::vector<std::string> getSuggestions(std::string partialWord);
        void suggestionsRec(std::vector<std::string> &vect, Autocomplete* pCrawl, std::string partialWord);
        void insert(std::string word);
};
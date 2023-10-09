#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include "Autocomplete.h"

Autocomplete::Autocomplete()
{
    this->isWordEnd = false;

    for (int i = 0; i < 26; i++) 
    {
        this->children[i] = nullptr;
    }
};

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord)
{
    Autocomplete* pCrawl = this;
    for (char c : partialWord)
    {
        int ind = (int)c - (int)'a';
        pCrawl = pCrawl->children[ind];
    }
    std::vector<std::string> vect;
    suggestionsRec(vect, pCrawl, partialWord);
    return vect;
}



void Autocomplete::suggestionsRec(std::vector<std::string> &vect, Autocomplete* pCrawl, std::string partialWord)
{
    if (pCrawl->isWordEnd==true)
    {
        vect.push_back(partialWord);
    }
    for (int i = 0; i < 26; i++)
    {
        if (pCrawl->children[i]) 
        {
            char child = 'a' + i;
            suggestionsRec(vect, pCrawl->children[i], partialWord + child);
        }
    }
}

 
void Autocomplete::insert(std::string word)
{
    Autocomplete* pCrawl = this;
 
    for (int level = 0; level < word.size(); level++)
    {
        int index = (int)word[level] - (int)'a';
        if (pCrawl->children[index]==nullptr)
        {
            pCrawl->children[index] = new Autocomplete;
        }
        pCrawl = pCrawl->children[index];
    }
    pCrawl->isWordEnd = true;
   
}

#endif // AUTOCOMPLETE_H

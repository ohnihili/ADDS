#include "PrefixMatcher.h"

const int ALPHABET_SIZE = 2;

struct PrefixMatcher::TrieNode 
{
    TrieNode* children[ALPHABET_SIZE];
    int routerNumber;

    TrieNode() {
        for (int i = 0; i < ALPHABET_SIZE; i++) {
            children[i] = nullptr;
        }
        routerNumber = -1;
    }
};

PrefixMatcher::PrefixMatcher() 
{
    root = new TrieNode();
}

void PrefixMatcher::insert(std::string address, int routerNumber) 
{
    TrieNode* current = root;
    for (char c : address) {
        int index = c - '0';
        if (!current->children[index]) {
            current->children[index] = new TrieNode();
        }
        current = current->children[index];
    }
    current->routerNumber = routerNumber;
}

int PrefixMatcher::selectRouter(std::string networkAddress) 
{
    TrieNode* current = root;
    int result = -1;

    for (char c : networkAddress) {
        int index = c - '0';
        if (!current->children[index]) {
            break;
        }
        current = current->children[index];
        if (current->routerNumber != -1) {
            result = current->routerNumber;
        }
    }

    return result;
}
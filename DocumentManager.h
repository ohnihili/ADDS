#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include <iostream>
#include <vector>

class DocumentManager {
    public:
        std::vector<int> patrons;
        std::vector<int> docID;
        std::vector<std::string> docname;
        std::vector<int> doclicense_limit;
        std::vector<int> borrowed;

        void addDocument(std::string name, int id, int license_limit);
        void addPatron(int patronID);
        int search(std::string name);
        bool borrowDocument(int docid, int patronID);  
        void returnDocument(int docid, int patronID);
};

#endif // DOCUMENTMANAGER_H

#ifndef H_SplitEvensOdds
#define H_SplitEvensOdds

#include "unorderedLinkedList.h"

using std::cout;
using std::endl;

template <class Type>
class splitEvensOddsList : public unorderedLinkedList<Type>
{
public:

    void splitEvensOdds(unorderedLinkedList<int>& evensList, unorderedLinkedList<int>& oddsList) {
        //sets the first node in the list to the current node 
        nodeType<int>* currentNode = this->first;
        nodeType<int>* nextNode = nullptr;

        //check if the list is empty
        if (currentNode == nullptr) {
            cout << "This list is empty" << endl;
            return;
        }

        //Traverse the list and split evens and odds
        while (currentNode != nullptr) {
            nextNode = currentNode->link;

            //Check if the current node is even
            if (currentNode->info % 2 == 0) {
                evensList.insertLast(currentNode->info);
            }
            //Check if the current node is odd
            else {
                oddsList.insertLast(currentNode->info);
            }
            currentNode = nextNode;
        }
        this->first = nullptr;
        this->count = 0;
    }


    void printEvensList(unorderedLinkedList<int>& evensList) const;

    void printOddsList(unorderedLinkedList<int>& oddsList) const;

    void createListFromUserInput(unorderedLinkedList<int>& list) const;

};




template <class Type>
void splitEvensOddsList<Type> ::
createListFromUserInput(unorderedLinkedList<int>& list) const {
    cout << "Enter integers (end with -999)" << endl;
    int num;
    while (std::cin >> num && num != -999) {
        list.insertLast(num);
    }
}

template <class Type>
void splitEvensOddsList<Type> ::printEvensList(unorderedLinkedList<int>& evensList) const {
    cout << "Evens list: ";
    for (auto it = evensList.begin(); it != evensList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

template <class Type>
void splitEvensOddsList<Type> ::printOddsList(unorderedLinkedList <int>& oddsList) const {
    cout << "Odds list: ";
    for (auto it = oddsList.begin(); it != oddsList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

#endif 

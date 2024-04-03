#include <iostream>
#include "splitEvensOdds.h"



int main() {
	// Creating empty evens and odds lists
	unorderedLinkedList<int> evensList, oddsList;

	// creates instance of empty list for user input 
	splitEvensOddsList<int> mylist;

	// inserts values into list
	mylist.createListFromUserInput(mylist);

	// Splits the list into evens and odds
	mylist.splitEvensOdds(evensList, oddsList);

	// prints out evens list 
	mylist.printEvensList(evensList);

	// prints out odds list
	mylist.printOddsList(oddsList);

	return 0;
}
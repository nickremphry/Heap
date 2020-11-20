//****************************************************************************************************
//
//      File:               waitlist.cpp
//
//      Student:            Michael Remphry
//
//      Assignment:         Program #10
//
//      Course Name:        Data Structures II
//
//      Course Number:      COSC 3100 - 10
//
//      Due:                April 30, 2019
//
//      This is a driver function to show functionality of the heap.h file
//
//      Other files required:
//              1. heap.h
//              2. customer.h
//              3. overbooked.bin
//
//****************************************************************************************************

#include <iostream>
#include <fstream>

using namespace std;

#include "heap.h"
#include "customer.h"

//****************************************************************************************************

void getData(Heap<Customer> & waitList);
void printWaitList(Heap<Customer> & waitList);

//****************************************************************************************************

int main()
{
    Heap<Customer> waitList;
    getData(waitList);
    printWaitList(waitList);

    return 0;
}

//****************************************************************************************************

void getData(Heap<Customer> & waitList)
{
    Customer cust;
    ifstream inFile;
    inFile.open("overbooked.bin", ios::binary);

    while (inFile.read((char *) & cust, sizeof(cust)))
    {
        cust.priority = (cust.mileage / 1000) + cust.years - cust.arrivalTime;
        waitList.insert(cust);
    }
}

//****************************************************************************************************

void printWaitList(Heap<Customer> & waitList)
{
    Customer cust;

    ofstream outFile("wailist.txt");

    outFile << "==================================================================================="
            << endl;
    outFile << "WAITLIST FOR FLIGHT 123 LEAVING ST. LOUIS FOR DALLAS-FORT WORTH - TIME: 9:17"
            << endl;
    outFile << "Priority: \t\t\t   Name:\n" << endl;

    while (waitList.remove(cust))
    {
        outFile << cust;
    }

    outFile.close();
}
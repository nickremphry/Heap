//****************************************************************************************************
//
//      File:           customer.h
//
//      Student:        Michael Remphry
//
//      Assignment:     Program #10
//
//      Course Name:    Data Structures II
//
//      Course Number:  COSC 3100 - 10
//
//      Due:            April 30, 2019
//
//      This is a file for a customer structure
//
//      Other files required:
//              1. None
//
//****************************************************************************************************

#include <iomanip>

#ifndef CUSTOMER_H
#define CUSTOMER_H

//****************************************************************************************************

struct Customer
{
    char fname[15];
    char lname[15];
    int mileage;
    int years;
    int arrivalTime;
    int priority;

    Customer();
    friend ostream & operator << (ostream & out, const Customer & data);
    bool operator == (const Customer & rhs) const;
    bool operator == (int value) const;
    bool operator != (const Customer & rhs) const;
    bool operator != (int value) const;
    bool operator < (const Customer & rhs) const;
    bool operator < (int value) const;
    bool operator > (const Customer & rhs) const;
    bool operator > (int value) const;
    bool operator <= (const Customer & rhs) const;
    bool operator <= (int value) const;
    bool operator >= (const Customer & rhs) const;
    bool operator >= (int value) const;
    int operator % (int value) const;
    Customer & operator = (int value);
};

//****************************************************************************************************

Customer::Customer()
{
    priority = 0;
}

//****************************************************************************************************

ostream & operator << (ostream & out, const Customer & rhs)
{
    out << setw(3) << rhs.priority << setw(12) << "----------" << setw(10)
        << rhs.lname << ", " << rhs.fname << endl;

    return out;
}

//****************************************************************************************************

bool Customer::operator == (const Customer & rhs) const
{
    return (this->priority == rhs.priority);
}

//****************************************************************************************************

bool Customer::operator == (int value) const
{
    return (this->priority == value);
}

//****************************************************************************************************

bool Customer::operator != (const Customer & rhs) const
{
    return (this->priority != rhs.priority);
}

//****************************************************************************************************

bool Customer::operator != (int value) const
{
    return (this->priority != value);
}

//****************************************************************************************************

bool Customer::operator < (const Customer & rhs) const
{
    return (this->priority < rhs.priority);
}

//****************************************************************************************************

bool Customer::operator < (int value) const
{
    return (this->priority < value);
}

//****************************************************************************************************

bool Customer::operator > (const Customer & rhs) const
{
    return (this->priority > rhs.priority);
}

//****************************************************************************************************

bool Customer::operator > (int value) const
{
    return (this->priority > value);
}

//****************************************************************************************************

bool Customer::operator <= (const Customer & rhs) const
{
    return (this->priority <= rhs.priority);
}

//****************************************************************************************************

bool Customer::operator <= (int value) const
{
    return (this->priority <= value);
}

//****************************************************************************************************

bool Customer::operator >= (const Customer & rhs) const
{
    return (this->priority >= rhs.priority);
}

//****************************************************************************************************

bool Customer::operator >= (int value) const
{
    return (this->priority >= value);
}

//****************************************************************************************************

int Customer::operator % (int value) const
{
    return (this->priority % value);
}

//****************************************************************************************************

Customer & Customer::operator = (int value)
{
    this->priority = value;
    return * this;
}

//****************************************************************************************************

#endif
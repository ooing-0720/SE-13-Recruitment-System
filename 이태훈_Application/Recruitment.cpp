#include <iostream>
#include <string>
#include "Recruitment.h"

Recruitment::Recruitment(const string& work, const int& numOfPeople, const string& dueDate) 
                        : work(work), numOfPeople(numOfPeople), dueDate(dueDate){};

string Recruitment::getWork() const{
    return work;
}

int Recruitment::getNumOfPeople() const{
    return numOfPeople;
}

string Recruitment::getDueDate() const{
    return dueDate;
}
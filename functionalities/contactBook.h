#include <bits/stdc++.h>
#include "query.h"
using namespace std ;

class ContactBook{
    vector<Person> groupOfPerson;
    public:
    void addPerson(Person person){
        groupOfPerson.push_back(person);
    }

    void search(){
        Query objectQuery(this->groupOfPerson);
    }
    void showContactBook(){
        showContacts(this->groupOfPerson);
    }
};
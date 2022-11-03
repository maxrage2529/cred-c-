#include <bits/stdc++.h>
#include "person.h"
using namespace std;
void showContacts(vector<Person> &contacts){
    for(auto person : contacts){
        cout<<person.getFirstName()<<" "<<person.getLastName()<<" "<<person.getPhoneNumber()<<"\n";
    }
}
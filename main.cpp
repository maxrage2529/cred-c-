#include <bits/stdc++.h>
#include "functionalities/contactBook.h"
using namespace std ;

int main( ) {
    
    ContactBook contactBook ; 
    PhoneNumber phone("+91","8504996330");
    Person person("ajay","singh",phone);
    Person person1("akash","singh",phone);
    Person person2("dipankar","singh",phone);
    Person person3("dipankar","kumar",phone);
    contactBook.addPerson(person);
    contactBook.addPerson(person1);
    contactBook.addPerson(person2);
    contactBook.addPerson(person3);
    contactBook.showContactBook();
    contactBook.search();

}

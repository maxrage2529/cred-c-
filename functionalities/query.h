#include <bits/stdc++.h>
#include "stringSearch.h"
#include "showContacts.h"
using namespace std;

class Query{
    map<string,pair<string,bool>> filters;
    set<string> filterSet;
    string searchType;
    vector<Person> resultOfQuery,groupOfPerson;
    public:
    Query(vector<Person> &groupOfPerson){
        this->groupOfPerson=groupOfPerson;
        getFilters(); 
        startSearch();
        showContacts(this->resultOfQuery);
    }
    void getFilters(){
        int noOfFilters;
        cout<<"Enter no of filters: ";
        cin>>noOfFilters;
        while(noOfFilters--){
            string filterName,filterType,searchString;
            cout<<"Enter Filter name and search type: ";
            cin>>filterName>>filterType;
            cout<<"Enter "<<filterName<<" : ";
            cin>>searchString;
            this->filters[filterName]={searchString,(filterType=="full")};
            filterSet.insert(filterName);
        }
           
    }
    void startSearch(){
        for(auto personObj:groupOfPerson){
            bool addPersonObj=true;
            pair<bool,bool> result;
            if(filterSet.find("firstname")!=filterSet.end()){

                result=matchType(this->filters["firstname"].first,personObj.getFirstName());
                
                if(this->filters["firstname"].second==true){
                    if(result.second==false){
                        addPersonObj=false;
                    }
                }else{
                    if(result.first==false){
                        addPersonObj=false;
                    }
                }
            }
            if(filterSet.find("lastname")!=filterSet.end()){

                result=matchType(this->filters["lastname"].first,personObj.getLastName());
                
                if(this->filters["lastname"].second==true){
                    if(result.second==false){
                        addPersonObj=false;
                    }
                }else{
                    if(result.first==false){
                        addPersonObj=false;
                    }
                }
            }
            if(filterSet.find("phonenumber")!=filterSet.end()){

                result=matchType(this->filters["phonenumber"].first,personObj.getPhoneNumber());
                
                if(this->filters["phonenumber"].second==true){
                    if(result.second==false){
                        addPersonObj=false;
                    }
                }else{
                    if(result.first==false){
                        addPersonObj=false;
                    }
                }
            }
            
            if(addPersonObj){
                this->resultOfQuery.push_back(personObj);
            }
        }
    }
    
    
};
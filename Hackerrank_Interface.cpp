#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    // the Dictionary
    map<string,string> d;  
    int t;  
    //scan number of test case
    cin>>t;
    string name,phone;
    for(int i=0;i<t;i++){
        // scan name ane phone Number
        cin>>name>>phone;
        //add the name and phone number to map
        d[name]=phone;
    }
    // scan name from user and check if the name found or not found
    while(cin>>name){
        //if found print it or print not found
        if(d.find(name)!=d.end())
            cout<<name<<"="<<d[name]<<endl;
        else
            cout<<"Not found\n";
    }
    return 0;
}
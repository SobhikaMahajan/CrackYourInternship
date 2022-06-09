#include <iostream>
#include<map>
using namespace std;

void printDups(string str){
    map<char,int>count;
    
    for(int i=0; i<str.size(); i++){
        count[str[i]]++;
    
    
    if(count[str[i]] > 1){
        cout<<"["<<str[i]<<"]"<<" count="<<count[str[i]]<<endl;
    }
    }
}

int main()
{
    string str = "test string";
    printDups(str);
    return 0;
    }

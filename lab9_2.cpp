//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream

#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main(){
    ifstream source;
    ofstream dest("cheerbook_copy.txt");
    source.open("cheerbook.txt");
    string textline;
    dest << "-------------------- SOTUS ---------------------\n";
    while(getline(source,textline)){
        dest << textline << "\n";
    }
    dest << "-------------------- SOTUS ---------------------\n";
    source.close();
    dest.close();

    return 0;

}
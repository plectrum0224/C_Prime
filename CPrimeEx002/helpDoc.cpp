#include <iostream>
#include <string>
#include <vector>
#include "course.h"

using namespace std;

vector<string> helpDoc(){
    vector<string> vec_help;
    string help0("Command 0 Display all the help information");
    string help1("Command 1 print course information");
    string help2("Command 2 print course quality");
    string help3("Command 3 print the longest course name");
    string help4("Command 4 delete the last course");
    string help5("Command 5 quit the program");

    vec_help.push_back(help0);
    vec_help.push_back(help1);
    vec_help.push_back(help2);
    vec_help.push_back(help3);
    vec_help.push_back(help4);

    return vec_help;

}

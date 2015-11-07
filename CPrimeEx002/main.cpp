#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "course.h"

using namespace std;

int main(){
    int command;
    bool _exit = 0;
    int int_courseId = 100;
    string arr_courseNames[] = {"Linux","C++","HTML","HTML5","NodeJS","Shell","Python"};
    vector<CourseInfo> vec_courseInfo = addCourse(begin(arr_courseNames),end(arr_courseNames), int_courseId);

    cout<<"Enter command number: "<<endl;
    while(cin>>command){
        try{
            if(command<0 || command>5)
                throw runtime_error("The command must between 0 to 5");
        }
        catch (runtime_error err){
            cout <<err.what()<<"\nTry Again? Enter y or n"<<endl;
            char c;
            cin >> c;
            if(!cin || c == 'n')
                break;
            else
                cout<<"Enter command number: "<<endl;
        }
        switch(command){
            case 0:
                for(string i:helpDoc())
                    cout<<i<<endl;
                cout<<"Enter command number: "<<endl;
                break;
            case 1:
                printCourse(vec_courseInfo);
                cout<<"Enter command number: "<<endl;
                break;

            case 2:
                cout<<"The course quality is: "<<courseSize(vec_courseInfo)<<endl;
                cout<<"Enter command number: "<<endl;
                break;

            case 3:
                {
                    vector<string> vec_maxCourse = maxCourse(vec_courseInfo);
                    for(auto i: vec_maxCourse)
                        cout<<i<<" "<<endl;
                }
                cout<<"Enter command number: "<<endl;
                break;

            case 4:
                if(delCourse(vec_courseInfo))
                    cout<<"No course"<<endl;
                cout<<"Enter command number: "<<endl;
                break;

            case 5:
                _exit = true;
                break;
        }
        if(_exit){
            cout<<"Exit the program!"<<endl;
            break;
        }

    }
    return 0;
}

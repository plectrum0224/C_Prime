#include <iostream>
#include <string>
#include <vector>
#include "course.h"

using namespace std;

void printCourse(vector<CourseInfo> vec_courseInfo){
    cout<<"CourseName"<<"    "<<"CourseID"<<endl;
    for(auto it_vec = vec_courseInfo.begin();it_vec!=vec_courseInfo.end();++it_vec){
        cout<<(*it_vec).courseName<<"\t"<<"\t";
        cout<<(*it_vec).courseID<<endl;
    }
}

#include <iostream>
#include <string>
#include <vector>
#include "course.h"
using namespace std;

vector<CourseInfo> addCourse(const string *beg, const string *end, int courseID){
    vector<CourseInfo> vec_courseInfo;
    while(beg != end){
        CourseInfo tem_stru;
        tem_stru.courseName = *beg;
        tem_stru.courseID = courseID;
        vec_courseInfo.push_back(tem_stru);
        ++beg;
        ++courseID;
    }
    return vec_courseInfo;
}



#include <iostream>
#include <string>
#include <vector>
#include "course.h"

using namespace std;

vector<string> maxCourse(vector<CourseInfo> vec_courseInfo){
    vector<string> vec_maxCourse;
    string str_longestCourse;
    unsigned un_courseSize = 0;
    for(auto it_course = vec_courseInfo.begin();it_course!=vec_courseInfo.end();++it_course){
        if(it_course->courseName.size()>str_longestCourse.size()){
            un_courseSize = it_course->courseName.size();
            str_longestCourse = it_course->courseName;
        }
    }
    for(auto it_course = vec_courseInfo.begin();it_course!=vec_courseInfo.end();++it_course){
        if(it_course->courseName.size()==un_courseSize)
            vec_maxCourse.push_back(it_course->courseName);
    }

    return vec_maxCourse;
}

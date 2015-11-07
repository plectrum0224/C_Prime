#include <iostream>
#include <string>
#include <vector>
#include "course.h"

bool delCourse(vector<CourseInfo> &vec_courseInfo){
    if(vec_courseInfo.empty())
        return 1;
    else{
        cout<<"deleted course name: "<<vec_courseInfo[vec_courseInfo.size()-1].courseName<<endl;
        vec_courseInfo.pop_back();
        return 0;
    }
}

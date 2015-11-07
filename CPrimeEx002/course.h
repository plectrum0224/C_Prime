#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include<string>
#include <vector>
using namespace std;

struct CourseInfo{
    int courseID;
    string courseName;
};

/*add course function return a vector*/
vector<CourseInfo> addCourse(const string *beg, const string *end, int courseID);

void printCourse(vector<CourseInfo> vec_courseInfo);

vector<CourseInfo>::size_type courseSize(vector<CourseInfo> vec_courseInfo);

vector<string> maxCourse(vector<CourseInfo> vec_courseInfo);

bool delCourse(vector<CourseInfo> &vec_courseInfo);

vector<string> helpDoc();

#endif

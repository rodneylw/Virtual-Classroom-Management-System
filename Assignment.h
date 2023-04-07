//---------------------------------------------------------------------------

#ifndef AssignmentH
#define AssignmentH
//---------------------------------------------------------------------------
#include <iostream>
#include <vector>
#include "Course.h"
using std::string;

class Assignment {
private:
    string AssignmentID;
    string Title;
    string Description;
    string DueDate;
    double MaximumPoints;
    double Weight;
    Course* AssignedCourse;
    std::vector<string> AttachedFiles;
protected:
     string GenerateUniqueAssignmentID();
public:
     Assignment(string title, string description, string dueDate, double maxPoints, double weight, Course* course) {
          AssignmentID = GenerateUniqueAssignmentID();
          Title = title;
          Description = description;
          DueDate = dueDate;
          MaximumPoints = maxPoints;
          Weight = weight;
          AssignedCourse = course;
     }
     Assignment(string assignmentID, string title, string description, string dueDate, double maxPoints, double weight, Course* course) {
          AssignmentID = assignmentID;
          Title = title;
          Description = description;
          DueDate = dueDate;
          MaximumPoints = maxPoints;
          Weight = weight;
          AssignedCourse = course;
     }
};




#endif

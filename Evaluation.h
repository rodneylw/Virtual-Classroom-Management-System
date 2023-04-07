//---------------------------------------------------------------------------

#ifndef EvaluationH
#define EvaluationH
//---------------------------------------------------------------------------
#include <iostream>
#include "Assignment.h"
using std::string;

class Evaluation : public Assignment {
public:
     Evaluation(string courseID, string title, string description, string dueDate, double maxPoints, double weight, Course* course)
       : Assignment(courseID, title, description, dueDate, maxPoints, weight, course) {
       //Constructor Body
     }
     Evaluation(string title, string description, string dueDate, double maxPoints, double weight, Course* course)
       : Assignment(title, description, dueDate, maxPoints, weight, course) {
       //Constructor Body
     }
};


#endif

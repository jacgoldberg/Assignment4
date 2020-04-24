#include <iostream>
#include "Student.h"
using namespace std;

Student::Student(){
  time = 0;
  duration = 0;
}
Student::Student(int t, int d){
  time = t;
  duration = d;
}
int Student::getTime(){
  return time;
}
int Student::getDuration(){
  return duration;
}

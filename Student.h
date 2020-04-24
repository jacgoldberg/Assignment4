#include <iostream>
using namespace std;
  class Student{

    public:
      Student();
      Student(int, int);
      void setTime(int);
      void setDuration(int);
      int getTime();
      int getDuration();
    private:
      int time;
      int duration;
  };

#include <iostream>
#include "GenQueue.h"
#include "Student.h"
#include <fstream>
#include <string>
#include "RegistrarsOffice.h"
using namespace std;
int main(int argc, char **argv){
  int windowsOpen;
  int numStudents;
  int clockTick;
  string line;
  int counterTime;
  int value;
  int clock = 0;
  int mean;
  double median;
  int longest;
  int numberOverTen;
  double meanWindowIdol;
  int longestIdol;
  int numberWinOverFive;
  int waiting;
  DoublyLinkedList<Student*> *studentList = new DoublyLinkedList<Student*>();
  GenQueue<Student*> *students = new GenQueue<Student*>();
  string fileName = argv[1];
  ifstream myFile;
  RegistrarsOffice *windows;
  myFile.open(fileName);
  if(!myFile){
    cout << "Could not open File" << endl;
    exit(1);
  }
//Populating the Queue
  if(myFile.is_open()){
    myFile >> line;
    windowsOpen = stoi(line);
    while(getline(myFile, line)){
      getline(myFile, line);
      if(line == "\0"){
        break;
      }
      clockTick = stoi(line);
      myFile >> line;
      numStudents = stoi(line);
      for(int i = 0; i < numStudents; i++){
        myFile >> line;
        counterTime = stoi(line);
        studentList->insertBack(new Student(clockTick, counterTime));
      }
    }
  }
  myFile.close();



  windows = new RegistrarsOffice(windowsOpen);
  while(!(students->isEmpty() && (!(windows->windowsFilled())) && studentList->isEmpty())){
cout << "Clock: " << clock << endl;
  if(!studentList->isEmpty()){
    while(studentList->peek()->getTime() == clock){
      students->insert(studentList->removeFront());
      if(studentList->isEmpty()){
        break;
      }
    }
  }

    if(windows->avalableWindow()){
      waiting = 0;

      while(!(students->isEmpty())){
      if(windows->avalableWindow()){
      windows->setWindowTime(students->remove()->getDuration());
    }else{
      break;
        }
      }
    }


      windows->printWindows();
      windows->decrement();
      clock++;

  }

}

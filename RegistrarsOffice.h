#ifndef REGISTRARSOFFICE_H
#define REGISTRARSOFFICE_H
#include <iostream>
using namespace std;

class RegistrarsOffice{
public:
  RegistrarsOffice(int x);
  void setWindowTime(int time);
  void decrement();
  bool avalableWindow();
  int positionAt(int);
  bool windowsFilled();
  void printWindows();
private:
  int numWindows;
  int *windows;
};
#endif

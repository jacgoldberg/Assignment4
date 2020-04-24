#ifndef REGISTRARSOFFICE_CPP
#define REGISTRARSOFFICE_CPP
#include "RegistrarsOffice.h"
#include <stdlib.h>
RegistrarsOffice::RegistrarsOffice(int x){
  numWindows = x;
  windows = new int[numWindows];
  for(int i = 0; i < numWindows; i++){
    windows[i] = 0;
  }
}
void RegistrarsOffice::setWindowTime(int time){
  for(int i = 0; i < numWindows; i++){
    if(windows[i] == 0){
      windows[i] = time;
      break;
    }
  }
}
bool RegistrarsOffice::avalableWindow(){
  for(int i = 0; i < numWindows; ++i){
    if(windows[i] == 0){
      return true;
    }
  }
  return false;
}

void RegistrarsOffice::decrement(){

  for(int i = 0; i < numWindows; i++){
    if(windows[i] > 0){
    windows[i]--;
   }
  }
}
int RegistrarsOffice::positionAt(int x){
  return windows[x];
}
bool RegistrarsOffice::windowsFilled(){
  for(int i = 0; i < numWindows; ++i){
    if(windows[i] > 0){
      return true;
    }
  }
  return false;
}
void RegistrarsOffice::printWindows(){
  for(int i = 0; i < numWindows; ++i){
    cout << "Position " << i << ": " << windows[i] << endl;
  }
}
#endif

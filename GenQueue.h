#ifndef GENQUEUE_H
#define GENQUEUE_H
#include <iostream>
#include "DoublyLinkedList.h"
#include <cstddef>
using namespace std;

template <class T> class GenQueue
{
  public:
    GenQueue(){
      myQueue = new DoublyLinkedList<T>();
      front = 0;
      rear = -1;
      numElements = 0;
    }
  ~GenQueue();

  void insert(T d){
    //Error check
    rear++;
    myQueue->insertBack(d);
    ++numElements;
  }

  T remove(){
    --numElements;
    return myQueue->removeFront();
  }

  T peek(){
    return myQueue->positionAt(0);
  }
  bool isEmpty(){
    if(numElements == 0){
      return true;
    } else{
      return false;
    }
  }
  int getSize(){
    return numElements;
  }

  int front;
  int rear;
  int mSize;
  int numElements;
  

  DoublyLinkedList<T> *myQueue;
};
#endif

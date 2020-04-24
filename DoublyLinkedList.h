#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include "ListNode.h"
#include <cstddef>
#include <iostream>
using namespace std;
template <class T> class DoublyLinkedList{
  public:
    DoublyLinkedList(){
      size = 0;
      front = NULL;
    }
    ~DoublyLinkedList();

    void insertFront(T d){
      ListNode<T> *node = new ListNode<T>(d);
      if(isEmpty()){
        back = node;
      }else{
        front->prev = node;
        node->next = front;

      }
      front = node;
      size++;
    }

    void insertBack(T d){
      ListNode<T> *node = new ListNode<T>(d);
      if(isEmpty()){
        front = node;
      }else{
        back->next = node;
        node->prev = back;

      }
      back = node;
      size++;

    }

    T removeFront(){

      ListNode<T> *ft = front;
      if(front->next == NULL){
        back = NULL;
      }else{
        front->next->prev = NULL;
      }
      T temp = ft->data;
      front = front->next;
      ft->next = NULL;
      delete ft;
      size--;
      return temp;
    }

    int removeBack();

    int search(T val){
      int pos = -1;
      ListNode<T> *curr = front;

      while(curr != NULL){
        //iterate
        pos++;
        if(curr->data == val){
          break;
        }
        else{
          curr = curr->next;
        }
      }
      if(curr == NULL){
        pos = -1;
      }
      return pos;
    }
    int removePos(int pos);
    unsigned int getSize(){
      return size;
    }
    bool isEmpty(){
      return (size == 0);
    }
    void printList();

    T positionAt(int p){
      int i = 0;
      ListNode<T> *curr = front;
      ListNode<T> *temp;
      while(i != p){
        temp = curr->next;
        curr = temp;
      }
      return curr->data;
    }
    T peek(){
      if(front->data != NULL){
      return front->data;
      }
    }

  private:
      ListNode<T> *front;
      ListNode<T> *back;
      unsigned int size;
};
#endif

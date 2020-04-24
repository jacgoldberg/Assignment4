//Header file for my linked list
#ifndef LISTNODE_H
#define LISTNODE_H
#include <cstddef>

template <class T> class ListNode{
  public:
      T data;
      ListNode<T> *next;
      ListNode<T> *prev;

      ListNode(){
        data = NULL;
        next = NULL;
      }
      ListNode(T d){
        data = d;
        next = NULL;
      } //overload
      ~ListNode(){
        next = NULL;
        prev = NULL;
      }
       //deconstructor

};
#endif

#include "stack.h"

// TODO: Stack 클래스 구현 작성
void Stack::push(int data){
  LinkedList::insert(0, data);
}
int Stack::pop(){
  int pop = peek();
  LinkedList::remove(0);
  return pop;
}
int Stack::peek(){
  return LinkedList::get(0);
}
void Stack::operator+=(int data){
  push(data);
}
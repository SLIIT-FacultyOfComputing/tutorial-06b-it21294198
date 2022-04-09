#include "Box.h"

// Implement setters 
void Box::setLength(int len){
  length=len;
}
void Box::setWidth(int wid){
  width=wid;
}
void Box::setHeight(int hei){
  height=hei;
}

// Implement getters
int Box::getLength(){
  return length;
}
int Box::getWidth(){
  return width;
}
int Box::getHeight(){
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  int volume;
  volume=height*width*length;
  return volume;
}

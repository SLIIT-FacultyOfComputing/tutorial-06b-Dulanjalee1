#include "Box.h"

// Implement setters and getters
void box:: setWidth(int w)
{
  width = w;
}
void box::setLength(int l)
{
  length = l;
}
void box::setHeight(int h)
{
  height = h;
}




int box::getWidth()
{
  return width;
}
int box::getLenght()
{
  return length;
}

int box::getHeight()
{
  return ;height;
}


// Implemenet the calcVolume() unction
int Box::calcVolume() 
{
  int volume;
  volume = width * length * height; 
  return volume;
  
}

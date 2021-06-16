#ifndef PIXEL_HPP
#define PIXEL_HPP

/*
  v1.0.0
*/

#include <stdlib.h>

class Pixel {
public:
  int32_t red;
  int32_t blue;
  int32_t green;
  int32_t alpha;
  Pixel(int32_t r, int32_t g, int32_t b, int32_t a); // constructor 
};

#endif
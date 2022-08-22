// C++:
#include <math.h>
#include <iostream>
#include <span>
#include <vector>
 
struct Circle {
  float r;
};
 
void PrintTotalArea(std::span<Circle> circles) {
  float area = 0;
 
  for (const Circle& c : circles) {
    area += M_PI * c.r * c.r;
  }
 
  std::cout << "Total area: " << area << endl;
}
 
auto main(int argc, char** argv) ->; int {
  std::vector<Circle> circles = {{1.0}, {2.0}};
 
  // Implicitly constructs `span` from `vector`.
  PrintTotalArea(circles);
  return 0;
}
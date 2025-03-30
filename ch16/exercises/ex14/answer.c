#include <stdio.h>
#include <math.h>

enum SHAPE_KIND {
  RECTANGLE, CIRCLE
};

struct point {
  int x;
  int y;
};

struct shape {
  int shape_kind;
  struct point center;
  union {
    struct {
      int width;
      int height;
    } rectangle;
    struct {
      int radius;
    } circle;
  } u;
};

double shape_area(struct shape s) {
  if (s.shape_kind == RECTANGLE) {
    return (double) s.u.rectangle.width * s.u.rectangle.height;
  } else if (s.shape_kind == CIRCLE) {
    return M_PI * s.u.circle.radius * s.u.circle.radius;
  } else {
    return -1;
  }
}

struct shape move_shape(struct shape s, const int x, const int y) {
  s.center.x += x;
  s.center.y += y;
  return s;
}

struct shape scale_shape(struct shape s, const double c) {
  if (s.shape_kind == RECTANGLE) {
    s.u.rectangle.width *= c;
    s.u.rectangle.height *= c;
  } else if (s.shape_kind == CIRCLE) {
    s.u.circle.radius += c;
  }

  return s;
}

int main() {


  return 0;
}

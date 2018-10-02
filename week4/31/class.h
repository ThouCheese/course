#ifndef POINT_H
#define POINT_H

class Point
{
    size_t d_x, d_y;

public:
    Point(size_t const x, size_t const y);
    size_t get_x() const;
    size_t get_y() const;
    void set_x();
    void set_y();

private:
    Point(); // do not let users construct invalid points
};

#endif
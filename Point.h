#ifndef POINT_H
#define POINT_H
#include <iostream>
class Point
{
    private:
        int x,y;
    public:
        Point()
        {
            x=0;
            y=0;
        }
        Point(int x1, int y1)
        {
            x=x1;
            y=y1;
        }
        Point(const Point &o)
        {
            x=o.x;
            y=o.y;
        }
        void setX(int pos)
        {
            x=pos;
        }
        void setY(int pos)
        {
            y=pos;
        }
        int getX()const
        {
            return x;
        }
        int getY()const
        {
            return y;
        }
        friend std::ostream &operator<<(std::ostream &output, const Point &o)
        {
        output << "(" << o.x << "," << o.y << ")";
        return output;
        }
        ~Point(){
        }
};

#endif
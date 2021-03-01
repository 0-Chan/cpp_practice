#include <iostream>

class Point
{
    int x, y;

public:
    point(int pos_x, pos_y);
};

class Geometry
{
    Point* point_arr[100]; // 점 100개를 보관

public:
    geometry(Point **point_list);
    geometry();

    void addPoint(const Point &point);
    void printDist();   // 점 간의 거리 표시
    void printNumMeets();   // 모든 점들을 잇는 직선들 간의 교점 수를 출력
};


int main(void)
{
    return 0;
}
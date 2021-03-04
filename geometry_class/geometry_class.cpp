// geometry_class.cpp : 애플리케이션의 진입점을 정의합니다.
//

#include "geometry_class.h"

using namespace std;

class Point
{
    int x, y;

public:
    void point(int pos_x, int pos_y);
};

class Geometry
{
    Point* point_arr[100]; // 점 100개를 보관

public:
    void geometry(Point** point_list);
    void geometry(void);

    void addPoint(const Point& point);
    void printDist();   // 점 간의 거리 표시
    void printNumMeets();   // 모든 점들을 잇는 직선들 간의 교점 수를 출력
};


int main(void)
{
    cout << "hi zz" << endl;

    return 0;
}
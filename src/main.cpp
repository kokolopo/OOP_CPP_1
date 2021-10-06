#include <iostream>
#include <vector>

using namespace std;


// class IntPair
// {
//     public:
//     int p1;
//     int p2;

//     void set(int a, int b){
//             p1 = a;
//             p2 = b;
//         }

//         void print(){
//             cout <<"Pair ("<< p1 << ", " << p2 <<")"<< endl ;
//         }
// };

class Point3d {
    int m_x;
    int m_y;
    int m_z;

    public:
    void setValue(int a, int b, int c){
        m_x = a;
        m_y = b;
        m_z = c;
    }

    bool isEqual(const Point3d& x){
        if (m_x == x.m_x && m_y == x.m_y && m_z == x.m_z)
        {
            return true;
        }else{
            return false;
        }   
    }

    void print(){
        cout <<"<"<<m_x<<","<<m_y<<","<<m_z<<">"<<endl;
    }
};

int main(int argc, char const *argv[])
{
    Point3d point1;
    point1.setValue(1, 2, 3);

    Point3d point2;
    point2.setValue(1, 2, 3);

    if (point1.isEqual(point2)){
        cout << "point1 and point2 are equal" << endl;
    }else{
        cout << "point1 and point2 are not equal" << endl;
    }

    Point3d point3;
    point3.setValue(3,4,5);

    if (point1.isEqual(point3)){
        cout << "point1 and point3 are equal" << endl;
    }else{
        cout << "point1 and point3 are not equal" << endl;
    }
    

    
    return 0;
}

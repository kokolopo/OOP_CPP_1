#include <iostream>
#include <stdio.h>
#include <array>
#include <vector>

using namespace std;

// no 2
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

//no 3
// class Point3d {
//     int m_x;
//     int m_y;
//     int m_z;

//     public:
//     void setValue(int a, int b, int c){
//         m_x = a;
//         m_y = b;
//         m_z = c;
//     }

//     bool isEqual(const Point3d& x){
//         if (m_x == x.m_x && m_y == x.m_y && m_z == x.m_z)
//         {
//             return true;
//         }else{
//             return false;
//         }   
//     }

//     void print(){
//         cout <<"<"<<m_x<<", "<<m_y<<", "<<m_z<<">"<<endl;
//     }
// };

//no 5
class Stack
{
private:
    array<int, 10> arrayAngka = {};
    int keepSize = arrayAngka.size();

public:
    void reset(){
        int i = keepSize - 1;
        
        for (i; i >= 0; i--){
            if (arrayAngka[i] != 0){
                arrayAngka[i] = 0;
            }
        }
    }

    void push(int input){
        int i=0;

        for (i; i < keepSize; i++){
            if (arrayAngka[i] == 0){
                arrayAngka[i] = input;
                break;
            }
        }
    }

    void pop(){
        int i = keepSize - 1;
        
        for (i; i >= 0; i--){
            if (arrayAngka[i] != 0){
                arrayAngka[i] = 0;
                break;
            }
        }
        
    }

    void print(){
        int i=0;
        int j=0;
        for (i; i < 1; i++){
            cout<<"( ";
            for(j; j < keepSize; j++){
                if (arrayAngka[j] != 0){
                    cout << arrayAngka[j]<<" ";
                }
            }
            cout << ")" << endl;
        }
    }
};


int main(int argc, char const *argv[])
{   
    Stack stack;
    stack.reset();

    stack.print();
    
    stack.push(5);
    stack.push(3);
    stack.push(8);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();

    stack.print();
    
    return 0;
}



#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <stdexcept>
#include <random>

using namespace std;

double world_size = 100.0;
//Map size(meter)
typedef struct {
    double x;
    double y;
    double orient;  // 각
}Robot_pose_t;

typedef struct {
    double forward;
    double turn;
    double sense;
}Noise_t;

class Robot {
    /*생성자*/
public:
    Robot() 
    {
        /*robot initial position : random */
        Robot_pose_t robot_pose;
        robot_pose.x = gen_random() * world_size;
        robot_pose.y = gen_random() * world_size;
        robot_pose.orient = gen_random() * 2.0 * M_PI;
        //M_PI : 파이
        Noise_t noise;
        noise.forward =0.0;
        noise.turn = 0.0;
        noise.sense = 0.0;
    }
    /*새로운 로봇 위치*/
    void set
private:

};

/*0과 1 사이의 random 수 만들기*/
double gen_random()
{
    /*random 숫자 생성 뒤 범위를 0과 1로 좁힘*/
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> random_distri(0.0,1.0);

    return random_distri(gen);
}

int main() 
{
    Robot myrobot;
    myrobot.set(30.0,50.0,M_PI/2.0);
    /* 
    step
        robot set
        noise set
        move

        particle n개 set
    */
}

#include<bits/stdc++.h>

using namespace std;
const double pi = 3.14159265;

double velocityCalculator(double Vy,double Vx,double theta){
    double radTheta =theta*(pi/180) ;
    double v = Vy*cos(radTheta) + Vx*sin(radTheta); 
    if (v<0.001 && v > -0.001)
    {
        return 0;
    }
    
    return v;
}

void velocitiesOfWheels(double velocity,double angle,double omega){
    double radian=angle*(pi/180);
    double Vy = velocity*(cos(radian));
    double Vx = velocity*(sin(radian));
    int wa[] = {135,45,315,225};
    double V1 = velocityCalculator(Vy,Vx,wa[0]) + omega; 
    double V2 = velocityCalculator(Vy,Vx,wa[1]) + omega; 
    double V3 = velocityCalculator(Vy,Vx,wa[2]) + omega; 
    double V4 = velocityCalculator(Vy,Vx,wa[3]) + omega; 
    cout<<"V1:- "<<setprecision(6)<<V1<<endl;
    cout<<"V2:- "<<V2<<endl;
    cout<<"V3:- "<<V3<<endl;
    cout<<"V4:- "<<V4<<endl;
}

int main(){
    double velocity,omega,theta;
    cout<<"Enter the values of velocity,angle and angular velocity"<<endl;
    cout<<" (in the same order as mentioned in the statement angle measurement starts from Y-axis)"<<endl;
    cin>>velocity>>theta>>omega;
    cout<<"Velocity of each wheel is as follows:-"<<endl;
    velocitiesOfWheels(velocity,theta,omega);
    return 0;
}

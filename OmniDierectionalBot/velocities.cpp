
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
    double V1 = velocityCalculator(Vy,Vx,135) + omega; 
    double V2 = velocityCalculator(Vy,Vx,45) + omega; 
    double V3 = velocityCalculator(Vy,Vx,315) + omega; 
    double V4 = velocityCalculator(Vy,Vx,225) + omega; 
    if (angle == 0 || int(angle)%90 == 0)
    {
    cout<<"V1:- "<<2*V1<<endl;
    cout<<"V2:- "<<2*V2<<endl;
    cout<<"V3:- "<<2*V3<<endl;
    cout<<"V4:- "<<2*V4<<endl;
    }
    else
    {
    cout<<"V1:- "<<V1<<endl;
    cout<<"V2:- "<<V2<<endl;
    cout<<"V3:- "<<V3<<endl;
    cout<<"V4:- "<<V4<<endl;
    }
}

int main(){
    double velocity,omega,theta;
    cout<<"Enter the values of velocity,angle and angular velocity"<<endl;
    cout<<" (in the same order as mentioned in the statement)"<<endl;
    cin>>velocity>>theta>>omega;
    cout<<"Velocity of each wheel is as follows:-"<<endl;
    velocitiesOfWheels(velocity,theta,omega);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
        double radius;
        double h;
        double k;
    
    public:
        Solution(double r,double xc,double yc){
            radius=r;
            h=xc;
            k=yc;
            srand(time(0));


        }

        vector<double>randPoint(){
            double theta=2*M_PI * ((double) rand()/RAND_MAX);
            double r=radius* sqrt((double)rand()/RAND_MAX);
            double x=h + r* math.cos(theta);
            double y= k + r * math.sin(theta);
            return {x,y};
            

        }



        

};
#include<bits/stdc++.h>
using namespace std;
class Cuboid
{
private:
   int length,width,height;

public:
    Cuboid():length(0),width(0),height(0){}
    Cuboid(int length,int width,int height)
    {
        this->length=length;
        this->width=width;
        this->height=height;
    }
    int getVolume()
    {
        return length*width*height;
    }
    int getSurfaceArea()
    {
        return 2*length*width+2*width*height+2*length*height;
    }
    bool operator<(Cuboid c1)
    {
        if(c1.getVolume()<getVolume())
        return true;
    }
    void display(){
        cout<<getVolume()<<endl;
        cout<<getSurfaceArea()<<endl;

    }

    ~Cuboid(){}
};


int main()
{
    vector<Cuboid>c(5);
    for(int i=0;i<5;i++)
    {
        c[i]=Cuboid(i*2,i*3,i*4);

    }
    sort(c.begin(),c.end());
    for(int i=0;i<5;i++)
    {
        c[i].display();
        
    }



return 0;
}
#include <iostream>
using namespace std;

struct point{
    public:
    float x;
    float y;
    point(float xx ,float yy ){
        x=xx;
        y=yy;
    }


    bool isOrigin(){
        return (x== 0 && y==0);
    }
    bool isEixo_X(){
        return y==0;
    }
    bool isEixo_Y(){
        return x==0;
    }
    bool isQ1(){
        return (x>0 && y>0);
    }
    bool isQ2(){
        return (x<0 && y>0);
    }
    bool isQ3(){
        return (x<0 && y<0);
    }
    bool isQ4(){
        return (x>0 && y<0);
    }


};

int main(){

 float x,y;
 cin>>x>>y ;
 point p(x,y);

 if(p.isOrigin()) cout<< "Origem";
 else if (p.isEixo_X()) cout<< "Eixo X";
 else if (p.isEixo_Y()) cout<< "Eixo Y";
 else if (p.isQ1()) cout<< "Q1";
 else if (p.isQ2()) cout<< "Q2";
 else if (p.isQ3()) cout<< "Q3";
 else cout<< "Q4";





    return 0;
}
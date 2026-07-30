#include"core.hpp"
#include<cassert>
#include<iostream>
int main(){std::vector<Hit>h={{100,0,10,true},{150,1,20,true},{400,1,30,true},{410,2,-2,true},{420,2,40,false}};auto e=reconstruct(h,100);assert(e.size()==2&&e[0].hits.size()==2&&e[0].energy==30);std::cout<<"tests passed\n";}

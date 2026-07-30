#include"core.hpp"
#include<iostream>
#include<string>
#include<algorithm>
int main(int c,char**v){try{if(c==4&&std::string(v[1])=="--generate"){generate(v[2],std::stoull(v[3]));std::cout<<"generated\n";return 0;}if(c!=2){std::cerr<<"usage: detector_analyzer input.csv OR --generate out.csv N\n";return 1;}auto h=read(v[1]);auto e=reconstruct(h,120);size_t valid=0;double sum=0,maxe=0;std::vector<size_t>occ(64);for(auto&a:h)if(a.good&&a.e>0&&a.ch>=0&&a.ch<64){valid++;occ[a.ch]++;}for(auto&a:e){sum+=a.energy;maxe=std::max(maxe,a.energy);}std::cout<<"hits="<<h.size()<<" valid="<<valid<<" rejected="<<h.size()-valid<<" events="<<e.size()<<" mean_energy_keV="<<(e.empty()?0:sum/e.size())<<" max_energy_keV="<<maxe<<"\n";}catch(const std::exception&x){std::cerr<<x.what()<<'\n';return 1;}}

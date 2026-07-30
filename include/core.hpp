#pragma once
#include<vector>
struct Hit{long long t;int ch;double e;bool good;};struct Event{long long start,end;double energy;std::vector<Hit>hits;};
std::vector<Event> reconstruct(std::vector<Hit>,long long window);void generate(const char*,size_t);std::vector<Hit> read(const char*);

#include <iostream>
#include <chrono>
#include <vector>
using namespace std;
using namespace std::chrono;

class Stopwatch {
    time_point<steady_clock> start;
    bool running=false;
    vector<long long> laps;
public:
    void startIt(){ start = steady_clock::now(); running=true; cout<<"Start\\n"; }
    void lap(){
        if(!running) return;
        auto now = steady_clock::now();
        laps.push_back(duration_cast<milliseconds>(now-start).count());
        cout<<"Lap "<<laps.size()<<": "<<laps.back()<<" ms\\n";
    }
    void stop(){ if(running){ lap(); running=false; cout<<"Stopped\\n"; } }
};

int main(){
    Stopwatch sw; char cmd;
    cout<<"s=start, l=lap, e=stop\\n";
    while(cin>>cmd){
        if(cmd=='s') sw.startIt();
        else if(cmd=='l') sw.lap();
        else if(cmd=='e'){ sw.stop(); break; }
    }
    return 0;
}
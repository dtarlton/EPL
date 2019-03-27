#ifndef player_H
#define player_H

// your declarations here


#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <memory>
#include <typeinfo>
#include <vector>
//#include "data.csv"

using namespace std;


class AttPlayer{
public:
AttPlayer(){    
    //cout<<"Name"<<endl;
}
void playerAvg(){
    double goalMatchAvg = (_goals/_matchesPlayed)*60;
    double shootingAvg=(_shotTarget/_totalShots)*40;
    double totalAvg=goalMatchAvg+shootingAvg;
    cout<<totalAvg<<"\n";
}
void setName(string name){
     _name=name;
}
void setShotsTarg(string shotTarget){
    _shotTarget=std::atof(shotTarget.c_str());
}
void setTotalShots(string totalShots){
    _totalShots=std::atof(totalShots.c_str());
}    
void setGoals(string goals){
    _goals=std::atof(goals.c_str());
}
void setMatchesPlayed(string matchesPlayed){
       _matchesPlayed=std::atof(matchesPlayed.c_str());
}
void print(){
    cout<<"Player: \t"<< _name<<endl<<"shot on target: \t"<< _shotTarget<<endl<<"Total shots: \t" <<_totalShots<<endl<<"Goals scored: \t"<<_goals<<endl<<"Matches Played: \t"<< _matchesPlayed<<endl;
}

private:
string _name;
double _shotTarget,_totalShots,_goals,_matchesPlayed;


};


#endif
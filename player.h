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

void setMatchesPlayed(string matchesPlayed){
       _matchesPlayed=std::atof(matchesPlayed.c_str());
}

void setClub(string club){
    _club=club;
}
void setMinPlayedHome(string minPlayedHome){
    _minPlayedHome=std::atof(minPlayedHome.c_str());
}
void setMinPlayedAway(string minPlayedAway){
    _minPlayedAway=std::atof( minPlayedAway.c_str());
}
void setAppHome(string appHome){
    _appHome=std::atof(appHome.c_str());
}
void setAppAway(string appAway){
    _appAway=std::atof(appAway.c_str());
}
void setGoalsHome(string goalsHome){
    _goalsHome=std::atof(goalsHome.c_str());
}
void setGoalsAway(string goalsAway){
    _goalsAway=std::atof(goalsAway.c_str());
}
void setAssHome(string assHome){
    _assHome=std::atof(assHome.c_str());
}
void setAssAway(string assAway){
    _assAway=std::atof(assAway.c_str());
}
void setPenGoals(string penGoals){
    _penGoals=std::atof(penGoals.c_str());
}
void setPenMisses(string penMisses){
    _penMisses=std::atof(penMisses.c_str());
}
void setCleanHome(string cleanHome){
    _cleanHome=std::atof(cleanHome.c_str());
}
void setCleanAway(string cleanAway){
    _cleanAway=std::atof(cleanAway.c_str());
}
void setConHome(string conHome){
    _conHome=std::atof(conHome.c_str());
}
void setConAway(string conAway){
    _conAway=std::atof(conAway.c_str());
}
void setGoalsFullTimeHome(string goalsFullTimeHome){
    _goalsFullTimeHome=std::atof(goalsFullTimeHome.c_str());
}
void setGoalsFullTimeAway(string goalsFullTimeAway){
    _goalsFullTimeAway=std::atof(goalsFullTimeAway.c_str());
}
void setGoalsConFullTime(string goalsConFullTime){
    _goalsConFullTime=std::atof(goalsConFullTime.c_str());
}

void print(){
    cout<<"Player: \t"<< _name<<endl<<"Club: \t"<< _club<<endl<<"Min Played Home: \t" <<_minPlayedHome<<endl<<"Min Played Away: \t"<<_minPlayedAway<<endl<<"Appeareances Home: \t"<< _appHome<<endl;
    cout<<"Appearences Away: \t"<< _appAway<<endl<<"Goals Home: \t"<< _goalsHome<<endl<<"Goals Away:  \t" <<_goalsAway<<endl<<"Assists Home : \t"<<_assHome<<endl<<"Assists Away: \t"<< _assAway<<endl;
    cout<<"Penalty Goals: \t"<< _penGoals<<endl<<"Penalties Missed: \t"<< _penMisses<<endl<<"Clean Sheet Home:  \t" <<_cleanHome<<endl<<"Clean Sheet Away  : \t"<<_cleanAway<<endl<<"Conceded Home: \t"<< _conHome<<endl;
    cout<<"Conceded Away: \t"<< _conAway<<endl<<"Goals Full Time @ Home: \t"<< _goalsFullTimeHome<<endl<<"Goals Full Time @ Away: \t" <<_goalsFullTimeAway<<endl<<"Goals Conceded @ 90 min: \t"<<_goalsConFullTime<<endl;
}


vector<AttPlayer> manUnited;
vector<AttPlayer> leCity;
vector<AttPlayer> newcastleUnited;
vector<AttPlayer> totHotspur;
vector<AttPlayer> AFCBo;
vector<AttPlayer> cardiffCity;
vector<AttPlayer> fulham;
vector<AttPlayer> crystalPalace;
vector<AttPlayer> hudderTown;
vector<AttPlayer> chelsea;
vector<AttPlayer> watford;
vector<AttPlayer> brighton;
vector<AttPlayer> wolves;
vector<AttPlayer> everton;
vector<AttPlayer> liverpool;
vector<AttPlayer> westham;
vector<AttPlayer> soutHampton;
vector<AttPlayer> burnley;
vector<AttPlayer> manCity;
vector<AttPlayer> aresenal;



string _club;
string _name;
private:

double _shotTarget,_totalShots,_matchesPlayed,_goals;
double _minPlayedHome,_minPlayedAway,_appHome,_appAway,_goalsHome,_goalsAway,_assHome,_assAway;
double _penGoals,_penMisses,_cleanHome,_cleanAway,_conHome,_conAway,_goalsFullTimeHome,_goalsFullTimeAway,_goalsConFullTime;


};


#endif
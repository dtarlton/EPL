#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include "player.h"

using namespace std;

void readPlayerData();


int main(){
readPlayerData();

    return 0;
}



















void readPlayerData(){
vector<AttPlayer> manUnited;
vector<AttPlayer> allPlayers(88);
AttPlayer one;//test model ----> 
string name,club,shotTarget,totalShots,goals,matchesPlayed;
string minPlayedHome,minPlayedAway,appHome,appAway,goalsHome,goalsAway,assHome,assAway;
string penGoals,penMisses,cleanHome,cleanAway,conHome,conAway,goalsFullTimeHome,goalsFullTimeAway,goalsConFullTime;

int i=0;

ifstream playerStat("data.csv");
        if(!playerStat.is_open()){
            cout<<"Error Data sheet not valid";
        }else{
     while(i<87){
                                     getline(playerStat,name,',');
                    allPlayers.at(i).setName(name);
                                     getline(playerStat,club,',');
                    allPlayers.at(i).setClub(club);
                                    getline(playerStat,minPlayedHome,',');
                    allPlayers.at(i).setMinPlayedHome(minPlayedHome);
                                     getline(playerStat,minPlayedAway,',');
                    allPlayers.at(i).setMinPlayedAway(minPlayedAway);
                                     getline(playerStat,appHome,',');
                    allPlayers.at(i).setAppHome(appHome);
                                     getline(playerStat,appAway,',');
                    allPlayers.at(i).setAppAway(appAway);
                                     getline(playerStat,goalsHome,',');
                    allPlayers.at(i).setGoalsHome(goalsHome);
                                     getline(playerStat,goalsAway,',');
                    allPlayers.at(i).setGoalsAway(goalsAway);
                                     getline(playerStat,assHome,',');
                    allPlayers.at(i).setAssHome(assHome);
                                     getline(playerStat,assAway,',');
                    allPlayers.at(i).setAssAway(assAway);
                                     getline(playerStat,penGoals,',');
                    allPlayers.at(i).setPenGoals(penGoals);
                                    getline(playerStat,penMisses,',');
                    allPlayers.at(i).setPenMisses(penMisses);
                                    getline(playerStat,cleanHome,',');
                    allPlayers.at(i).setCleanHome(cleanHome);
                                    getline(playerStat,cleanAway,',');
                    allPlayers.at(i).setCleanAway(cleanAway);
                                    getline(playerStat,conHome,',');
                    allPlayers.at(i).setConHome(conHome);
                                    getline(playerStat,conAway,',');
                    allPlayers.at(i).setConAway(conAway);
                                    getline(playerStat,goalsFullTimeHome,',');
                    allPlayers.at(i).setGoalsFullTimeHome(goalsFullTimeHome);
                                    getline(playerStat,goalsFullTimeAway,',');
                    allPlayers.at(i).setGoalsFullTimeAway(goalsFullTimeAway);
                                    getline(playerStat,goalsConFullTime,'\n');
                    allPlayers.at(i).setGoalsConFullTime(goalsConFullTime);


                    
                allPlayers.at(i).print();
               // allPlayers.at(i).playerAvg();
                cout<<"\n";
                if(allPlayers.at(i)._club=="Manchester United"){
                    manUnited.push_back(allPlayers.at(i));
                }
               // cout<<manUnited.at(0)._name;
                   i++;
                   //break;
       }      
        }
}
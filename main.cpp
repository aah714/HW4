#include<iostream>
#include<string>
//#include"SocialMediaAccount.h"
#include"SocialMediaAccount.cpp"
#include"Twitter.cpp"
#include "Instagram.cpp"

using namespace std;

struct Profile
{
    int userId;
    string username;
};
ostream& operator<<(ostream& output, Profile P){
    output<<P.username;
    return output;
}


int main()
{
    Profile start={1, "Adam"};
    Profile P1={2,"Luke"};
    Profile P2={3, "Dan"};
    Profile P3={4, "Joe"};
    SocialMediaAccount<string> SS;
    Twitter<string> TS;
    Twitter<Profile> TP;
    Twitter<string> TS2("John");
    Twitter<Profile> TP2(start);
    Instagram<string> IS;
    Instagram<Profile> IP;
    Instagram<string> IS2("John");
    Instagram<Profile> IP2(start);
    TS.setHandler("Sally");
    TS.addFollower("Janet");
    TS.setPrivate(false);
    TS.addFollowed("Ben");
    TS.displayFollowers();
    TS.displayFollowed();
    IP2.addFollower(P1);
    IP2.addFollowed(P2);
    IP2.setPrivate(false);
    IP2.displayFollowed();
    //IP2.displayFollowers();
    IP2.addFollower(P3);
    IP2.displayFollowers();

}


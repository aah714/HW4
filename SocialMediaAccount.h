//
// Created by ashle on 11/10/2021.
//

#ifndef HW4_SOCIALMEDIAACCOUNT_H
#define HW4_SOCIALMEDIAACCOUNT_H



const int maxFollowers=10;
const int maxFollowed=10;



template<class T>

class SocialMediaAccount {
public:
    SocialMediaAccount();
    SocialMediaAccount(T user);
    int getFollowerCount();
    int getFollowedCount();
    bool getPrivate();
    void setFollowerCount(int newCount);
    void setFollowedCount(int newCount);
    void setPrivate(bool newPrivate);
    T getHandler();
    void setHandler(T user);
    void addFollower(T user);
    void addFollowed(T user);
    void displayFollowers();
    void displayFollowed();

private:
    T handler;
    T followers[maxFollowers];
    T followed[maxFollowed];
    int followerCount;
    int followedCount;
    bool privacy;

};


#endif //HW4_SOCIALMEDIAACCOUNT_H

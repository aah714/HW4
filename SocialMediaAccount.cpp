//
// Created by ashle on 11/10/2021.
//

#include "SocialMediaAccount.h"
#include <iostream>
using namespace std;

template<class T>
SocialMediaAccount<T>::SocialMediaAccount() {
    followerCount=0;
    followedCount=0;
    privacy=true;
    handler=T();
}

template<class T>
SocialMediaAccount<T>::SocialMediaAccount(T user){
    followerCount=0;
    followedCount=0;
    privacy=true;
    handler=user;
}

template<class T>
int SocialMediaAccount<T>::getFollowedCount() {
    return followedCount;
}

template<class T>
int SocialMediaAccount<T>::getFollowerCount() {
    return followerCount;
}

template<class T>
bool SocialMediaAccount<T>::getPrivate() {
    return privacy;
}

template<class T>
void SocialMediaAccount<T>::setFollowerCount(int newCount) {
    followerCount=newCount;
}

template<class T>
void SocialMediaAccount<T>::setFollowedCount(int newCount) {
   followedCount=newCount;
}

template<class T>
void SocialMediaAccount<T>::setPrivate(bool newPrivate){
    privacy=newPrivate;
}

template<class T>
T SocialMediaAccount<T>::getHandler(){
    return handler;
}

template<class T>
void SocialMediaAccount<T>::setHandler(T user) {
    handler=user;
}

template<class T>
void SocialMediaAccount<T>::addFollower(T user) {
    if(followerCount<maxFollowers){
        followers[followerCount]=user;
        followerCount++;
    }
    else{
        cout<<"Error:You have too many followers!"<<endl;
    }
}

template<class T>
void SocialMediaAccount<T>::addFollowed(T user) {
    if(followedCount<maxFollowed){
        followed[followedCount]=user;
        followedCount++;
    }
    else{
        cout<<"Error:You follow too many people!"<<endl;
    }
}

template<class T>
void SocialMediaAccount<T>::displayFollowers() {
    if(privacy==false){
        for(int i=0; i<followerCount; i++){
            cout<<followers[i]<<", ";
        }
        cout<<"is following "<<handler<<endl;
    }
    else{
        cout<<"Account is protected, we cannot see the requested information"<<endl;
    }
}

template<class T>
void SocialMediaAccount<T>::displayFollowed() {
    if(privacy==false){
        cout<<handler<<" follows: ";
        for(int i=0; i<followedCount; i++){
            cout<<followed[i]<<", ";
        }
        cout<<endl;
    }
    else{
        cout<<"Account is protected, we cannot see the requested information"<<endl;
    }
}
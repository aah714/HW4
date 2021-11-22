//
// Created by ashle on 11/17/2021.
//

#include "Instagram.h"
template<class T>
Instagram<T>::Instagram():SocialMediaAccount<T>(){
    likeCount=0;
}

template<class T>
Instagram<T>::Instagram(T user):SocialMediaAccount<T>(user){
    likeCount=0;
}

template<class T>
void Instagram<T>::Like(){
    likeCount+=1;
}



template<class T>
void Instagram<T>::setLikeCount(int newLikeCount){
    likeCount=newLikeCount;
}


template<class T>
int Instagram<T>::getLikeCount(){
    return likeCount;
}
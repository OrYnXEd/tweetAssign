//
// Created by Edward Mwwanyali 20204935 and Manar Aldosari 20207406
//

#ifndef TWEETASSIGN_SYSTEM_H
#define TWEETASSIGN_SYSTEM_H


/* inclusions */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "user.h"
#include "tweet.h"

/* system lists */
// users list.
Users_list u_list;

// tweets stack
Stack tweet_Stack;

/* functions */
void system_init(void);

void get_system_userNames(void);

void post_tweet(User *pu);

void getNewsFeed(void);
#endif //TWEETASSIGN_SYSTEM_H



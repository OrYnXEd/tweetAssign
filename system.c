//
// Created by Edward Mwwanyali 20204935 and Manar Aldosari 20207406
//
/* inclusions */
#include "system.h"
//static int tweet_id;

// initialization function.
void system_init(void){
    // create users list & initialize it.
    u_list.size = 0;

    // Create Tweets stack.
    create_tweet_stack(&tweet_Stack);
}

// function to print all userNames
void get_system_userNames(void){
    int i=0;
    for(; i<u_list.size; i++)
        printf("  [ID: %d]\tUserName: %s\n",i, u_list.entry[i].username);
}

// Post tweet function.
void post_tweet(User *pu){
    Tweet pt;

    // store tweet id
    pt.id = rand()%1000 + 1;

    // store tweet userName
    strcpy(pt.user, &pu->username);

    // get tweet from user.
    printf(">>[tweet::msg] ");
    for(int k=0; k<270; k++){
        pt.msg[k]= getchar();
        if(pt.msg[k] == '*' ){
            pt.msg[k] = '\0';
            break;
        }
    }

    // push tweet to general tweet_stack of the system.
    push(pt, &tweet_Stack);
    printf("\n\n");
}

void getNewsFeed(void){
    int i=0;

    // print the 10 most recent tweets.
    printf("=============================== *News Feed* ===============================\n");
    for(StackNode *pn= tweet_Stack.top; pn&&i<10; i++,pn=pn->next){
        printf("[%d]ID: %d\t\tUserName: %s\n",i+1,pn->entry.id, pn->entry.user);
        printf(">>[tweet..........]\n%s",pn->entry.msg);
        printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    }

}



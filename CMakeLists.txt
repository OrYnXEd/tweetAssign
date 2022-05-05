cmake_minimum_required(VERSION 3.21)
project(tweetAssign C)

set(CMAKE_C_STANDARD 11)

add_executable(tweetAssign main.c system.h system.c tweet.c tweet.h user.c user.h)

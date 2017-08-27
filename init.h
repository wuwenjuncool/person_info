//
//  main.h
//  xcode_person_info
//
//  Created by 凡路 on 2017/8/27.
//  Copyright © 2017年 凡路. All rights reserved.
//

#ifndef init_h
#define init_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef struct user{
    char user_id[4];
    char user_name[10];
    char user_sex[4];
    char user_password[10];
    char user_address[20];
    int user_age;
}User;


#endif /* init_h */

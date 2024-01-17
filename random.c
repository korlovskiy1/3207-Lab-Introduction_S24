//
// Created by Katerina Orlovskiy on 1/17/24.
//
#include <stdlib.h>
#include "random.h"

char randchar(){
    char letters[] = {'A', 'B', 'C','D','E','F','G','H', 'I','J','K',
                      'L','M','N','O','P', 'Q', 'R', 'S', 'T', 'U',
                      'V','W', 'X', 'Y', 'Z'};
    return letters[rand() % 26];
}
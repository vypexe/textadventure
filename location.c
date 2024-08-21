#include <stdio.h>
#include <string.h>

struct location {
    const char *description;
    const char *tag;
}
locs[] = {
    {"an open island", "default"},
    {"a large volcanic island", "volcano"},
    {"a lovely angelical island", "love"},
    {"a treasure island with riches", "treasure"}
};
 
#define numberOfLocations (sizeof locs / sizeof *locs)

static unsigned locationOfPlayer = 0;

void executeLook(const char *noun){
    if (noun != NULL && strcmp(noun, "around") == 0){
        printf("You are currently in %s.\n", locs[locationOfPlayer].description);
    }
    else{
        printf("There is no existing place that is named such.\n");
    }
}

void executeGo(const char *noun){
    unsigned i;
    for(i = 0; i < numberOfLocations; i++){
        if (noun != NULL && strcmp(noun, locs[i].tag) == 0)
        {
            if (i == locationOfPlayer){
                printf("You can't get much closer than this.\n");
            }
            else{
                printf("OK.\n");
                locationOfPlayer = i;
                executeLook("around");
            }
            return;
        }

    }
    printf("I dont understand where you want to go.\n");
}
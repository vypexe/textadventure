#include <stdio.h>
#include "object.h"

OBJECT objs[] = {
    {"an open island", "default", NULL},
    {"a large volcanic island", "volcano", NULL},
    {"a lovely angelical island", "love", NULL},
    {"a treasure island with riches", "treasure", NULL},
    {"a silver coin", "silver", treasure},
    {"a gold coin", "gold", treasure},
    {"a fierce dragon", "dragon", volcano},
    {"yourself", "yourself", default}
};
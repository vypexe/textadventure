typedef struct object {
    const char *description;
    const char *tag;
    struct object *location;
} OBJECT;

extern OBJECT objs[];

#define default     (objs + 0)
#define volcano     (objs + 1)
#define love        (objs + 2)
#define treasure    (objs + 3)
#define silver      (objs + 4)
#define gold        (objs + 5)
#define dragon      (objs + 6)
#define player      (objs + 7)

#define endOfObjs   (objs + 8)

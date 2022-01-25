#pragma once

#include "../host_system/Scene.h"

typedef struct {
    u8 _000[0x030 - 0x000];
    HeapCollection heapCollection;
    u8 _030[0xcb8 - 0xc3c];
} RootScene;
static_assert(sizeof(RootScene) == 0xcb8);

extern RootScene *s_rootScene;

#ifndef TILE_H
#define TILE_H

#include "terrain.h"

typedef struct Tiles {
    int UnitCapacity;
    int RiverLevel;
    Terrain Terrain_Type;
    Climate Climate_Type;
} Tile;
#endif
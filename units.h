#ifndef UNITS_H
#define UNITS_H

typedef enum PlaneType {
    Fighter,
    Fighter_Bomber,
    CAS,
    Naval_Bomber,
    Medium_Bomber,
    Strategic_Bomber,
    Recon,
    Transport,
    Count
} PlaneTypes;

typedef struct Planes {
    PlaneTypes Type;
    float Soft_Attack;
    float Hard_Attack;
    int Carrier_Capable;
    float KMH;
} Plane;

#endif
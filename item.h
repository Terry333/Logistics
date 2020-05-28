#ifndef ITEM_H
#define ITEM_H

enum ItemEnum {
    // Consumables
    Basic_Ration,
    Medium_Ration,
    Large_Ration,
    Water,
    Juice,
    // Ammunition
    _556x45,
    _545x39,
    _762x39,
    _9x19,
    _9x18,
    _762x25,
    _762x51,
    _762x54r,
    _45acp,
    _50bmg,
    // Weapons
    M16,
    M16A2,
    CAR15,
    XM4,
    M14,
    M240,
    M249,
    M9,
    M1911,
    M1911A1,
    M1919A4,
    M1919A6,
    M3,
    M60,
    MP5,
    M870,
    M2HB,
    M40,
    M72LAW,
    M136AT4,
    AK47,
    AKM,
    AK74,
    AKS74U,
    Zastava_M70,
    RPG7,
    PK,
    PSL,
    CZ75,
    // Length of enum
    Count
};

enum Units {
    Amount,
    Litre,
    Kilogram,
    Count
};

typedef struct Items {
    char Name[100];
} Item;

Item Public_Items[(int) Count];

int Initialize_Items(char * folder);

int Initialize_Items(char * folder){
    
}

#endif
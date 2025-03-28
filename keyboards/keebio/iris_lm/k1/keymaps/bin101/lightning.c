// Copyright 2025 Jens van Almsick (@bin101)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "lightning.h"

extern rgb_config_t rgb_matrix_config;

#define ____    HSV_BLACK
#define AZUR    HSV_AZURE
#define BLUE    HSV_BLUE
#define CHAT    HSV_CHARTREUSE
#define CORL    HSV_CORAL
#define CYAN    HSV_CYAN
#define GOLD    HSV_GOLD
#define GOLR    HSV_GOLDENROD
#define GREN    HSV_GREEN
#define MAGN    HSV_MAGENTA
#define ORAG    HSV_ORANGE
#define PINK    HSV_PINK
#define PURP    HSV_PURPLE
#define REDD    HSV_RED
#define SREN    HSV_SPRINGGREEN
#define TEAL    HSV_TEAL
#define TURQ    HSV_TURQUOISE
#define WITE    HSV_WHITE
#define YELW    HSV_YELLOW


const uint16_t PROGMEM ledmaps[][RGB_MATRIX_LED_COUNT][4] = {

    [_MAC] = {
    //     ┌─────────┐         ┌─────────┐         ┌─────────┐                                      ┌─────────┐         ┌─────────┐         ┌─────────┐
            { 1,____},          { 4,____},          { 7,____},                                       {41,____},          {38,____},          {35,____},
    //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                            ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
       { 0,____},{ 2,____},{ 3,____},{ 5,____},{ 6,____},{ 8,____},                             {42,____},{40,____},{39,____},{37,____},{36,____},{34,____},
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
       {14,____},{13,____},{12,____},{11,____},{10,____},{ 9,____},                             {43,____},{44,____},{45,____},{46,____},{47,____},{48,____},
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
       {15,____},{16,____},{17,____},{18,____},{19,GREN},{20,____},                             {54,____},{53,GREN},{52,____},{51,____},{50,____},{49,____},
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐        ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
       {28,____},{26,____},{25,____},{23,____},{22,____},{21,____},{29,____},         {67,____},{55,____},{56,____},{57,____},{59,____},{60,____},{62,____},
    //└─────────┴─────────┴─────────┴───┬─────┴───┬─────┴───┬─────┴────┬────┘        └────┬────┴────┬────┴────┬────┴────┬────┴─────────┴─────────┴─────────┘
                                         {33,AZUR},{32,____},{30,____},                    {66,____},{64,____},{63,AZUR},
    //                                  └─────────┴─────────┴─────────┘                   └─────────┴─────────┴─────────┘
            {27,____},          {24,____},          {31,____},                                       {65,____},          {58,____},          {61,____}
    //     └─────────┘         └─────────┘         └─────────┘                                      └─────────┘         └─────────┘         └─────────┘
    },

    [_WIN] = {
    //     ┌─────────┐         ┌─────────┐         ┌─────────┐                                      ┌─────────┐         ┌─────────┐         ┌─────────┐
            { 1,____},          { 4,____},          { 7,____},                                       {41,____},          {38,____},          {35,____},
    //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                            ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
        { 0,____},{ 2,____},{ 3,____},{ 5,____},{ 6,____},{ 8,____},                             {42,____},{40,____},{39,____},{37,____},{36,____},{34,____},
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
        {14,____},{13,____},{12,____},{11,____},{10,____},{ 9,____},                             {43,____},{44,____},{45,____},{46,____},{47,____},{48,____},
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
        {15,____},{16,____},{17,____},{18,____},{19,BLUE},{20,____},                             {54,____},{53,BLUE},{52,____},{51,____},{50,____},{49,____},
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐        ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
        {28,____},{26,____},{25,____},{23,____},{22,____},{21,____},{29,____},         {67,____},{55,____},{56,____},{57,____},{59,____},{60,____},{62,____},
    //└─────────┴─────────┴─────────┴───┬─────┴───┬─────┴───┬─────┴────┬────┘        └────┬────┴────┬────┴────┬────┴────┬────┴─────────┴─────────┴─────────┘
                                            {33,AZUR},{32,____},{30,____},                    {66,____},{64,____},{63,AZUR},
    //                                  └─────────┴─────────┴─────────┘                   └─────────┴─────────┴─────────┘
            {27,____},          {24,____},          {31,____},                                       {65,____},          {58,____},          {61,____}
    //     └─────────┘         └─────────┘         └─────────┘                                      └─────────┘         └─────────┘         └─────────┘
    },

    [_NAVI] = {
    //     ┌─────────┐         ┌─────────┐         ┌─────────┐                                      ┌─────────┐         ┌─────────┐         ┌─────────┐
            { 1,____},          { 4,____},          { 7,____},                                       {41,____},          {38,____},          {35,____},
    //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                            ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
       { 0,REDD},{ 2,YELW},{ 3,YELW},{ 5,YELW},{ 6,YELW},{ 8,YELW},                             {42,____},{40,____},{39,____},{37,____},{36,____},{34,____},
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
       {14,PURP},{13,REDD},{12,GREN},{11,REDD},{10,GREN},{ 9,PURP},                             {43,____},{44,____},{45,____},{46,____},{47,____},{48,____},
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
       {15,PURP},{16,REDD},{17,GREN},{18,REDD},{19,GREN},{20,PURP},                             {54,REDD},{53,GREN},{52,REDD},{51,GREN},{50,____},{49,____},
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐        ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
       {28,____},{26,____},{25,TEAL},{23,REDD},{22,GREN},{21,PINK},{29,____},         {67,____},{55,PURP},{56,____},{57,____},{59,____},{60,____},{62,____},
    //└─────────┴─────────┴─────────┴───┬─────┴───┬─────┴───┬─────┴────┬────┘        └────┬────┴────┬────┴────┬────┴────┬────┴─────────┴─────────┴─────────┘
                                         {33,AZUR},{32,____},{30,____},                    {66,____},{64,____},{63,AZUR},
    //                                  └─────────┴─────────┴─────────┘                   └─────────┴─────────┴─────────┘
            {27,____},          {24,____},          {31,____},                                       {65,____},          {58,____},          {61,____}
    //     └─────────┘         └─────────┘         └─────────┘                                      └─────────┘         └─────────┘         └─────────┘
    },

    [_SYMBOLS] = {
    //     ┌─────────┐         ┌─────────┐         ┌─────────┐                                      ┌─────────┐         ┌─────────┐         ┌─────────┐
            { 1,____},          { 4,____},          { 7,____},                                       {41,____},          {38,____},          {35,____},
    //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                            ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
       { 0,GREN},{ 2,GREN},{ 3,GREN},{ 5,GREN},{ 6,BLUE},{ 8,BLUE},                             {42,BLUE},{40,BLUE},{39,REDD},{37,REDD},{36,REDD},{34,REDD},
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
       {14,____},{13,____},{12,____},{11,REDD},{10,REDD},{ 9,____},                             {43,____},{44,ORAG},{45,ORAG},{46,ORAG},{47,____},{48,____},
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
       {15,____},{16,____},{17,____},{18,REDD},{19,REDD},{20,____},                             {54,____},{53,ORAG},{52,REDD},{51,ORAG},{50,____},{49,____},
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐        ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
       {28,____},{26,____},{25,____},{23,REDD},{22,REDD},{21,____},{29,____},         {67,____},{55,REDD},{56,ORAG},{57,ORAG},{59,ORAG},{60,____},{62,____},
    //└─────────┴─────────┴─────────┴───┬─────┴───┬─────┴───┬─────┴────┬────┘        └────┬────┴────┬────┴────┬────┴────┬────┴─────────┴─────────┴─────────┘
                                         {33,AZUR},{32,____},{30,____},                    {66,____},{64,____},{63,AZUR},
    //                                  └─────────┴─────────┴─────────┘                   └─────────┴─────────┴─────────┘
            {27,____},          {24,____},          {31,____},                                       {65,____},          {58,____},          {61,____}
    //     └─────────┘         └─────────┘         └─────────┘                                      └─────────┘         └─────────┘         └─────────┘
    },

    [_GAMEING] = {
    //     ┌─────────┐         ┌─────────┐         ┌─────────┐                                      ┌─────────┐         ┌─────────┐         ┌─────────┐
            { 1,____},          { 4,____},          { 7,____},                                       {41,____},          {38,____},          {35,____},
    //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                            ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
       { 0,____},{ 2,____},{ 3,____},{ 5,____},{ 6,____},{ 8,____},                             {42,____},{40,____},{39,____},{37,____},{36,____},{34,____},
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
       {14,____},{13,____},{12,GREN},{11,____},{10,____},{ 9,____},                             {43,____},{44,____},{45,____},{46,____},{47,____},{48,____},
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
       {15,ORAG},{16,GREN},{17,GREN},{18,GREN},{19,____},{20,____},                             {54,____},{53,____},{52,____},{51,____},{50,____},{49,____},
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐        ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
       {28,ORAG},{26,____},{25,____},{23,____},{22,____},{21,____},{29,____},         {67,____},{55,____},{56,____},{57,____},{59,____},{60,____},{62,AZUR},
    //└─────────┴─────────┴─────────┴───┬─────┴───┬─────┴───┬─────┴────┬────┘        └────┬────┴────┬────┴────┬────┴────┬────┴─────────┴─────────┴─────────┘
                                         {33,ORAG},{32,____},{30,ORAG},                    {66,____},{64,____},{63,ORAG},
    //                                  └─────────┴─────────┴─────────┘                   └─────────┴─────────┴─────────┘
            {27,____},          {24,____},          {31,____},                                       {65,____},          {58,____},          {61,____}
    //     └─────────┘         └─────────┘         └─────────┘                                      └─────────┘         └─────────┘         └─────────┘
    },

    [_ADJUST] = {
    //     ┌─────────┐         ┌─────────┐         ┌─────────┐                                      ┌─────────┐         ┌─────────┐         ┌─────────┐
            { 1,____},          { 4,____},          { 7,____},                                       {41,____},          {38,____},          {35,____},
    //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                            ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
       { 0,PURP},{ 2,____},{ 3,____},{ 5,____},{ 6,____},{ 8,____},                             {42,____},{40,GREN},{39,YELW},{37,REDD},{36,____},{34,PURP},
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
       {14,____},{13,GREN},{12,____},{11,____},{10,____},{ 9,____},                             {43,____},{44,GREN},{45,____},{46,REDD},{47,____},{48,REDD},
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
       {15,____},{16,REDD},{17,____},{18,____},{19,____},{20,AZUR},                             {54,BLUE},{53,GREN},{52,YELW},{51,REDD},{50,____},{49,____},
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐        ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
       {28,PINK},{26,____},{25,____},{23,____},{22,____},{21,____},{29,____},         {67,____},{55,____},{56,GREN},{57,YELW},{59,REDD},{60,____},{62,PINK},
    //└─────────┴─────────┴─────────┴───┬─────┴───┬─────┴───┬─────┴────┬────┘        └────┬────┴────┬────┴────┬────┴────┬────┴─────────┴─────────┴─────────┘
                                         {33,AZUR},{32,____},{30,____},                    {66,____},{64,____},{63,AZUR},
    //                                  └─────────┴─────────┴─────────┘                   └─────────┴─────────┴─────────┘
            {27,____},          {24,____},          {31,____},                                       {65,____},          {58,____},          {61,____}
    //     └─────────┘         └─────────┘         └─────────┘                                      └─────────┘         └─────────┘         └─────────┘
    },
};

uint16_t* find_value_by_index(int layer, int index) {
    uint16_t* array = malloc(sizeof(uint16_t) * 4);

    for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        if (pgm_read_byte(&ledmaps[layer][i][0]) == index) {
            for (int j = 0; j < 4; j++) {
                array[j] = pgm_read_byte(&ledmaps[layer][i][j]);
            }
            break;
        }
    }
    return array;
}

void set_layer_color(int layer) {
    for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        uint16_t* ledmap_value = find_value_by_index(layer, i);

        HSV hsv = {
        .h = ledmap_value[1],
        .s = ledmap_value[2],
        .v = ledmap_value[3],
        };

        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color( i, 0, 0, 0 );
        } else {
            RGB rgb = hsv_to_rgb( hsv );
            float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
        }

        free(ledmap_value);
    }
}

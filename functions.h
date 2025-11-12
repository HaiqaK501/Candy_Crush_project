#pragma once

struct Level {
    int timeLimit;     
    int gridSize;      
    int targetScore;
    int max_swaps;
};
const Level LEVELS[] = {
    {60, 8, 1000,20},   // Level 1
    {50, 9, 2000,15},   // Level 2
    {40, 10, 3000,10},  // Level 3
    {35, 11, 4000,5},  // Level 4
};
const int max_grid_cols = 11;
const int TOTAL_LEVELS = sizeof(LEVELS) / sizeof(LEVELS[0]);
struct Candy {
    char color;
    char type;
    int points;
};
const char colors[] = { 'R','Y','G','B','O' };
const int points[] = { 30,30,40,50,60 };//points in same order as colors array
const char types[] = { 'P','W','S','CB'}; //plain,wrapped,stripped,color bomb


//Function Declerations
int randroll();
Candy generatecandy();
void fillupgrid(Candy arr[][max_grid_cols], int, int);
void show_message(int signal);





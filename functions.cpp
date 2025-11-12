#include <iostream>
#include "functions.h"
using namespace std;

int randomindex() {
	return rand() % 5;
}
int randomroll(){
	return rand() % 100 + 1;
}

Candy generatecandy() {
	Candy this_candy;
	int rand_idx = randomindex();
	this_candy.color = colors[rand_idx];
	this_candy.points = points[rand_idx];
	int result = randomroll();
	if (result <=90) {
		this_candy.type = 'P'; //majority candies should be plain
	}
	else if (result>90 && result <= 95) {
		this_candy.type = 'W';
	}
	else if (result>95 && result<=99) {
		this_candy.type = 'S';
	}
	else {
		this_candy.type = 'CB';
	}
	return this_candy;
}

void fillupgrid(Candy arr[][max_grid_cols], int rows, int cols) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			arr[i][j] = generatecandy();
		}
	}
}
void show_message(int signal) {
	if (signal == 0) { //welcome
		cout << "Welcome! Your GPA may not be perfect but your score can be! " << endl;
	}
	else if (signal == 1) { //if user win
		cout << "Excellent score! Too bad this isn't coming home like your transcript!" << endl;
	}
	else { //user lose
		cout << "Some people make games... and some can't even play" << endl;
	}
}




// Testing_2DProceduralGen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

static int roomTemplate[5][4] = { { 1, 1, 1, 1 }, 
								  { 0, 1, 1, 1 }, 
								  { 0, 1, 1, 0 }, 
								  { 0, 0, 1, 0 }, 
								  { 1, 0, 1, 0 } }; //NESW

int map[11][11] = {0};
int roomCount = 0;
int initDepth = 5;
int initDegree = 0;

void generateMap() {
	int initx, inity;
	initx = 5;
	inity = 5;

	putRoom(initx, inity, initDepth, initDegree);
}

void putRoom(int x, int y, int depth, int degree) {
	if (x < 0 || x > 10 || y < 0 || y > 10) {
		return;
	}

	if (map[x][y] == 1) {
		return;
	}

	int room = getRandomRoom();
	int* rotatedRoom = getRotatedRoomTemplate(room, degree);

	for (int i = 0; i < 4; i++) {
		if (rotatedRoom[i] == 1) {
			
		}
	}
	


}

int getRandomRoom() {
	int random = rand() % 5;
	return random;
}

int* getRotatedRoomTemplate(int index, int degree) {
	int* temp = new int[4];

	for (int i = 0; i < 4; i++) {
		temp[i] = roomTemplate[index][(i + degree) % 4];
	}
		
	return temp;
}

int main()
{
    std::cout << "Hello World!\n";
}

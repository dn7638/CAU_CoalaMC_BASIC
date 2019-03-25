#include <CoalaMOD.h>
#include <stdio.h>
#pragma comment(lib, "CoalaMOD.lib")
#include <math.h>
int main() {
	double pi = 3.14159265358979323846;
	BlockID my_stone = createBlock(BLOCK_DIAMOND);




	int px, py, pz;
	getPlayerLocation(&px, &py, &pz);
	double dir = getPlayerDirection();
	double dir_radian = dir * pi / 180.;
	int dx = -5 * sin(dir_radian);
	int dz = 5 * cos(dir_radian);

	//7층짜리 탑입니다.
	locateBlock(my_stone, px + dx , py + 1, pz + dz );
	locateBlock(my_stone, px + dx, py + 2, pz + dz);
	locateBlock(my_stone, px + dx, py + 3, pz + dz);
	locateBlock(my_stone, px + dx, py + 4, pz + dz);
	locateBlock(my_stone, px + dx, py + 5, pz + dz);
	locateBlock(my_stone, px + dx, py + 6, pz + dz);

	locateBlock(my_stone, px + dx, py + 7, pz + dz);
}

	
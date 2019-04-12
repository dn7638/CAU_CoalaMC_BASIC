#include <CoalaMod.h>
#pragma comment(lib, "CoalaMOD.lib")

int main()
{
	BlockID stone = createBlock(BLOCK_STONE);

	int sx, sy, sz, sd;
	scanf_s("%d %d %d %d", &sx, &sy, &sz, &sd);

	int i, j, k;

	for (k = 0; k <= sd; k++) {
		for (i = -sd+k; i < sd + 1-k; i++) {
			for (j = -sd+k; j < sd + 1-k; j++) {
				locateBlock(stone, sx + j, sy + k , sz + i);
			}
		}
	}
}




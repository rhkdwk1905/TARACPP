#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "iohelper/iohelper.h"


#define BUF_LEN 1024

int k = 0, y_max, x_max;
int screen[100][100];

typedef struct node {
	char name[BUF_LEN];
	int x1, x2, y1, y2;
	int z, en, onc;
}button_t;

void print_button_pressed(button_t button) {
	
}

void print_button_released(button_t button) {

}

void print_btn(int x1, int x2, int y1, int y2, int z)
{
	move(x1,y1);
    for(i=x1;i<=x2;i++){
		printf("#");
	}
	for(i=y1;i<y2;i++){
		printf("\n#");
		for(i=x1;i<x2-1;i++) printf(" ");
		printf("#");
	}
    for(i=x1;i<=x2;i++) printf("#");
}

int main(int argc, char * argv[])
{
	start_curses();

	button_t* arr = NULL;
	arr = (button_t*)malloc(sizeof(button_t) * 1);
	arr[0] = malloc(sizeof(button_t));

	FILE* fp;
	fp = fopen("input.txt", "r");

	void (*onclick) (button_t button);

	scanf("%d %d", &y_max, &x_max);

	while (EOF != fscanf(fp, "%s %d %d %d %d %d %d %d",
		&arr[k].name, &arr[k].y1, &arr[k].x1, &arr[k].y2, &arr[k].x2, &arr[k].z, &arr[k].en, &arr[k].onc)) {
		k++;
		arr = (button_t*)realloc(arr, sizeof(button_t) * (k+1));
		arr[k] = (button_t*)malloc(sizeof(button_t));
		
		print_btn(arr[k].x1,arr[k].x2,arr[k].y1,arr[k].y2,arr[k].z);
		
	}

	fclose(fp);
	end_curses();
	return 0;
}

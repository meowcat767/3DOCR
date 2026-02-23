#pragma once
#include <3ds.h>

#define WIDTH 400
#define HEIGHT 240
#define SCREEN_SIZE (WIDTH * HEIGHT * 2)
#define BUF_SIZE (SCREEN_SIZE * 2)

bool cameraInit();
void cameraExit3D();
void takePicture3D(u8 *buf);
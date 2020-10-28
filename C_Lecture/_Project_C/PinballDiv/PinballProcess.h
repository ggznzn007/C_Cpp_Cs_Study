#pragma once

void drawXLine(int sX, int eX, int yPos, const char* icon);
void drawYLine(int sY, int eY, int xPos, const char* icon);
void drawBar(int x, int y, char* bar);
void drawWall(int start, int end, int any, int pt, char* icon);
void drawObs(int left, int top, int width, int height);
int obXBouncce(int x, int y, int left, int top, int width, int hieght, int sc);
int obYBouncce(int x, int y, int left, int top, int width, int hieght, int sc);



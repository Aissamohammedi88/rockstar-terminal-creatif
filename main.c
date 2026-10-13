// engine/main.c — Moteur GTA 5 Lite
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define WIDTH 800
#define HEIGHT 600

void render_vehicle(int x, int y) {
    printf("🚗 Vehicule à (%d, %d)\n", x, y);
}

void render_character(int x, int y) {
    printf("🧑 Personnage à (%d, %d)\n", x, y);
}

void render_mission(char *name) {
    printf("🎯 Mission : %s\n", name);
}

int main(int argc, char **argv) {
    printf("🧬 GTA 5 LITE — NEXUS EDITION\n");
    printf("================================\n");
    render_vehicle(100, 200);
    render_character(300, 400);
    render_mission("Braquage de la banque centrale");
    return 0;
}

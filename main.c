#include <stdio.h>
#include "raylib.h"
#include "meqdardehi.h"
#include "GRID2.h"

#define IMAGE_PATH "C:/Users//Asus/CLionProjects/project/map.png"

int map[17][17]={0};

int main(){
    int x , y ;
    printf("please inter Height and Width:");
    scanf("%d %d", &x , &y);
    maqar();
    rosta();
    masdod();

    InitWindow(0,0,"MAP");
   Texture2D background= LoadTexture(IMAGE_PATH);
   Texture2D Maqar = LoadTexture("C:/Users/Asus/CLionProjects/project/Maqar.png");
   Texture2D Roosta = LoadTexture("C:/Users/Asus/CLionProjects/project/vilage .png");
   Texture2D Masdood = LoadTexture("C:/Users/Asus/CLionProjects/project/Masdood.png");
    SetTargetFPS(60);
    while(!WindowShouldClose()){

        BeginDrawing();
        DrawTexture(background, 0, 0, WHITE);
        grid( x , y );
        for (int i = 0 ; i < 17 ; i++){
            for (int j = 0; j < 17 ; ++j) {
                float offsetX = (WINDOW_WIDTH - x * 68)/2.0;
                float offsetY = (WINDOW_HEIGHT - y * 68)/2.0;
                if(map[i][j]=='c'){
                    DrawTexture(Maqar,offsetX + i  * 68, offsetY + j * 68,WHITE);
                }
                if(map[i][j]=='v'){
                    DrawTexture(Roosta,offsetX + i  * 68, offsetY + j * 68,WHITE);
                }
                if(map[i][j]=='x'){
                    DrawTexture(Masdood,offsetX + i  * 68, offsetY + j * 68,WHITE);
                }
                

            }


        }


    EndDrawing();}
    CloseWindow();
    return 0;}


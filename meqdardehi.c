//
.
//
#include "stdio.h"
#include "meqdardehi.h"

//defining map as a extern int to be known in all functions

extern int map[17][17] ;


//receiving number of maqars and each one's location

void maqar(){

    int maqarnum ;
    printf(" please inter maqar's number:");
    scanf( "%d" , &maqarnum );
    int x , y ;

    for ( int i = 1 ; i <= maqarnum  ;i++ ){
        printf( " please inter x , y Maqar %d: ", i );
        scanf("%d %d", &x , &y );

        // placing the symbol c for each maqar in the map

       map[x][y] = 'c' ;

    }
}

//receiving number of Roostas and each one's location

void rosta(){
    int RoostaNum ;
    printf( " please inter Roosta's number :" );
    scanf("%d", &RoostaNum );
    int x , y ;

    for ( int i = 0; i < RoostaNum ; ++i ) {
        printf(" please inter x , y Roosta %d : ", i + 1 );
        scanf("%d %d", &x , &y );

        //making sure that the MAP[x][y] is empty

        if (map[x][y] != 'c') {

            // placing the symbol v for each Roosta in the map
            map[x][y] = 'v';
        }
        else i--;
    }
}

//receiving number of Masdood and each one's location

void masdod() {

    int x, y;
    int MasdodNum;
    printf("please inter Masdod's number :");
    scanf("%d", &MasdodNum);

    for (int i = 0; i < MasdodNum; ++i) {
        printf(" please inter x , y Masdod %d ", i + 1);
        scanf("%d %d", &x, &y);

        //making sure that the MAP[x][y] is empty

        if (map[x][y] != 'c' && map[x][y] != 'v') {

            // placing the symbol x for each Masdood in the map

            map[x][y] = 'x';
        }
        else i--;
    }
}
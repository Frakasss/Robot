#include <SPI.h>
#include <Gamebuino.h>
Gamebuino gb;


//Sprites
extern const byte PROGMEM gamelogo[];
extern const byte PROGMEM playerSprite[4][10];
extern const byte PROGMEM background[1][18];
extern const byte PROGMEM landscape[10][14];
extern const byte PROGMEM ennemy01[4][12];
extern const byte PROGMEM ennemy02[];
extern const byte PROGMEM ennemy02b[2][3];
extern const byte PROGMEM ennemy03[6][10];
extern const byte PROGMEM ennemy04[];
extern const byte PROGMEM ennemy04b[2][10];
extern const byte PROGMEM ennemy05[];
extern const byte PROGMEM ennemy05b[];

//Sounds
extern const byte soundfx[6][8];

//Struct
typedef struct{
  byte x_screen;
  byte y_screen;
  int  x_world;
  byte jumpStatus;
  byte fall;
  byte pos;
  char dir;
  byte eyes;
  byte life;
} Player;

typedef struct{
  byte x_landscape;
  byte y_landscape;
  byte type_landscape;
} LandscapePlan;

typedef struct{
  int x;
  byte y;
  byte counter;
  int x_min;
  int x_max;
  byte type;
  byte life;
  byte dir;
} Ennemy;

//Global Variables
int levelLength;
byte runningLevel;
byte for_x;
byte for_y;
int check01;
byte check02;
byte check03;

Player player;
LandscapePlan landscapeplan[100];
Ennemy ennemies[15];

//#####################################################
//#####################################################
void setup() {
  gb.begin();
  gb.titleScreen(gamelogo);
  gb.battery.show=false;
  runningLevel = 1;
}



//#####################################################
//#####################################################
void loop() {
  if(gb.update()){ 
    //outpt_drawLandscape();
    //gb.display.setColor(WHITE);
    //gb.display.fillRect(0,0,84,48);
    //gb.display.setColor(BLACK);

    /* original order 
    level_drawLandscape();
    fnctn_checkbuttons();
    player_draw();
    ennemy_draw();
    ennemy_move();
    
    player_checkJump();
    if(player.jumpStatus<4){
      player_checkVerticalPos();
    }
    
    level_drawBackground();
     */

    switch(runningLevel%2){
      case 1:
        level_drawIntro();
        player_goButton();
      break;


      case 0:
        level_drawLandscape();
        player_checkJump();
        if(player.jumpStatus<4){
          player_checkVerticalPos();
        }    
        fnctn_checkbuttons();
        gb.display.setColor(WHITE);
        gb.display.fillRect(0,0,84,48);
        gb.display.setColor(BLACK);
        //fnctn_checkbuttons();
        level_drawLandscape();
        player_draw();
        ennemy_draw();
        player_checkEnnemyCollision();
        player_checkHoleDeath();
        player_checkLevelEnd();
        ennemy_move();
        level_drawBackground();
      break;
    }
  }
}

//#####################################################
//#####################################################
void Init(){
    player_Init();
    init_map();
    ennemy_init();
    switch(runningLevel){
      case 2: levelLength = 967; break;
    }
}


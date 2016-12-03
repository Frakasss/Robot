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
extern const byte PROGMEM ennemy06[];
extern const byte PROGMEM ennemy07[];
extern const byte PROGMEM ennemyBossHead[];
extern const byte PROGMEM ennemyBossBody[];
extern const byte PROGMEM ennemyBossFeet[];
extern const byte PROGMEM heart[];
extern const byte PROGMEM boom[2][24];

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
  byte lives;
  byte life;
  byte cpt;
  int score;
} Player;

typedef struct{
  byte y_screen;
  int  x_world;
  byte dir;
} Bullet;


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
  byte anim;
} Ennemy;

//Global Variables
int levelLength;
byte runningLevel;
byte for_x;
byte for_y;
int check01;
byte check02;
byte check03;
byte tileNumber;
byte ennemiesNumber;

Player player;
Bullet bullet[3];
LandscapePlan landscapeplan[100];
Ennemy ennemies[15];

//#####################################################
//#####################################################
void setup() {
  gb.begin();
  gb.titleScreen(gamelogo);
  gb.battery.show=false;
  runningLevel = 0;
  player.lives=5;
  player.life=6;
  player.score = 0;
}



//#####################################################
//#####################################################
void loop() {
  if(gb.update()){ 
    switch(runningLevel%4){
    case 0:
        level_drawIntro();
        player_goButton();
    break;

    case 1:
        level_drawLandscape();
        player_checkJump();
        if(player.jumpStatus<4){
          player_checkVerticalPos();
        }    
        fnctn_checkbuttons();
        gb.display.clear();
        level_drawLandscape();
        player_draw();
        ennemy_draw();
        player_checkEnnemyCollision();
        player_checkDeath();
        player_checkLevelEnd();
        ennemy_move();
        bullet_move();
        bullet_draw();
        player_drawHud();
        level_drawBackground();
    break;

    case 2:
      drawBossArena();
      player_draw();
      ennemy_draw();
      player_checkVerticalPos();
      if(ennemies[0].x>ennemies[0].x_min){ennemy_move();}
      else{
        if(levelLength<48){levelLength=levelLength+1;}
        else{Init("Next");}
      }
    break;     

    case 3:
      drawBossArena();
      player_checkJump();
      if(player.jumpStatus<4){
        player_checkVerticalPos();
      }    
      fnctn_checkbuttons();
      gb.display.clear();
      drawBossArena();
      player_draw();
      ennemy_draw();
      player_checkEnnemyCollision();
      ennemy_move();
      bullet_move();
      bullet_draw();
      player_drawHud();     
    break;     
    }
  }
}

//#####################################################
//#####################################################
void Init(String tmp){
    if(tmp=="Next"){runningLevel = runningLevel +1;}
    if(tmp=="Prev"){runningLevel = runningLevel -1; player.lives = player.lives-1; player.life = 6;}
    if(runningLevel%4==1){player_Init();}
    else{player.x_world=0;player.pos=0;}
    bullet_Init();
    map_Init();
    ennemy_init();
    switch(runningLevel){
      case 1:  levelLength = 1100; tileNumber = 43;  ennemiesNumber=7; break;
      case 2:  levelLength = 0; ennemiesNumber=1; break;
      case 5:  levelLength = 967;  tileNumber = 88;  ennemiesNumber=13; break;
      case 6:  levelLength = 0; ennemiesNumber=1; break;
      case 9:  levelLength = 967;  tileNumber = 88;  ennemiesNumber=13; break;
      case 10: levelLength = 0; ennemiesNumber=1; break;
      case 13: levelLength = 967;  tileNumber = 88;  ennemiesNumber=13; break;
      case 14: levelLength = 0; ennemiesNumber=1; break;
      case 17: levelLength = 967;  tileNumber = 88;  ennemiesNumber=13; break;
      case 18: levelLength = 0; ennemiesNumber=1; break;      
    }
}


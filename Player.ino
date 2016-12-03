//##################################################################
//##################################################################
void player_Init(){
  player.x_screen=30;
  player.y_screen=30;
  player.x_world=0;
  player.jumpStatus=0;
  player.fall=0; // gere la vitesse de chute
  player.pos=0; //0:debout arret //1:debout position1 //2:debout position2 //3: accroupi
  player.dir=1;
  //player.lives=5;
  //player.life=9;
  player.cpt=0;
}

//##################################################################
//##################################################################
void player_goButton(){
  if(gb.buttons.pressed(BTN_B)){Init("Next");}
}

//##################################################################
//##################################################################
void player_setAnimation(){
  if(player.pos!=3){  
    if(gb.buttons.pressed(BTN_B)){
      player.pos=0;
    }
  
    if(gb.buttons.repeat(BTN_RIGHT,0) || gb.buttons.repeat(BTN_LEFT,0)){
      if(player.pos==2){player.pos=1;}
      else{player.pos=2;}
    }
  }

  //player.eyes = (player.eyes+1)%80;
}

//##################################################################
//##################################################################
void fnctn_checkbuttons() {
  player_setAnimation();
  if(gb.buttons.pressed(BTN_C)){gb.titleScreen();}
  if(player.cpt<15){
    if(gb.buttons.repeat(BTN_DOWN,0)){
      player.pos=3;
    }else{
      if(player.pos==3){
        if(gb.display.getPixel(player.x_screen,player.y_screen)==1 || gb.display.getPixel(player.x_screen+4,player.y_screen)==1){}
        else{player.pos=0;}
    }
    }
    
    if(gb.buttons.pressed(BTN_B)){
      if(player.pos!=3){
        if(player.jumpStatus==0){
          player_jump();
          sound_play(5);
        }
      }
    }
  
    if(gb.buttons.repeat(BTN_RIGHT,0)){
        if(player.dir==0){
          player.dir=1;
        }else{
          if(player.pos==3){player_move(1,2);}
          else{player_move(2,2);}
        }
    }else if(gb.buttons.repeat(BTN_LEFT,0)){
        if(player.dir==1){
          player.dir=0;
        }else{
          if(player.pos==3){player_move(1,0);}
          else{player_move(2,0);}
        }
    }else{
      if(player.pos!=3){player.pos=0;}
    }

    if(gb.buttons.pressed(BTN_A)){
      fnctn_setBullet();   
    }
    
  }else{
    if(player.dir == 1){player_move(1,2);}else{player_move(1,0);}
  }
}


//##################################################################
//##################################################################
void player_jump(){
  if(gb.display.getPixel(player.x_screen  ,player.y_screen-1)==0 && gb.display.getPixel(player.x_screen+4,player.y_screen-1)==0){player.jumpStatus = 5;}
  if(player.jumpStatus==5 && gb.display.getPixel(player.x_screen  ,player.y_screen-2)==0 && gb.display.getPixel(player.x_screen+4,player.y_screen-2)==0){player.jumpStatus = 6;} 
  
  if(player.jumpStatus==6 && gb.display.getPixel(player.x_screen  ,player.y_screen-4)==0 && gb.display.getPixel(player.x_screen+4,player.y_screen-4)==0 
  && gb.display.getPixel(player.x_screen  ,player.y_screen-3)==0 && gb.display.getPixel(player.x_screen+4,player.y_screen-3)==0){player.jumpStatus = 7;}

  if(player.jumpStatus==7 && gb.display.getPixel(player.x_screen  ,player.y_screen-6)==0 && gb.display.getPixel(player.x_screen+4,player.y_screen-6)==0 
  && gb.display.getPixel(player.x_screen  ,player.y_screen-5)==0 && gb.display.getPixel(player.x_screen+4,player.y_screen-5)==0){player.jumpStatus = 8;}
}

//##################################################################
//##################################################################
void player_move(byte dist,byte dir){
  check01=0;
  check02=0;
  check03=0;
  
  //check player.pos
  if(player.pos==3){check01=3;}
  
  //check player.jumpStatus && player.fall
  if(player.jumpStatus>4){
    switch (player.jumpStatus){
      case 8: check01=check01-6;  break;
      case 7: check01=check01-4;  break;
      case 6: check01=check01-2;  break;
      case 5: check01=check01-1;  break;
    }
  }else{
    //check03=player.fall;
  }

  //position player
  if(dir == 2 && player.x_screen<30){check02 = 0;} //OK
  if(dir == 0 && player.x_world>1){check02 = 1;}   //OK
  
  if(dir == 2 && player.x_screen>=30 && player.x_world+30 < levelLength-44){check02 = 1;} //OK
  if(dir == 0 && player.x_screen>=32 && player.x_world+32 < levelLength-44){check02 = 1;} //OK44
  
  if(dir == 2 && player.x_world+30 >= levelLength-50){check02=2;}//50
  if(dir == 0 && player.x_screen>30){check02=0;}//30
  
  if(dir == 0 && player.x_world>levelLength-110){check02=0;}

  //check if player can move to dir
  for_y = 0;
  if(player.y_screen+1+check01>0 and player.y_screen+1+check01<60){for_y=player.y_screen+1+check01;}
  if(player.y_screen+8+player.fall>0 and player.y_screen+8+player.fall<60){
    for(for_x=for_y;for_x<player.y_screen+8;for_x++){
     if(gb.display.getPixel(player.x_screen + (dist*(dir-1)) + (dir*2) - (dir-1), for_x)==1){check03=1;}
     if(gb.display.getPixel(player.x_screen + (dist*(dir-1)) + (dir*2), for_x)==1){check03=1;}
    }
  } 
  
  if(check03 == 0
  && player.x_screen+(dist*(dir-1))>=0 
  && player.x_world<levelLength)   
  {
    switch(check02){
      case 0: player.x_screen = player.x_screen + dist*(dir-1); break;
      case 1: player.x_world = player.x_world + dist*(dir-1); break;
      case 2: player.x_screen = player.x_screen + dist*(dir-1); break;
    }

  }else{
    //if player is not able to move 2 pixels, try 1
    if(dist==2){player_move(1,dir);}
  }
}


//##################################################################
//##################################################################
void player_checkEnnemyCollision(){
  if(player.cpt>0){player.cpt = player.cpt - 1;}
  //gb.collideRectRect(x1, y1, w1, h1, x2, y2, w2, h2);
  
  if(player.cpt<5){
    for(for_x=0;for_x<ennemiesNumber;for_x++){
      if(ennemies[for_x].life>0){
        byte tmp = 0;
        if(player.pos==3){tmp=3;}
        
        switch(ennemies[for_x].type){
          //larve
          case 0:
            if(gb.collideRectRect(player.x_screen+1, player.y_screen+1+tmp,3,6, ennemies[for_x].x-player.x_world+2, ennemies[for_x].y+1,7,4)){
              player_jump();
              if(player.cpt==0){player.life = player.life - 1;}
              player.cpt = 20; 
              if(player.x_screen<ennemies[for_x].x-player.x_world+6){
                player.dir = 0; player_move(2,0);
              }else{
                player.dir = 1; player_move(2,2);
              }
            }
          break;
          
          //ufo
          case 1:
            if(gb.collideRectRect(player.x_screen+1, player.y_screen+1+tmp,3,6, ennemies[for_x].x-player.x_world+1, ennemies[for_x].y+1,5,5)){
              player_jump();
              if(player.cpt==0){player.life = player.life - 1;}
              player.cpt = 20;
              if(ennemies[for_x].dir==0){
                player.dir = 0; player_move(2,0);
              }else{
                player.dir = 1; player_move(2,2);
              }  
            }          
          break;

          //robot2
          case 2:
            if(gb.collideRectRect(player.x_screen+1, player.y_screen+1+tmp,3,6, ennemies[for_x].x-player.x_world+1, ennemies[for_x].y+1,3,5)){
              player_jump();
              if(player.dir == 1){player.dir = 0; player_move(2,0);}else{player.dir = 1; player_move(2,2);}
              if(player.cpt==0){player.life = player.life - 1;}
              player.cpt = 20;  
            }           
          break;
          
          //rocket ##############
          case 3:
            if(gb.collideRectRect(player.x_screen+1, player.y_screen+1+tmp,3,6, ennemies[for_x].x-player.x_world+1, ennemies[for_x].y+1,5,5)){
              player_jump();
              if(player.cpt==0){player.life = player.life - 1;}
              player.cpt = 20;
              if(ennemies[for_x].dir==0){
                player.dir = 0; player_move(2,0);
              }else{
                player.dir = 1; player_move(2,2);
              }  
            }
          break;
          
          //tesla tour ################
          case 4:
            if(gb.collideRectRect(player.x_screen+1, player.y_screen+1+tmp,3,6, ennemies[for_x].x-player.x_world+1, ennemies[for_x].y+1,3,2)){
              player_jump();
              if(player.cpt==0){player.life = player.life - 1;}
              player.cpt = 20;
              if(ennemies[for_x].dir==0){
                player.dir = 0; player_move(2,0);
              }else{
                player.dir = 1; player_move(2,2);
              }  
            }
          break;
  
          //jumper #############
          case 5:
            if(gb.collideRectRect(player.x_screen+1, player.y_screen+1+tmp,3,6, ennemies[for_x].x-player.x_world+1, ennemies[for_x].y+1,5,6)){
              player_jump();
              if(player.cpt==0){player.life = player.life - 1;}
              player.cpt = 20;
              if(ennemies[for_x].dir==0){
                player.dir = 0; player_move(2,0);
              }else{
                player.dir = 1; player_move(2,2);
              }  
            }
          break;

          //ghost #############
          case 6:
            if(gb.collideRectRect(player.x_screen+1, player.y_screen+1+tmp,3,6, ennemies[for_x].x-player.x_world+1, ennemies[for_x].y+1,3,4)){
              player_jump();
              if(player.cpt==0){player.life = player.life - 1;}
              player.cpt = 20;
              if(ennemies[for_x].dir==0){
                player.dir = 0; player_move(2,0);
              }else{
                player.dir = 1; player_move(2,2);
              }  
            }
          break;

          //Boss #############
          case 10:
            if(   gb.collideRectRect(player.x_screen+1, player.y_screen+1+tmp,3,6, ennemies[for_x].x-player.x_world+1,ennemies[for_x].y+3,10,11)
               or gb.collideRectRect(player.x_screen+2, player.y_screen+1+tmp,3,6, ennemies[for_x].x-player.x_world+0,ennemies[for_x].y+14,12,11)
               or gb.collideRectRect(player.x_screen+2, player.y_screen+1+tmp,3,6, ennemies[for_x].x-player.x_world-1,ennemies[for_x].y+25,14,7)){
              player_jump();
              if(player.cpt==0){player.life = player.life - 1;}
              player.cpt = 20;
              if(ennemies[for_x].dir==0){
                player.dir = 0; player_move(2,0);
              }else{
                player.dir = 1; player_move(2,2);
              }  
            }
          break;

          
        }
      }else{
        if(ennemies[for_x].counter>0){
          ennemies[for_x].counter = ennemies[for_x].counter-1;
        }
      }
    }
  } 
}

//##################################################################
//##################################################################
void  player_checkDeath(){
  if((player.y_screen>48 && player.y_screen<100) or (player.life==0)){
    Init("Prev");
  }
}
//##################################################################
//##################################################################
void player_checkLevelEnd(){
  if(player.x_screen+player.x_world>levelLength-54){
    Init("Next");
  }
}


//##################################################################
//##################################################################
void player_checkJump(){
  switch(player.jumpStatus){
    case 8: player.y_screen=player.y_screen-6; break;
    
    case 7: 
    if(gb.display.getPixel(player.x_screen  ,player.y_screen-4)==0 && gb.display.getPixel(player.x_screen+4,player.y_screen-4)==0 && gb.display.getPixel(player.x_screen  ,player.y_screen-3)==0 && gb.display.getPixel(player.x_screen+4,player.y_screen-3)==0){
      player.y_screen=player.y_screen-4; 
    }else{
      player.jumpStatus=6;
    }
    break;
        
    case 6: 
    if(gb.display.getPixel(player.x_screen  ,player.y_screen-2)==0 && gb.display.getPixel(player.x_screen+4,player.y_screen-2)==0){ 
      player.y_screen=player.y_screen-2; 
    }else{
      player.jumpStatus = 5;
    }
    break;
    
    case 5: 
    if(gb.display.getPixel(player.x_screen  ,player.y_screen-1)==0 && gb.display.getPixel(player.x_screen+4,player.y_screen-1)==0){ 
      player.y_screen=player.y_screen-1; 
    }else{
      player.jumpStatus = 4;
    }
    break;
  }
  if(player.jumpStatus>1){player.jumpStatus=player.jumpStatus-1;}
}





//##################################################################
//##################################################################
void player_checkVerticalPos(){
  //verification haut
  if(player.fall==0 && player.pos==3 && gb.display.getPixel(player.x_screen+2  ,player.y_screen+7)==1){player.y_screen=player.y_screen-1;}
  
  if(gb.display.getPixel(player.x_screen ,player.y_screen+8)==0 && gb.display.getPixel(player.x_screen+4,player.y_screen+8)==0){
    player.y_screen=player.y_screen+1;
    if(player.fall<4){player.fall=player.fall + 1;}
    for(for_x=0; for_x<player.fall;for_x++){
      if(gb.display.getPixel(player.x_screen ,player.y_screen+8)==0 && gb.display.getPixel(player.x_screen+4,player.y_screen+8)==0){
        player.y_screen=player.y_screen+1;
      }
    }
  }else{
    player.fall = 0;
    player.jumpStatus = 0; //avoid the player to jump again until he hit the ground
  }
}


//##################################################################
//##################################################################
void player_drawHud(){
  gb.display.cursorX = 6;
  gb.display.print("S");
  gb.display.print(player.score);
  
  gb.display.drawBitmap(35,0,heart);
  gb.display.drawRect(42,0,14,5);
  gb.display.fillRect(43,1,player.life*2,3);
  
  gb.display.drawBitmap(69,-3,playerSprite[3]);
  gb.display.cursorX = 75;
  gb.display.print(player.lives);

}

//##################################################################
//##################################################################
void player_draw(){

  if(player.cpt%2 == 0){
    switch(player.dir){
      case 0:    gb.display.drawBitmap(player.x_screen   ,player.y_screen,playerSprite[player.pos],NOROT, FLIPH);    break;
      case 1:    gb.display.drawBitmap(player.x_screen   ,player.y_screen,playerSprite[player.pos],NOROT,NOFLIP);    break;
    }   
  }
  //if(player.eyes==0 ||player.eyes==1 || player.eyes==40 || player.eyes==41 || player.eyes==45 || player.eyes==46 || player.eyes==90 || player.eyes==91){gb.display.drawFastHLine(player.x_screen+1,player.y_screen+2+(player.pos),3);}
  
}

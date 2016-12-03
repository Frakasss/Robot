//##################################################################
//##################################################################
void bullet_Init(){
  bullet[0].y_screen=0; bullet[0].x_world=0; bullet[0].dir=10;
  bullet[1].y_screen=0; bullet[1].x_world=0; bullet[1].dir=10;
  bullet[2].y_screen=0; bullet[2].x_world=0; bullet[2].dir=10;
}

//##################################################################
//##################################################################
void fnctn_setBullet(){
  if(player.pos==3){for_y=5;}
  else{for_y=2;}
  
  if(bullet[0].dir==10){
    bullet[0].y_screen=player.y_screen+for_y; 
    bullet[0].x_world=player.x_world+player.x_screen+(3*player.dir); 
    bullet[0].dir=player.dir+player.dir;}
  else{
    if(bullet[1].dir==10){
      bullet[1].y_screen=player.y_screen+for_y; 
      bullet[1].x_world=player.x_world+player.x_screen+(3*player.dir); 
      bullet[1].dir=player.dir+player.dir;}
    else{
      if(bullet[2].dir==10){
        bullet[2].y_screen=player.y_screen+for_y; 
        bullet[2].x_world=player.x_world+player.x_screen+(3*player.dir); 
        bullet[2].dir=player.dir+player.dir;}  
    }
  }
} 



//##################################################################
//##################################################################
void bullet_move(){
  for(for_x=0; for_x<3;for_x++){
    if(bullet[for_x].dir!=10){
      bullet[for_x].x_world = bullet[for_x].x_world+(3*(bullet[for_x].dir-1)); 

      //check out of screen
      if(bullet[for_x].x_world-player.x_world<0 or bullet[for_x].x_world-player.x_world>84){bullet[for_x].dir = 10;}

      //check collision
      if(gb.display.getPixel(bullet[for_x].x_world-player.x_world,bullet[for_x].y_screen) or gb.display.getPixel(bullet[for_x].x_world-player.x_world+1,bullet[for_x].y_screen)){
        bullet_EnnemyCollision(for_x);
        bullet[for_x].dir = 10;
      }
    }
  }
}

//##################################################################
//##################################################################
void bullet_EnnemyCollision(byte tmp){
  for(for_y=0;for_y<ennemiesNumber;for_y++){
    if(ennemies[for_y].life>0 and ennemies[for_y].anim==0){
      
      switch(ennemies[for_y].type){
        //larve
        case 0: 
          if(gb.collideRectRect(bullet[tmp].x_world, bullet[tmp].y_screen,2,2, ennemies[for_y].x, ennemies[for_y].y,11,5)){
            ennemies[for_y].life = ennemies[for_y].life-1;
            ennemies[for_y].anim = 10;
            if(ennemies[for_y].life==0){player.score = player.score+25;}
          }
        break;

        //ufo
        case 1: 
          if(gb.collideRectRect(bullet[tmp].x_world, bullet[tmp].y_screen,2,2, ennemies[for_y].x, ennemies[for_y].y,7,5)){
            ennemies[for_y].life = ennemies[for_y].life-1;
            ennemies[for_y].anim = 10;
            if(ennemies[for_y].life==0){player.score = player.score+50;}
          }
        break;

        //robot
        case 2: 
          if(gb.collideRectRect(bullet[tmp].x_world, bullet[tmp].y_screen,2,2, ennemies[for_y].x, ennemies[for_y].y,5,8)){
            ennemies[for_y].life = ennemies[for_y].life-1;
            ennemies[for_y].anim = 10;
            if(ennemies[for_y].life==0){player.score = player.score+30;}
          }          
        break;

        //rocket
        case 3: 
          if(gb.collideRectRect(bullet[tmp].x_world, bullet[tmp].y_screen,2,2, ennemies[for_y].x-1, ennemies[for_y].y,9,7)){
            ennemies[for_y].life = ennemies[for_y].life-1;
            ennemies[for_y].anim = 10;
            if(ennemies[for_y].life==0){player.score = player.score+30;}
          }          
        break;

        //tesla
        case 4: 
          if(gb.collideRectRect(bullet[tmp].x_world, bullet[tmp].y_screen,2,2, ennemies[for_y].x_min, ennemies[for_y].x_max,5,9)){
            ennemies[for_y].life = ennemies[for_y].life-1;
            ennemies[for_y].anim = 10;
            if(ennemies[for_y].life==0){player.score = player.score+25;}
          }          
        break;

        //jumper
        case 5: 
          if(gb.collideRectRect(bullet[tmp].x_world, bullet[tmp].y_screen,2,2, ennemies[for_y].x, ennemies[for_y].y,7,7)){
            ennemies[for_y].life = ennemies[for_y].life-1;
            ennemies[for_y].anim = 10;
            if(ennemies[for_y].life==0){player.score = player.score+50;}
          }          
        break;

        //ghost
        case 6: 
          if(gb.collideRectRect(bullet[tmp].x_world, bullet[tmp].y_screen,2,2, ennemies[for_y].x, ennemies[for_y].y,5,7)){
            if(bullet[tmp].dir==0){ennemies[for_y].x=ennemies[for_y].x-5;}
            else{ennemies[for_y].x=ennemies[for_y].x+5;}
            ennemies[for_y].anim = 10;
          }          
        break;
        
        case 10: 
          if(gb.collideRectRect(bullet[tmp].x_world, bullet[tmp].y_screen,2,2, ennemies[for_y].x-2+(abs((ennemies[for_y].dir-2)/2)*13),ennemies[for_y].y+14,5,12)){
            ennemies[for_y].life = ennemies[for_y].life-1;
            ennemies[for_y].anim = 20;
            if(ennemies[for_y].life==0){player.score = player.score+150;}
          }          
        break;
      }
    }
  }
}

//##################################################################
//##################################################################
void bullet_draw(){
  for(for_x=0; for_x<3;for_x++){
    if(bullet[for_x].dir!=10){
      gb.display.fillRect(bullet[for_x].x_world-player.x_world,bullet[for_x].y_screen,2,2);
    }
  }
}

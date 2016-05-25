//##################################################################
//##################################################################
void ennemy_init() {
  switch(runningLevel){
    case 1:
      ennemies[0].x = 100;  ennemies[0].y = 41;  ennemies[0].counter = 0;  ennemies[0].x_min = 21;  ennemies[0].x_max = 100;  ennemies[0].type = 0;  ennemies[0].life = 2; ennemies[0].dir = 0;
      ennemies[1].x = 120;  ennemies[1].y = 20;  ennemies[1].counter = 2;  ennemies[1].x_min = 21;  ennemies[1].x_max = 100;  ennemies[1].type = 1;  ennemies[1].life = 2; ennemies[1].dir = 0;
      ennemies[2].x = 106;  ennemies[2].y = 36;  ennemies[2].counter = 3;  ennemies[2].x_min = 21;  ennemies[2].x_max = 100;  ennemies[2].type = 2;  ennemies[2].life = 2; ennemies[2].dir = 0;
    break;
  }
}

//##################################################################
//##################################################################
void ennemy_move(){
  for(for_x=0;for_x<3;for_x++){
    if(ennemies[for_x].life>0){
      
      switch(ennemies[for_x].type){
        //larve
        case 0:
          ennemies[for_x].counter = (ennemies[for_x].counter+1)%16;
          if((ennemies[for_x].counter/4==1 || ennemies[for_x].counter/4==2) && ennemies[for_x].counter%4==0){ennemies[for_x].x = ennemies[for_x].x+ennemies[for_x].dir-1;}
        break;
        //ufo
        case 1:
          ennemies[for_x].counter = (ennemies[for_x].counter+1)%12;
          ennemies[for_x].x = ennemies[for_x].x+ennemies[for_x].dir-1;
          if(ennemies[for_x].counter<6){ennemies[for_x].y = ennemies[for_x].y+1;}
          if(ennemies[for_x].counter>=6){ennemies[for_x].y = ennemies[for_x].y-1;}
        break;
        //robot2
        case 2:
          ennemies[for_x].counter = (ennemies[for_x].counter+1)%6;
          if((ennemies[for_x].counter==3 || ennemies[for_x].counter==4)){ennemies[for_x].x = ennemies[for_x].x+ennemies[for_x].dir-1;}
        break;
        //rocket ##############
        case 3:

        break;
        //tesla tour ################
        case 4:

        break;
      }
      if(ennemies[for_x].x<ennemies[for_x].x_min+40){ennemies[for_x].dir=2;}
      if(ennemies[for_x].x>ennemies[for_x].x_max+40){ennemies[for_x].dir=0;}
    }else{
      if(ennemies[for_x].counter>0){
        /* ########## Death animation*/
        ennemies[for_x].counter = ennemies[for_x].counter-1;
      }
    }
  }
}

//##################################################################
//##################################################################
void ennemy_draw(){
  for(for_x=0;for_x<3;for_x++){
    if(ennemies[for_x].life>0 && ennemies[for_x].x<player.x_world + 90 && ennemies[for_x].x > player.x_world - 10){
      if(ennemies[for_x].dir==0){
        switch(ennemies[for_x].type){
          case 0 : 
          gb.display.drawBitmap(ennemies[for_x].x-player.x_world,ennemies[for_x].y,ennemy01[ennemies[for_x].counter/4]); 
          break;
          
          case 1 : 
          gb.display.drawBitmap(ennemies[for_x].x-player.x_world,ennemies[for_x].y,ennemy02); 
          gb.display.drawBitmap(ennemies[for_x].x-player.x_world,ennemies[for_x].y+6,ennemy02b[ennemies[for_x].counter%2]); 
          break;   
          
          case 2 : 
          gb.display.drawBitmap(ennemies[for_x].x-player.x_world-2,ennemies[for_x].y,ennemy03[ennemies[for_x].counter],NOROT,FLIPH);
          break;   
        }
      }else{
        switch(ennemies[for_x].type){
          case 0 : 
          gb.display.drawBitmap(ennemies[for_x].x-player.x_world,ennemies[for_x].y,ennemy01[ennemies[for_x].counter/4],NOROT,FLIPH); 
          break;
          
          case 1 : 
          gb.display.drawBitmap(ennemies[for_x].x-player.x_world,ennemies[for_x].y,ennemy02); 
          gb.display.drawBitmap(ennemies[for_x].x-player.x_world,ennemies[for_x].y+6,ennemy02b[ennemies[for_x].counter%2]);
          break;
          
          case 2 : 
          gb.display.drawBitmap(ennemies[for_x].x-player.x_world+2,ennemies[for_x].y,ennemy03[ennemies[for_x].counter]); 
          break;     
        }
      }
    }
  }
}

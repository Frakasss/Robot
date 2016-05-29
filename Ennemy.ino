//##################################################################
//##################################################################
void ennemy_init() {
  switch(runningLevel){
    case 2:
      ennemies[0].x = 20;   ennemies[0].y = 39;  ennemies[0].counter = 0;  ennemies[0].x_min = 20;   ennemies[0].x_max = 96;   ennemies[0].type = 0;  ennemies[0].life = 1;  ennemies[0].dir = 2;
      ennemies[1].x = 108;  ennemies[1].y = 16;  ennemies[1].counter = 0;  ennemies[1].x_min = 108;  ennemies[1].x_max = 160;  ennemies[1].type = 1;  ennemies[1].life = 1;  ennemies[1].dir = 2;
      ennemies[2].x = 168;  ennemies[2].y = 39;  ennemies[2].counter = 0;  ennemies[2].x_min = 168;  ennemies[2].x_max = 228;  ennemies[2].type = 0;  ennemies[2].life = 1;  ennemies[2].dir = 2;
      ennemies[3].x = 240;  ennemies[3].y = 27;  ennemies[3].counter = 0;  ennemies[3].x_min = 240;  ennemies[3].x_max = 292;  ennemies[3].type = 0;  ennemies[3].life = 1;  ennemies[3].dir = 2;
      ennemies[4].x = 352;  ennemies[4].y = 16;  ennemies[4].counter = 0;  ennemies[4].x_min = 352;  ennemies[4].x_max = 408;  ennemies[4].type = 1;  ennemies[4].life = 1;  ennemies[4].dir = 2;
      ennemies[5].x = 376;  ennemies[5].y = 36;  ennemies[5].counter = 0;  ennemies[5].x_min = 376;  ennemies[5].x_max = 432;  ennemies[5].type = 2;  ennemies[5].life = 1;  ennemies[5].dir = 2;
      ennemies[6].x = 424;  ennemies[6].y = 24;  ennemies[6].counter = 0;  ennemies[6].x_min = 424;  ennemies[6].x_max = 468;  ennemies[6].type = 2;  ennemies[6].life = 1;  ennemies[6].dir = 2;
      ennemies[7].x = 432;  ennemies[7].y = 36;  ennemies[7].counter = 0;  ennemies[7].x_min = 432;  ennemies[7].x_max = 488;  ennemies[7].type = 2;  ennemies[7].life = 1;  ennemies[7].dir = 2;
      ennemies[8].x = 436;  ennemies[8].y = 12;  ennemies[8].counter = 0;  ennemies[8].x_min = 436;  ennemies[8].x_max = 456;  ennemies[8].type = 2;  ennemies[8].life = 1;  ennemies[8].dir = 2;
      ennemies[9].x = 516;  ennemies[9].y = 39;  ennemies[9].counter = 0;  ennemies[9].x_min = 516;  ennemies[9].x_max = 552;  ennemies[9].type = 0;  ennemies[9].life = 1;  ennemies[9].dir = 2;
      ennemies[10].x = 600; ennemies[10].y = 27; ennemies[10].counter = 0; ennemies[10].x_min = 600; ennemies[10].x_max = 648; ennemies[10].type = 0; ennemies[10].life = 1; ennemies[10].dir = 2;
      ennemies[11].x = 680; ennemies[11].y = 12; ennemies[11].counter = 0; ennemies[11].x_min = 680; ennemies[11].x_max = 784; ennemies[11].type = 1; ennemies[11].life = 1; ennemies[11].dir = 2;
      ennemies[12].x = 748; ennemies[12].y = 36; ennemies[12].counter = 0; ennemies[12].x_min = 748; ennemies[12].x_max = 784; ennemies[12].type = 2; ennemies[12].life = 1; ennemies[12].dir = 2;
    break;
  }
}

//##################################################################
//##################################################################
void ennemy_move(){
  for(for_x=0;for_x<13;for_x++){
    if(ennemies[for_x].life>0){
      
      switch(ennemies[for_x].type){
        //larve
        case 0:
          ennemies[for_x].counter = (ennemies[for_x].counter+1)%8;
          if((ennemies[for_x].counter/2==1 || ennemies[for_x].counter/2==2) && ennemies[for_x].counter%2==0){ennemies[for_x].x = ennemies[for_x].x+ennemies[for_x].dir-1;}
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
      if(ennemies[for_x].x<ennemies[for_x].x_min){ennemies[for_x].dir=2;}
      if(ennemies[for_x].x>ennemies[for_x].x_max){ennemies[for_x].dir=0;}
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
  for(for_x=0;for_x<13;for_x++){
    if(ennemies[for_x].life>0 && ennemies[for_x].x<player.x_world + 90 && ennemies[for_x].x > player.x_world - 10){
      if(ennemies[for_x].dir==0){
        switch(ennemies[for_x].type){
          case 0 : 
          gb.display.drawBitmap(ennemies[for_x].x-player.x_world,ennemies[for_x].y,ennemy01[ennemies[for_x].counter/2]); 
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
          gb.display.drawBitmap(ennemies[for_x].x-player.x_world,ennemies[for_x].y,ennemy01[ennemies[for_x].counter/2],NOROT,FLIPH); 
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

//##################################################################
//##################################################################
void ennemy_init() {
  switch(runningLevel){
    case 1:
      ennemies[0].x = 80;   ennemies[0].y = 39;  ennemies[0].counter = 0;  ennemies[0].x_min = 20;   ennemies[0].x_max = 90;   ennemies[0].type = 0;  ennemies[0].life = 3;  ennemies[0].dir = 2; ennemies[0].anim = 0; //Larva
      ennemies[1].x = 100;  ennemies[1].y = 16;  ennemies[1].counter = 0;  ennemies[1].x_min = 100;  ennemies[1].x_max = 170;  ennemies[1].type = 1;  ennemies[1].life = 1;  ennemies[1].dir = 2; ennemies[1].anim = 0; //Ufo
      ennemies[2].x = 180;  ennemies[2].y = 36;  ennemies[2].counter = 0;  ennemies[2].x_min = 180;  ennemies[2].x_max = 230;  ennemies[2].type = 2;  ennemies[2].life = 1;  ennemies[2].dir = 2; ennemies[2].anim = 0; //Robot
      ennemies[3].x = 240;  ennemies[3].y = 26;  ennemies[3].counter = 0;  ennemies[3].x_min = 10;   ennemies[3].x_max = 60;   ennemies[3].type = 3;  ennemies[3].life = 1;  ennemies[3].dir = 0; ennemies[3].anim = 0; //Rocket
      ennemies[4].x = 290;  ennemies[4].y = 36;  ennemies[4].counter = 0;  ennemies[4].x_min = 300;  ennemies[4].x_max = 35;   ennemies[4].type = 4;  ennemies[4].life = 1;  ennemies[4].dir = 0; ennemies[4].anim = 0; //Tesla
      ennemies[5].x = 460;  ennemies[5].y = 37;  ennemies[5].counter = 0;  ennemies[5].x_min = 460;  ennemies[5].x_max = 530;  ennemies[5].type = 5;  ennemies[5].life = 1;  ennemies[5].dir = 0; ennemies[5].anim = 0; //Jumper
      ennemies[6].x = 540;  ennemies[6].y = 16;  ennemies[6].counter = 0;  ennemies[6].x_min = 540;  ennemies[6].x_max = 610;  ennemies[6].type = 6;  ennemies[6].life = 1;  ennemies[6].dir = 0; ennemies[6].anim = 0; //Ghost
    break;
    case 2:
      ennemies[0].x = 100; ennemies[0].y = 12;  ennemies[0].counter = 0;  ennemies[0].x_min = 65; ennemies[0].x_max = 48; ennemies[0].type = 10; ennemies[0].life = 5;  ennemies[0].dir = 0; ennemies[0].anim = 0; //Boss
    break;
    case 3:
      ennemies[0].x = 65; ennemies[0].y = 12;  ennemies[0].counter = 0;  ennemies[0].x_min = 13; ennemies[0].x_max = 62; ennemies[0].type = 10; ennemies[0].life = 5;  ennemies[0].dir = 0; ennemies[0].anim = 0; //Boss
    break;
    
    case 5:
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
    case 6:
      ennemies[0].x = 100; ennemies[0].y = 12;  ennemies[0].counter = 0;  ennemies[0].x_min = 65; ennemies[0].x_max = 48; ennemies[0].type = 10; ennemies[0].life = 1;  ennemies[0].dir = 0; ennemies[0].anim = 0; //Boss
    break;
    case 7:
      ennemies[0].x = 65; ennemies[0].y = 12;  ennemies[0].counter = 0;  ennemies[0].x_min = 13; ennemies[0].x_max = 62; ennemies[0].type = 10; ennemies[0].life = 5;  ennemies[0].dir = 0; ennemies[0].anim = 0; //Boss
    break;
    
    case 9:
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
    case 10:
      ennemies[0].x = 100; ennemies[0].y = 12;  ennemies[0].counter = 0;  ennemies[0].x_min = 65; ennemies[0].x_max = 48; ennemies[0].type = 10; ennemies[0].life = 1;  ennemies[0].dir = 0; ennemies[0].anim = 0; //Boss
    break;
    case 11:
      ennemies[0].x = 65; ennemies[0].y = 12;  ennemies[0].counter = 0;  ennemies[0].x_min = 13; ennemies[0].x_max = 62; ennemies[0].type = 10; ennemies[0].life = 5;  ennemies[0].dir = 0; ennemies[0].anim = 0; //Boss
    break;
    
    case 13:
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
    case 14:
      ennemies[0].x = 100; ennemies[0].y = 12;  ennemies[0].counter = 0;  ennemies[0].x_min = 65; ennemies[0].x_max = 48; ennemies[0].type = 10; ennemies[0].life = 1;  ennemies[0].dir = 0; ennemies[0].anim = 0; //Boss
    break;
    case 15:
      ennemies[0].x = 65; ennemies[0].y = 12;  ennemies[0].counter = 0;  ennemies[0].x_min = 13; ennemies[0].x_max = 62; ennemies[0].type = 10; ennemies[0].life = 5;  ennemies[0].dir = 0; ennemies[0].anim = 0; //Boss
    break;

    case 17:
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
    case 18:
      ennemies[0].x = 100; ennemies[0].y = 12;  ennemies[0].counter = 0;  ennemies[0].x_min = 65; ennemies[0].x_max = 48; ennemies[0].type = 10; ennemies[0].life = 1;  ennemies[0].dir = 0; ennemies[0].anim = 0; //Boss
    break;
    case 19:
      ennemies[0].x = 65; ennemies[0].y = 12;  ennemies[0].counter = 0;  ennemies[0].x_min = 13; ennemies[0].x_max = 62; ennemies[0].type = 10; ennemies[0].life = 5;  ennemies[0].dir = 0; ennemies[0].anim = 0; //Boss
    break;
  }
}

//##################################################################
//##################################################################
void ennemy_move(){
  for(for_x=0;for_x<ennemiesNumber;for_x++){
    if(ennemies[for_x].life>0 and ennemies[for_x].anim==0){
      
      switch(ennemies[for_x].type){
        //larve
        case 0:
          ennemies[for_x].counter = (ennemies[for_x].counter+1)%8;
          if((ennemies[for_x].counter/2==1 || ennemies[for_x].counter/2==2) && ennemies[for_x].counter%2==0){ennemies[for_x].x = ennemies[for_x].x+ennemies[for_x].dir-1;}
          if(ennemies[for_x].x<ennemies[for_x].x_min){ennemies[for_x].dir=2;}
          if(ennemies[for_x].x>ennemies[for_x].x_max){ennemies[for_x].dir=0;}
        break;
        
        //ufo
        case 1:
          ennemies[for_x].counter = (ennemies[for_x].counter+1)%12;
          ennemies[for_x].x = ennemies[for_x].x+ennemies[for_x].dir-1;
          if(ennemies[for_x].counter<6){ennemies[for_x].y = ennemies[for_x].y+1;}
          if(ennemies[for_x].counter>=6){ennemies[for_x].y = ennemies[for_x].y-1;}
          if(ennemies[for_x].x<ennemies[for_x].x_min){ennemies[for_x].dir=2;}
          if(ennemies[for_x].x>ennemies[for_x].x_max){ennemies[for_x].dir=0;}
        break;
        
        //robot2
        case 2:
          ennemies[for_x].counter = (ennemies[for_x].counter+1)%6;
          if((ennemies[for_x].counter==3 || ennemies[for_x].counter==4)){ennemies[for_x].x = ennemies[for_x].x+ennemies[for_x].dir-1;}
          if(ennemies[for_x].x<ennemies[for_x].x_min){ennemies[for_x].dir=2;}
          if(ennemies[for_x].x>ennemies[for_x].x_max){ennemies[for_x].dir=0;}
        break;
        
        //rocket ##############
        case 3:
          ennemies[for_x].counter = (ennemies[for_x].counter+1)%3;
          ennemies[for_x].y = ennemies[for_x].y+ennemies[for_x].dir-1;
          //if(ennemies[for_x].y>ennemies[for_x].x_min and ennemies[for_x].dir==0){ennemies[for_x].y = ennemies[for_x].y+ennemies[for_x].dir-1;}
          if(ennemies[for_x].y<ennemies[for_x].x_min){ennemies[for_x].dir=2;}
          if(ennemies[for_x].y>ennemies[for_x].x_max){ennemies[for_x].dir=0;}
        break;
        
        //tesla tour ################
        case 4:
          if(ennemies[for_x].x>player.x_world+player.x_screen-30 and ennemies[for_x].x<player.x_world+player.x_screen+30){
            ennemies[for_x].counter = (ennemies[for_x].counter+1)%2;
            ennemies[for_x].x = ennemies[for_x].x+ennemies[for_x].dir-1;
          }else{
            ennemies[for_x].x=ennemies[for_x].x_min;
            if(ennemies[for_x].x_min-player.x_world>player.x_screen){ennemies[for_x].dir=0;}else{ennemies[for_x].dir=2;}
          }
        break;

        //jumper #############
        case 5:
          ennemies[for_x].counter = (ennemies[for_x].counter+1)%19;
          if(ennemies[for_x].counter>4){ennemies[for_x].x = ennemies[for_x].x+ennemies[for_x].dir-1;}

          switch(ennemies[for_x].counter){
            case 5: ennemies[for_x].y = ennemies[for_x].y-3; break;
            case 6: ennemies[for_x].y = ennemies[for_x].y-2;break;
            case 7: ennemies[for_x].y = ennemies[for_x].y-2;break;
            case 8: ennemies[for_x].y = ennemies[for_x].y-1;break;
            case 9: ennemies[for_x].y = ennemies[for_x].y-1;break;
            case 13: ennemies[for_x].y = ennemies[for_x].y+1;break;
            case 14: ennemies[for_x].y = ennemies[for_x].y+1;break;
            case 15: ennemies[for_x].y = ennemies[for_x].y+2;break;
            case 16: ennemies[for_x].y = ennemies[for_x].y+2;break;
            case 17: ennemies[for_x].y = ennemies[for_x].y+3;break;
          }
          
          if(ennemies[for_x].x<ennemies[for_x].x_min){ennemies[for_x].dir=2;}
          if(ennemies[for_x].x>ennemies[for_x].x_max){ennemies[for_x].dir=0;}
        break;

        //ghost #############
        case 6:
          ennemies[for_x].counter = (ennemies[for_x].counter+1)%6;
          //and player.dir==0
          if(ennemies[for_x].x-player.x_world>player.x_screen  and ennemies[for_x].x-player.x_world-player.x_screen>10 and ennemies[for_x].x-player.x_world-player.x_screen<35){
            if(ennemies[for_x].y<player.y_screen){ennemies[for_x].y=ennemies[for_x].y+1;}
            if(ennemies[for_x].y>player.y_screen){ennemies[for_x].y=ennemies[for_x].y-1;}
            ennemies[for_x].x=ennemies[for_x].x-1;
          }
          // and player.dir==1
          if(ennemies[for_x].x-player.x_world<player.x_screen and player.x_screen-(ennemies[for_x].x-player.x_world)>10 and player.x_screen-(ennemies[for_x].x-player.x_world)<35){
            if(ennemies[for_x].y<player.y_screen){ennemies[for_x].y=ennemies[for_x].y+1;}
            if(ennemies[for_x].y>player.y_screen){ennemies[for_x].y=ennemies[for_x].y-1;}
            ennemies[for_x].x=ennemies[for_x].x+1;
          }          
        break;
        

        //Boss
        case 10:
          ennemies[for_x].counter = (ennemies[for_x].counter+1)%18;
          if(ennemies[for_x].counter%ennemies[for_x].life==0){
            ennemies[for_x].x = ennemies[for_x].x+ennemies[for_x].dir-1;
          }

          if(ennemies[for_x].x<ennemies[for_x].x_min){ennemies[for_x].dir=2;}
          if(ennemies[for_x].x>ennemies[for_x].x_max){ennemies[for_x].dir=0;}
        break;
      }
    }else{
      if(ennemies[for_x].anim>0){ennemies[for_x].anim = ennemies[for_x].anim-1;}
      else{
        if(ennemies[for_x].type==10){Init("Next");}
      }
    }
  }
}

//##################################################################
//##################################################################
void ennemy_draw(){
  for(for_x=0;for_x<ennemiesNumber;for_x++){
    if(ennemies[for_x].life>0){
      if(ennemies[for_x].x<player.x_world + 90 && ennemies[for_x].x > player.x_world - 10){
        if(ennemies[for_x].anim%3==0){
          switch(ennemies[for_x].type){
            //larva
            case 0 : 
              if(ennemies[for_x].dir==0){ gb.display.drawBitmap(ennemies[for_x].x-player.x_world,ennemies[for_x].y,ennemy01[ennemies[for_x].counter/2]);} 
              else{                       gb.display.drawBitmap(ennemies[for_x].x-player.x_world,ennemies[for_x].y,ennemy01[ennemies[for_x].counter/2],NOROT,FLIPH);} 
            break;

            //ufo
            case 1 : 
              gb.display.drawBitmap(ennemies[for_x].x-player.x_world,ennemies[for_x].y,ennemy02); 
              gb.display.drawBitmap(ennemies[for_x].x-player.x_world,ennemies[for_x].y+6,ennemy02b[ennemies[for_x].counter%2]); 
            break;   

            //robot
            case 2 : 
              if(ennemies[for_x].dir==0){ gb.display.drawBitmap(ennemies[for_x].x-player.x_world,  ennemies[for_x].y,ennemy03[ennemies[for_x].counter],NOROT,FLIPH);}
              else{                       gb.display.drawBitmap(ennemies[for_x].x-player.x_world,  ennemies[for_x].y,ennemy03[ennemies[for_x].counter]); }
            break;   

            //rocket
            case 3 : 
              gb.display.drawBitmap(ennemies[for_x].x-player.x_world,ennemies[for_x].y,ennemy04);
              if(ennemies[for_x].dir==0){gb.display.drawBitmap(ennemies[for_x].x-player.x_world+1,ennemies[for_x].y+7,ennemy04b[ennemies[for_x].counter%2]);}
            break; 

            //tesla
            case 4 : 
              gb.display.drawBitmap(ennemies[for_x].x_min-player.x_world,ennemies[for_x].x_max,ennemy05);
              if(ennemies[for_x].counter==0){gb.display.drawBitmap(ennemies[for_x].x-player.x_world,ennemies[for_x].y,ennemy05b);}
              else{gb.display.drawBitmap(ennemies[for_x].x-player.x_world,ennemies[for_x].y,ennemy05b,NOROT,FLIPVH);}
            break; 

            //jumper
            case 5 : 
              gb.display.drawBitmap(ennemies[for_x].x-player.x_world,ennemies[for_x].y,ennemy06);
            break; 

            //ghost
            case 6 : 
              gb.display.drawBitmap(ennemies[for_x].x-player.x_world,ennemies[for_x].y,ennemy07,NOROT,FLIPH);
              gb.display.setColor(INVERT);
              gb.display.drawFastVLine(ennemies[for_x].x-player.x_world+1+(ennemies[for_x].counter/2), ennemies[for_x].y+4, 2);
              gb.display.setColor(BLACK);
            break; 
  
            case 10 :
              if(ennemies[for_x].dir==0){
                gb.display.drawBitmap(ennemies[for_x].x-player.x_world,ennemies[for_x].y-2+(ennemies[for_x].counter/4)%4,ennemyBossHead);
                gb.display.drawBitmap(ennemies[for_x].x-player.x_world,ennemies[for_x].y+8,ennemyBossBody);
              }else{
                gb.display.drawBitmap(ennemies[for_x].x-player.x_world-3,ennemies[for_x].y-2+(ennemies[for_x].counter/4)%4,ennemyBossHead,NOROT,FLIPH);
                gb.display.drawBitmap(ennemies[for_x].x-player.x_world-3,ennemies[for_x].y+8,ennemyBossBody,NOROT,FLIPH);
              }

              gb.display.drawBitmap(ennemies[for_x].x-player.x_world-2,ennemies[for_x].y+26,ennemyBossFeet,ROTCCW,NOFLIP);
              gb.display.drawBitmap(ennemies[for_x].x-player.x_world+9,ennemies[for_x].y+26,ennemyBossFeet,ROTCCW,FLIPH);
            break;
          }
        }
      }
    }else{
      if(ennemies[for_x].x<player.x_world + 90 && ennemies[for_x].x > player.x_world - 10){
        switch(ennemies[for_x].type){
            case 0 :
              if(ennemies[for_x].anim>0){gb.display.drawBitmap(ennemies[for_x].x-player.x_world-(2*(ennemies[for_x].anim%2)),ennemies[for_x].y-(2*(ennemies[for_x].anim%2)),boom[ennemies[for_x].anim%2]); }
            break;
           
            case 1 : 
              if(ennemies[for_x].anim>0){gb.display.drawBitmap(ennemies[for_x].x-player.x_world-(2*(ennemies[for_x].anim%2)),ennemies[for_x].y-(2*(ennemies[for_x].anim%2)),boom[ennemies[for_x].anim%2]); }
            break;
            
            case 2 : 
              if(ennemies[for_x].anim>0){gb.display.drawBitmap(ennemies[for_x].x-player.x_world-(2*(ennemies[for_x].anim%2)),ennemies[for_x].y-(2*(ennemies[for_x].anim%2)),boom[ennemies[for_x].anim%2]); }
            break;   
  
            case 3 : 
              if(ennemies[for_x].anim>0){gb.display.drawBitmap(ennemies[for_x].x-player.x_world-(2*(ennemies[for_x].anim%2)),ennemies[for_x].y-(2*(ennemies[for_x].anim%2)),boom[ennemies[for_x].anim%2]); }
            break; 
  
            case 4 : 
              if(ennemies[for_x].anim>0){gb.display.drawBitmap(ennemies[for_x].x_min-player.x_world-(2*(ennemies[for_x].anim%2)),ennemies[for_x].x_max-(2*(ennemies[for_x].anim%2)),boom[ennemies[for_x].anim%2]); }
            break;
  
            case 5 : 
              if(ennemies[for_x].anim>0){gb.display.drawBitmap(ennemies[for_x].x-player.x_world-(2*(ennemies[for_x].anim%2)),ennemies[for_x].y-(2*(ennemies[for_x].anim%2)),boom[ennemies[for_x].anim%2]); }
            break; 
            
            case 6 : 
              if(ennemies[for_x].anim>0){gb.display.drawBitmap(ennemies[for_x].x-player.x_world-(2*(ennemies[for_x].anim%2)),ennemies[for_x].y-(2*(ennemies[for_x].anim%2)),boom[ennemies[for_x].anim%2]); }
            break; 
  
            case 10 :
              if(ennemies[for_x].anim>0){
                gb.display.drawBitmap(ennemies[for_x].x-player.x_world-(2*(ennemies[for_x].anim%2))+2,ennemies[for_x].y-(2*(ennemies[for_x].anim%2)),boom[ennemies[for_x].anim%2]); 
                gb.display.drawBitmap(ennemies[for_x].x-player.x_world-(2*(ennemies[for_x].anim%2))+2,ennemies[for_x].y-(2*(ennemies[for_x].anim%2))+10,boom[ennemies[for_x].anim%2]); 
                gb.display.drawBitmap(ennemies[for_x].x-player.x_world-(2*(ennemies[for_x].anim%2))-4,ennemies[for_x].y-(2*(ennemies[for_x].anim%2))+22,boom[ennemies[for_x].anim%2]); 
                gb.display.drawBitmap(ennemies[for_x].x-player.x_world-(2*(ennemies[for_x].anim%2))+8,ennemies[for_x].y-(2*(ennemies[for_x].anim%2))+22,boom[ennemies[for_x].anim%2]);                 
              }
            break;     
          }
      }
    }
  }
}

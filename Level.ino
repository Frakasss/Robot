//##################################################################
//##################################################################
void level_drawLandscape(){
  //gb.display.cursorX = 0;
  //gb.display.cursorY = 0;
  //gb.display.print(player.pos);
  
  for(for_x=0;for_x<79;for_x++){
    if((landscapeplan[for_x].x_landscape*4)-player.x_world>-25 && (landscapeplan[for_x].x_landscape*4)-player.x_world<92){
      switch(landscapeplan[for_x].type_landscape){
        case 10 :
        gb.display.drawLine((landscapeplan[for_x].x_landscape*4)-player.x_world,landscapeplan[for_x].y_landscape*4,(landscapeplan[for_x].x_landscape*4)-player.x_world,48);
        break;

        case 11 :
        gb.display.drawLine((landscapeplan[for_x].x_landscape*4)-player.x_world-1,landscapeplan[for_x].y_landscape*4,(landscapeplan[for_x].x_landscape*4)-player.x_world-1,48);
        break;

        default:
        gb.display.drawBitmap((landscapeplan[for_x].x_landscape*4)-player.x_world,landscapeplan[for_x].y_landscape*4,landscape[landscapeplan[for_x].type_landscape],NOROT, NOFLIP);
        break;
      }
    }
  }
}

//##################################################################
//##################################################################
void level_drawBackground(){
  byte spaceBetweenTrees = 50;
  for(for_x=0;for_x<levelLength/spaceBetweenTrees;for_x++){
    if(for_x*50-player.x_world>-16 && for_x*50-player.x_world<92)
    gb.display.drawBitmap(for_x*50-player.x_world,2,background[0]);
  }
}

//##################################################################
//##################################################################
void init_map(){
  switch (runningLevel){
    case 1 :
      landscapeplan[0].x_landscape = 0;   landscapeplan[0].y_landscape = 11;   landscapeplan[0].type_landscape = 0;
      landscapeplan[1].x_landscape = 3;   landscapeplan[1].y_landscape = 9;   landscapeplan[1].type_landscape = 5;
      landscapeplan[2].x_landscape = 6;   landscapeplan[2].y_landscape = 11;   landscapeplan[2].type_landscape = 0;
      landscapeplan[3].x_landscape = 12;   landscapeplan[3].y_landscape = 11;   landscapeplan[3].type_landscape = 0;
      landscapeplan[4].x_landscape = 18;   landscapeplan[4].y_landscape = 11;   landscapeplan[4].type_landscape = 0;
      landscapeplan[5].x_landscape = 24;   landscapeplan[5].y_landscape = 11;   landscapeplan[5].type_landscape = 0;
      landscapeplan[6].x_landscape = 27;   landscapeplan[6].y_landscape = 9;   landscapeplan[6].type_landscape = 5;
      landscapeplan[7].x_landscape = 30;   landscapeplan[7].y_landscape = 11;   landscapeplan[7].type_landscape = 0;
      landscapeplan[8].x_landscape = 34;   landscapeplan[8].y_landscape = 8;   landscapeplan[8].type_landscape = 5;
      landscapeplan[9].x_landscape = 34;   landscapeplan[9].y_landscape = 9;   landscapeplan[9].type_landscape = 5;
      landscapeplan[10].x_landscape = 36;   landscapeplan[10].y_landscape = 11;   landscapeplan[10].type_landscape = 0;
      landscapeplan[11].x_landscape = 40;   landscapeplan[11].y_landscape = 9;   landscapeplan[11].type_landscape = 5;
      landscapeplan[12].x_landscape = 42;   landscapeplan[12].y_landscape = 11;   landscapeplan[12].type_landscape = 0;
      landscapeplan[13].x_landscape = 48;   landscapeplan[13].y_landscape = 11;   landscapeplan[13].type_landscape = 0;
      landscapeplan[14].x_landscape = 54;   landscapeplan[14].y_landscape = 11;   landscapeplan[14].type_landscape = 0;
      landscapeplan[15].x_landscape = 60;   landscapeplan[15].y_landscape = 8;   landscapeplan[15].type_landscape = 0;
      landscapeplan[16].x_landscape = 60;   landscapeplan[16].y_landscape = 8;   landscapeplan[16].type_landscape = 10;
      landscapeplan[17].x_landscape = 66;   landscapeplan[17].y_landscape = 8;   landscapeplan[17].type_landscape = 0;
      landscapeplan[18].x_landscape = 72;   landscapeplan[18].y_landscape = 8;   landscapeplan[18].type_landscape = 0;
      landscapeplan[19].x_landscape = 76;   landscapeplan[19].y_landscape = 5;   landscapeplan[19].type_landscape = 5;
      landscapeplan[20].x_landscape = 76;   landscapeplan[20].y_landscape = 6;   landscapeplan[20].type_landscape = 5;
      landscapeplan[21].x_landscape = 78;   landscapeplan[21].y_landscape = 8;   landscapeplan[21].type_landscape = 11;
      landscapeplan[22].x_landscape = 78;   landscapeplan[22].y_landscape = 11;   landscapeplan[22].type_landscape = 0;
      landscapeplan[23].x_landscape = 81;   landscapeplan[23].y_landscape = 4;   landscapeplan[23].type_landscape = 1;
      landscapeplan[24].x_landscape = 87;   landscapeplan[24].y_landscape = 11;   landscapeplan[24].type_landscape = 0;
      landscapeplan[25].x_landscape = 92;   landscapeplan[25].y_landscape = 9;   landscapeplan[25].type_landscape = 5;
      landscapeplan[26].x_landscape = 93;   landscapeplan[26].y_landscape = 11;   landscapeplan[26].type_landscape = 0;
      landscapeplan[27].x_landscape = 99;   landscapeplan[27].y_landscape = 11;   landscapeplan[27].type_landscape = 0;
      landscapeplan[28].x_landscape = 105;   landscapeplan[28].y_landscape = 11;   landscapeplan[28].type_landscape = 0;
      landscapeplan[29].x_landscape = 106;   landscapeplan[29].y_landscape = 8;   landscapeplan[29].type_landscape = 1;
      landscapeplan[30].x_landscape = 109;   landscapeplan[30].y_landscape = 5;   landscapeplan[30].type_landscape = 1;
      landscapeplan[31].x_landscape = 111;   landscapeplan[31].y_landscape = 11;   landscapeplan[31].type_landscape = 0;
      landscapeplan[32].x_landscape = 112;   landscapeplan[32].y_landscape = 8;   landscapeplan[32].type_landscape = 1;
      landscapeplan[33].x_landscape = 117;   landscapeplan[33].y_landscape = 11;   landscapeplan[33].type_landscape = 0;
      landscapeplan[34].x_landscape = 126;   landscapeplan[34].y_landscape = 11;   landscapeplan[34].type_landscape = 0;
      landscapeplan[35].x_landscape = 127;   landscapeplan[35].y_landscape = 9;   landscapeplan[35].type_landscape = 5;
      landscapeplan[36].x_landscape = 132;   landscapeplan[36].y_landscape = 11;   landscapeplan[36].type_landscape = 0;
      landscapeplan[37].x_landscape = 138;   landscapeplan[37].y_landscape = 11;   landscapeplan[37].type_landscape = 0;
      landscapeplan[38].x_landscape = 141;   landscapeplan[38].y_landscape = 9;   landscapeplan[38].type_landscape = 5;
      landscapeplan[39].x_landscape = 144;   landscapeplan[39].y_landscape = 11;   landscapeplan[39].type_landscape = 0;
      landscapeplan[40].x_landscape = 145;   landscapeplan[40].y_landscape = 7;   landscapeplan[40].type_landscape = 5;
      landscapeplan[41].x_landscape = 145;   landscapeplan[41].y_landscape = 8;   landscapeplan[41].type_landscape = 5;
      landscapeplan[42].x_landscape = 150;   landscapeplan[42].y_landscape = 8;   landscapeplan[42].type_landscape = 0;
      landscapeplan[43].x_landscape = 150;   landscapeplan[43].y_landscape = 8;   landscapeplan[43].type_landscape = 10;
      landscapeplan[44].x_landscape = 155;   landscapeplan[44].y_landscape = 4;   landscapeplan[44].type_landscape = 1;
      landscapeplan[45].x_landscape = 156;   landscapeplan[45].y_landscape = 8;   landscapeplan[45].type_landscape = 0;
      landscapeplan[46].x_landscape = 162;   landscapeplan[46].y_landscape = 8;   landscapeplan[46].type_landscape = 0;
      landscapeplan[47].x_landscape = 166;   landscapeplan[47].y_landscape = 5;   landscapeplan[47].type_landscape = 5;
      landscapeplan[48].x_landscape = 166;   landscapeplan[48].y_landscape = 6;   landscapeplan[48].type_landscape = 5;
      landscapeplan[49].x_landscape = 168;   landscapeplan[49].y_landscape = 8;   landscapeplan[49].type_landscape = 11;
      landscapeplan[50].x_landscape = 168;   landscapeplan[50].y_landscape = 11;   landscapeplan[50].type_landscape = 0;
      landscapeplan[51].x_landscape = 173;   landscapeplan[51].y_landscape = 9;   landscapeplan[51].type_landscape = 5;
      landscapeplan[52].x_landscape = 174;   landscapeplan[52].y_landscape = 11;   landscapeplan[52].type_landscape = 0;
      landscapeplan[53].x_landscape = 179;   landscapeplan[53].y_landscape = 8;   landscapeplan[53].type_landscape = 5;
      landscapeplan[54].x_landscape = 179;   landscapeplan[54].y_landscape = 9;   landscapeplan[54].type_landscape = 5;
      landscapeplan[55].x_landscape = 180;   landscapeplan[55].y_landscape = 11;   landscapeplan[55].type_landscape = 0;
      landscapeplan[56].x_landscape = 185;   landscapeplan[56].y_landscape = 9;   landscapeplan[56].type_landscape = 5;
      landscapeplan[57].x_landscape = 186;   landscapeplan[57].y_landscape = 11;   landscapeplan[57].type_landscape = 0;
      landscapeplan[58].x_landscape = 192;   landscapeplan[58].y_landscape = 11;   landscapeplan[58].type_landscape = 0;
      landscapeplan[59].x_landscape = 197;   landscapeplan[59].y_landscape = 9;   landscapeplan[59].type_landscape = 6;
      landscapeplan[60].x_landscape = 198;   landscapeplan[60].y_landscape = 11;   landscapeplan[60].type_landscape = 0;
      landscapeplan[61].x_landscape = 199;   landscapeplan[61].y_landscape = 7;   landscapeplan[61].type_landscape = 6;
      landscapeplan[62].x_landscape = 199;   landscapeplan[62].y_landscape = 9;   landscapeplan[62].type_landscape = 5;
      landscapeplan[63].x_landscape = 201;   landscapeplan[63].y_landscape = 7;   landscapeplan[63].type_landscape = 5;
      landscapeplan[64].x_landscape = 202;   landscapeplan[64].y_landscape = 4;   landscapeplan[64].type_landscape = 6;
      landscapeplan[65].x_landscape = 203;   landscapeplan[65].y_landscape = 7;   landscapeplan[65].type_landscape = 5;
      landscapeplan[66].x_landscape = 204;   landscapeplan[66].y_landscape = 2;   landscapeplan[66].type_landscape = 6;
      landscapeplan[67].x_landscape = 204;   landscapeplan[67].y_landscape = 4;   landscapeplan[67].type_landscape = 5;
      landscapeplan[68].x_landscape = 204;   landscapeplan[68].y_landscape = 11;   landscapeplan[68].type_landscape = 0;
      landscapeplan[69].x_landscape = 204;   landscapeplan[69].y_landscape = 7;   landscapeplan[69].type_landscape = 5;
      landscapeplan[70].x_landscape = 206;   landscapeplan[70].y_landscape = 2;   landscapeplan[70].type_landscape = 7;
      landscapeplan[71].x_landscape = 206;   landscapeplan[71].y_landscape = 4;   landscapeplan[71].type_landscape = 5;
      landscapeplan[72].x_landscape = 208;   landscapeplan[72].y_landscape = 4;   landscapeplan[72].type_landscape = 7;
      landscapeplan[73].x_landscape = 208;   landscapeplan[73].y_landscape = 6;   landscapeplan[73].type_landscape = 5;
      landscapeplan[74].x_landscape = 208;   landscapeplan[74].y_landscape = 8;   landscapeplan[74].type_landscape = 5;
      landscapeplan[75].x_landscape = 210;   landscapeplan[75].y_landscape = 6;   landscapeplan[75].type_landscape = 7;
      landscapeplan[76].x_landscape = 210;   landscapeplan[76].y_landscape = 8;   landscapeplan[76].type_landscape = 5;
      landscapeplan[77].x_landscape = 210;   landscapeplan[77].y_landscape = 11;   landscapeplan[77].type_landscape = 0;
      landscapeplan[78].x_landscape = 212;   landscapeplan[78].y_landscape = 8;   landscapeplan[78].type_landscape = 7;
    break;


    
  }
}

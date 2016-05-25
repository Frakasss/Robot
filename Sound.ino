//##################################################################
//##################################################################
const byte soundfx[6][8] = {
  {1,17,53,0,7,0,2,3}, // 0 = thrust (channel 0)          fire
  {1,17,53,0,7,0,10,3}, // 0 = thrust (channel 0)          fire
  {1,26,41,1,1,3,7,20}, // 1 = crash (channel 1)          boom
  {0,0,42,1,1,2,7,20}, // 2 = landing success (channel 1) gameover
  {0,54,0,0,0,0,7,1},  // 3 = fuel low (channel 1)        
  {0,0,65,1,1,1,7,5}, // 4 = pick up fuel (channel 1)
};


//##################################################################
//##################################################################
void sound_play(byte fxno) {
  gb.sound.command(0,soundfx[fxno][6],0,0); // set volume
  gb.sound.command(1,soundfx[fxno][0],0,0); // set waveform
  gb.sound.command(2,soundfx[fxno][5],-soundfx[fxno][4],0); // set volume slide
  gb.sound.command(3,soundfx[fxno][3],soundfx[fxno][2]-58,0); // set pitch slide
  gb.sound.playNote(soundfx[fxno][1],soundfx[fxno][7],0); // play note
}

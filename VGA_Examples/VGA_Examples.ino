#include <VGAX.h>
// Define the size of our sprites
#define IMG_WIDTH 16
#define IMG_BWIDTH 4
#define IMG_HEIGHT 16
#define IMG_SPRITES_CNT 4


// These are images
//image generated from 2BITIMAGE - by Sandro Maffiodo

//data size=1408 bytes
const unsigned char img_data[IMG_SPRITES_CNT][IMG_HEIGHT][IMG_BWIDTH] PROGMEM = {
  { {  0b101010,   0b01010101,   0b00110110,   0b11111111, },
    {  0b101010,   0b01010101,   0b00110110,   0b11111111, },
    {  0b101010,   0b01010101,   0b00110110,   0b11111111, },
    {  0b101010,   0b01010101,   0b00110110,   0b11111111, },
    {  0b101010,   0b01010101,   0b00110110,   0b11111111, },
    {  0b101010,   0b01010101,   0b00110110,   0b11111111, },
    {  0b101010,   0b01010101,   0b00110110,   0b11111111, },
    {  0b101010,   0b01010101,   0b00110110,   0b11111111, },
    {  0b101010,   0b01010101,   0b00110110,   0b11111111, },
    {  0b101010,   0b01010101,   0b00110110,   0b11111111, },
    {  0b101010,   0b01010101,   0b00110110,   0b11111111, },
    {  0b101010,   0b01010101,   0b00110110,   0b11111111, },
    {  0b101010,   0b01010101,   0b00110110,   0b11111111, },
    {  0b101010,   0b01010101,   0b00110110,   0b11111111, },
    {  0b101010,   0b01010101,   0b00110110,   0b11111111, },
    {  0b101010,   0b01010101,   0b00110110,   0b11111111, },
  },
  { {   0,   0,   0,   0, },
    {   0,   0,   0,   0, },
    {   0,  42, 168,   0, },
    {   0, 170, 170, 128, },
    {   0,  15,  48,   0, },
    {   3, 195,  63, 192, },
    {   3, 195, 207, 192, },
    {   0,  63,   0,   0, },
    {   0,  15, 252,   0, },
    {   0, 162, 162,   0, },
    {   0, 168, 168, 128, },
    {   3, 232,  20, 192, },
    {   3, 192,  20,   0, },
    {   0,   0,   2,   0, },
    {   0, 168,  42,   0, },
    {   0,   0,   0,   0, },
  },
  { {   0,   0,   0,   0, }, {   0,  42, 160,   0, }, {   0, 170, 170, 128, }, {   0,  15,  48,   0, }, {   3, 195,  63, 192, }, {   3, 195, 207, 192, }, {   0,  63,   0,   0, }, {   0,  15, 252,   0, }, {   2, 162, 160,   0, }, {  62, 168, 168, 128, }, {  63, 161,  84, 176, }, {  15,   5,  84,  48, }, {   0,   1,  82, 128, }, {  10,   0,  10, 128, }, {  10, 160,  42,   0, }, {   0,   0,   0,   0, }, },
  { {   0,   0,   0,   0, }, {   0,  42, 160,   0, }, {   0, 170, 170,   0, }, {   0,  15,  48,  32, }, {   3, 195,  63, 224, }, {   3, 195, 207, 224, }, {   0,  63,   0,   0, }, {   0,  15, 255, 128, }, {   2, 162, 162,   0, }, {   0, 168, 168,   0, }, {  63,  40,  85,  40, }, {  63,  33,  84, 168, }, {   0,   4,   0, 160, }, {  42,  16,   0, 160, }, {  40,   0,   0,   0, }, {   0,   0,   0,   0, }, }
};

// These are image masks, which msut be white and black the same size as the image
//data size=512 bytes
const unsigned char img_mask_data[IMG_SPRITES_CNT][IMG_HEIGHT][IMG_BWIDTH] PROGMEM = {
  { { 255, 255, 255, 255, }, { 255, 192,   3, 255, }, { 255,   0,   0,  63, }, { 252,   0,   0,  15, }, { 252,   0,   0,  63, }, { 240,   0,   0,  15, }, { 240,   0,   0,  15, }, { 252,   0,   0,  63, }, { 255,   0,   0, 255, }, { 252,   0,   3, 255, }, { 240,   0,   0, 255, }, { 240,   0,   0, 255, }, { 252,   0,   0, 255, }, { 252,   0,   3, 255, }, { 255,   0,   3, 255, }, { 255,   0,   3, 255, }, },
  { { 255, 255, 255, 255, }, { 255, 192,   3, 255, }, { 255,   0,   0,  63, }, { 252,   0,   0,  15, }, { 252,   0,   0,  63, }, { 240,   0,   0,  15, }, { 240,   0,   0,  15, }, { 252,   0,   0,  63, }, { 255,   0,   0, 255, }, { 252,   0,   0,  63, }, { 252,   0,   0,  15, }, { 240,   0,   0,  15, }, { 240,   0,   0,  63, }, { 252,   0,   0,  63, }, { 252,   0,   0,  63, }, { 255,   3, 192, 255, }, },
  { { 255, 192,  15, 255, }, { 255,   0,   0,  63, }, { 252,   0,   0,  15, }, { 252,   0,   0,  63, }, { 240,   0,   0,  15, }, { 240,   0,   0,  15, }, { 252,   0,   0,  63, }, { 252,   0,   0, 255, }, { 192,   0,   0,  63, }, {   0,   0,   0,  15, }, {   0,   0,   0,   3, }, { 192,   0,   0,   3, }, { 240,   0,   0,  15, }, { 192,   0,   0,  15, }, { 192,   3,   0,  63, }, { 240,   3, 192, 255, }, },
  { { 255, 192,  15,   3, }, { 255,   0,   0,   0, }, { 252,   0,   0,   0, }, { 252,   0,   0,   3, }, { 240,   0,   0,   3, }, { 240,   0,   0,   3, }, { 252,   0,   0,  15, }, { 252,   0,   0,  15, }, { 240,   0,   0,  63, }, { 192,   0,   0,   3, }, {   0,   0,   0,   0, }, {   0,   0,   0,   0, }, { 192,   0,   0,   3, }, {   0,   0,   0,   3, }, {   0,   0,  63,  15, }, { 195,   3, 255, 255, }, }
};
VGAX vga;
int cnt = 0;
void setup() {
  pinMode(4, INPUT_PULLUP);
  vga.begin();
  //vga.clear(11);
  //vga.blit((byte*)(img_mario_data[cnt]), IMG_MARIO_WIDTH, IMG_MARIO_HEIGHT, VGAX_WIDTH/2, VGAX_HEIGHT/2);
  //vga.blitwmask((byte*)(img_mario_data[cnt]),(byte*)(img_mariomask_data[cnt]), IMG_MARIO_WIDTH, IMG_MARIO_HEIGHT, VGAX_WIDTH/2, VGAX_HEIGHT/2);
  //vga.putpixel(50,50, 3);
  //vga.putpixel4(0, VGAX_HEIGHT / 2, 0b01101100);
  //String of 4 binary indicators, where 01, 10, 11, and 11 are color combos with 0b in front to indicate it is binary
}
void loop() {
  //drawRandomSprite();
  //drawSprite(0, VGAX_WIDTH/2, VGAX_HEIGHT/2, true);
  //digitalTest();
  randomNumbers();
}

void digitalTest(){ 
    // Digital read messes up the timing but maybe its a feature!
  if (!digitalRead(4)){
    static unsigned cnt;
    cnt++;
    vga.putpixel(rand() % VGAX_WIDTH, rand() % VGAX_HEIGHT, cnt % 3);
  } else { 
    vga.clear(random(255));
  }
}

void randomNumbers(){ 
    static unsigned cnt;
    cnt++;
    vga.putpixel(rand() % VGAX_WIDTH, rand() % VGAX_HEIGHT, cnt % 3);
}

void drawSprite(int whichSprite,int x, int y, bool mask){ 
  if(mask){ 
    vga.blitwmask((byte*)(img_data[whichSprite]),(byte*)(img_mask_data[whichSprite]), IMG_WIDTH, IMG_HEIGHT, x, y);
  } else { 
    vga.blit((byte*)(img_data[whichSprite]), IMG_WIDTH, IMG_HEIGHT, x, y);
  }
}

void drawRandomSprite(){
  int cnt = int(random(4));
   vga.blitwmask((byte*)(img_data[cnt]),(byte*)(img_mask_data[cnt]), IMG_WIDTH, IMG_HEIGHT, rand()%VGAX_WIDTH, rand()%VGAX_HEIGHT);
}

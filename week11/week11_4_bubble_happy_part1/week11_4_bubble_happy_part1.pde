//week11_4_bubble_happy_part1
PImage happy1, happy2, happy3;
PImage[] happy = new PImage[200];//java 的陣列宣告,有200格
int N = 0;
int[]x = new int[200];
int[]y = new int[200];
void setup(){ 
  size(600,675);
  happy1 = loadImage("happy1.jpg");
  happy2 = loadImage("happy2.jpg");
}
void mousePressed(){
  happy[N] = happy2.get( mouseX-30, mouseY-30, 60, 60);
  x[N] = mouseX;
  y[N] = mouseY;
  N++;
}
void draw(){
  background(happy1);
  for(int i=0; i<N; i++){//把每張小照片,用for迴圈畫出來
    image(happy[i], x[i]-30, y[i]-30);
  }
}
  

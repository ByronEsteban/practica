int D = 20;

void setup(){
  size(400,400);
  fill(255);
}

void drawBall(int x, int y){
  ellipse(x,y,D,D);
}

void draw(){
  drawBall(200,200);
}

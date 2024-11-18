int led[] = {17 , 2 , 15 , 12};
void up();
void down();

void setup(){
  pinMode(led[0], OUTPUT);
  pinMode(led[1], OUTPUT);
  pinMode(led[2], OUTPUT);
  pinMode(led[3], OUTPUT);
}

void loop(){
  up();
  down();
}

void up(){
  for (int i=0; i<4; i++){
    digitalWrite (led[i],LOW) ;
    delay(500);
    digitalWrite (led[i],HIGH) ;
    delay(500);
  }
}

void down(){
  for (int i =3; i>0; i--){
    digitalWrite (led[i],LOW) ;
    delay(500);
    digitalWrite (led[i],HIGH) ;
    delay(500);
  }
}
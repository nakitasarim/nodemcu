//26.08.2024 Naci KOÇ NodeMCU ESP8266 flip flop ve tek digit sayıcı
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(100);
  //Filip Flop setup
  pinMode(13, OUTPUT);//d7
  digitalWrite(13, LOW);
  pinMode(15, OUTPUT);//D8
  digitalWrite(15, LOW);
  //7 segment display setup
  pinMode(14, OUTPUT);//D5 üst çizgi burada pozitif kutuplama var bu yüzden yakacağımız yerlere 0 gönderiyoruz.
  digitalWrite(14, LOW);//a
  pinMode(16, OUTPUT);//D0
  digitalWrite(16, LOW);//b
  pinMode(5, OUTPUT);//D1
  digitalWrite(5, LOW);//c
  pinMode(4, OUTPUT);//D2
  digitalWrite(4, LOW);//d
  pinMode(0, OUTPUT);//D3
  digitalWrite(0, LOW);//e
  pinMode(2, OUTPUT);//D4
  digitalWrite(2, LOW);//f
  pinMode(12, OUTPUT);//D6
  digitalWrite(12, LOW);//g  

}

void loop() {
  // 2 tik filip flop sonra sayma
  int i;
  for(i=1;i<3;i++){
    filipFlop();
  }
  flipFlopSondur();
  say();
}

void filipFlop(){
  //Flip-Flop
  digitalWrite(15, LOW);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  digitalWrite(15, HIGH);
  delay(500);
}

void flipFlopSondur(){
  digitalWrite(15, LOW);
  digitalWrite(13, LOW);
}

void say(){
  bos();
  bisaniye();
  sifir();
  bisaniye();
  bir();
  bisaniye();
  iki();
  bisaniye();
  uc();
  bisaniye();
  dort();
  bisaniye();
  bes();
  bisaniye();
  alti();
  bisaniye();
  yedi();
  bisaniye();
  sekiz();
  bisaniye();
  dokuz();
  bisaniye();
  bos();
}

void bisaniye(){
  delay(1000); 
}

void sifir(){
  digitalWrite(14, LOW);//a
  digitalWrite(16, LOW);//b
  digitalWrite(5, LOW);//c
  digitalWrite(4, LOW);//d
  digitalWrite(0, LOW);//e
  digitalWrite(2, LOW);//f
  digitalWrite(12, HIGH);//g 
}

void bir(){
  digitalWrite(14, HIGH);//a
  digitalWrite(16, LOW);//b
  digitalWrite(5, LOW);//c
  digitalWrite(4, HIGH);//d
  digitalWrite(0, HIGH);//e
  digitalWrite(2, HIGH);//f
  digitalWrite(12, HIGH);//g 
}

void iki(){
  digitalWrite(14, LOW);//a
  digitalWrite(16, LOW);//b
  digitalWrite(5, HIGH);//c
  digitalWrite(4, LOW);//d
  digitalWrite(0, LOW);//e
  digitalWrite(2, HIGH);//f
  digitalWrite(12, LOW);//g 
}

void uc(){
  digitalWrite(14, LOW);//a
  digitalWrite(16, LOW);//b
  digitalWrite(5, LOW);//c
  digitalWrite(4, LOW);//d
  digitalWrite(0, HIGH);//e
  digitalWrite(2, HIGH);//f
  digitalWrite(12, LOW);//g 
}

void dort(){
  digitalWrite(14, HIGH);//a
  digitalWrite(16, LOW);//b
  digitalWrite(5, LOW);//c
  digitalWrite(4, HIGH);//d
  digitalWrite(0, HIGH);//e
  digitalWrite(2, LOW);//f
  digitalWrite(12, LOW);//g 
}

void bes(){
  digitalWrite(14, LOW);//a
  digitalWrite(16, HIGH);//b
  digitalWrite(5, LOW);//c
  digitalWrite(4, LOW);//d
  digitalWrite(0, HIGH);//e
  digitalWrite(2, LOW);//f
  digitalWrite(12, LOW);//g 
}

void alti(){
  digitalWrite(14, LOW);//a
  digitalWrite(16, HIGH);//b
  digitalWrite(5, LOW);//c
  digitalWrite(4, LOW);//d
  digitalWrite(0, LOW);//e
  digitalWrite(2, LOW);//f
  digitalWrite(12, LOW);//g 
}

void yedi(){
  digitalWrite(14, LOW);//a
  digitalWrite(16, LOW);//b
  digitalWrite(5, LOW);//c
  digitalWrite(4, HIGH);//d
  digitalWrite(0, HIGH);//e
  digitalWrite(2, HIGH);//f
  digitalWrite(12, HIGH);//g 
}

void sekiz(){
  digitalWrite(14, LOW);//a
  digitalWrite(16, LOW);//b
  digitalWrite(5, LOW);//c
  digitalWrite(4, LOW);//d
  digitalWrite(0, LOW);//e
  digitalWrite(2, LOW);//f
  digitalWrite(12, LOW);//g 
}

void dokuz(){
  digitalWrite(14, LOW);//a
  digitalWrite(16, LOW);//b
  digitalWrite(5, LOW);//c
  digitalWrite(4, LOW);//d
  digitalWrite(0, HIGH);//e
  digitalWrite(2, LOW);//f
  digitalWrite(12, LOW);//g 
}

void bos(){
  digitalWrite(14, HIGH);//a
  digitalWrite(16, HIGH);//b
  digitalWrite(5, HIGH);//c
  digitalWrite(4, HIGH);//d
  digitalWrite(0, HIGH);//e
  digitalWrite(2, HIGH);//f
  digitalWrite(12, HIGH);//g 
}

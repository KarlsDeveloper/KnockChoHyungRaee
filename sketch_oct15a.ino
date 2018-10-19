/*#include <FastIO.h>
#include <I2CIO.h>
#include <LCD.h>
#include <LiquidCrystal.h>    // 텍스트 액정(liquid crystal) 표시장치를 구동
#include <LiquidCrystal_SR.h>
#include <LiquidCrystal_SR2W.h>
#include <LiquidCrystal_SR3W.h>*/         // 여기까지 LCD라이브러리, 근대 뭔가쓰잘대없이 길다???
//#include <LiquidCrystal.h>
#include <Wire.h>                       // LCD화면출력하기 
#include <LiquidCrystal_I2C.h>       // 요놈있어야 LCD동작  

//const unsigned int Tx =
//const unsigned int Rx =
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup(){
  Serial.begin(115200);    // 컴퓨터에 출력이 나옴
  licd.begin(20, 4);    // LCD종류설정
}

void loop(){
  lcd.print("Cursor ON-Blink");
  lcd.cursor();     // LCD에 커서표시
  lcd.blink();      // 커서 깜박임
  delay(3000);      // 딜레이 3초
  lcd.clear();      // 화면 모두삭제, 커서 원점(0,0)이동
  lcd.print("Cursor OFF");    // 출력
  lcd.noBlink();     // 커서깜박임 멈춤    
  lcd.noCursor();    // 화면에 커서감추기
  delay(3000);       // 딜레이 3초
  lcd.clear();       // 화면 모두삭제, 커서 원점(0,0)이동
  
  for(int i=0; i<=50; i++){    // 50번 반복
    lcd.home();      // 커서를 원점으로 이동
    lcd.print("NO: ");  
    lcd.print(i);
    delay(300);      // 딜레이 0.3초
  }
  for(int i=0; i<3; i++){      // 3번 반복
    lcd.noDisplay(); // LCD에 내용이 사라짐
    delay(500);      // 딜레이 0.5초
    lcd.display();   // LCD에 내용이 나타남
    delay(500);      // 딜레이 0.5초
  }
  for(int i=0; i<3; i++) {      // 3번 반복
    lcd.scrollDisplayRight();
    delay(500);      // 딜레이 0.5초
  }
  for(int i=0; i<3; i++){      // 3번 반복
    lcd.scrollDisplayLeft();   // LCD에 내용을 왼쪽으로 한 칸 이동
    delay(500);      // 딜레이 0.5초
  }
  lcd.clear();       // 화면 모두삭제, 커서 원점(0,0)이동
}

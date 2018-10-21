// Knock탭은 main탭이다.
#include <Keypad.h>
#include "LiquidCrystal_I2C.h"  // LCD라이브러리
#include <Wire.h>               // LCD라이브러리

LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27,16,2);  // 16 문자 및 2 라인 디스플레이의 경우 LCD 주소를 0x27로 설정하십시오.

void setup() {
  //Wire.begin();                // 화면에 나오게 하기
  lcd.begin();             // lcd.begin() 수정했습니다.
  lcd.home();                  // 홈의로보내어 초기화
  lcd.clear();                 // 액정초기화
  lcd.print("Welcome to ");  // 화면에 Hello Arduino출력
  lcd.setCursor(0,1);          // 커서설정(다음줄로 커서를 내려라)
  lcd.print("LUX Corp.");           // 화면에 Why출력
}

void loop() {
  // 메인 코드를 여기에 넣어 반복적으로 실행하십시오.:
  
  //  코드를 수정하시오.

}


/**
조대리, 4칙 연산을 할 수 있는 함수를 4개를 만들어서 함수명을(addition, subtraction, multiplication, division)이라고 하고, 
시리얼 포트 화면에서 2개의 정수를 입력 받아서, 그 결과값을 시리얼 화면에서 보여주는 코드를 만들어봐.
숙제임.
*/

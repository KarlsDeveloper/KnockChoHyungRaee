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
함수 구현 열심히 했네.
그런데, 두개의 정수를 입력 받을 때, Serial 통신 상태에서 Serial 화면상태에서 입력을 받아야 해.
왜냐하면, WiFi 또는 Bluetooth 통신에서는 Serial 을 통해서 Data를 주고 받아야 하거든
Serial.read() 를 이용해서 두개의 값을 받는 코딩을 해보길 바란다.

그리고, 이번주에 부품 주문할테니, 어느정도 코딩할 내용도 준비하길 바란다.

함수 코딩하느냐고 수고했는데, 좀더 분발하길 바래.


*/

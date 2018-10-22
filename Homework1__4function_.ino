/* 2018.10.21.일 목표: 4가지의 서로다른 함수유형을 사용한 사칙연산(+,-,*,/)
을 int, char, float각각구현 그중 int형 */
 void setup(){ 
  Serial.begin(112500);        // 컴퓨터에 데이터 전송(속도112500)
}

void loop(){
  int num3, num4, result;       // num3: 첫번째정수, num4: 두번째정수, result: 계산결과
  Explanation();                // 설명(두 개의 정~) 출력됨
  for(int i=1; i<5; i++){       // 4번 반복(각각: +,-,*,/이 출력)  
    num3=Scanf();               // num3에 입력
    num4=Scanf();               // num4에 입력
    result=Calculation(num3,num4,i);   // 계산  
    Result(result);                    // 결과 
    Serial.println();          // (가독성 향상을 위한) 띄어쓰기
//    Serial.end();             // 함수작동을 중단
    delay(1000);                // 딜레이 1초    
  } Serial.println();          // (가독성 향상을 위한) 띄어쓰기
  delay(3000);                  // 딜레이 3초
  return 0;                     // 반환
}

int Calculation(int num1, int num2, int i){  // 계산(+,-,*,/), 인자전달(O) 반환값(O)
  int total;
    if(i==1){                             // 덧샘 과정
      total = num1+num2;
      Serial.print(num1);
      Serial.print("+");
      Serial.print(num2);
      Serial.print("=");
      Serial.println(total);             
      return total;                       // total의 인자를 반환 
      }
    if(i==2){                             // 곱샘 과정
      total = num1*num2;
      Serial.print(num1);
      Serial.print("*");
      Serial.print(num2);
      Serial.print("=");
      Serial.println(total);
      return total;                       // total의 인자를 반환 
      }
    if(i==3){                             // 뺄샘 과정
      total = num1-num2;
      Serial.print(num1);
      Serial.print("-");
      Serial.print(num2);
      Serial.print("=");
      Serial.println(total);
      return total;                       // total의 인자를 반환 
      }
    if(i==4){                             // 나눗샘 과정
      total = num1/num2;
      Serial.print(num1);
      Serial.print("/");
      Serial.print(num2);
      Serial.print("=");
      Serial.println(total);
      return total;                       // total의 인자를 반환 
      }
    else{                                 // 혹시 생길지모를 오류방지용
      Serial.print("i값 오류");
    }
  }

void Result(int num) {                    // 결과, 인자전달(O) 반환값(X)
  Serial.print("값: ");
  Serial.println(num);                   // loop함수로 돌아가'result'에 전달될 인수 
}

int Scanf(){                              // 띄어쓰기, 인자전달(X) 반환값(O)
  int num5 = 5;                           // 계산할 정수
  return num5;                            // num5의 인자를 반환
}

void Explanation() {                      // 설명, 인자전달(X) 반환값(X)
  Serial.print("정수를 입력하시면 계산결과가 출력됩니다. \n");
}

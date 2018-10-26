/* 2018.10.22.월 목표: 4사칙연산(+,-,*,/) 시리얼 포트 화면에서 
 *  2개의 정수를 입력 받아서, 그 결과값을 시리얼 화면에서 보여주는 코드
 (addition, subtraction, multiplication, division)*/
void setup() {
  Serial.begin(9600);             // 시리얼 통신 속도(초당112500에선 문제가 많이생겨서 9600으로 하양시킴)
}

void loop() {
  long inputData=0;                // inputData선언겸 초기화(long 정수표현, 32비트)
  long num1=0, num2=0;           
  Serial.println("정수를 입력해 주세요. ");
  Serial.print("첫번째 입력: ");  
  while(Serial.available() == 0){}     // 시리얼통신의 통신수신된 데이터의 바이트 수를 반환, 입력이 없을때까지 동작 
 /*
 Serial.available() 시리얼이 연결 되었으면 양수 값이 넘어와서 위 조건은 거짓이 되어서 아래 구문으로 내려온다는 뜻임.
 */
 
  inputData = Serial.parseInt();       // 통신수신된 데이터의 바이트 수를 반환, inputData에 저장 
  num1 =Save(inputData);        
  Serial.println(num1);  
    
  Serial.println("두번째 숫자 입력바람(시간재한 3초)");    
  inputData=0;                         // 저장된값(num1) 초기화
  Serial.parseInt();                  // 통신수신된 값을 long 형태의 숫자값으로 바꿔서 저장
 /*
 Serial.parseInt() 는 시리얼을 통해서 입력받은 ASCII값을 정수 int형태로 바꾸는것임. long이 아님.
 */
  inputData = Serial.parseInt();      // 통신수신된 데이터의 바이트 수를 반환, inputData에 저장  
  delay(3000);                         // 딜레이 3초
  if(inputData) {                      // 만일 입력이 있다면
    num2 =Save(inputData);  
    Serial.print("두번째 입력: ");
    Serial.println(num2);      
  }
  else{ 
    Serial.println("오류, 제한시간 초과.");
  }                                             
  Addition(num1, num2);                // 덧샘함수
  Subtraction(num1, num2);             // 뺄샘함수
  Multiplication(num1, num2);          // 곱샘함수
  Division(num1, num2);                // 나눗샘함수
  Serial.println();
  delay(3000);                         // 딜레이 3초
  Serial.end();                       // 함수작동을 중단
  /*
  Serial.end()는 함수 작동을 중단하는것이 아니라, 시리얼 입력을 그만 하겠다는 뜻임. 만약 이것이 호줄 되었다면, 그 다음부터는
  시리얼 화면을 통해서 입력을 받지 못함.
  
  */
}

int Addition(int num3, int num4){      // 덧샘
  int total;
  total = num3+num4;
  Serial.print(num3);
  Serial.print("+");
  Serial.print(num4);
  Serial.print("=");
  Serial.println(total); 
  return 0;  
}
int Subtraction(int num3, int num4){    // 뺄샘
  int total;
  total = num3-num4;
  Serial.print(num3);
  Serial.print("-");
  Serial.print(num4);
  Serial.print("=");
  Serial.println(total); 
  return 0;    
}
int Multiplication(int num3, int num4){  //곱샘
  int total;
  total = num3*num4;
  Serial.print(num3);
  Serial.print("*");
  Serial.print(num4);
  Serial.print("=");
  Serial.println(total); 
  return 0;  
}
int Division(int num3, int num4){        //나눗샘
  int total;
  total = num3/num4;
  Serial.print(num3);
  Serial.print("/");
  Serial.print(num4);
  Serial.print("=");
  Serial.println(total); 
  return 0;  
}
int Save(int num5){                // num1, num2 에 인수를 입력하기 위한함수
  int total=0;
  total=num5;
  return total;
}


/*
코딩양이 길어지고, 많이 노력한 모습이 보이네.
실제로 동작이 되는지 좀 이상해.
내 머리속에서는 값이 안나올것 같은데...
그리고, 나눗셈에서 num4에 0이 입력되면 문제가 발생되는 치명적인 코드가 들어있음.
이것을 예외처리해야함.
조대리 수고했어. 좀 더 노력하고, 이젠 블루투스 연결해서 동작하는 코드를 작성하길 바람.
*/

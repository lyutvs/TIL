# JAVA 입/출력

* **01. Scanner를 사용하여 사용자에게 값을 입력 받는다**

  ```java
  public` `class` `ScannerTest {
    ``public` `static` `void` `main(String[] args)
    ``{
      ``Scanner sc = ``new` `Scanner(System.in);  ``// 인스턴스 생성
      
      ``String name;
      
      ``System.out.print(``"이름을 입력하세요 : "``);
      ``name = sc.next();
      
      ``System.out.println(``"당신의 이름은 "` `+ name + ``" 입니다."``);
    ``}
  }
  ```

**Scanner**는 util 패키지 안에 들어있다.

**import** 구문을 통해 util 패키지 안에 들어있는 **Scanner**를 받아온다.

**Scanner는 next()메소드를 사용한다.**

**sc**라는 이름의 인스턴스를 생성하여

**sc.next()**의 형태로 문자열 타입인 **name** 변수에 입력값을 저장한다.

**next() **메소드는 문자열(String)타입이므로 그대로 담아주면 된다.

* **2.다른 타입의 입력값 받아올 수 있다**

  ```java
  import java.util.Scanner;
   
  public` `class` `TEST {
    ``public` `static` `void` `main(String[] args)
    ``{
      ``Scanner sc = ``new` `Scanner(System.in);
      
      ``int` `yourAge;
      
      ``System.out.print(``"나이를 입력하세요 : "``);
      ``yourAge = sc.nextInt();
      
      ``System.out.println(``"당신의 나이는 "` `+ yourAge + ``"세 입니다."``);
    ``}
  }
  ```

정수타입(int)의 값을 입력받고 싶을 때는 **nextInt()** 메소드를 사용한다.

실수타입(double) 일 때는 **nextDouble()** 메소드를 사용한다.

* **03. 연속으로 입력값을 받을 때는 구분자가 필요하다.**

  ```java
  import java.util.Scanner;
   
  public` `class` `test {
    ``public` `static` `void` `main(String[] args)
    ``{
      ``Scanner sc = ``new` `Scanner(System.in);
      
      ``String name;
      ``int` `num1;
      ``int` `num2;
      ``int` `num3;
      
      ``System.out.print(``"이름을 입력하세요 : "``);
      ``name = sc.next();
      
      ``System.out.print(``"숫자 3개를 입력하세요 (공백 구분) : "``);
      ``num1 = sc.nextInt();
      ``num2 = sc.nextInt();
      ``num3 = sc.nextInt();
      
      ``System.out.println(``">> 당신의 이름은 "` `+ name + ``" 입니다."``);
      ``System.out.printf(``">> 당신이 입력한 숫자는 %d, %d, %d 입니다.\n"``, num1, num2, num3);
    ``}
  }
  ```

**Scanner**는 기본적으로 공백을 기준으로 값을 구분하여 입력받는다.

**Scanner**의 디폴트 구분자는 **space**이다.


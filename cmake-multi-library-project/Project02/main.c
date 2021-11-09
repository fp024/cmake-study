#include <stdio.h>

/**
 * 윈도우환경에서 CLion의 내장 콘솔에 사소한 문제가 있다.
 * printf() 같은 화면 출력 함수 뒷 부분에 공백이 있는 상태에서
 * 바로 scanf() 같은 입력 함수가 들어가게 되면, 해당 공백이 입력 함수 처리 이후에
 * 화면에 표시되어 뒤로 밀려버리는 문제가 있다.
 *
 * JetBrain 담당자분은 MinGW 환경에서 발생하는 문제일 수 있다고 하는데,
 * 내가 생각하기엔 CLion의 내장 콘솔 자체에 문제가 있는 것 같다.
 *
 * MinGW 대신 Visual Studio 2019를 연동해서 쓰더라도 동일한 문제가 있다.
 *
 * run.processes.with.pty 를 끄거나 Cygwin을 사용해보라고 하는데,
 *
 * 나의 경우는 run.processes.with.pty 를 끄면 동작이 더 이상해졌었다.
 * 다른 런타임 환경에 종속 되어버리는 Cygwin은 굳이 설치해서 확인하지는 않았다.
 *
 * ===========================================================================
 * run.processes.with.pty
 *
 * Allocate pseudo-terminal for running and debugging programs.
 * This affects the result of isatty() native call,
 * which is usually consulted by various command-line tools to check if they can operate in an interactive mode.
 * Note that not all IDEs check this option and support PTY at all.
 * Currently this option is used in CLion and PyCharm.
 */
int main() {
    int a;
    int b;
    int c;
    printf("한글a:  "); scanf_s("%d", &a);
    printf("한글b:  "); scanf_s("%d", &b);
    printf("한글c:  "); scanf_s("%d", &c);
    return 0;
}

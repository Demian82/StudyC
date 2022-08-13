#include <stdio.h>

int check(char *str, char *str_check);
void set(char *str_check);

int main()
{
	char str[100];
	char str_check[3] = {0, };
	do{
		set(str_check);		//초기화
		printf("암호를 생성하시오 : ");
		scanf("%s", str);
	} while (check(str, str_check));
	printf("적정한 암호입니다.\n");
	
	return 0;
}

int check(char *str, char *str_check) {
	int i;
	for (i=0; str[i]; i++) {
		if ('0'<str[i] && '9'>str[i]) {		//숫자가 들어갔는가? 
			str_check[0] = 1;
		}
		else if ('a'<str[i] && 'z'>str[i]) {		//소문자가 들어갔는가? 아스키 코드에서  
			str_check[1] = 1;
		}
		else if ('A'<str[i] && 'Z'>str[i]) {		//대문자가 들어갔는가? 
			str_check[2] = 1;
		}
	}
	for (i=0; i<3; i++) {
	    if (str_check[i] != 1) {
	    	printf("숫자, 소문자, 대문자를 섞어서 암호를 다시 만드세요!\n");
			return 1; 		//while(1)
		}
	}
	return 0 ;		//while(0)
}

void set(char *str_check) {
	int i=0;
	for (i=0; i<3; i++) {
		str_check[i] = 0;
	}
}

/*
set(str_check) => str_check = [0, 0, 0]가 메모리 M1위치에 저장됨
scanf로 str[]에 받은 문자열은 메모리 M2위치에 저장됨
check 함수에서 *str은 M2, *str_check는 M1을 가리킴


int main(void)
{
    문자열 str 선언;
    문자열 str_check선언;
    do{
        set(str_check);         //초기화
        str에 문자를 받는다.
    }while(check(str, str_check));         //while(0)이면 종료
    return 0;
}

int check(char *str, char *str_check) {
    int i;
    for (i=0; str[i]; i++) {
        '0' < str[i] < '9' 이면 str_check[0] = 1;
        'a' < str[i] < 'z'이면 str_check[1] = 1;
        'A' < str[i] < 'Z'이면 str_check[2] = 1;
    if str_check[0; 1; 2] != 1
        return 1;
    return 0;

void set(char *str_check) {
    int i=0;
    str_check[0; 1; 2] 를 0으로 초기화 한다.;
}
*/

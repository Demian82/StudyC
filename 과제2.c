#include <stdio.h>

int check(char *str, char *str_check);
void set(char *str_check);

int main()
{
	char str[100];
	char str_check[3] = {0, };
	do{
		set(str_check);		//�ʱ�ȭ
		printf("��ȣ�� �����Ͻÿ� : ");
		scanf("%s", str);
	} while (check(str, str_check));
	printf("������ ��ȣ�Դϴ�.\n");
	
	return 0;
}

int check(char *str, char *str_check) {
	int i;
	for (i=0; str[i]; i++) {
		if ('0'<str[i] && '9'>str[i]) {		//���ڰ� ���°�? 
			str_check[0] = 1;
		}
		else if ('a'<str[i] && 'z'>str[i]) {		//�ҹ��ڰ� ���°�? �ƽ�Ű �ڵ忡��  
			str_check[1] = 1;
		}
		else if ('A'<str[i] && 'Z'>str[i]) {		//�빮�ڰ� ���°�? 
			str_check[2] = 1;
		}
	}
	for (i=0; i<3; i++) {
	    if (str_check[i] != 1) {
	    	printf("����, �ҹ���, �빮�ڸ� ��� ��ȣ�� �ٽ� ���弼��!\n");
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
set(str_check) => str_check = [0, 0, 0]�� �޸� M1��ġ�� �����
scanf�� str[]�� ���� ���ڿ��� �޸� M2��ġ�� �����
check �Լ����� *str�� M2, *str_check�� M1�� ����Ŵ


int main(void)
{
    ���ڿ� str ����;
    ���ڿ� str_check����;
    do{
        set(str_check);         //�ʱ�ȭ
        str�� ���ڸ� �޴´�.
    }while(check(str, str_check));         //while(0)�̸� ����
    return 0;
}

int check(char *str, char *str_check) {
    int i;
    for (i=0; str[i]; i++) {
        '0' < str[i] < '9' �̸� str_check[0] = 1;
        'a' < str[i] < 'z'�̸� str_check[1] = 1;
        'A' < str[i] < 'Z'�̸� str_check[2] = 1;
    if str_check[0; 1; 2] != 1
        return 1;
    return 0;

void set(char *str_check) {
    int i=0;
    str_check[0; 1; 2] �� 0���� �ʱ�ȭ �Ѵ�.;
}
*/

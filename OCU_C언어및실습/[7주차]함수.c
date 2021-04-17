#include <stdio.h>

int time(int minute){ //Main���� �Է� ���� �� 10������ ������ time�Լ�
	if (minute % 10 != 0){
		int temp;
		temp = minute % 10; //10���� ������ �� ��������
		temp = 10 - temp; //10���� ������ ��ŭ ����
		minute += temp; //�п� �� ���� ������ ���� 10������ ���������.
	}
	return minute; //���� �� ��ȯ
}
int calculate(int hour, int minute){ //Main���� �Է� ���� �ÿ� �� ����� calculate�Լ�
	int sum = 0; //����� ������ ���� �ʱ�ȭ
	if (hour >= 4 && hour <= 24){ //4~24�ð��� ������ 25,000�� ����
		sum += 25000;
	}
	else if (hour > 24){ //25�ð����� 25,000���� �ʰ��� �ø�ŭ ��� �߰�
		sum += (hour / 24) * 25000 + (hour % 24) * 1000 * 6 + (minute / 10) * 1000;
	}
	else{ //���� ���� �� ��, 4�ð� �̸� ������ ��� ���
		sum += hour * 1000 * 6 + (minute/10) * 1000;
	}
	return sum; //������� ��갪 ��ȯ
}

int main(){
	int hour, minute, sum;
	printf("Hour, Minute ���� �Է�>>\n");
	scanf("%d %d", &hour, &minute);
	printf("Time : %dH %dM\n", hour, minute);

	minute = time(minute);//�Է� ���� �� ����� ���� time()�� �� ����
	if (minute == 60){ //�Է� ���� ���� 60���� ��� hour�� �����Ͽ� ���
		minute = 0;
		hour++;
	}
	sum = calculate(hour, minute); //�Է� ���� �ÿ� ������ ��� ����� ���� calculate()�� �� ����
	printf("Calculate : %d,%.3dwon\n", sum/1000, sum%1000);
}
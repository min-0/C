#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

struct point
{
	int x, y, z; //3�������� �� ��
};

struct cube{
	struct point point1; //���� (point1, point2) = �밢��
	struct point point2;
};

//�̸� �� �Լ��� ���� �صд�.
int gEdge(struct cube); //������ü �𼭸� ���ϱ�
double gDiagonal(struct cube); //������ü �밢�� ���ϱ�
double gVolume(struct cube);  //������ü ���� ���ϱ�

int gEdge(struct cube *S){
	return abs(S->point1.x - S->point2.x);
	//�� ��ǥ ������ �Ÿ��� �� �𼭸� ���̰� �ȴ�.
}

double gDiagonal(struct cube *S){
	return sqrt(3)*gEdge(S);
	//���� �𼭸� ���̿� ��Ʈ3�� ���� ���� �밢�� ���̰� �ȴ�.
}

double gVolume(struct cube *S){
	double temp = pow(gEdge(S), 3);
	//���Ǵ� ����*����*���̴�. ��, ������ü�� �𼭸� ���̿� ������ �� ���� ���ǰ� �ȴ�.
	return temp;
}

void gPoint(struct cube *S){
	struct point p[2]; //x1, x2, y,1, y2, z1, z2 ������ ���̱� ���� ��ü �迭 ����

	while (1)
	{
		for (int i = 0; i < 2; i++){ //���� ��ǥ ����
			p[i].x = rand() % 10 + 1;
			p[i].y = rand() % 10 + 1;
			p[i].z = rand() % 10 + 1;
		}
		if (p[0].x == p[1].x || p[0].y == p[1].y || p[0].z == p[1].z) continue;
		//�밢���� x,y,z ��ǥ�� ��ġ�ϰ� �Ǹ� �밢���� �ȵǹǷ� ���� ��ǥ �ٽ� ����
		else break; //�ƴ� �� ���� ���� �ߴ�

		int ren = abs(p[0].x - p[1].x); //�� ��ǥ ������ ����
		if (abs(p[0].y - p[1].y) != ren || abs(p[0].z - p[1].z) != ren) continue;
		//���̰� �ٸ��� ������ü�� �ƴϹǷ� �ٽ� ���� ��ǥ ����
		else break; //�ƴ� �� ���� ���� �ߴ�
	}

	S->point1 = p[0]; //������ü�� �Ǵ� ��ǥ ����
	S->point2 = p[1]; 
	return S; 
}

int main(){
	srand((unsigned int)time(NULL)); //���� ������ ���� ����
	struct cube S; //����ü ����

	gPoint(&S); //���� ��ǥ ���� �Լ� ȣ��

	printf("(��1 (%d, %d, %d)��ǥ, ��2 (%d, %d, %d)��ǥ, ���� %.2lf)\n",
		S.point1.x, S.point1.y, S.point1.z, S.point2.x, S.point2.y, S.point2.z, gVolume(&S));
	//�� ���� ��ǥ�� ������ü ���� ���
}

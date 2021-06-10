#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

struct point
{
	int x, y, z; //3차원에서 한 점
};

struct cube{
	struct point point1; //선분 (point1, point2) = 대각선
	struct point point2;
};

//미리 쓸 함수를 선언 해둔다.
int gEdge(struct cube); //정육면체 모서리 구하기
double gDiagonal(struct cube); //정육면체 대각선 구하기
double gVolume(struct cube);  //정육면체 부피 구하기

int gEdge(struct cube *S){
	return abs(S->point1.x - S->point2.x);
	//두 좌표 사이의 거리가 곧 모서리 길이가 된다.
}

double gDiagonal(struct cube *S){
	return sqrt(3)*gEdge(S);
	//구한 모서리 길이에 루트3을 곱한 값이 대각선 길이가 된다.
}

double gVolume(struct cube *S){
	double temp = pow(gEdge(S), 3);
	//부피는 가로*세로*높이다. 즉, 정육면체는 모서리 길이에 세제곱 한 것이 부피가 된다.
	return temp;
}

void gPoint(struct cube *S){
	struct point p[2]; //x1, x2, y,1, y2, z1, z2 변수를 줄이기 위해 객체 배열 생성

	while (1)
	{
		for (int i = 0; i < 2; i++){ //랜덤 좌표 생성
			p[i].x = rand() % 10 + 1;
			p[i].y = rand() % 10 + 1;
			p[i].z = rand() % 10 + 1;
		}
		if (p[0].x == p[1].x || p[0].y == p[1].y || p[0].z == p[1].z) continue;
		//대각선이 x,y,z 좌표와 일치하게 되면 대각선이 안되므로 랜덤 좌표 다시 생성
		else break; //아닐 때 무한 루프 중단

		int ren = abs(p[0].x - p[1].x); //두 좌표 사이의 길이
		if (abs(p[0].y - p[1].y) != ren || abs(p[0].z - p[1].z) != ren) continue;
		//길이가 다르면 정육면체가 아니므로 다시 랜덤 좌표 생성
		else break; //아닐 대 무한 루프 중단
	}

	S->point1 = p[0]; //정육면체가 되는 좌표 전달
	S->point2 = p[1]; 
	return S; 
}

int main(){
	srand((unsigned int)time(NULL)); //난수 생성을 위한 선언
	struct cube S; //구조체 선언

	gPoint(&S); //랜덤 좌표 생성 함수 호출

	printf("(점1 (%d, %d, %d)좌표, 점2 (%d, %d, %d)좌표, 부피 %.2lf)\n",
		S.point1.x, S.point1.y, S.point1.z, S.point2.x, S.point2.y, S.point2.z, gVolume(&S));
	//두 랜덤 좌표와 정육면체 부피 출력
}

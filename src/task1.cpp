#include <stdio.h>
#include <string.h>


 
float height(int currTime, int startHeight)
{
	float H = 0; //������ 
	float L = 0; //���������� ����������
	
		H = startHeight; //���������� ��������� H �������� ��������� ������
		L = (9.81 * currTime * currTime) / 2; //��������� ���������� ����������
		startHeight = H - L; //��������� ����� ������
		return startHeight; //����������� ��������� ����� ��������
}

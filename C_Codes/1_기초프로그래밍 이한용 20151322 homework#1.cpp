//20151322 ���ѿ�  
/*
#include <stdio.h>
#include <math.h>

int main()
{
	int left_up_coord_x , right_up_coord_x , left_low_coord_x , right_low_coord_x ;
	int left_up_coord_y , right_up_coord_y , left_low_coord_y , right_low_coord_y ;
	int coord1_x , coord2_x , coord3_x , coord4_x ;
	int coord1_y , coord2_y , coord3_y , coord4_y ;
	float x, y ;
	float a, b, c, d, e ;
	float s ;

	printf("�簢�� ������ 4���� ��ǥ�� �Է¹޾� ���̸� ���մϴ�.\n");
	printf("\n��ǥ1 �Է�");
	printf("\n x��ǥ : ");
	scanf("%d", &coord1_x); 
	printf("\n y��ǥ : ");
	scanf("%d", &coord1_y); 
	printf("\n��ǥ2 �Է�");
	printf("\n x��ǥ : ");
	scanf("%d", &coord2_x); 
	printf("\n y��ǥ : ");
	scanf("%d", &coord2_y); 
	printf("\n��ǥ3 �Է�");
	printf("\n x��ǥ : ");
	scanf("%d", &coord3_x); 
	printf("\n y��ǥ : ");
	scanf("%d", &coord3_y); 
	printf("\n��ǥ4 �Է�");
	printf("\n x��ǥ : ");
	scanf("%d", &coord4_x); 
	printf("\n y��ǥ : ");
	scanf("%d", &coord4_y); 

	if(coord1_y < coord2_y)
	{
		left_up_coord_y = coord2_y;
		left_up_coord_x = coord2_x;
		left_low_coord_y = coord1_y;
		left_low_coord_x = coord1_x;
	}
	else
	{
		left_up_coord_y = coord1_y;
		left_up_coord_x = coord1_x;
		left_low_coord_y = coord2_y;
		left_low_coord_x = coord2_x;
	}
	
	if(coord3_y < coord4_y)
	{
		right_up_coord_y = coord4_y;
		right_up_coord_x = coord4_x;
		right_low_coord_y = coord3_y;
		right_low_coord_x = coord3_x;
	}
	else
	{
		right_up_coord_y = coord3_y;
		right_up_coord_x = coord3_x;
		right_low_coord_y = coord4_y;
		right_low_coord_x = coord4_x;
	}
	
	if(left_up_coord_y < right_low_coord_y)
	{
		y = right_low_coord_y;
		x = right_low_coord_x;
		right_low_coord_y = left_up_coord_y;
		right_low_coord_x = left_up_coord_x;
		left_up_coord_y = y;
		left_up_coord_x = x;
	}
	
	if(right_up_coord_y < left_low_coord_y)
	{
		y = left_low_coord_y;
		x = left_low_coord_x;
		left_low_coord_y = right_up_coord_y;
		left_low_coord_x = right_up_coord_x;
		right_up_coord_y = y;
		right_up_coord_x = x;
	}

	if(left_up_coord_x > right_up_coord_x)
	{
		y = right_up_coord_y;
		x = right_up_coord_x;
		right_up_coord_y = left_up_coord_y;
		right_up_coord_x = left_up_coord_x;
		left_up_coord_y = y;
		left_up_coord_x = x;
	}
	
	if(left_low_coord_x > right_low_coord_x)
	{
		y = right_low_coord_y;
		x = right_low_coord_x;
		right_low_coord_y = left_low_coord_y;
		right_low_coord_x = left_low_coord_x;
		left_low_coord_y = y;
		left_low_coord_x = x;
	}

	a = sqrt((left_up_coord_x - left_low_coord_x )*(left_up_coord_x - left_low_coord_x )+(left_up_coord_y - left_low_coord_y )*(left_up_coord_y - left_low_coord_y ));
	b = sqrt((right_low_coord_x - left_low_coord_x )*(right_low_coord_x - left_low_coord_x )+(right_low_coord_y - left_low_coord_y )*(right_low_coord_y - left_low_coord_y ));
	c = sqrt((right_low_coord_x - left_up_coord_x )*(right_low_coord_x - left_up_coord_x )+(right_low_coord_y - left_up_coord_y )*(right_low_coord_y - left_up_coord_y ));
	d = sqrt((right_up_coord_x - left_up_coord_x )*(right_up_coord_x - left_up_coord_x )+(right_up_coord_y - left_up_coord_y )*(right_up_coord_y - left_up_coord_y ));
	e = sqrt((right_up_coord_x - right_low_coord_x )*(right_up_coord_x - right_low_coord_x )+(right_up_coord_y - right_low_coord_y )*(right_up_coord_y - right_low_coord_y ));

	s = (sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))+sqrt((c+d+e)*(c+d-e)*(d+e-c)*(e+c-d)))/4;
	
	printf("\n�簢���� ���̴� %f �Դϴ�.", s);
	
	return 0;
}
*/

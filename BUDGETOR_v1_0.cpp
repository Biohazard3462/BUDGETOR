#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int budget_total;
float food, wife, husb, kids, trans, hkeep, divide, entert, save, budget_used; /* �������� ����������
																			   �������, ����� ��� ������
																			   ����� ���������... */
main ()
{
	setlocale (LC_ALL, "Rus");
	system ("Color 0A");
	printf ("�������� v1.0\n");
	printf ("(c) Lost Silver, 2017 �.\n");
	printf ("\n");
	printf ("������� ����� ��������� �������: \n");
	scanf ("%d", &budget_total);
	printf ("--------------------------------\n");
	food=(budget_total/100)*22.75;
	hkeep=(budget_total/100)*12.5;
	wife=(budget_total/100)*12.7;
	kids=(budget_total/100)*20;
	entert=(budget_total/100)*11.26;
	trans=(budget_total/100)*2.42;
	husb=(budget_total/100)*1.46;
	save=(budget_total/100)*5;
	budget_used=food+hkeep+wife+kids+entert+trans+husb+save; //� ���� �� ��������� ������������� ������
	divide=budget_total-budget_used; //������ �������
	printf ("\a������������� �������\n");
	printf ("�����: %d\n", budget_total);
	printf ("�������: %.2f (22.75%%)\n", food);
	printf ("����������: %.2f (12.5%%)\n", hkeep);
	printf ("�� ����: %.2f (12.7%%)\n", wife);
	printf ("�� �����: %.2f (20%%)\n", kids);
	printf ("�����������: %.2f (11.26%%)\n", entert);
	printf ("���������: %.2f (2.42%%)\n", trans);
	printf ("�� ����: %.2f (1.46%%)\n", husb);
	printf ("����������: %.2f (5%%)\n", save);
	printf ("���������: %.2f (11.91%%)\n", divide);
	printf ("--------------------------------\n");
	printf ("��������� �������������, ����������� �� ��������!\n");
	printf ("�� �������� ���������� ���������� ������������� �� ��������� ����/�����!\n");
	printf ("��� �������� ��������� ������� Enter\n");
	getchar ();
	getchar ();
}

int global = 2020;//ȫ�ֱ������̿���
/*������������*/

void basicType(){
	//����-printf function -printf - ��ӡ����
	printf("hello ���� \n");
	char ch = 'A';
	printf("char ch = '%c'\n", ch);//%c -- ��ӡ�ַ���ʽ������
	short ageShort = 19;
	printf("short ageShort = %d\n", ageShort);//%d -- ��ӡ����10��������
	int age = 20;
	printf("int age = %d\n", age);
	long ageLong = 21;
	printf("long ageLong = %d\n", ageLong);
	long long ageLLong = 22;
	printf("long long ageLLong = %d\n", ageLLong);
	float fl = 5.0;
	printf("float fl = %f\n", fl);
	double dou = 3.14;
	printf("double dou = %lf\n", dou);
}

/*��ȡ�������͵Ŀռ��С*/
void sizeTest(){
	printf("ÿ�����͵�ռ���ڴ�\n");
	printf("charsize = %d\n", sizeof(char));//1
	printf("shortsize = %d\n", sizeof(short));//2
	printf("intsize = %d\n", sizeof(int));//4
	printf("longsize = %d\n", sizeof(long));//4
	printf("longlongsize = %d\n", sizeof(long long));//8
	printf("floatsize = %d\n", sizeof(float));//4
	printf("doublesize = %d\n", sizeof(double));//8
}

/*��������������ʵ���������ڴ�ռ�*/
void statementSize(){
	short age = 20;//���ڴ����������ֽ�=16��bitλ,�������20,2^16�η�-1
	printf("age = %d\n", age);
	float weight = 25.6f;//���ڴ�������4���ֽ�,���С��,2^32�η�-1
	printf("weight = %f\n", weight);
	double dweight = 95.6;//���ڴ�������8���ֽ�,���С��2^64�η�-1
	printf("dweight = %f\n", dweight);
}

/*������ʹ��*/
void statementUse(){
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//��������-ʹ�����뺯��
	scanf_s("%d%d", &num1, &num2);//ȡ��ַ����
	sum = num1 + num2;
	printf("num1+num2 = %d\n", sum);
	printf("global=%d\n", global);
}

/*�ⲿ������ʹ��*/
void externStatement(){
	extern int g_val;//ʹ���ⲿ����
	printf("g_val=%d\n", g_val);
}
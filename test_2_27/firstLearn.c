int global = 2020;//全局变量工程可用
/*基本数据类型*/

void basicType(){
	//函数-printf function -printf - 打印函数
	printf("hello 比特 \n");
	char ch = 'A';
	printf("char ch = '%c'\n", ch);//%c -- 打印字符格式的数据
	short ageShort = 19;
	printf("short ageShort = %d\n", ageShort);//%d -- 打印整型10进制数据
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

/*获取各种类型的空间大小*/
void sizeTest(){
	printf("每种类型的占用内存\n");
	printf("charsize = %d\n", sizeof(char));//1
	printf("shortsize = %d\n", sizeof(short));//2
	printf("intsize = %d\n", sizeof(int));//4
	printf("longsize = %d\n", sizeof(long));//4
	printf("longlongsize = %d\n", sizeof(long long));//8
	printf("floatsize = %d\n", sizeof(float));//4
	printf("doublesize = %d\n", sizeof(double));//8
}

/*变量常量声明的实质是申请内存空间*/
void statementSize(){
	short age = 20;//向内存申请两个字节=16个bit位,用来存放20,2^16次方-1
	printf("age = %d\n", age);
	float weight = 25.6f;//向内存申请了4个字节,存放小数,2^32次方-1
	printf("weight = %f\n", weight);
	double dweight = 95.6;//向内存申请了8个字节,存放小数2^64次方-1
	printf("dweight = %f\n", dweight);
}

/*变量的使用*/
void statementUse(){
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//输入数据-使用输入函数
	scanf_s("%d%d", &num1, &num2);//取地址符号
	sum = num1 + num2;
	printf("num1+num2 = %d\n", sum);
	printf("global=%d\n", global);
}

/*外部变量的使用*/
void externStatement(){
	extern int g_val;//使用外部变量
	printf("g_val=%d\n", g_val);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ָ���������������
//int main()
//��������ʾ��Ԫ�ص�ַ������2�����⣺
//1.sizeof(������) - ��������ʾ�������顣
//2.&������ - ��������ʾ�������顣
//{   
	////��������
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//sizeof(������) - �������������ܴ�С - ��λ���ֽ� -16
	//printf("%d\n", sizeof(a + 0));//4/8 - ��������ʾ��Ԫ�ص�ַ��a+0������Ԫ�ص�ַ����ַ�Ĵ�С����4/8���ֽ�
	//printf("%d\n", sizeof(*a));//4 - ��������ʾ��Ԫ�ص�ַ *a������Ԫ��
	//printf("%d\n", sizeof(a + 1));//4/8 - ��������ʾ��Ԫ�ص�ַ a+1��ʾ�ڶ���Ԫ�ص�ַ����ַ�Ĵ�С����4/8���ֽ�
	//printf("%d\n", sizeof(a[1]));//4 - �ڶ���Ԫ�صĴ�С
	//printf("%d\n", sizeof(&a));//4/8 - &aȥ����������ĵ�ַ������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	//printf("%d\n", sizeof(*&a));//16 - &a������ĵ�ַ������ĵ�ַ�����÷��ʵĻ������飬sizeof����ľ�������Ĵ�С����λ���ֽ�
	//printf("%d\n", sizeof(&a + 1));//4/8 - &a������ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	//printf("%d\n", sizeof(&a[0]));//4/8 - &a[0]�ǵ�һ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(&a[0] + 1));//4/8 - &a[0] + 1�ǵڶ���Ԫ�صĵ�ַ
	

	////�ַ�����
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6 - sizeof�����������Ĵ�С��6*1=6�ֽ�
	//printf("%d\n", sizeof(arr + 0));//4/8 - arr����Ԫ�ص�ַ��arr+0������Ԫ�ص�ַ����ַ�Ĵ�С��4/8���ֽ�
	//printf("%d\n", sizeof(*arr));//1 - arr����Ԫ�ص�ַ��*arr������Ԫ�أ���Ԫ�����ַ�����С��1���ֽ�
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4/8 - &arr��Ȼ������ĵ�ַ�������ǵ�ַ����ַ�Ĵ�С��4/8���ֽ�
	//printf("%d\n", sizeof(&arr + 1));//4/8 - &arr+1���������������ĵ�ַ����ַ�Ĵ�С��4/8���ֽ�
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 - &arr[0] + 1�ǵڶ���Ԫ�صĵ�ַ����ַ�Ĵ�С��4/8���ֽ�
	

	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", strlen(arr));//���ֵ
	//printf("%d\n", strlen(arr + 0));//���ֵ
	////printf("%d\n", strlen(*arr));//err���Ƿ����ʣ�
	////printf("%d\n", strlen(arr[1]));//err���Ƿ����ʣ�
	//printf("%d\n", strlen(&arr));//���ֵ
	//printf("%d\n", strlen(&arr + 1));//���ֵ-6
	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1


	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7 - sizeof(arr)�����������Ĵ�С����λ���ֽ�
	//printf("%d\n", sizeof(arr + 0));//4/8 - arr+0����Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(*arr));//1 - *arr����Ԫ�أ�sizeof(*arr)���������Ԫ�صĴ�С
	//printf("%d\n", sizeof(arr[1]));//1 - arr[1]�ǵڶ���Ԫ�أ�sizeof(arr[1])������ǵڶ���Ԫ�صĴ�С
	//printf("%d\n", sizeof(&arr));//4/8 - &arr��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ����ַ�Ĵ�С��4/8���ֽ�
	//printf("%d\n", sizeof(&arr + 1));//4/8 - &arr+1���������������ĵ�ַ����Ҳ�ǵ�ַ����ַ�Ĵ�С��4/8���ֽ�
	//printf("%d\n", sizeof(&arr[0] + 1));////4/8 - &arr[0]+1�ǵڶ���Ԫ�صĵ�ַ����Ҳ�ǵ�ַ����ַ�Ĵ�С��4/8���ֽ�

	
	//char arr[] = "abcdef";
	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//err���Ƿ����ʣ�
	////printf("%d\n", strlen(arr[1]));//err���Ƿ����ʣ�
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr + 1));//���ֵ
	//printf("%d\n", strlen(&arr[0] + 1));//5


	//char* p = "abcdef";
	//printf("%d\n", sizeof(p));//4/8 - ����ָ�����p�Ĵ�С
	//printf("%d\n", sizeof(p + 1));//4/8 - p+1�õ������ַ�b�ĵ�ַ
	//printf("%d\n", sizeof(*p));//1 - *p�����ַ����ĵ�һ���ַ�'a'
	//printf("%d\n", sizeof(p[0]));//1 - ��Ԫ��
	//printf("%d\n", sizeof(&p));//4/8 
	//printf("%d\n", sizeof(&p + 1));//4/8
	//printf("%d\n", sizeof(&p[0] + 1));//4/8
	

	//char* p = "abcdef";
	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5
	////printf("%d\n", strlen(*p));//err���Ƿ����ʣ�
	////printf("%d\n", strlen(p[0]));//err���Ƿ����ʣ�
	//printf("%d\n", strlen(&p));//���ֵ
	//printf("%d\n", strlen(&p + 1));//���ֵ
	//printf("%d\n", strlen(&p[0] + 1));//5


	////��ά����
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//48 -  3*4*4
	//printf("%d\n", sizeof(a[0][0]));//4 - ��һ�е�һ��Ԫ�صĴ�С
	//printf("%d\n", sizeof(a[0]));//16 - 4*4 a[0]�൱�ڵ�һ����Ϊһά�����������
	////sizeof(arr[0])����������������sizeof()�ڣ�������ǵ�һ�еĴ�С
	//printf("%d\n", sizeof(a[0] + 1));//4/8  - a[0]�ǵ�һ�е�����������������ʱ����Ԫ�ص�ַ��a[0]��ʵ���ǵ�һ�е�һ��Ԫ�ص�ַ
	////����a[0]+1���ǵ�һ�еڶ���Ԫ�صĵ�ַ����ַ�Ĵ�С��4/8���ֽ�
	//printf("%d\n", sizeof(*(a[0] + 1)));//4 - *(a[0]+1))�ǵ�һ�еڶ���Ԫ�أ���С��4���ֽ�
	//printf("%d\n", sizeof(a + 1));//4 -  a�Ƕ�ά�������������û��sizeof(a),Ҳû��&(a)������a����Ԫ�ص�ַ
	////���Ѷ�ά���鿴��һά����ʱ����ά�������Ԫ�������ĵ�һ�У�a������Ԫ�أ���һ�У��ĵ�ַ
	////a+1���ǵڶ��еĵ�ַ
	//printf("%d\n", sizeof(*(a + 1)));//16 - sizeof(*(a + 1))=sizeof(arr[1]),������ǵڶ���Ԫ�صĴ�С
	//printf("%d\n", sizeof(&a[0] + 1));//4/8 - �ڶ��еĵ�ַ
	//printf("%d\n", sizeof(*(&a[0] + 1)));//16 - ����ڶ��еĴ�С����λ���ֽ�
	//printf("%d\n", sizeof(*a));//16 - a����Ԫ�ص�ַ-��һ�еĵ�ַ��*a���ǵ�һ�У�sizeof(*a)���Ǽ����һ�еĴ�С
	//printf("%d\n", sizeof(a[3]));//16

//	return 0;
//}





//������1��
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
////����Ľ����ʲô��    2        5





//������2
//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//��֪���ṹ��Test���͵ı�����С��20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//int main()
//{
//	p =(struct Test*) 0x00100000;
//	printf("%p\n", p + 0x1);//0X00100014   0X1ֵΪ1�������ʾ����һ���ṹ��ָ��20���ֽ�
//	printf("%p\n", (unsigned long)p + 0x1);//0X00100001   0X1ֵΪ1��unsigned long��ʾǿ��ת������p����������+1
//	printf("%p\n", (unsigned int*)p + 0x1);//0X00100004   0X1ֵΪ1��unsigned int*��ʾǿ��ת���޷��ŵ�int���ͣ�����+4
//	return 0;
//}





//������3
//int main()//%x��ӡ16����
//{
//	int a[4] = { 1, 2, 3, 4 };
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//	int* ptr1 = (int*)(&a + 1);//��a��������һ��������ptr1
//	int* ptr2 = (int*)((int)a + 1);//����һ��С�ֽ� 00 00 00 02����֮��16����Ϊ0x 02 00 00 00
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;//       0x4      0x02 00 00 00
//}




 


//������4
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];//a[0]��ʾ��һ��һά�������������������������Ϊ�����Ƕ��ű��ʽ
//	printf("%d\n", p[0]);
//	return 0;
//}





//������5
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//%p��-4�ĵ�ַ��ӡ�����Ǵ�ӡ-4�Ĳ���
//	return 0;//     0xFF FF FF FC               -4
//}







//������6
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);//����aa����
//	int* ptr2 = (int*)(*(aa + 1));//�ڶ��е�һ��Ԫ��
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;//        10            5
//}








//������7
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;//    "at"
//}






//������8
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);//point
	printf("%s\n", *-- * ++cpp + 3);//ER   
	//��ִ�� * ++cpp��ÿ��++cpp���ڷ����仯��������֮����--������Ϊenter��Ȼ��������3���ֽ�
	printf("%s\n", *cpp[-2] + 3);//ST
	//*��cpp-2��+3    cpp�ƶ�����Ӧfirst��������3���ֽ�
	printf("%s\n", cpp[-1][-1] + 1);//EW
	//*((cpp-1)-1)+1   cpp����Ҫ���ƶ�����Ӧnew��������1���ֽ�
	return 0;
}
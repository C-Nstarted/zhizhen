#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//指针和数组笔试题解析
//int main()
//数组名表示首元素地址。以下2种例外：
//1.sizeof(数组名) - 数组名表示整个数组。
//2.&数组名 - 数组名表示整个数组。
//{   
	////整形数组
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//sizeof(数组名) - 计算的是数组的总大小 - 单位是字节 -16
	//printf("%d\n", sizeof(a + 0));//4/8 - 数组名表示首元素地址，a+0还是首元素地址，地址的大小就是4/8个字节
	//printf("%d\n", sizeof(*a));//4 - 数组名表示首元素地址 *a就是首元素
	//printf("%d\n", sizeof(a + 1));//4/8 - 数组名表示首元素地址 a+1表示第二个元素地址，地址的大小就是4/8个字节
	//printf("%d\n", sizeof(a[1]));//4 - 第二个元素的大小
	//printf("%d\n", sizeof(&a));//4/8 - &a去除的是数组的地址，数组的地址也是地址，地址的大小就是4/8个字节
	//printf("%d\n", sizeof(*&a));//16 - &a是数组的地址，数组的地址解引用访问的还是数组，sizeof计算的就是数组的大小，单位是字节
	//printf("%d\n", sizeof(&a + 1));//4/8 - &a是数组的地址，&a+1虽然地址跳过整个数组，但还是地址，地址的大小就是4/8个字节
	//printf("%d\n", sizeof(&a[0]));//4/8 - &a[0]是第一个元素的地址
	//printf("%d\n", sizeof(&a[0] + 1));//4/8 - &a[0] + 1是第二个元素的地址
	

	////字符数组
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6 - sizeof计算的是数组的大小，6*1=6字节
	//printf("%d\n", sizeof(arr + 0));//4/8 - arr是首元素地址，arr+0还是首元素地址，地址的大小是4/8个字节
	//printf("%d\n", sizeof(*arr));//1 - arr是首元素地址，*arr就是首元素，首元素是字符，大小是1个字节
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4/8 - &arr虽然是数组的地址，但还是地址，地址的大小是4/8个字节
	//printf("%d\n", sizeof(&arr + 1));//4/8 - &arr+1是跳过整个数组后的地址，地址的大小是4/8个字节
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 - &arr[0] + 1是第二个元素的地址，地址的大小是4/8个字节
	

	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", strlen(arr));//随机值
	//printf("%d\n", strlen(arr + 0));//随机值
	////printf("%d\n", strlen(*arr));//err（非法访问）
	////printf("%d\n", strlen(arr[1]));//err（非法访问）
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr + 1));//随机值-6
	//printf("%d\n", strlen(&arr[0] + 1));//随机值-1


	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7 - sizeof(arr)计算的是数组的大小，单位是字节
	//printf("%d\n", sizeof(arr + 0));//4/8 - arr+0是首元素的地址
	//printf("%d\n", sizeof(*arr));//1 - *arr是首元素，sizeof(*arr)计算的是首元素的大小
	//printf("%d\n", sizeof(arr[1]));//1 - arr[1]是第二个元素，sizeof(arr[1])计算的是第二个元素的大小
	//printf("%d\n", sizeof(&arr));//4/8 - &arr虽然是数组的地址，但也是地址，地址的大小是4/8个字节
	//printf("%d\n", sizeof(&arr + 1));//4/8 - &arr+1是跳过整个数组后的地址，但也是地址，地址的大小是4/8个字节
	//printf("%d\n", sizeof(&arr[0] + 1));////4/8 - &arr[0]+1是第二个元素的地址，但也是地址，地址的大小是4/8个字节

	
	//char arr[] = "abcdef";
	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//err（非法访问）
	////printf("%d\n", strlen(arr[1]));//err（非法访问）
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr + 1));//随机值
	//printf("%d\n", strlen(&arr[0] + 1));//5


	//char* p = "abcdef";
	//printf("%d\n", sizeof(p));//4/8 - 计算指针变量p的大小
	//printf("%d\n", sizeof(p + 1));//4/8 - p+1得到的是字符b的地址
	//printf("%d\n", sizeof(*p));//1 - *p就是字符串的第一个字符'a'
	//printf("%d\n", sizeof(p[0]));//1 - 首元素
	//printf("%d\n", sizeof(&p));//4/8 
	//printf("%d\n", sizeof(&p + 1));//4/8
	//printf("%d\n", sizeof(&p[0] + 1));//4/8
	

	//char* p = "abcdef";
	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5
	////printf("%d\n", strlen(*p));//err（非法访问）
	////printf("%d\n", strlen(p[0]));//err（非法访问）
	//printf("%d\n", strlen(&p));//随机值
	//printf("%d\n", strlen(&p + 1));//随机值
	//printf("%d\n", strlen(&p[0] + 1));//5


	////二维数组
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//48 -  3*4*4
	//printf("%d\n", sizeof(a[0][0]));//4 - 第一行第一个元素的大小
	//printf("%d\n", sizeof(a[0]));//16 - 4*4 a[0]相当于第一行作为一维数组的数组名
	////sizeof(arr[0])把数组名单独放在sizeof()内，计算的是第一行的大小
	//printf("%d\n", sizeof(a[0] + 1));//4/8  - a[0]是第一行的数组名，数组名此时是首元素地址，a[0]其实就是第一行第一个元素地址
	////所以a[0]+1就是第一行第二个元素的地址，地址的大小是4/8个字节
	//printf("%d\n", sizeof(*(a[0] + 1)));//4 - *(a[0]+1))是第一行第二个元素，大小是4个字节
	//printf("%d\n", sizeof(a + 1));//4 -  a是二维数组的数组名，没有sizeof(a),也没有&(a)，所以a是首元素地址
	////而把二维数组看成一维数组时，二维数组的首元素是他的第一行，a就是首元素（第一行）的地址
	////a+1就是第二行的地址
	//printf("%d\n", sizeof(*(a + 1)));//16 - sizeof(*(a + 1))=sizeof(arr[1]),计算的是第二行元素的大小
	//printf("%d\n", sizeof(&a[0] + 1));//4/8 - 第二行的地址
	//printf("%d\n", sizeof(*(&a[0] + 1)));//16 - 计算第二行的大小，单位是字节
	//printf("%d\n", sizeof(*a));//16 - a是首元素地址-第一行的地址，*a就是第一行，sizeof(*a)就是计算第一行的大小
	//printf("%d\n", sizeof(a[3]));//16

//	return 0;
//}





//笔试题1：
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
////程序的结果是什么？    2        5





//笔试题2
//由于还没学习结构体，这里告知结构体的大小是20个字节
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节
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
//	printf("%p\n", p + 0x1);//0X00100014   0X1值为1，这里表示跳过一个结构体指针20个字节
//	printf("%p\n", (unsigned long)p + 0x1);//0X00100001   0X1值为1，unsigned long表示强制转换整形p，就是正常+1
//	printf("%p\n", (unsigned int*)p + 0x1);//0X00100004   0X1值为1，unsigned int*表示强制转换无符号的int类型，就是+4
//	return 0;
//}





//笔试题3
//int main()//%x打印16进制
//{
//	int a[4] = { 1, 2, 3, 4 };
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//	int* ptr1 = (int*)(&a + 1);//给a数组跳过一个数组变成ptr1
//	int* ptr2 = (int*)((int)a + 1);//跳过一个小字节 00 00 00 02倒序之后16进制为0x 02 00 00 00
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;//       0x4      0x02 00 00 00
//}




 


//笔试题4
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];//a[0]表示第一行一维数组的数组名，遇到括号则认为里面是逗号表达式
//	printf("%d\n", p[0]);
//	return 0;
//}





//笔试题5
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//%p以-4的地址打印，就是打印-4的补码
//	return 0;//     0xFF FF FF FC               -4
//}







//笔试题6
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);//跳过aa数组
//	int* ptr2 = (int*)(*(aa + 1));//第二行第一个元素
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;//        10            5
//}








//笔试题7
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;//    "at"
//}






//笔试题8
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);//point
	printf("%s\n", *-- * ++cpp + 3);//ER   
	//先执行 * ++cpp，每次++cpp都在发生变化，解引用之后再--解引用为enter，然后再跳过3个字节
	printf("%s\n", *cpp[-2] + 3);//ST
	//*（cpp-2）+3    cpp移动，对应first，在跳过3个字节
	printf("%s\n", cpp[-1][-1] + 1);//EW
	//*((cpp-1)-1)+1   cpp按照要求移动，对应new，再跳过1个字节
	return 0;
}
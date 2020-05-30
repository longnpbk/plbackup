/*Swap2.c*/ /*tham so hinh thuc la dia chi cua hai bien, truyen tham bien*/
#include<conio.h> 
#include<stdio.h> 

//khai bao va dinh nghia prototype 
void swap(int &a,int &b)
{ 
	int temp;

	printf("\nDia chi o nho cua bien a= %x", &a);
	printf("\na=%3d,  b=%3d ", a,b);
	//a, b luc nay se la hai bien va dia chi o nho cua bien a se bang dia chi o nho cua bien x: &a = &x.
	//Chung ta dung tham bien nen &a = &x; &b = &y. Nhung gia tri nay se khong doi.
	//a = x; b = y

	temp = a;
	a = b;
	b = temp;
	//Dia chi cac o nho cua cac bien a,b va x,y tuong ung bang nhau va se khong thay doi
	//Nhung gia tri cua cac bien se thay doi va duoc luu lai trong cac o nho tren
    printf("\na=%3d,  b=%3d ", a,b);
}

//ham main 
int main()
{ 
	int x=3,y=4; 
	printf("\nDia chi o nho cua bien x= %x", &x);
	
	printf("\nTruoc khi goi ham swap()\n");
	printf("x=%3d,  y=%3d ",x,y);

	swap(x,y);
	printf("\nSau Khi goi ham swap()\n");
	printf("x=%3d,  y=%3d", x,y);
	getch(); 
} 



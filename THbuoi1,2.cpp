#include <stdio.h>
void hello();
long tinhgiaithua(int x);
int tinhtong(int x,int y);
int tinhUCLN(int x,int y);
int kiemtrasnt(int x);
void hoanvi(int x,int y);
int tongnt(int x);
int tinhdthcn(int x,int y);
int main()
{
	int n,k,a,b,x,y,timgiaithua,timtong,timdientich,UCLNcuahaiso;
	hello();
	printf("\n nhap n(tinh giai thua):");scanf("%d",&n);
	printf("\n\n nhap n va k(tong hai so nguyen to n,k):");scanf("%d %d",&n,&k);
	printf("\n\n nhap chieu dai,chieu rong(dientich hcn):");scanf("%d %d",&a,&b);
	printf("\n\n nhap vao hai so a,b(timUCLN):");scanf("%d %d",&a,&b);
	printf("\n\n nhap so n(kiemtrasonguyento):");scanf("%d",&n);
	   timgiaithua=tinhgiaithua(n);
	   timtong=tinhtong(n,k);
	   timdientich=tinhdthcn(a,b);
	   UCLNcuahaiso=tinhUCLN(a,b);
	   hoanvi(a,b);
	printf("giai thua cua %d la: %d",n,timgiaithua);
	printf("\ntong hai so nguyen to la= %d",timtong);
	printf("\ndien tich hcn la: %d",timdientich);
	printf("\nUCLN la %d", UCLNcuahaiso);
	if(kiemtrasnt(n)==1)
	printf("\nso %d la so nguyen to",n);
	else
	printf("\nso %d khong la so nguyen to",n);
	if(kiemtrasnt(n)==1)
	  printf("\n so %d la so nguyen to",n);
	  else
	  printf("\n so %d khong la so nguyen to",n);
	  tongnt(n);
	  printf("\n tong so nguyen to tu 1 den %d la: %d",n,tongnt(n));
	  return 0;
}
	  	void hello()
	  {
	  	printf("hello world!");
	  }
	  long tinhgiaithua(int x)
	  {
	  	int giaithua=1;
	  	for(int i=1;i<=x;i++)
	  {
	  giaithua=giaithua*i;
      }
      return giaithua;
      }
      int tinhtong(int x,int y)
      {
      	int tong=0;
      	tong=x+y;
      	return tong;
      }
      int tinhdthcn(int x,int y)
      {
      	int dientich=0;
      	dientich=x*y;
      	return dientich;
      }
	  int tinhUCLN(int x,int y)
      {
      	while(x*y!=0)
      {
      	if(x>y)
      	x=x%y;
      	else
      	y=y%x;
      }
      int UCLN=x+y;
      return UCLN;
      }
      int kiemtrasnt(int x)
      {
      
      int dem=0;
      for(int i=2;i<=x;i++)
      {
      	if(x%i==0)
      	dem++;
      }
      return dem;
      }
      void hoanvi(int a,int b)
      {
      	printf("\n\n nhap hai so(hoanvi):");
      	scanf("%d %d",&a,&b);
      	int tempt=a;
      	a=b;
      	b=tempt;
      	printf("%d %d",a,b);
      }
      int tongnt(int x)
      {
      	int tong=0;
      	for(int j=2;j<=x;j++)
      {
      	if(kiemtrasnt(j)==1)
      	tong=tong+j;
      }
      return tong;
      }
      

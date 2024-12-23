#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Students{
	int id;
	char fullName[50];
	int age;
	char phoneNumber[12];
};
void sortName(struct Students sinhVien[]){
	for(int i = 0; i < 5; i++){
		int index = i;
		for(int j = i; j < 5; j++){
			if(sinhVien[index].fullName[0] < sinhVien[j].fullName[0]){
				index = j;
			}
		}
		struct Students temp = sinhVien[i];
		sinhVien[i] = sinhVien[index];
		sinhVien[index] = temp;
	}
	printf("Thong tin sinh vien sau sap xep\n\n");
	for(int i = 0; i < 5; i++){
		printf("%d, %s, %d, %s\n\n", sinhVien[i].id, sinhVien[i].fullName, sinhVien[i].age, sinhVien[i].phoneNumber);
	}
}
int main(){
	struct Students sinhVien[5] = {
		{1, "Trang", 18, "847591"},
		{2, "Son", 19, "427489"},
		{3, "Kien", 22, "452134"},
		{4, "Huy", 20, "074532"},
		{5, "Quan", 18, "093569"}
	};
	printf("Thong tin sinh vien truoc khi sap xep\n\n");
	for(int i = 0; i < 5; i++){
		printf("%d, %s, %d, %s\n\n", sinhVien[i].id, sinhVien[i].fullName, sinhVien[i].age, sinhVien[i].phoneNumber);
	}
	sortName(sinhVien);
	return 0;
}


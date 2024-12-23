#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Students{
	int id;
	char fullName[50];
	int age;
	char phoneNumber[12];
};
void deleteStudents(struct Students sinhVien[],int *size, int id){
	int found = 0;
	for(int i = 0; i < *size; i++){
		if(sinhVien[i].id == id){
			found = 1;
			for(int j = i; j < *size - 1; j++){
				sinhVien[j] = sinhVien[j+1];
			}
			(*size)--;
			break;
		}
	}
	if(found == 0){
		printf("\nID khong ton tai\n\n");
	}
	else{
		printf("\nThong tin sinh vien sau khi xoa\n\n");
		for(int i = 0; i < *size; i++){
		printf("%d, %s, %d, %s\n\n", sinhVien[i].id, sinhVien[i].fullName, sinhVien[i].age, sinhVien[i].phoneNumber);
		}
	}
}
int main(){
	struct Students sinhVien[5] = {
		{1, "Trang", 18, "123432"},
		{2, "Son", 18, "456453"},
		{3, "Kien", 18, "784539"},
		{4, "Huy", 20, "095678"},
		{5, "Quan", 18, "642278"}
	};
	int size = 5;
	printf("Thong tin sinh vien truoc khi xoa\n\n");
	for(int i = 0; i < size; i++){
		printf("%d, %s, %d, %s\n\n", sinhVien[i].id, sinhVien[i].fullName, sinhVien[i].age, sinhVien[i].phoneNumber);
	}
	int id;
	printf("Nhap ID xoa: ");
	scanf("%d", &id);
	deleteStudents(sinhVien,&size, id);
	return 0;
}


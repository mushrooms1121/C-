#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	int num,ans,min = 0,max = 500;
	srand(time(NULL));
	
	ans = (rand() % 500) + 1; //���פ���0~500 (max-min+1)+min 
	
	cout << "���o �w��A�}�ҥ����u�׷��K�X�v�p�C���A�H�U���C������~"
		<< "\n\n�C������:\n��J�A���K�X�A��������ܽd�򤺪��Ʀr�A��A��J���Ʀr�P���׬۲ŮɡA�C���h����!!!"
		<< "\n\n�I��Ender�C���}�l =D";
	cin.ignore(); //�Ȱ�����A���� 
	system("CLS"); //��s 
	
	cout << "�п�J" << min << "~" << max << "���Ʀr" << endl;
	cout << "\n�п�J�A���׷��K�X:"; 
	cin >> num;
	system("CLS");
	
	while(ans!=num){
		if(num>min && num<ans)
			min = num;
		else if(num<max && num>ans)
			max = num;
		else
			cout << "�п�J�d�򤺪��Ʀr!!!\n\n";
		
		cout << "�п�J" << min << "~" << max << "���Ʀr" << endl;
		cout << "\n�п�J�A���׷��K�X:"; 
		cin >> num;
		system("CLS");
	}
	
	cout << "�������׷��K�X��" << ans 
	<< "\n\n�A��F�����C��~�~�~ \n�w��A�U���A���D��" << endl; 
} 

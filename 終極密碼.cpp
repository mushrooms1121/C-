#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	int num,ans,min = 0,max = 500;
	srand(time(NULL));
	
	ans = (rand() % 500) + 1; //答案介於0~500 (max-min+1)+min 
	
	cout << "哈囉 歡迎你開啟本次「終極密碼」小遊戲，以下為遊戲說明~"
		<< "\n\n遊戲說明:\n輸入你的密碼，必須為顯示範圍內的數字，當你輸入的數字與答案相符時，遊戲則結束!!!"
		<< "\n\n點擊Ender遊戲開始 =D";
	cin.ignore(); //暫停之後再執行 
	system("CLS"); //刷新 
	
	cout << "請輸入" << min << "~" << max << "的數字" << endl;
	cout << "\n請輸入你的終極密碼:"; 
	cin >> num;
	system("CLS");
	
	while(ans!=num){
		if(num>min && num<ans)
			min = num;
		else if(num<max && num>ans)
			max = num;
		else
			cout << "請輸入範圍內的數字!!!\n\n";
		
		cout << "請輸入" << min << "~" << max << "的數字" << endl;
		cout << "\n請輸入你的終極密碼:"; 
		cin >> num;
		system("CLS");
	}
	
	cout << "本次的終極密碼為" << ans 
	<< "\n\n你輸了本次遊戲~ㄏㄏ \n歡迎你下次再次挑戰" << endl; 
} 

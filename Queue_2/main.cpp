/*
	Author: Phạm Lê Ngọc Sơn
	TOPIC: Queue
	Subject: DATA STRUCTURE and ALGORITHM
*/

#include <iostream>
using namespace std;

int main(){
	Queue queue;
	Init(queue);
	cout << "Queue initialized!\n";

	int opt = 0;
	do{
		system("cls");
		cout << "Choose one of the followings: \n";
		cout << "1. Check if the queue is empty.\n";
		cout << "2. Add key into queue.\n";
		cout << "3. Take the key from queue.\n";
		cout << "4. See the top key of queue.\n";
		cout << "5. Display the full queue.\n";
		cout << "6. Cancel the queue.\n";
		cout << "0. End activity.\n";

		cin >> opt;

		switch(opt){
			case 1:{
				if (isEmpty(queue)) cout << "The queue is empty.\n";
				else cout << "The queue is not empty.\n";
				system("pause");
				break;
			}

			case 2:{
				int theInfo;
				cout << "Input the key: ";
				cin >> theInfo;
				bool error;
				Enqueue(queue, theInfo);
				if(error) {
					cout << "The queue is full, cannot add key!\n";
					system("pause");
				}
				break;
			}

			case 3:{
				if (isEmpty(queue)) cout << "The queue is empty.\n";
				else{
					bool error;
					int theInfo = deQueue(queue, error);
					cout << "The taken key is: " << theInfo << '\n';
				}
				system("pause");
				break;
			}

			case 4:{
				if (isEmpty(queue)) cout << "The queue is empty.\n";
				else{
					bool error;
					int theInfo = Peek(queue, error);
					cout << "The taken top key is: " << theInfo << '\n';
				}
				system("pause");
				break;
			}

			case 5:{
				Disp(queue);
				system("pause");
				break;
			}

			case 6:{
				clear(queue);
				cout << "Queue deleted.\n";
				system("pause");
				break;
			}
		}
	}
	while(opt!= 0);

	cout << "Thank you for using the program\n";

	return 0;
}

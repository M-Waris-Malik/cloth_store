#include <iostream>
#include <vector>
using namespace std;
class Cloth{
	private:
		string item;
		int price, quantity;
		vector<Cloth> ve;
	public:
		add(){
			Cloth cloth;
	int choice;
	while(choice!=0 && choice==1){
		cout<<"Enter name of clothing item: ";
		cin>>cloth.item;
		cout<<"Enter price of clothing item: ";
		cin>>cloth.price;
		cout<<"Enter quantity of clothing item: ";
		cin>>cloth.quantity;
		ve.push_back(cloth);
		cout<<"Clothing item added: "<<endl;
		cout<<"Enter 1 for add more or 0 for exit: ";
		cin>>choice;
	}
		}
	display(){
		for(int i=0; i<ve.size(); i++){
cout<<"Name of clothing item: "<<ve[i].item<<endl;
cout<<"Price of clothing item: "<<ve[i].price<<endl;
cout<<"Quantity of clothing item: "<<ve[i].quantity<<endl<<endl;		
		}
	}
	deleteCloth(){
		string n;
		cout<<"Enter name of item for delete: "; cin>>n;
	for(int i=0; i<ve.size(); i++){
		if(n==ve[i].item){
			ve.erase(ve.begin()+i);
	cout<<"Clothing item deleted"<<endl<<endl;
		}
	}
	}
};
int main(){
	Cloth cloth;
	cout<<"***** Cloth Store *****"<<endl<<endl;
	int choice;
	while(true){
	cout<<"1. for add clothing item: "<<endl;
	cout<<"2. for display clothing item: "<<endl;
	cout<<"3. for delete clothing item: "<<endl;
	cout<<"0. for exit from program: "<<endl;
	cout<<"Enter choice: "; cin>>choice;
	
	if(choice==1){
		cloth.add();
	}
	else if(choice==2){system("cls");
		cloth.display();
	}
	else if(choice == 3){system("cls");
		cloth.deleteCloth();
	}
	else if(choice==0){
		exit(0);
	}
	else{ system("cls");
		cout<<"Invalid input"<<endl<<endl;
	}
	}
}


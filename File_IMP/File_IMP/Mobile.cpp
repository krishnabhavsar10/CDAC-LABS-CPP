#include<iostream>
#include<fstream>
using namespace std;

class MobilePhone{
	public:
		char serialNo[20];
		char modelNo[20];
		char brandName[20];
		double price;

	void Accept(){
		cin.get();
		cout<<"\n Enter serial no:"<<endl;
		cin.getline(serialNo,20);

		cout<<"\n Enter modelNo:"<<endl;
		cin.getline(modelNo,20);

		cout<<"\n Enter brand name:"<<endl;
		cin.getline(brandName, 10);

		cout<<"\n Price:"<<endl;
		cin>>price;

	}

	void Display(){
		cout<< "Serial No: "<<serialNo<<"\t"<<"Model No:"<<modelNo<<"\t"<<"Brand No:"<<brandName<<"\t"<<"Price:"<<price<<endl;
	}
};

	int main(){
		int count=0;

		MobilePhone arr[10];
		
	
		do{
			int n=0;
			int choice;
			char fname[100];
			cout<<"0.exit"<<endl;
			cout<<"1.Add Mobile Phone to File"<<endl;
			cout<<"2.Read all Mobile Phones from File"<<endl;
			cout<<"3.Read all Mobile Phones from file and display sorted"<<endl;

			cout<<"Please Enter choice:"<<endl;
			cin>>choice;

			if(choice==0){
				exit(0);
			}

			cout<<"Enter file name:"<<endl;
			cin>>fname;

			switch(choice){
				case 1:
				{
					MobilePhone m;
					ofstream fout(fname,ios::app);
					if(!fout){
						cout<<"\n file nto found";
						return -1;
					}
					m.Accept();
					fout.write((char*)&m,sizeof(MobilePhone));
					fout.close();
					count++;
				}
				break;

				case 2:
				{
					ifstream fin(fname,ios::binary);
					if(!fin){
						cout<<"\n file not found";
						return -1;
					}
					
					MobilePhone m;
					while(fin.read((char*)&m,sizeof(MobilePhone))){
						m.Display();
						arr[n++] = m;
					}
					fin.close();
				}
				break;

				case 3:
				{
					for(int i=0; i<count; i++){
						for(int j=i+1; j<count; j++){
							if(arr[i].price > arr[j].price){
								MobilePhone temp = arr[i];
								arr[i] = arr[j];
								arr[j] = temp;
							}
						}
					}

					for(int i=0; i<count; i++){
						arr[i].Display();
					}
				}
				break;

				default:
					cout<<"Invalid choice";
					break;

			
			}
		
		
		
		}while(1);
	
		return 0;
	}


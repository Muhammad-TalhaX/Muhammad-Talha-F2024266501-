#include<iostream>
using namespace std;

int main()
           
		   {

    int choice;
    int price;
    int hour;

cout<<"-------------------------------"<<endl;
cout<<"--10Million Rent A Car System--"<<endl;
cout<<"-------------------------------"<<endl;

    cout<< "1. Mini Car\n";
    cout<< "2. Ordinary Car\n";
    cout<< "3. SUV\n";
    cout<< "4. VIP Car\n";
    cout<< "5. Sports Car\n";
    cout<< "6. 10Million Special \n";
    cout<< "7. Premium Vintage \n";
    cout<< "Select a car type: ";

    cin>>choice;

    cout<<"How Many Hours Do You Need The Car For:  \n";
    cin>>hour;


    switch(choice) {
        case 1:

            int a;
            cout<<"Mini Car\n";

            cout<<"What Car do you want\n";
            cout<<"1. Mehran  \n 2. Cultus \n";

            cin>>a;

            if (a==1) {
            	price=100*hour;
                cout<<"Price: Rs."<<price;
            }

            else if(a==2) {
            	price=150*hour;
                cout<<"Price: Rs."<<price;
            }

            else {
                cout<<"Wrong Input";
            }


        break;


        case 2:
        	int b;
            cout<<"Ordinary Car \n";
            
            cout<<"What Car do you want\n";
            cout<<"1. Honda City \n 2. Toyota Corolla \n 3. Hyundai Sonota \n";
            cin>>b;
            
             if (b==1) {
             	price=200*hour;
                cout<<"Price: Rs."<<price;
            }

            else if(b==2) {
            	price=250*hour;
                cout<<"Price: Rs."<<price;
            }
            
            else if(b==3) {
            	price=350*hour;
                cout<<"Price: Rs."<<price;
            }

            else {
                cout<<"Wrong Input";
            }
        break;


        case 3:
        	int c;
            cout<<"SUV \n";
            
            cout<<"What Car do you want\n";
            cout<<"1. Toyota Fortuner \n 2. Range Rover \n 3. Lamborgini Urus \n";
            
            cin>>c;
            if (c==1) {
            	price=450*hour;
                cout<<"Price: Rs."<<price;
            }

            else if(c==2) {
            	price=600*hour;
                cout<<"Price: Rs."<<price;
            }
            
            else if(c==3) {
            	price=1200*hour;
                cout<<"Price: Rs."<<price;
            }

            else {
                cout<<"Wrong Input";
            }
            
        break;


        case 4:
        	int d;
            cout<<"Vip Car\n";
            
            cout<<"What Car do you want\n";
            cout<<"1. Rolls-Royce Boat-tail \n 2. Audi A6 \n 3. Bentley Continental GT \n 4. Mercedes-Benz S-Class \n";
            
            cin>>d;
            if (d==1) {
            	price=8000*hour;
                cout<<"Price: Rs."<<price;
            }

            else if(d==2) {
            	price=5000*hour;
                cout<<"Price: Rs."<<price;
            }
            
            else if(d==3) {
            	price=2500*hour;
                cout<<"Price: Rs."<<price;
            }
            
            else if(d==4) {
            	price=4500*hour;
            	cout<<"Price: Rs."<<price;
			}

            else {
                cout<<"Wrong Input";
            }
            
        break;


        case 5:
        	int e;
            cout<<"Sports Car\n ";
            
            cout<<"What Car do you want\n";
            cout<<"1. Aston Martin DB7 770 Ultimate \n 2. Porsche 911  \n 3. Ferrari 250 GT California Spyder SWB \n 4. Bugatti Veyron \n" ;
            
            cin>>e;
            if (e==1) {
            	price=5000*hour;
                cout<<"Price: Rs."<<price;
            }

            else if(e==2) {
            	price=5500*hour;
                cout<<"Price: Rs."<<price;
            }
            
            else if(e==3) {
            	price=12000*hour;
                cout<<"Price: Rs."<<price;
            }
            
            else if(e==4) {
            	price=15000*hour;
            	cout<<"Price: Rs."<<price;
			}

            else {
                cout<<"Wrong Input";
            }
            
        break;


        case 6:
        	int x;
            cout<<"10Million Special\n";
            
            cout<<"Which Car do you want\n";
            cout<<"1. 10million Gen-1 booster \n 2. La-milliano \n 3. Red-million 50G \n 4. 10million Monster-Killer \n";
            
            cin>>x;
            if (x==1) {
            	price=6600*hour;
                cout<<"Price: Rs."<<price;
            }

            else if(x==2) {
            	price=27000*hour;
                cout<<"Price: Rs."<<price;
            }
            
            else if(x==3) {
            	price=40000*hour;
                cout<<"Price: Rs."<<price;
            }
            
            else if(x==4) {
            	price=12000*hour;
            	cout<<"Price: Rs."<<price;
			}

            else {
                cout<<"Wrong Input";
            }
            
        break;
        
        
        case 7:
        	int z;
            cout<<"Premium Vintage\n";
            
            cout<<"Which Car do you want\n";
            cout<<"1. Janguar E-Type \n 2. 1960 Chevrolet Corvette \n 3. Ford Model-T  \n 4. Mercedes 300SL Gullwing \n 5. Ferrari 125 S \n";
            
            cin>>z;
            if (z==1) {
            	price=6000*hour;
                cout<<"Price: Rs."<<price;
            }

            else if(z==2) {
            	price=32000*hour;
                cout<<"Price: Rs."<<price;
            }
            
            else if(z==3) {
            	price=4000*hour;
                cout<<"Price: Rs."<<price;
            }
            
            else if(z==4) {
            	price=50000*hour;
            	cout<<"Price: Rs."<<price;
			}
			
			else if(z==5) {
				price=100000*hour;
				cout<<"price: Rs."<<price;
			}

            else {
                cout<<"Wrong Input";
            }
            
        break;
        
         default:
            cout<<"wrong input";
        break;

    }
      int driver;
	cout<<"\nDo you want driver(0/1)";
	cin>>driver;

	if(driver==1) {

		int t;

		cout<<"1. Class: B"<<endl;
		cout<<"2. Class: A"<<endl;
		cout<<"3. Class: S"<<endl;
		cout<<"Enter choice: ";
		cin>>t;
		
		if(t==1) {
			cout<<"Price= "<<50*hour+price;
		}

		else if(t==2) {
			cout<<"Price= "<<150*hour+price;
		}

		else if(t==3) {
			cout<<"Price= "<<1000*hour+price;
		}

		else {
			cout<<"Wrong input";
		}


	}
		

		
	} 
	


#include<iostream>

using namespace std;
	
	class hotel{
	
	public :
	
	   int  id;
	   char name[20]; //string name;
	   char  type[10];
	   int  rating;
	   char location[20];
	   int  establish ;
	   int  staff ;
	   int  room ;
	   	
	};
	main(){
		
		hotel obj[1000];
		int n, i;
		cout << "Enter number of hotel details :";
		cin >> n;
		
		for (i=0 ; i<n ; i++){
	     
	     cout<<"enter hotel id :";
	     cin>>obj[i].id;
	     
	     cout<<"enter hotel name :";
	     cin>>obj[i].name;
	     
	     cout<<"enter hotel_type(like hotel or motel) :";
	     cin>>obj[i].type;
	     
	     cout<<"enter hotel_rating(like 1 Star,...7 Star) :";
	     cin>>obj[i].rating;
	     
	     cout<<"enter hotel_location(city name) :";
	     cin>>obj[i].location;
	     
	     cout<<"enter hotel_establish_ year :";
	     cin>>obj[i].establish ;
	     
	     cout<<"enter hotel_staff_quatity :";
	     cin>>obj[i].staff ;
			
		cout<<"enter hotel_room_quatity :";
	    cin>>obj[i].room ; 
	    
		}
		
		for (i=0; i<n ; i++){
			cout << endl << "hotel id :" << obj[i].id << endl ;
			cout << endl << "hotel name :" << obj[i].name << endl ;
			cout << endl << "hotel type :" << obj[i].type << endl ;
			cout << endl << "hotel rating :" << obj[i].rating << endl ;
			cout << endl << "hotel location :" << obj[i].location << endl ;
			cout << endl << "hotel establish:" << obj[i].establish << endl ;
			cout << endl << "hotel staff :" << obj[i].staff << endl ;
			cout << endl << "hotel room :" << obj[i].room << endl ;
		}
	}

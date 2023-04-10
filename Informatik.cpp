#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void SamaDengan(){
    int x=0;
    while(x<=10){
        cout<<"-";
        x++;
    }
    cout<<endl;
}
void Layout(){
    for(int x=0; x<=16;x++){
        cout<<"-";
    }
    cout<<endl;
}
void Row(){
    for(int row=1; row<=8; row++){
        cout<<"= ";
    }
}
void Bioskop(){
    for(int num=1; num<=8; num++){
        cout<<" "<<num;
    }
    cout<<endl;
    for(char alpha=65;alpha<=72;alpha++){
        cout<<alpha;
        Row();
        cout<<endl;
    }
}

string movie[5]={"film_1", "film_2", "film_3", "film_4", "film_5"};
string input;

time_t now = time(0);
char* dt= ctime(&now);

int main(){
    cout<<dt<<endl;
    SamaDengan();
    for(int i=0; i<5;i++){
        cout<<movie[i]<<endl;
        SamaDengan();  
    }

    cout<<endl<<"film yang ingin ditonton : ";
    cin>>input;
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    
    int kursi;
    cout<<endl<<endl<<input<<endl<<endl;
    cout<<"Berapa tiket yang akan dibeli :  ";
    cin>>kursi;
    
    cout<<endl<<endl;
    cout<<"    SCREEN"<<endl;
    Layout();
    Bioskop();
    string posisi[256];
    int tiket=1;
    while(tiket<=kursi){
        cout<<"Tiket ke-"<<tiket<<" :   ";
        cin>>posisi[tiket];
        cout<<endl;
        tiket++;
    }
    for(int upper=0; upper<=kursi; upper++){
        transform(posisi[upper].begin(),posisi[upper].end(), posisi[upper].begin(), ::toupper);
    }
    
    cout<<"Tiket yang ingin dibeli : ";
    
    for(int check=0; check<tiket; check++){
        cout<<posisi[check]<<"    ";
    }
    cout<<endl<<endl;

   cout<<"Total Payment:"<<endl; 
   cout<<"Price Per Ticket: Rp 60.000"<<endl;
   cout<<"Total Seat: "<<kursi<<endl;
   cout<<"Subtotal : "<<kursi*60000<<endl;
    return 0;
}
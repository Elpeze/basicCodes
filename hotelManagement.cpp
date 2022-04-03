#include<iostream>
using namespace std;

int main() {
   
   int quantitiy;
   int choice;
   //Quantitiy
   int Qrooms=0, Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;
   //food items sold
   int Srooms=0, Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0;
   //total price of items
   int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;
   cout<<" \n|t Quantitiy of items we have: ";
   cout<<"\n Rooms available:";
   cin>>Qrooms;
   cout<<"\n Quantitiy of pasta we have:";
   cin>>Qpasta;
    cout<<"\n Quantitiy of burger we have:";
   cin>>Qburger;
   cout<<"\n Quantitiy of noodles we have:";
   cin>>Qnoodles;
     cout<<"\n Quantitiy of shake we have:";
   cin>>Qshake;
   cout<<"\n Quantitiy of chicken-roll we have:";
   cin>>Qchicken;
   m:

   cout<<"\n\t\t\t Please select from the menu options"<<endl;
   cout<<"\n\n1) Rooms";
   cout<<"\n2) Pasta";
   cout<<"\n3) Burger";
   cout<<"\n4) Noodles";
   cout<<"\n5) Shake";
   cout<<"\n6) CHicken-roll";
     cout<<"\n7) Informaton regarding sales and collection";
   cout<<"\n8) Exit";
   cout<< "\n Please enter your choice ";
   cin>>choice;
   switch (choice)
   {
   case 1:
             cout<<"\n\n Enter the number of rooms you want";
             cin>>quantitiy;     
             if(Qrooms-Srooms>=quantitiy)
             {
                 Srooms+=quantitiy;
                 Total_rooms= Total_rooms+ quantitiy*1200;
                 cout<<"\n\n\t"<< quantitiy<<" rooms have been allocated for you";

             }
             else{
                 cout<<" \n Only "<< Qrooms-Srooms<< " available in the hotes";
                 break;
             }
                     break;

      case 2:
             cout<<"\n\n Enter the number of pasta you want";
             cin>>quantitiy;     
             if(Qpasta-Spasta>=quantitiy)
             {
                 Spasta+=quantitiy;
                 Total_pasta= Total_pasta+ quantitiy*250;
                 cout<<"\n\n\t"<< quantitiy<<" pasta have been allocated for you";

             }
             else{
                 cout<<" \n Only "<< Qpasta-Spasta<< " pasta available in the hotes";
                 break;
             }
                 break;

           case 3:
             cout<<"\n\n Enter the number of Burger you want";
             cin>>quantitiy;     
             if(Qburger-Sburger>=quantitiy)
             {
                 Sburger+=quantitiy;
                 Total_burger= Total_burger+ quantitiy*120;
                 cout<<"\n\n\t"<< quantitiy<<" burger have been allocated for you";

             }
             else{
                 cout<<" \n Only "<< Qburger-Sburger<< " burger available in the hotes";
                 break;
             }   
                 break;

              case 4:
             cout<<"\n\n Enter the number of Noodles you want";
             cin>>quantitiy;     
             if(Qnoodles-Snoodles>=quantitiy)
             {
                 Snoodles+=quantitiy;
                 Total_noodles= Total_noodles+ quantitiy*140;
                 cout<<"\n\n\t"<< quantitiy<<" noodles have been allocated for you";

             }
             else{
                 cout<<" \n Only "<< Qnoodles-Snoodles<< " noodles available in the hotes";
                 break;
             }  
                           break;

               case 5:
             cout<<"\n\n Enter the number of Shake you want";
             cin>>quantitiy;     
             if(Qshake-Sshake>=quantitiy)
             {
                 Sshake+=quantitiy;
                 Total_shake= Total_shake+ quantitiy*120;
                 cout<<"\n\n\t"<< quantitiy<<" shake have been allocated for you";

             }
             else{
                 cout<<" \n Only "<< Qshake-Sshake<< " shake available in the hotes";
                 break;
             }   
                          break;

               case 6:
             cout<<"\n\n Enter the number of Chicken-rolll you want";
             cin>>quantitiy;     
             if(Qchicken-Schicken>=quantitiy)
             {
                 Schicken+=quantitiy;
                 Total_chicken= Total_chicken+ quantitiy*150;
                 cout<<"\n\n\t"<< quantitiy<<" chicken roll have been allocated for you";

             }
             else{
                 cout<<" \n Only "<< Qchicken-Schicken<< " chicken roll available in the hotes";
                 break;
             }   
             break;

             case 7:
             cout<<"\n Details of sales and collection";

              cout<<"\n\n  Number of rooms we had:"<<Qrooms;
              cout<<"\n\n Number of rooms we gve for rent"<<Srooms;
              cout<<"\n\n remaining rooms : "<<Qrooms-Srooms;
              cout<<"\n\n total rooms collection for the day: "<<Total_pasta;

              cout<<"\n\n  Number of pasta we had:"<<Qpasta;
              cout<<"\n\n Number of pasta we gve for rent"<<Spasta;
              cout<<"\n\n remaining pasta : "<<Qpasta-Spasta;
              cout<<"\n\n total pasta collection for the day: "<<Total_pasta;

              cout<<"\n\n  Number of burger we had:"<<Qburger;
              cout<<"\n\n Number of burger we gve for rent"<<Sburger;
              cout<<"\n\n remaining burger : "<<Qburger-Sburger;
              cout<<"\n\n total burger collection for the day: "<<Total_burger;

              cout<<"\n\n  Number of noodle we had:"<<Qnoodles;
              cout<<"\n\n Number of noodle we gve for rent"<<Snoodles;
              cout<<"\n\n remaining noodle : "<<Qnoodles-Snoodles;
              cout<<"\n\n total noodle collection for the day: "<<Total_noodles;

              cout<<"\n\n  Number of shake we had:"<<Qshake;
              cout<<"\n\n Number of shake we gve for rent"<<Sshake;
              cout<<"\n\n remaining shake : "<<Qshake-Sshake;
              cout<<"\n\n total shake collection for the day: "<<Total_shake;

              cout<<"\n\n  Number of chicken-roll we had:"<<Qchicken;
              cout<<"\n\n Number of chicken-roll we gve for rent"<<Schicken;
              cout<<"\n\n remaining chicken-roll : "<<Qchicken-Schicken;
              cout<<"\n\n total chicken-roll collection for the day: "<<Total_chicken;

              case 8:
              exit(0);

              default:
              cout<<" Please enter a number mentioned  above ";
            




       goto m;     

      
       
   

   }









    return 0;
}
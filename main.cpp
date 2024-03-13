#include <iostream>
using namespace std;

class Property{
private:int propertyNO;
        string type;
        string status;
        float price;
public:Property();
       void setPropertyNO();
       void setType();
       void setStatus();
       void setPrice();
       int getPropertyNO(){return propertyNO;}
       string getType(){return type;}
       string getStatus(){return status;}
       float getPrice(){return price;}
       void displayPropertyDetails();
        };
Property::Property(){
cout<<"Enter propertyNO: ";
cin>>propertyNO;
cout<<"Enter property type: ";
cin>>type;
cout<<"Enter status: ";
cin>>status;
cout<<"Enter property price: ";
cin>>price;
}
void Property::setPropertyNO(){
    cout<<"Enter updated property number: ";
    cin>>propertyNO;
    cout<<"Updated property number: "<<propertyNO<<endl;
}
void Property::setType(){
    cout<<"Enter updated property type: ";
    cin>>propertyNO;
    cout<<"Updated property type: "<<type<<endl;
}
void Property::setStatus(){
    cout<<"Enter updated property status: ";
    cin>>status;
    cout<<"Updated property status(reserved,occupied,unoccupied): "<<status<<endl;
}
void Property::setPrice(){
    cout<<"Enter updated property price: ";
    cin>>price;
    cout<<"Updated property price: "<<price<<endl;
}
void Property::displayPropertyDetails(){
    cout<<"The property details you have provided are as follows: \n";
    cout<<"Property number: "<<propertyNO<<endl;
    cout<<"Property type: "<<type<<endl;
    cout<<"Property status: "<<status<<endl;
    cout<<"Property price: "<<price<<endl;
}


class Reservation{
private:int reservationID;
        int checkindate;
        int checkoutdate;
public:Reservation();
        void setReservationID();
        void setCheckinDate();
        void setCheckoutDate();
        float payment(Property p1);
        int getReservationID(){return reservationID;}
        int getCheckinDate(){return checkindate;}
        int getCheckoutDate(){return checkoutdate;}
        void displayReservationDetails(Property p1);
        friend float Property::getPrice();
        };
Reservation::Reservation(){
cout<<"Enter reservationID: ";
cin>>reservationID;
cout<<"Enter check-in date: ";
cin>>checkindate;
cout<<"Enter check-out date: ";
cin>>checkoutdate;
}
void Reservation::setReservationID(){
    cout<<"Enter updated reservationID: ";
    cin>>reservationID;
    cout<<"Updated reservatioID: "<<reservationID<<endl;
}
void Reservation::setCheckinDate(){
    cout<<"Enter updated check-in date: ";
    cin>>checkindate;
    cout<<"Updated check-in date: "<<checkindate<<endl;
    }
void Reservation::setCheckoutDate(){
    cout<<"Enter updated check-out date: ";
    cin>>checkoutdate;
    cout<<"Updated check-out date: "<<checkoutdate<<endl;
    }
float Reservation::payment(Property p1){
    int days;
    float total_price;
    cout<<"Enter the number of days to be stayed: ";
    cin>>days;
    total_price=days*p1.getPrice();

    return total_price;
    }
void Reservation::displayReservationDetails(Property p1){
    float bill;
    cout<<"The reservation details you have provided are as follows: \n";
    cout<<"ReservationID: "<<reservationID<<endl;
    cout<<"Check-in date: "<<checkindate<<endl;
    cout<<"Check-out date: "<<checkoutdate<<endl;
    bill=payment(p1);
    cout<<"Total bill/price :"<<bill<<endl;
    }




class Guest{
private:string guestName;
        int guestID;
        int phoneNO;
        string gender;
public:Guest();
       void setGuestName();
       void setGuestID() ;
       void setPhoneNO();
       void setGender();
       string getGuestName(){return guestName;}
       int getGuestID(){return guestID;}
       int getPhoneNO(){return phoneNO;}
       string getGender(){return gender;}
       void displayGuestDetails();
       };
Guest::Guest(){
cout<<"Enter name of the guest: ";
cin>>guestName;
cout<<"Enter guestID: ";
cin>>guestID;
cout<<"Enter phone number of the guest: ";
cin>>phoneNO;
cout<<"Enter the gender of the guest: ";
cin>>gender;
}
void Guest::setGuestName(){
    cout<<"Enter updated name of the Guest: ";
    cin>>guestName;
    cout<<"Updated name of the guest: "<<guestName<<endl;
}
void Guest::setGuestID(){
    cout<<"Enter updated ID of the Guest: ";
    cin>>guestID;
    cout<<"Updated ID of the guest: "<<guestID<<endl;
}
void Guest::setPhoneNO(){
    cout<<"Enter updated phone number of the Guest: ";
    cin>>phoneNO;
    cout<<"Updated name of the guest: "<<guestName<<endl;
}
void Guest::setGender(){
    cout<<"Enter updated gender of the Guest: ";
    cin>>gender;
    cout<<"Updated gender of the guest: "<<gender<<endl;
}
void Guest::displayGuestDetails(){
    cout<<"The guest details you have provided are as follows: \n";
    cout<<"Guest name: "<<guestName<<endl;
    cout<<"Guest ID: "<<guestID<<endl;
    cout<<"Guest phoneNO: "<<phoneNO<<endl;
    cout<<"Guest gender: "<<gender<<endl;
    }



class Feedback{
private:int guestID;
        int rating;
        string comment;
public:Feedback();
       void setGuestID(Guest g1);
       void setRating();
       void setComment();
       int getGuestID(){return guestID;}
       int getRating(){return rating;}
       string getComment(){return comment;}
       void displayFeedback(Guest g1);
       friend int Guest::getGuestID();
       };
Feedback::Feedback(){
cout<<"Enter rating: ";
cin>>rating;
cout<<"Enter comment: ";
cin>>comment;
}
void Feedback::setGuestID(Guest g1){
    g1.getGuestID();
    }
void Feedback::setRating(){
    cout<<"Enter updated rating: ";
    cin>>rating;
    cout<<"Updated rating: "<<rating<<endl;}
void Feedback::setComment(){
    cout<<"Enter updated comment: ";
    cin>>comment;
    cout<<"Updated comment: "<<comment<<endl;}
void Feedback::displayFeedback(Guest g1){
    cout<<"The Feedback you have provided is as follows: \n";
    cout<<"Guest ID: "<<g1.getGuestID()<<endl;
    cout<<"Rating: "<<rating<<endl;
    cout<<"Comment: "<<comment<<endl;
    }



int main()
{
    Property p1;
    Reservation r1;
    Guest g1;

    r1.payment(p1);
    r1.displayReservationDetails(p1);
    Feedback f1;
    f1.displayFeedback(g1);
    return 0;
}

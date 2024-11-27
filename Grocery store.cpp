#include<iostream>
#include<string>
#include<fstream>
void SuperMain();
using namespace std;

//----------------------------------User/customer Class-----------------------------------------------
class User
{
private:
    string UserName;
    string Address;
    string ContactNumber;
    string Email;
    string Password;
    int CNIC, a = 0;

public:
    User();
    ~User();
    void setUserData();
    bool signin();
    string getName();
    string getPassword();
    string getContactNumber();
    string getEmail();
    string getAddress();
};
string User::getContactNumber()
{
    return ContactNumber;
}
string User::getEmail()
{
    return Email;
}
string User::getAddress()
{
    return Address;
}

User::User()
{
}

User ::~User()
{
}
string User::getName()
{
    return UserName;
}
string User::getPassword()
{
    return Password;
}
void User::setUserData()
{

    cout << " \t\t Enter Your UserName : ";
    cin.ignore();
    getline(cin, UserName);
    cout << " \t\t Enter Your Email : ";
    getline(cin, Email);
    cout << "  Enter Your Password(consist of 9 characters including one uppercase one digit ) : ";
    getline(cin, Password);
    cout << " \t\t Enter Your Contact Number : ";
    getline(cin, ContactNumber);
    cout << " \t\t Enter Your Address : ";
    getline(cin, Address);
    cout << " \t\t Enter Your CNIC : ";
   
   
    cin >> CNIC;
           
        cout << "\n\n";
        
    
}

bool User::signin()

{ 
    system("cls");
    cout << "\t\t\t------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t                               ==GROCERY STORE==                              " << endl;
    cout << "\t\t\t------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t                                  USER LOGIN                                  " << endl << endl;

    string Name;
    string Pass;

    cout << "\t\t\t\t\tUsername : ";
    cin >> UserName;
    cout << "\t\t\t\t\t Password : ";
    cin >> Password;
    fstream Myfile;
    Myfile.open("Username-password.bin",ios::binary | ios::app | ios::in );
    if (Myfile.is_open())
    {
        getline(Myfile, Name);
        getline(Myfile, Pass) ;
        Myfile.close();
    }
    if (Name == UserName && Pass == Password)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//----------------------------------Admin Class-----------------------------------------------
class AdminOrder
{
protected:
    string AdminName;
    //int CNICofMnager;
    string PasswordforAdmin;
};
class Admin :public AdminOrder// INHERITANCE USED
{
private:



public:
    Admin(/* args */);
    Admin(string Name, string pass);
    ~Admin();
    bool Asignin();
    void setAdminName(string Name[], int i);
    //void setmanagerCNIC(int Price[], int);
    void setAdminpassword(int Stock[], int i);
    void setAdminData();
    string getAdminName();
    //int getmanagerCNIC();
    string getAdminPassword();
};
void Admin::setAdminName(string Name[], int i)
{
    this->AdminName = Name[i];
}


void Admin::setAdminpassword(int stock[], int i)
{
    this->PasswordforAdmin = stock[i];
}

Admin::Admin(string Name, string pass)
{
    this->AdminName = Name;

    this->PasswordforAdmin = pass;
}

void Admin::setAdminData()
{

    cout << " \t\t Enter Your UserName : ";
    cin.ignore();
    getline(cin, AdminName);

    cout << "  Enter Your Password(consist of 9 characters including one uppercase one digit ) : ";
    getline(cin, PasswordforAdmin);

    cout << "\n\n";


}
string Admin::getAdminName()
{
    return AdminName;
}


string  Admin::getAdminPassword()
{
    return PasswordforAdmin;
}


Admin::Admin()
{
}

Admin::~Admin()
{
}
bool Admin::Asignin()

{
    system("cls");
    cout << "\t\t\t------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t                               ==GROCERY STORE==                                   " << endl;
    cout << "\t\t\t------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t                                  ADMIN LOGIN                                 " << endl << endl;

    string Name;
    string Pass;

    cout << "\t\t\t\t\tUsername : ";
    cin.ignore();
    getline(cin, AdminName);
    cout << "\t\t\t\t\t Password : ";
    getline(cin, PasswordforAdmin);
    fstream Adminfile;
    Adminfile.open("Admin.bin", ios::binary | ios::app | ios::in);
    
    if (Adminfile.is_open())
    {
        getline(Adminfile, Name);
        getline(Adminfile, Pass);
        Adminfile.close();
    }
    if (Name == AdminName && Pass == PasswordforAdmin)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//----------------------------------Manager of store A Class-----------------------------------------------
class Order1
{
protected:
    string managerAName;
    int CNICofAMnager;
    string PasswordforAmanager;
};
class ManagerA :public Order1// INHERITANCE USED
{
private:



public:
    void setmanagerAName(string Name[], int i)
    {
        this->managerAName = Name[i];
    }

    void setmanagerACNIC(int P[], int i)
    {
        this->CNICofAMnager = P[i];
    }
    void setmanagerApassword(int s[], int i)
    {
        this->PasswordforAmanager = s[i];
    }

    ManagerA(string Name, int cnic, string pass)
    {
        this->managerAName = Name;
        this->CNICofAMnager = cnic;
        this->PasswordforAmanager = pass;
    }


    string getmanagerAName()
    {
        return managerAName;
    }

    int  getmanagerACNIC()
    {
        return CNICofAMnager;
    }
    string  getmanagerAPassword()
    {
        return PasswordforAmanager;
    }

    void setmanagerAData()
    {

        cout << " \t\t Enter Manager Name : ";
        cin.ignore();
        getline(cin,managerAName);
        cout << " \t\t Enter password for manager : ";
        getline(cin,PasswordforAmanager);
        cout << " \t\t Enter CNIC of manager : ";
        cin >> CNICofAMnager;

        cout << "\n\n";

    }
    ManagerA()
    {
    }

    ~ManagerA()
    {
    }
    bool AMsignin()

    {
        system("cls");
        cout << "\t\t\t------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t                               ==GROCERY STORE==                                   " << endl;
        cout << "\t\t\t------------------------------------------------------------------------------" << endl << endl;
        cout << "\t\t\t                                MANAGER LOGIN                                      " << endl << endl;

        string Name;
        string Pass;

        cout << "\t\t\t\t\tUsername :";
         getline(cin,managerAName);
        cout << "\n\t\t\t\t\t Password :";
        getline(cin,PasswordforAmanager);
        fstream ManagerAfile;
        ManagerAfile.open("ManagerA.bin", ios::binary | ios::app | ios::in);
        if (ManagerAfile.is_open())
        {
            getline(ManagerAfile, Name);
            getline(ManagerAfile, Pass);
            ManagerAfile.close();
        }
        if (Name == managerAName && Pass == PasswordforAmanager)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
//----------------------------------Manager of store B Class-----------------------------------------------
class Order2
{
protected:
    string managerBName;
    int CNICofBMnager;
    string PasswordforBmanager;
};
class ManagerB :public Order2// INHERITANCE USED
{
private:



public:
    void setmanagerBName(string Name[], int i)
    {
        this->managerBName = Name[i];
    }

    void setmanagerBCNIC(int Price[], int i)
    {
        this->CNICofBMnager = Price[i];
    }
    void setmanagerBpassword(int stock[], int i)
    {
        this->PasswordforBmanager = stock[i];
    }

    ManagerB(string Name, int cnic, string pass)
    {
        this->managerBName = Name;
        this->CNICofBMnager = cnic;
        this->PasswordforBmanager = pass;
    }


    string getmanagerBName()
    {
        return managerBName;
    }

    int  getmanagerBCNIC()
    {
        return CNICofBMnager;
    }
    string  getmanagerBPassword()
    {
        return PasswordforBmanager;
    }

    void setmanagerBData()
    {

        cout << " \t\t Enter Manager Name : ";
       
        getline(cin,managerBName);
        cout << " \t\t Enter password for manager : ";
        getline(cin,PasswordforBmanager);
        cout << " \t\t Enter CNIC of manager : ";
        cin >> CNICofBMnager;

        cout << "\n\n";

    }
    ManagerB()
    {
    }

    ~ManagerB()
    {
    }
    bool MBsignin()

    {
        system("cls");
        cout << "\t\t\t------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t                               ==GROCERY STORE==                                   " << endl;
        cout << "\t\t\t------------------------------------------------------------------------------" << endl << endl;
        cout << "\t\t\t                                MANAGER LOGIN                                      " << endl << endl;

        string Name;
        string Pass;

        cout << "\t\t\t\t\tUsername : ";
       
        getline(cin,managerBName);
        cout << "\t\t\t\t\t Password : ";
        getline(cin,PasswordforBmanager);
        fstream ManagerBfile;
        ManagerBfile.open("ManagerB.bin", ios::binary | ios::app | ios::in);
        if (ManagerBfile.is_open())
        {
            getline(ManagerBfile, Name);
            getline(ManagerBfile, Pass);
            ManagerBfile.close();
        }
        if (Name == managerBName && Pass == PasswordforBmanager)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
//----------------------------------Manager of store C Class-----------------------------------------------
class Order3
{
protected:
    string managerCName;
    int CNICofCMnager;
    string PasswordforCmanager;
};
class ManagerC :public Order3// INHERITANCE USED
{
private:



public:
    void setmanagerCName(string Name[], int i)
    {
        this->managerCName = Name[i];
    }

    void setmanagerCCNIC(int Price[], int i)
    {
        this->CNICofCMnager = Price[i];
    }
    void setmanagerCpassword(int stock[], int i)
    {
        this->PasswordforCmanager = stock[i];
    }

    ManagerC(string Name, int cnic, string pass)
    {
        this->managerCName = Name;
        this->CNICofCMnager = cnic;
        this->PasswordforCmanager = pass;
    }


    string getmanagerCName()
    {
        return managerCName;
    }

    int  getmanagerCCNIC()
    {
        return CNICofCMnager;
    }
    string  getmanagerCPassword()
    {
        return PasswordforCmanager;
    }

    void setmanagerCData()
    {

        cout << " \t\t Enter Manager Name : ";
        cin.ignore();
        getline(cin, managerCName);
        cout << " \t\t Enter password for manager : ";
        getline(cin, PasswordforCmanager);
        cout << " \t\t Enter CNIC of manager : ";
        cin >> CNICofCMnager;

        cout << "\n\n";

    }
    ManagerC()
    {
    }

    ~ManagerC()
    {
    }
    bool CMsignin()

    {
        system("cls");
        cout << "\t\t\t------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t                               ==GROCERY STORE==                                   " << endl;
        cout << "\t\t\t------------------------------------------------------------------------------" << endl << endl;
        cout << "\t\t\t                                MANAGER LOGIN                                      " << endl << endl;

        string Name;
        string Pass;

        cout << "\t\t\t\t\tUsername : ";
        cin.ignore();
        getline(cin, managerCName);
        cout << "\t\t\t\t\t Password : ";
        getline(cin, PasswordforCmanager);
        fstream ManagerCfile;
        ManagerCfile.open("ManagerC.bin", ios::binary | ios::app | ios::in);
        if (ManagerCfile.is_open())
        {
            getline(ManagerCfile, Name);
            getline(ManagerCfile, Pass);
            ManagerCfile.close();
        }
        if (Name == managerCName && Pass == PasswordforCmanager)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
//----------------------------------Products of store A Class-----------------------------------------------
class proOrder1
{
protected:
    string ProductAName;
    int ProductAprice=0;
    int ProductAstok;
};
class ProductsinstoreA :public proOrder1// INHERITANCE USED
{
private:


public:
    void setProductAName(string Name[], int i)
    {
        this->ProductAName = Name[i];
    }

    void setProductAprice(int Price[], int i)
    {
        this->ProductAprice = Price[i];
    }
    void setProductAstock(int stock[], int i)
    {
        this->ProductAstok = stock[i];
    }

    ProductsinstoreA(string Name, string Compound, int  price, int quantity)
    {
        this->ProductAName = Name;

        this->ProductAprice = price;
        this->ProductAstok = quantity;
    }


    string getProductAName()
    {
        return ProductAName;
    }

    int  getProductAprice()
    {
        return ProductAprice;
    }
    int  getProductAstock()
    {
        return ProductAstok;
    }

    void setProductAData()
    {

        cout << " \t\t Enter Product Name : ";
        cin >> ProductAName;

        cout << " \t\t Enter price of Product : ";
        cin >> ProductAprice;
        cout << " \t\t Enter stock : ";

        cin >> ProductAstok;
        cout << "\n\n";

    }
    ProductsinstoreA()
    {
    }

    ~ProductsinstoreA()
    {
    }

};
//----------------------------------cart of store A Class-----------------------------------------------
class CartofstoreA :public ProductsinstoreA //multilevel ineheritance
{
    int TotalBill;
public:

    void DisplayCartofstoreA();

};
void CartofstoreA::DisplayCartofstoreA()
{
    TotalBill = getProductAprice() * getProductAstock();
    cout << "\t\tProduct Name : " << getProductAName() << endl;
    cout << "\t\tQuantity : " << getProductAstock();
    cout << "\\t\tTotalbill of above mentioned products : " << TotalBill;
}
class proOrder2
{
protected:
    string ProductBName;
    int ProductBprice;
    int ProductBstok;
};
//----------------------------------Products of store B Class-----------------------------------------------
class ProductsinstoreB :public proOrder2// INHERITANCE USED
{
private:


public:
    void setProductBName(string Name[], int i)
    {
        this->ProductBName = Name[i];
    }

    void setProductBprice(int Price[], int i)
    {
        this->ProductBprice = Price[i];
    }
    void setProductBstock(int stock[], int i)
    {
        this->ProductBstok = stock[i];
    }

    ProductsinstoreB(string Name, string Compound, int  price, int quantity)
    {
        this->ProductBName = Name;

        this->ProductBprice = price;
        this->ProductBstok = quantity;
    }


    string getProductBName()
    {
        return ProductBName;
    }

    int  getProductBprice()
    {
        return ProductBprice;
    }
    int  getProductBstock()
    {
        return ProductBstok;
    }

    void setProductBData()
    {

        cout << " \t\t Enter Product Name : ";
        cin >> ProductBName;

        cout << " \t\t Enter price of Product : ";
        cin >> ProductBprice;
        cout << " \t\t Enter stock : ";

        cin >> ProductBstok;
        cout << "\n\n";

    }
    ProductsinstoreB()
    {
    }

    ~ProductsinstoreB()
    {
    }

};
//----------------------------------cart of store A Class-----------------------------------------------
class CartofstoreB :public ProductsinstoreB//multilevel ineheritance
{
    int TotalBill;
public:

    void DisplayCartofstoreB()
    {
        TotalBill = getProductBprice() * getProductBstock();
        cout << "\t\tProduct Name : " << getProductBName() << endl;
        cout << "\t\tQuantity : " << getProductBstock();
        cout << "\\t\tTotalbill of above mentioned products : " << TotalBill;
    }
};
//----------------------------------Products of store C Class-----------------------------------------------
class proOrder3
{
protected:
    string ProductCName;
    int ProductCprice;
    int ProductCstok;
};
class ProductsinstoreC :public proOrder3// INHERITANCE USED
{
private:


public:
    void setProductCName(string Name[], int i)
    {
        this->ProductCName = Name[i];
    }

    void setProductCprice(int Price[], int i)
    {
        this->ProductCprice = Price[i];
    }
    void setProductCstock(int stock[], int i)
    {
        this->ProductCstok = stock[i];
    }

    ProductsinstoreC(string Name, string Compound, int  price, int quantity)
    {
        this->ProductCName = Name;

        this->ProductCprice = price;
        this->ProductCstok = quantity;
    }


    string getProductCName()
    {
        return ProductCName;
    }

    int  getProductCprice()
    {
        return ProductCprice;
    }
    int  getProductCstock()
    {
        return ProductCstok;
    }

    void setProductCData()
    {

        cout << " \t\t Enter Product Name : ";
        cin >> ProductCName;

        cout << " \t\t Enter price of Product : ";
        cin >> ProductCprice;
        cout << " \t\t Enter stock : ";

        cin >> ProductCstok;
        cout << "\n\n";

    }
    ProductsinstoreC()
    {
    }

    ~ProductsinstoreC()
    {
    }


};
//----------------------------------cart of store A Class-----------------------------------------------
class CartofstoreC :public ProductsinstoreC //multilevel ineheritance
{
    int TotalBill;
public:

    void DisplayCartofstoreC()
    {
        TotalBill = getProductCprice() * getProductCstock();
        cout << "\t\tProduct Name : " << getProductCName() << endl;
        cout << "\t\tQuantity : " << getProductCstock();
        cout << "\\t\tTotalbill of above mentioned products : " << TotalBill;
    }
};

//----------------------------------Drone Class which tell the user the weight and capacity of drone------------------------------------------------
class Drone
{
private:
    int NumberofDrones;
    int DroneCapacity;
public:
    Drone(/* args */);
    Drone(int, int);
    ~Drone();
    int getNumberOfDrones();
    int getDroneCapacity();
    void FindDrone();
};
Drone::Drone(int NumberOFDrone, int DroneCapacity)
{
    this->DroneCapacity = DroneCapacity;
    this->NumberofDrones = NumberOFDrone;
}
void Drone::FindDrone()
{
    cout << "\t\tDrone Number : " << NumberofDrones << endl;;
    cout << "\t\tDrone Capacity : " << DroneCapacity << endl;

}
int Drone::getDroneCapacity()
{
    return DroneCapacity;
}
int Drone::getNumberOfDrones()
{
    return NumberofDrones;
}

Drone::Drone()
{
}

Drone::~Drone()
{
}
//----------------------------------inventory Products class-----------------------------------------------
class inproOrder
{
protected:
    string inProductName;
    int inProductprice;
    int inProductstok;
};
class inProduct :public inproOrder// INHERITANCE USED
{
private:

    

public:
    inProduct();
    inProduct(string Name, string Compound, int Price, int Quantity);
    ~inProduct();
    void setinProductName(string Name[], int i);
    void setinProductstock(int Stock[], int i);
    void setinProductData();
    string getinProductName();
    //int getinProductprice();
    int getinProductstock();
};
void inProduct::setinProductName(string Name[], int i)
{
    this->inProductName = Name[i];
}


void inProduct::setinProductstock(int stock[], int i)
{
    this->inProductstok = stock[i];
}

inProduct::inProduct(string Name, string Compound, int  price, int quantity)
{
    this->inProductName = Name;

    this->inProductprice = price;
    this->inProductstok = quantity;
}


string inProduct::getinProductName()
{
    return inProductName;
}


int  inProduct::getinProductstock()
{
    return inProductstok;
}

void inProduct::setinProductData()
{

    cout << " \t\t Enter Product Name : ";
    cin >> inProductName;
    cout << " \t\t Enter stock : ";

    cin >> inProductstok;
    cout << "\n\n";

}
inProduct::inProduct()
{
}

inProduct::~inProduct()
{
}
//-----------------------------------Manager of store A menu after signin-----------------------------------------------
void ManagerAMenu(inProduct ip[10])
{
    //inProduct M[10];
    system("cls");
    int choice = 0;
    while (choice != 3)
    {
        cout << "\t\t\t------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t                               ==GROCERY STORE==                                   " << endl;
        cout << "\t\t\t------------------------------------------------------------------------------" << endl << endl;
        cout << "\t\t\t                               Manager A Menu                                 " << endl << endl;
        cout << "\t\t\t                   1-Add New inventory product in store A                     " << endl;
        cout << "\t\t\t                   2-View Stock of Specific product in store A                " << endl;
        cout << "\t\t\t                   3-Exit                                          " << endl << endl;
        cout << "\t\t\t                                                                               " << endl << endl;
        cout << "\t\t\t                              Enter Your Choice : ";
        cin >> choice;
        char ch = ' ';

        switch (choice)
        {


        case 1:
        {
            fstream inventorystoreAfile;
            inventorystoreAfile.open("inventorystoreA.bin", ios::binary |  ios::app);

            for (int i = 0; i < 10 && ch != 'N'; i++)
            {
                cin.ignore();
                ip[i].setinProductData();
                if (inventorystoreAfile.is_open())
                {
                    inventorystoreAfile << ip[i].getinProductName() << endl << ip[i].getinProductstock() << endl;

                }
                break;
                cout << "\n\t\t\t\t\tDo you want to Add another product?\n\t\t\tEnter (Y=yes/N=No) : ";
                cin >> ch;

            }
            if (ch == 'N' || ch == 'n')
            {
                system("Pause");

            }
            ManagerAMenu(ip);
            inventorystoreAfile.close();
            system("Pause");


            break;
        }

        case 2:
        {
            string ProductName;
            cout << "\n\t\t\t\t\tEnter Product Name : ";
            cin >> ProductName;
            string Mname[10];
            int price[10], stock[10];
            fstream readinventorystoreAfile;
            int count = 0;
            readinventorystoreAfile.open("inventorystoreA.bin", ios::binary | ios::app | ios::in);
            if (readinventorystoreAfile.is_open())
            {

                int i = 0;
                while (count < 10)
                {
                    readinventorystoreAfile >> Mname[count];
                    readinventorystoreAfile >> price[count];
                    readinventorystoreAfile >> stock[count];
                    count++;

                }
                readinventorystoreAfile.close();

            }
            for (int i = 0; i < 10; i++)
            {
                ip[i].setinProductName(Mname, i);

                //ip[i].setinProductprice(price, i);
                ip[i].setinProductstock(stock, i);
            }
            for (int i = 0; i < 10; i++)
            {
                if (ProductName == ip[i].getinProductName())
                {
                    cout << "\t\t\t\t\tStock Avialable : " << ip[i].getinProductstock() << "\n\n\n";
                }
                else
                    cout << "This product is out of inventory stock" << endl;
                break;
            }
            system("Pause");

            ManagerAMenu(ip);
            break;

        }


        case 3:
        {
            SuperMain();
            break;
        }


        default:
        {
            cout << "\t\t\tYou have Entered Invalid Input!\n\t\t\tPlease Enter Again : ";
            cin >> choice;
            break;
        }

        }
    }
}
//-----------------------------------Manager of store B menu after signin-----------------------------------------------
void ManagerBMenu(inProduct ip[10])
{
    //inProduct M[10];
    system("cls");
    int choice = 0;
    while (choice != 3)
    {
        cout << "\t\t\t------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t                               ==GROCERY STORE==                                   " << endl;
        cout << "\t\t\t------------------------------------------------------------------------------" << endl << endl;
        cout << "\t\t\t                               Manager B Menu                                 " << endl << endl;
        cout << "\t\t\t                   1-Add New inventory product in store B                     " << endl;
        cout << "\t\t\t                   2-View Stock of Specific product in store B                " << endl;
        cout << "\t\t\t                   3-Exit                                          " << endl << endl;
        cout << "\t\t\t                                                                               " << endl << endl;
        cout << "\t\t\t                              Enter Your Choice : ";
        cin >> choice;
        char ch = ' ';

        switch (choice)
        {


        case 1:
        {
            fstream inventorystoreBfile;
            inventorystoreBfile.open("inventorystoreB.bin", ios::binary |  ios::app);

            for (int i = 0; i < 10 && ch != 'N'; i++)
            {
                cin.ignore();
                ip[i].setinProductData();
                if (inventorystoreBfile.is_open())
                {
                    inventorystoreBfile << ip[i].getinProductName() << endl << ip[i].getinProductstock() << endl;

                }
                break;
                cout << "\n\t\t\t\t\tDo you want to Add another product?\n\t\t\tEnter (Y=yes/N=No) : ";
                cin >> ch;
            }
            inventorystoreBfile.close();
            system("Pause");
            ManagerBMenu(ip);

            break;
        }

        case 2:
        {
            string ProductName;
            cout << "\n\t\t\t\t\tEnter Product Name : ";
            cin >> ProductName;
            string Mname[10];
            int price[10], stock[10];
            fstream readinventorystoreBfile;
            int count = 0;
            readinventorystoreBfile.open("inventorystoreB.bin", ios::binary | ios::app | ios::in);
            if (readinventorystoreBfile.is_open())
            {

                int i = 0;
                while (count < 10)
                {
                    readinventorystoreBfile >> Mname[count];
                    readinventorystoreBfile >> price[count];
                    readinventorystoreBfile >> stock[count];
                    count++;

                }
                readinventorystoreBfile.close();

            }
            for (int i = 0; i < 10; i++)
            {
                ip[i].setinProductName(Mname, i);

                //ip[i].setinProductprice(price, i);
                ip[i].setinProductstock(stock, i);
            }
            for (int i = 0; i < 10; i++)
            {
                if (ProductName == ip[i].getinProductName())
                {
                    cout << "\t\t\t\t\tStock Avialable : " << ip[i].getinProductstock() << "\n\n\n";
                }
            }
            system("Pause");

            ManagerBMenu(ip);
            break;

        }


        case 3:
        {
            SuperMain();
            break;
        }


        default:
        {
            cout << "\t\t\tYou have Entered Invalid Input!\n\t\t\tPlease Enter Again : ";
            cin >> choice;
            break;
        }

        }
    }
}
//-----------------------------------Manager of store C menu after signin-----------------------------------------------
void ManagerCMenu(inProduct ip[10])
{
    //inProduct M[10];
    system("cls");
    int choice = 0;
    while (choice != 3)
    {
        cout << "\t\t\t------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t                               ==GROCERY STORE==                                   " << endl;
        cout << "\t\t\t------------------------------------------------------------------------------" << endl << endl;
        cout << "\t\t\t                               Manager C Menu                                 " << endl << endl;
        cout << "\t\t\t                   1-Add New inventory product in store C                     " << endl;
        cout << "\t\t\t                   2-View Stock of Specific product in store C                " << endl;
        cout << "\t\t\t                   3-Exit                                          " << endl << endl;
        cout << "\t\t\t                                                                               " << endl << endl;
        cout << "\t\t\t                              Enter Your Choice : ";
        cin >> choice;
        char ch = ' ';

        switch (choice)
        {


        case 1:

        {
            fstream inventorystoreCfile;
            inventorystoreCfile.open("inventorystoreC.bin", ios::binary |  ios::app);

            for (int i = 0; i < 10 && ch != 'N'; i++)
            {
                cin.ignore();
                ip[i].setinProductData();
                if (inventorystoreCfile.is_open())
                {
                    inventorystoreCfile << ip[i].getinProductName() << endl << ip[i].getinProductstock() << endl;

                }
                break;
                cout << "\n\t\t\t\t\tDo you want to Add another product?\n\t\t\tEnter (Y=yes/N=No) : ";
                cin >> ch;
            }
            inventorystoreCfile.close();
            system("Pause");
            ManagerCMenu(ip);

            break;
        }

        case 2:
        {
            string ProductName;
            cout << "\n\t\t\t\t\tEnter Product Name : ";
            cin >> ProductName;
            string Mname[10];
            int price[10], stock[10];
            fstream readinventorystoreCfile;
            int count = 0;
            readinventorystoreCfile.open("inventorystoreC.bin", ios::binary | ios::app | ios::in);
            if (readinventorystoreCfile.is_open())
            {

                int i = 0;
                while (count < 10)
                {
                    readinventorystoreCfile >> Mname[count];
                    readinventorystoreCfile >> price[count];
                    readinventorystoreCfile >> stock[count];
                    count++;

                }
                readinventorystoreCfile.close();

            }
            for (int i = 0; i < 10; i++)
            {
                ip[i].setinProductName(Mname, i);

                //ip[i].setinProductprice(price, i);
                ip[i].setinProductstock(stock, i);
            }
            for (int i = 0; i < 10; i++)
            {
                if (ProductName == ip[i].getinProductName())
                {
                    cout << "\t\t\t\t\tStock Avialable : " << ip[i].getinProductstock() << "\n\n\n";
                }
            }
            system("Pause");

            ManagerCMenu(ip);
            break;

        }

        case 3:
        {
            SuperMain();
            break;
        }


        default:
        {
            cout << "\t\t\tYou have Entered Invalid Input!\n\t\t\tPlease Enter Again : ";
            cin >> choice;
            break;
        }

        }
    }
}
//-----------------------------------Manager of store A menu before signin-----------------------------------------------

void managerMainMenuforA(ManagerA U, inProduct ip[10])
{

    system("cls");

    cout << "\t\t\t------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t                             ==GROCERY STORE==                                   " << endl;
    cout << "\t\t\t------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t                           Manager A Main Menu                               " << endl << endl;
    cout << "\t\t\t                               1-Sign in                                      " << endl;
    cout << "\t\t\t                               2-Exit                                         " << endl;
    cout << "\n\t\t\t                                                                              " << endl << endl;
    cout << "\t\t\t              Enter any option from the above : ";
    int choice;
    cin >> choice;
    while (choice < 0 || choice>3)
    {
        cout << "\t\t\tINVALID KEY ENTERED!\n\t\t\t Enter Again : ";
        cin >> choice;
    }
    do {
        switch (choice)
        {

        case 1:
        {
            bool status;
            status = U.AMsignin();
            if (status = true)
            {
                cout << "\n\n\t\t\t\t\t\tLogin Successful!" << endl << endl;
                ManagerAMenu(ip);
            }
            break;
        }

        case 2:
        { SuperMain();
        break;
        }
        default:
        {
            break;
        }
        }

    } while (choice != 2);

}
//-----------------------------------Manager of store B menu before signin-----------------------------------------------
void managerMainMenuforB(ManagerB U, inProduct ip[10])
{

    system("cls");

    cout << "\t\t\t------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t                             ==GROCERY STORE==                                   " << endl;
    cout << "\t\t\t------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t                           Manager B Main Menu                               " << endl << endl;
    cout << "\t\t\t                               1-Sign in                                      " << endl;
    cout << "\t\t\t                               2-Exit                                         " << endl;
    cout << "\n\t\t\t                                                                              " << endl << endl;
    cout << "\t\t\t              Enter any option from the above : ";
    int choice;
    cin >> choice;
    while (choice < 0 || choice>3)
    {
        cout << "\t\t\tINVALID KEY ENTERED!\n\t\t\t Enter Again : ";
        cin >> choice;
    }
    do {
        switch (choice)
        {

        case 1:
        {
            bool status;
            status = U.MBsignin();
            if (status == true)
            {
                cout << "\n\n\t\t\t\t\t\tLogin Successful!" << endl << endl;
                ManagerBMenu(ip);
            }
            break;
        }

        case 2:
        { SuperMain();
        break;
        }
        default:
        {
            break;
        }
        }

    } while (choice != 2);

}
//-----------------------------------Manager of store C menu before signin-----------------------------------------------
void managerMainMenuforC(ManagerC U, inProduct ip[10])
{

    system("cls");

    cout << "\t\t\t------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t                             ==GROCERY STORE==                                   " << endl;
    cout << "\t\t\t------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t                           Manager C Main Menu                               " << endl << endl;
    cout << "\t\t\t                               1-Sign in                                      " << endl;
    cout << "\t\t\t                               2-Exit                                         " << endl;
    cout << "\n\t\t\t                                                                              " << endl << endl;
    cout << "\t\t\t              Enter any option from the above : ";
    int choice;
    cin >> choice;
    while (choice < 0 || choice>3)
    {
        cout << "\t\t\tINVALID KEY ENTERED!\n\t\t\t Enter Again : ";
        cin >> choice;
    }
    do {
        switch (choice)
        {

        case 1:
        {
            bool status;
            status = U.CMsignin();
            if (status == true)
            {
                cout << "\n\n\t\t\t\t\t\tLogin Successful!" << endl << endl;
                ManagerCMenu(ip);
            }
            break;
        }

        case 2:
        { SuperMain();
        break;
        }
        default:
        {
            break;
        }
        }

    } while (choice != 2);

}

//void UserMainMenu(User U, ProductsinstoreA M[]);
//-----------------------------------Display the Cart of store A-----------------------------------------------
void DisplayCartofstoreA(int counter2, int arraycounter[10], int TotalPrice, ProductsinstoreA M[10], int q[10])
{
    system("cls");

    cout << endl;
    cout << "\n\n\t\t\t\t\t----------BILL DETAILS----------\n\n";
    cout << endl;
    cout << "\t\t\t------------------------------------------------------------------------------\n" << endl;
    for (int i = 0; i < counter2; i++)
    {
        cout << "\t\t\t\t\t\tName : " << M[arraycounter[i]].getProductAName() << endl;
        cout << "\t\t\t\t\t\tPrice : " << M[arraycounter[i]].getProductAprice() << endl;
        cout << "\t\t\t\t\t\tQuantity : " << q[i] << endl;

    }

    int choose;
    cout << "\n\n\t\t\t\tPayment Method\n\n\t\t\t\t1. Cash On Delivery\n\t\t\t\t2.credit Card\n\t\t\t\t3.Bank Transfer\n";
    cin >> choose;
    int feed[1];
    int citychoice = 0;
    if (choose == 1)
    {
        cout << "\t\t\tif you are located within the city press 1 else pless 2 " << endl;
        cin >> citychoice;
        if (citychoice == 1)
        {
            TotalPrice += 30;
        }
        else if (citychoice == 2)
        {
            TotalPrice += 50;
        }
    }

    cout << "\n\n\t\t\t\tTotal Bill You Have to pay : ";
    cout << "Rs. " << TotalPrice << endl;
    cout << "\n\t\t\t\t\t-----------------Thanks!-------------------\n";
    cout << "\n\t\t\t\t\t-----Your Order Will be Deliverd Soon--------\n";
    cout << "\n\t\t\t\t\t------Please give feedback from 1-5----------\n";
    for (int i = 1; i <= 1;)
    {
        cin >> feed[i];
        if (feed[i] == 1)
        {
            delete feed;
        }
        else if (feed[i] == 2)
        {
            delete feed;
        }
        else if (feed[i] == 3)
        {
            cout << "\t\t\t\t\t\t\t***";
        }
        else if (feed[i] == 4)
        {
            cout << "\t\t\t\t\t\t\t****";
        }
        else if (feed[i] == 5)
        {
            cout << "\t\t\t\t\t\t\t*****";
        }
                        
    }

    system("pause");


}
//-----------------------------------Display the Cart of store B-----------------------------------------------
void DisplayCartofstoreB(int counter2, int arraycounter[10], int TotalPrice, ProductsinstoreB M[10], int q[10])
{
    system("cls");

    cout << endl;
    cout << "\n\n\t\t\t\t\t----------BILL DETAILS----------\n\n";
    cout << endl;
    cout << "\t\t\t------------------------------------------------------------------------------\n" << endl;
    for (int i = 0; i < counter2; i++)
    {
        cout << "\t\t\t\t\t\tName : " << M[arraycounter[i]].getProductBName() << endl;
        cout << "\t\t\t\t\t\tPrice : " << M[arraycounter[i]].getProductBprice() << endl;
        cout << "\t\t\t\t\t\tQuantity : " << q[i] << endl;

    }

    int choose;
    cout << "\n\n\t\t\t\tPayment Method\n\n\t\t1. Cash On Delivery\n\t\t2.credit Card\n\t\t3.Bank Transfer\n";
    cin >> choose;
    int feed[1];
    int citychoice = 0;
    if (choose == 1)
    {
        cout << "if you are located within the city press 1 else pless 2 " << endl;
        cin >> citychoice;
        if (citychoice == 1)
        {
            TotalPrice += 30;
        }
        else if (citychoice == 2)
        {
            TotalPrice += 50;
        }
    }

    cout << "\n\n\t\t\t\tTotal Bill You Have to pay : ";
    cout << "Rs. " << TotalPrice << endl;
    cout << "\n\t\t\t\t\t-------------Thanks!-------------\n";
    cout << "\n\t\t\t\t\t-----Your Order Will be Deliverd Soon--------\n";
    cout << "\n\t\t\t\t\t------Please give feedback from 1-5--------\n";
    for (int i = 1; i <= 1;)
    {
        cin >> feed[i];
        if (feed[i] == 1)
        {
            delete feed;
        }
        else if (feed[i] == 2)
        {
            delete feed;
        }
        else if (feed[i] == 3)
        {
            cout << "***";
        }
        else if (feed[i] == 4)
        {
            cout << "****";
        }
        else if (feed[i] == 5)
        {
            cout << "*****";
        }

    }

    system("pause");


}
//-----------------------------------Display the Cart of store C-----------------------------------------------
void DisplayCartofstoreC(int counter2, int arraycounter[10], int TotalPrice, ProductsinstoreC M[10], int q[10])
{
    system("cls");

    cout << endl;
    cout << "\n\n\t\t\t\t\t----------BILL DETAILS----------\n\n";
    cout << endl;
    cout << "\t\t\t------------------------------------------------------------------------------\n" << endl;
    for (int i = 0; i < counter2; i++)
    {
        cout << "\t\t\t\t\t\tName : " << M[arraycounter[i]].getProductCName() << endl;
        cout << "\t\t\t\t\t\tPrice : " << M[arraycounter[i]].getProductCprice() << endl;
        cout << "\t\t\t\t\t\tQuantity : " << q[i] << endl;

    }

    int choose;
    cout << "\n\n\t\t\t\tPayment Method\n\n\t\t1. Cash On Delivery\n\t\t2.credit Card\n\t\t3.Bank Transfer\n";
    cin >> choose;
    int feed[1];
    int citychoice = 0;
    if (choose == 1)
    {
        cout << "if you are located within the city press 1 else pless 2 " << endl;
        cin >> citychoice;
        if (citychoice == 1)
        {
            TotalPrice += 30;
        }
        else if (citychoice == 2)
        {
            TotalPrice += 50;
        }
    }

    cout << "\n\n\t\t\t\tTotal Bill You Have to pay : ";
    cout << "Rs. " << TotalPrice << endl;
    cout << "\n\t\t\t\t\t-------------Thanks!-------------\n";
    cout << "\n\t\t\t\t\t-----Your Order Will be Deliverd Soon--------\n";
    cout << "\n\t\t\t\t\t------Please give feedback from 1-5--------\n";
    for (int i = 1; i <= 1;)
    {
        cin >> feed[i];
        if (feed[i] == 1)
        {
            delete feed;
        }
        else if (feed[i] == 2)
        {
            delete feed;
        }
        else if (feed[i] == 3)
        {
            cout << "***";
        }
        else if (feed[i] == 4)
        {
            cout << "****";
        }
        else if (feed[i] == 5)
        {
            cout << "*****";
        }

    }

    system("pause");


}

void UserMainMenu(User U,ProductsinstoreA PA[10], ProductsinstoreB PB[10], ProductsinstoreC PC[10]);

//-----------------------------------User Menu after signin-----------------------------------------------
void UserMenu(User U, ProductsinstoreA PA[10], ProductsinstoreB PB[10], ProductsinstoreC PC[10])
{
    system("cls");
    int arraycounter[10];

    int choice;
    cout << "\t\t\t------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t                              ==GROCERY STORE==                                   " << endl;
    cout << "\t\t\t------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t                                       User MENU                                        " << endl << endl;
    cout << "\t\t\t                               1-Place Order from store A                       " << endl;
    cout << "\t\t\t                               2-Place Order from store B                       " << endl;
    cout << "\t\t\t                               3-Place Order from store C                       " << endl;
    cout << "\t\t\t                               4-Find Shipping Drone                            " << endl;
    cout << "\t\t\t                               5-Sign Out                                       " << endl;
    cout << "\t\t\t                                                                           " << endl << endl;
    cout << "\t\t\tChoose any option from the above key : ";
    cin >> choice;
    do
    {
        switch (choice)

        {
        case 1:

        {
            system("cls");
            string Mname[10];
            int price[10], stock[10];
            fstream readProductAfile;
            int count = 0;
            readProductAfile.open("ProductinstoreA.bin", ios::binary | ios::app | ios::in);
            if (readProductAfile.is_open())
            {

                int i = 0;
                while (count < 30)
                {
                    readProductAfile >> Mname[count];
                    readProductAfile >> price[count];
                    readProductAfile >> stock[count];
                    count++;

                }
                readProductAfile.close();

            }
            for (int i = 0; i < 10; i++)
            {
                PA[i].setProductAName(Mname, i);
                PA[i].setProductAprice(price, i);
                PA[i].setProductAstock(stock, i);
            }

            cout << "-------------------------------Product Available--------------------------------------" << endl << endl;
            cout << "\t\t Product Name\t\tPrice(PKR)" << endl << endl << endl;

            cout << "\t\t" << PA[0].getProductAName() << "\t\t\t" << PA[0].getProductAprice() << endl;

            cout << "\t\t" << PA[1].getProductAName() << "\t\t\t" << PA[1].getProductAprice() << endl;

            cout << "\t\t" << PA[2].getProductAName() << "\t\t\t" << PA[2].getProductAprice() << endl;
            cout << "\t\t" << PA[3].getProductAName() << "\t\t\t" << PA[3].getProductAprice() << endl;
            cout << "\t\t" << PA[4].getProductAName() << "\t\t\t" << PA[4].getProductAprice() << endl;
            cout << "\t\t" << PA[5].getProductAName() << "\t\t\t" << PA[5].getProductAprice() << endl;
            cout << "\t\t" << PA[6].getProductAName() << "\t\t\t" << PA[6].getProductAprice() << endl;
            cout << "\t\t" << PA[7].getProductAName() << "\t\t\t" << PA[7].getProductAprice() << endl;
            cout << endl << endl;
            int TotalBill = 0;
            string ProductName;
            int q[10];
            char charachter = ' ';
            int counter2 = 0;
            while (charachter != 'N')
            {
                cout << "\n\t\t\t\tEnter Name of product you wants to order: ";
                cin >> ProductName;
                for (int i = 0; i < 10; i++)
                {
                    if (ProductName == PA[i].getProductAName())
                    {
                        cout << "\t\t\tEnter Quantity of \"" << PA[i].getProductAName() << "\" you want to buy : ";
                        cin >> q[counter2];
                        TotalBill = TotalBill + PA[i].getProductAprice() * q[counter2];
                        arraycounter[counter2] = i;
                        counter2++;
                    }




                }


                cout << "\t\t\tDo you want Buy another product?\n\t\t\tEnter(Y=Yes,N=No) : ";
                cin >> charachter;



            }
            if (charachter == 'N' || charachter == 'n')
            {
                DisplayCartofstoreA(counter2, arraycounter, TotalBill, PA, q);

            }

            UserMenu(U, PA, PB, PC);
            break;
        }
        case 2:

        {
            system("cls");
            string Mname[10];
            int price[10], stock[10];
            fstream readProductBfile;
            int count = 0;
            readProductBfile.open("ProductinstoreB.bin", ios::binary | ios::app | ios::in);
            if (readProductBfile.is_open())
            {

                int i = 0;
                while (count < 30)
                {
                    readProductBfile >> Mname[count];
                    readProductBfile >> price[count];
                    readProductBfile >> stock[count];
                    count++;

                }
                readProductBfile.close();

            }
            for (int i = 0; i < 10; i++)
            {
                PB[i].setProductBName(Mname, i);
                PB[i].setProductBprice(price, i);
                PB[i].setProductBstock(stock, i);
            }

            cout << "-------------------------------Product Available--------------------------------------" << endl << endl;
            cout << "\t\t Product Name\t\tPrice(PKR)" << endl << endl << endl;

            cout << "\t\t" << PB[0].getProductBName() << "\t\t\t" << PB[0].getProductBprice() << endl;

            cout << "\t\t" << PB[1].getProductBName() << "\t\t\t" << PB[1].getProductBprice() << endl;

            cout << "\t\t" << PB[2].getProductBName() << "\t\t\t" << PB[2].getProductBprice() << endl;
            cout << "\t\t" << PB[3].getProductBName() << "\t\t\t" << PB[3].getProductBprice() << endl;
            cout << "\t\t" << PB[4].getProductBName() << "\t\t\t" << PB[4].getProductBprice() << endl;
            cout << "\t\t" << PB[5].getProductBName() << "\t\t\t" << PB[5].getProductBprice() << endl;
            cout << "\t\t" << PB[6].getProductBName() << "\t\t\t" << PB[6].getProductBprice() << endl;
            cout << "\t\t" << PB[7].getProductBName() << "\t\t\t" << PB[7].getProductBprice() << endl;
            cout << endl << endl;
            int TotalBill = 0;
            string ProductName;
            int q[10];
            char charachter = ' ';
            int counter2 = 0;
            while (charachter != 'N')
            {
                cout << "\n\t\t\t\tEnter Name of product you wants to order: ";
                cin >> ProductName;
                for (int i = 0; i < 10; i++)
                {
                    if (ProductName == PB[i].getProductBName())
                    {
                        cout << "\t\t\tEnter Quantity of \"" << PB[i].getProductBName() << "\" you want to buy : ";
                        cin >> q[counter2];
                        TotalBill = TotalBill + PB[i].getProductBprice() * q[counter2];
                        arraycounter[counter2] = i;
                        counter2++;
                    }




                }


                cout << "\t\t\tDo you want Buy another product?\n\t\t\tEnter(Y=Yes,N=No) : ";
                cin >> charachter;



            }
            if (charachter == 'N' || charachter == 'n')
            {
                DisplayCartofstoreB(counter2, arraycounter, TotalBill, PB, q);

            }

            UserMenu(U, PA, PB, PC);
            break;
        }
        case 3:

        {
            system("cls");
            string Mname[10];
            int price[10], stock[10];
            fstream readProductCfile;
            int count = 0;
            readProductCfile.open("ProductinstoreC.bin", ios::binary | ios::app | ios::in);
            if (readProductCfile.is_open())
            {

                int i = 0;
                while (count < 30)
                {
                    readProductCfile >> Mname[count];
                    readProductCfile >> price[count];
                    readProductCfile >> stock[count];
                    count++;

                }
                readProductCfile.close();

            }
            for (int i = 0; i < 10; i++)
            {
                PC[i].setProductCName(Mname, i);
                PC[i].setProductCprice(price, i);
                PC[i].setProductCstock(stock, i);
            }

            cout << "-------------------------------Product Available--------------------------------------" << endl << endl;
            cout << "\t\t Product Name\t\tPrice(PKR)" << endl << endl << endl;

            cout << "\t\t" << PC[0].getProductCName() << "\t\t\t" << PC[0].getProductCprice() << endl;

            cout << "\t\t" << PC[1].getProductCName() << "\t\t\t" << PC[1].getProductCprice() << endl;

            cout << "\t\t" << PC[2].getProductCName() << "\t\t\t" << PC[2].getProductCprice() << endl;
            cout << "\t\t" << PC[3].getProductCName() << "\t\t\t" << PC[3].getProductCprice() << endl;
            cout << "\t\t" << PC[4].getProductCName() << "\t\t\t" << PC[4].getProductCprice() << endl;
            cout << "\t\t" << PC[5].getProductCName() << "\t\t\t" << PC[5].getProductCprice() << endl;
            cout << "\t\t" << PC[6].getProductCName() << "\t\t\t" << PC[6].getProductCprice() << endl;
            cout << "\t\t" << PC[7].getProductCName() << "\t\t\t" << PC[7].getProductCprice() << endl;
            cout << endl << endl;
            int TotalBill = 0;
            string ProductName;
            int q[10];
            char charachter = ' ';
            int counter2 = 0;
            while (charachter != 'N')
            {
                cout << "\n\t\t\t\tEnter Name of product you wants to order: ";
                cin >> ProductName;
                for (int i = 0; i < 10; i++)
                {
                    if (ProductName == PC[i].getProductCName())
                    {
                        cout << "\t\t\tEnter Quantity of \"" << PC[i].getProductCName() << "\" you want to buy : ";
                        cin >> q[counter2];
                        TotalBill = TotalBill + PC[i].getProductCprice() * q[counter2];
                        arraycounter[counter2] = i;
                        counter2++;
                    }




                }


                cout << "\t\t\tDo you want Buy another product?\n\t\t\tEnter(Y=Yes,N=No) : ";
                cin >> charachter;



            }
            if (charachter == 'N' || charachter == 'n')
            {
                DisplayCartofstoreC(counter2, arraycounter, TotalBill, PC, q);

            }

            UserMenu(U, PA, PB, PC);
            break;
        }
        case 4:
        {
            system("cls");
            Drone D(68, 5);
            cout << "\t\t\t\t-------------------Drone Assigned to you for delivery----------------\n\n\n";
            cout << "\t\t\t\t\tDrone Identity : " << D.getNumberOfDrones() << endl << endl;
            cout << "\t\t\t\t\tCapcity of this Drone : " << D.getDroneCapacity() << " Kg " << endl << endl;
            system("pause");
            UserMenu(U, PA, PB, PC);
            break;


        }
        case 5:
        {
            cout << "\n\t\t\t-----------Good BYE--------\n";

            system("pause");
            UserMainMenu(U,PA,PB,PC);
            break;
        }

        default:
            cout << "\n\t\t\tIncoreect Input!\n";
            cout << "\t\t\tPlease Enter again\n";
            cin >> choice;
            break;
        }


    } while (choice != 3);

}
//-----------------------------------User Menu before signin-----------------------------------------------
void UserMainMenu(User U, ProductsinstoreA PA[10], ProductsinstoreB PB[10], ProductsinstoreC PC[10])
{
    system("cls");

    cout << "\t\t\t------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t                             ==GROCERY STORE==                                   " << endl;
    cout << "\t\t\t------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t                             User Main Menu                                 " << endl << endl;
    cout << "\t\t\t                               1-Sign in                                      " << endl;
    cout << "\t\t\t                               2-Sign Up                                      " << endl;
    cout << "\t\t\t                               3-Exit                                         " << endl;
    cout << "\n\t\t\t                                                                              " << endl << endl;
    cout << "\t\t\t              Enter any option from the above : ";
    int choice;
    cin >> choice;
    while (choice < 0 || choice>3)
    {
        cout << "\t\t\tINVALID KEY ENTERED!\n\t\t\t Enter Again : ";
        cin >> choice;
    }
    do {
        switch (choice)
        {
        case 2:
        {
            fstream UserFile;

            UserFile.open("Username-password.bin", ios::binary|ios::out | ios::app);

            U.setUserData();
            if (UserFile.is_open())
            {
                UserFile << U.getName() << endl << U.getPassword() << endl;

            }
            UserFile.close();
            UserMainMenu(U, PA, PB, PC);
            break;

        }
        case 1:
        {
            bool status = false;
            status = U.signin();
            if (status == true)
            {
                cout << "\n\n\t\t\t\t\t\tLogin Successful!" << endl << endl;
                UserMenu(U, PA, PB, PC);

                break;
            }
            else if (status == false)
            {
                cout << "Incorrect username or password" << endl;
            }
            break;
        }
        case 3:
        { SuperMain();
        break;
        }
        default:
        {
            break;
        }
        }

    } while (choice != 3);

}
//-----------------------------------Admin Menu after signin-----------------------------------------------
void AdminMenu(ManagerA MA[10], ManagerB MB[10], ManagerC MC[10])
{
    ProductsinstoreA M[10];
    ProductsinstoreB M1[10];
    ProductsinstoreC M2[10];
    system("cls");
    int choice = 0;
    while (choice != 13)
    {
        cout << "\t\t\t------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t                               ==GROCERY STORE==                                   " << endl;
        cout << "\t\t\t------------------------------------------------------------------------------" << endl << endl;
        cout << "\t\t\t                                   Admin  Menu                                " << endl << endl;
        cout << "\t\t\t                          1-Add New Manager in store A                         " << endl;
        cout << "\t\t\t                          2-Add New Manager in store B                         " << endl;
        cout << "\t\t\t                          3-Add New Manager in store C                         " << endl;
        cout << "\t\t\t                          4-Add New Product in store A                         " << endl;
        cout << "\t\t\t                          5-Add New Product in store B                         " << endl;
        cout << "\t\t\t                          6-Add New Product in store  C                        " << endl;
        cout << "\t\t\t                          7-View Stock of Specific product in store A               " << endl;
        cout << "\t\t\t                          8-View Stock of Specific product in store B              " << endl;
        cout << "\t\t\t                          9-View Stock of Specific product  in store C             " << endl;
        cout << "\t\t\t                          10-View Price of Specific Product in store A              " << endl;
        cout << "\t\t\t                          11-View Price of Specific Product in store B              " << endl;
        cout << "\t\t\t                          12-View Price of Specific Product in store c              " << endl;
        cout << "\t\t\t                          13-Exit                                          " << endl << endl;
        cout << "\t\t\t                                                                               " << endl << endl;
        cout << "\t\t\t                              Enter Your Choice : ";
        cin >> choice;
        char ch = ' ';

        switch (choice)
        {


        case 1:
        {
            fstream ManagerAFile;
            ManagerAFile.open("ManagerA.bin", ios::binary |  ios::app);

            for (int i = 0; i < 10 && ch != 'N'; i++)
            {
                cin.ignore();
                MA[i].setmanagerAData();
                if (ManagerAFile.is_open())
                {
                    ManagerAFile << MA[i].getmanagerAName() << endl << MA[i].getmanagerAPassword() << endl << MA[i].getmanagerACNIC() << endl;

                }

                cout << "\n\t\t\t\t\tDo you want to Add another Manager?\n\t\t\tEnter (Y=yes/N=No) : ";
                cin >> ch;
            }
            if (ch == 'N' || ch == 'n')
            {
                system("Pause");

            }
            AdminMenu(MA, MB, MC);
            ManagerAFile.close();
            system("Pause");


            break;
        }
        case 2:
        {
            fstream ManagerBFile;
            ManagerBFile.open("ManagerB.bin", ios::binary |  ios::app);

            for (int i = 0; i < 10 && ch != 'N'; i++)
            {
                cin.ignore();
                MB[i].setmanagerBData();
                if (ManagerBFile.is_open())
                {
                    ManagerBFile << MB[i].getmanagerBName() << endl << MB[i].getmanagerBPassword() << endl << MB[i].getmanagerBCNIC() << endl;

                }

                cout << "\n\t\t\t\t\tDo you want to Add another Manager?\n\t\t\tEnter (Y=yes/N=No) : ";
                cin >> ch;
            }
            if (ch == 'N' || ch == 'n')
            {
                system("Pause");

            }
            AdminMenu(MA, MB, MC);
            ManagerBFile.close();
            system("Pause");


            break;
        }
        case 3:
        {
            fstream ManagerCFile;
            ManagerCFile.open("ManagerC.bin", ios::binary |  ios::app);

            for (int i = 0; i < 10 && ch != 'N'; i++)
            {
                cin.ignore();
                MC[i].setmanagerCData();
                if (ManagerCFile.is_open())
                {
                    ManagerCFile << MC[i].getmanagerCName() << endl << MC[i].getmanagerCPassword() << endl << MC[i].getmanagerCCNIC() << endl;

                }

                cout << "\n\t\t\t\t\tDo you want to Add another Manager?\n\t\t\tEnter (Y=yes/N=No) : ";
                cin >> ch;
            }
            if (ch == 'N' || ch == 'n')
            {
                system("Pause");

            }
            AdminMenu(MA, MB, MC);
            ManagerCFile.close();
            system("Pause");


            break;
        }
        case 4:
        {
            fstream ProductAfile;
            ProductAfile.open("ProductinstoreA.bin", ios::binary |  ios::app);

            for (int i = 0; i < 10 && ch != 'N'; i++)
            {
                cin.ignore();
                M[i].setProductAData();
                if (ProductAfile.is_open())
                {
                    ProductAfile << M[i].getProductAName() << endl << M[i].getProductAprice() << endl << M[i].getProductAstock() << endl;

                }
                break;
                cout << "\n\t\t\t\t\tDo you want to Add another product?\n\t\t\tEnter (Y=yes/N=No) : ";
                cin >> ch;
            }
            ProductAfile.close();
            system("Pause");
            AdminMenu(MA, MB, MC);

            break;
        }
        case 5:
        {
            fstream ProductBfile;
            ProductBfile.open("ProductinstoreB.bin", ios::binary |  ios::app);

            for (int i = 0; i < 10 && ch != 'N'; i++)
            {
                cin.ignore();
                M1[i].setProductBData();
                if (ProductBfile.is_open())
                {
                    ProductBfile << M1[i].getProductBName() << endl << M1[i].getProductBprice() << endl << M1[i].getProductBstock() << endl;

                }
                break;
                cout << "\n\t\t\t\t\tDo you want to Add another product?\n\t\t\tEnter (Y=yes/N=No) : ";
                cin >> ch;
            }
            ProductBfile.close();
            system("Pause");
            AdminMenu(MA, MB, MC);

            break;
        }
        case 6:
        {
            fstream ProductCfile;
            ProductCfile.open("ProductinstoreC.bin", ios::binary |  ios::app);

            for (int i = 0; i < 10 && ch != 'N'; i++)
            {
                cin.ignore();
                M2[i].setProductCData();
                if (ProductCfile.is_open())
                {
                    ProductCfile << M2[i].getProductCName() << endl << M2[i].getProductCprice() << endl << M2[i].getProductCstock() << endl;

                }
                break;
                cout << "\n\t\t\t\t\tDo you want to Add another product?\n\t\t\tEnter (Y=yes/N=No) : ";
                cin >> ch;
            }
            ProductCfile.close();
            system("Pause");
            AdminMenu(MA, MB, MC);

            break;
        }
        case 7:
        {
            string ProductName;
            cout << "\n\t\t\t\t\tEnter Product Name : ";
            cin >> ProductName;
            string Mname[10];
            int price[10], stock[10];
            fstream readProductAfile;
            int count = 0;
            readProductAfile.open("ProductinstoreA.bin", ios::binary | ios::app | ios::in);
            if (readProductAfile.is_open())
            {

                int i = 0;
                while (count < 10)
                {
                    readProductAfile >> Mname[count];
                    readProductAfile >> price[count];
                    readProductAfile >> stock[count];
                    count++;

                }
                readProductAfile.close();

            }
            for (int i = 0; i < 10; i++)
            {
                M[i].setProductAName(Mname, i);

                M[i].setProductAprice(price, i);
                M[i].setProductAstock(stock, i);
            }
            for (int i = 0; i < 10; i++)
            {
                if (ProductName == M[i].getProductAName())
                {
                    cout << "\t\t\t\t\tStock Avialable : " << M[i].getProductAstock() << "\n\n\n";
                }
            }
            system("Pause");

            AdminMenu(MA, MB, MC);
            break;

        }
        case 8:
        {
            string ProductName;
            cout << "\n\t\t\t\t\tEnter Product Name : ";
            cin >> ProductName;
            string Mname[10];
            int price[10], stock[10];
            fstream readProductBfile;
            int count = 0;
            readProductBfile.open("ProductinstoreB.bin", ios::binary | ios::app | ios::in);
            if (readProductBfile.is_open())
            {

                int i = 0;
                while (count < 10)
                {
                    readProductBfile >> Mname[count];
                    readProductBfile >> price[count];
                    readProductBfile >> stock[count];
                    count++;

                }
                readProductBfile.close();

            }
            for (int i = 0; i < 10; i++)
            {
                M1[i].setProductBName(Mname, i);

                M1[i].setProductBprice(price, i);
                M1[i].setProductBstock(stock, i);
            }
            for (int i = 0; i < 10; i++)
            {
                if (ProductName == M1[i].getProductBName())
                {
                    cout << "\t\t\t\t\tStock Avialable : " << M1[i].getProductBstock() << "\n\n\n";
                }
            }
            system("Pause");

            AdminMenu(MA, MB, MC);
            break;

        }
        case 9:
        {
            string ProductName;
            cout << "\n\t\t\t\t\tEnter Product Name : ";
            cin >> ProductName;
            string Mname[10];
            int price[10], stock[10];
            fstream readProductCfile;
            int count = 0;
            readProductCfile.open("ProductinstoreC.bin", ios::binary | ios::app | ios::in);
            if (readProductCfile.is_open())
            {

                int i = 0;
                while (count < 10)
                {
                    readProductCfile >> Mname[count];
                    readProductCfile >> price[count];
                    readProductCfile >> stock[count];
                    count++;

                }
                readProductCfile.close();

            }
            for (int i = 0; i < 10; i++)
            {
                M2[i].setProductCName(Mname, i);

                M2[i].setProductCprice(price, i);
                M2[i].setProductCstock(stock, i);
            }
            for (int i = 0; i < 10; i++)
            {
                if (ProductName == M2[i].getProductCName())
                {
                    cout << "\t\t\t\t\tStock Avialable : " << M2[i].getProductCstock() << "\n\n\n";
                }
            }
            system("Pause");

            AdminMenu(MA, MB, MC);
            break;

        }
        case 10:
        {

            string ProductName;
            cout << "\n\n\t\t\t\t\tEnter Product Name : ";
            cin >> ProductName;
            string Pname[10];
            int price[10], stock[10];
            fstream readProductAfile;
            int count = 0;
            readProductAfile.open("ProductinstoreA.bin", ios::binary | ios::app | ios::in);
            if (readProductAfile.is_open())
            {

                int i = 0;
                while (count < 10)
                {
                    readProductAfile >> Pname[count];

                    readProductAfile >> price[count];
                    readProductAfile >> stock[count];
                    count++;

                }
                readProductAfile.close();

            }
            for (int i = 0; i < 10; i++)
            {
                M[i].setProductAName(Pname, i);

                M[i].setProductAprice(price, i);
                M[i].setProductAstock(stock, i);
            }
            for (int i = 0; i < 10; i++)
            {
                if (ProductName == M[i].getProductAName())
                {
                    cout << "\t\t\t\t\tPrice of this Product is :  " << M[i].getProductAprice() << " Rs\n\n\n";
                }

            }
            system("Pause");
            AdminMenu(MA, MB, MC);
            break;
        }
        case 11:
        {

            string ProductName;
            cout << "\n\n\t\t\t\t\tEnter Product Name : ";
            cin >> ProductName;
            string Pname[10];
            int price[10], stock[10];
            fstream readProductBfile;
            int count = 0;
            readProductBfile.open("ProductinstoreB.bin", ios::binary | ios::app | ios::in);
            if (readProductBfile.is_open())
            {

                int i = 0;
                while (count < 10)
                {
                    readProductBfile >> Pname[count];

                    readProductBfile >> price[count];
                    readProductBfile >> stock[count];
                    count++;

                }
                readProductBfile.close();

            }
            for (int i = 0; i < 10; i++)
            {
                M1[i].setProductBName(Pname, i);

                M1[i].setProductBprice(price, i);
                M1[i].setProductBstock(stock, i);
            }
            for (int i = 0; i < 10; i++)
            {
                if (ProductName == M1[i].getProductBName())
                {
                    cout << "\t\t\t\t\tPrice of this Product is :  " << M1[i].getProductBprice() << " Rs\n\n\n";
                }

            }
            system("Pause");
            AdminMenu(MA, MB, MC);
            break;
        }
        case 12:
        {

            string ProductName;
            cout << "\n\n\t\t\t\t\tEnter Product Name : ";
            cin >> ProductName;
            string Pname[10];
            int price[10], stock[10];
            fstream readProductCfile;
            int count = 0;
            readProductCfile.open("ProductinstoreC.bin", ios::binary | ios::app | ios::in);
            if (readProductCfile.is_open())
            {

                int i = 0;
                while (count < 10)
                {
                    readProductCfile >> Pname[count];

                    readProductCfile >> price[count];
                    readProductCfile >> stock[count];
                    count++;

                }
                readProductCfile.close();

            }
            for (int i = 0; i < 10; i++)
            {
                M2[i].setProductCName(Pname, i);

                M2[i].setProductCprice(price, i);
                M2[i].setProductCstock(stock, i);
            }
            for (int i = 0; i < 10; i++)
            {
                if (ProductName == M2[i].getProductCName())
                {
                    cout << "\t\t\t\t\tPrice of this Product is :  " << M2[i].getProductCprice() << " Rs\n\n\n";
                }

            }
            system("Pause");
            AdminMenu(MA, MB, MC);
            break;
        }
        case 13:
        {
            SuperMain();
            break;
        }


        default:
        {
            cout << "\t\t\tYou have Entered Invalid Input!\n\t\t\tPlease Enter Again : ";
            cin >> choice;
            break;
        }

        }
    }
}
//-----------------------------------Admin Menu before signin-----------------------------------------------
void AdminMainMenu(Admin U)
{
    //inProduct ip[10];
    ManagerA AM[10];
    ManagerB BM[10];
    ManagerC CM[10];
    system("cls");

    cout << "\t\t\t------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t                             ==GROCERY STORE==                                   " << endl;
    cout << "\t\t\t------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t                             Admin Main Menu                                 " << endl << endl;
    cout << "\t\t\t                               1-Sign in                                      " << endl;
    cout << "\t\t\t                               2-Sign up                                      " << endl;
    cout << "\t\t\t                               3-Exit                                         " << endl;
    cout << "\n\t\t\t                                                                              " << endl << endl;
    cout << "\t\t\t              Enter any option from the above : ";
    int choice;
    cin >> choice;
    while (choice < 0 || choice>3)
    {
        cout << "\t\t\tINVALID KEY ENTERED!\n\t\t\t Enter Again : ";
        cin >> choice;
    }
    do {
        switch (choice)
        {

        case 1:
        {
            bool status;
            status = U.Asignin();
            if (status == true)
            {
                cout << "\n\n\t\t\t\t\t\tLogin Successful!" << endl << endl;
                AdminMenu(AM, BM, CM);
            }
            break;
        }
        case 2:
        {
            fstream AdminFile;

            AdminFile.open("Admin.bin", ios::binary | ios::app | ios::out);

            U.setAdminData();
            if (AdminFile.is_open())
            {
                AdminFile << U.getAdminName() << endl << U.getAdminPassword() << endl;

            }
            AdminFile.close();
            AdminMainMenu(U);
            break;

        }
        case 3:
        { SuperMain();
        break;
        }
        default:
        {
            break;
        }
        }

    } while (choice != 3);

}
//-----------------------------------A function which display every menu and all the functionality in main-----------------------------------------------
void SuperMain()
{
      system("cls");
    User U;
    Admin A;
    ManagerA AM[10],k;
    ManagerB B;
    ManagerC C;

    ProductsinstoreA P[10];
    ProductsinstoreB P1[10];
    ProductsinstoreC P2[10];
    inProduct ip[10];
    int choice;

    cout << "\t\t\t------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t                              ==GROCERY STORE==                                   " << endl;
    cout << "\t\t\t------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t                                   MAIN MENU                                       " << endl << endl;
    cout << "\t\t\t                               1-Admin                                          " << endl;
    cout << "\t\t\t                               2-User                                           " << endl;
    cout << "\t\t\t                               3-Manager of store A                               " << endl;
    cout << "\t\t\t                               4-Manager of store B                               " << endl;
    cout << "\t\t\t                               5-Manager of store C                              " << endl;
    cout << "\t\t\t                               6-Exit                                           " << endl;
    cout << "\t\t\t------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t                            Enter Choice : ";
    cin >> choice;

    
    
        switch (choice)
        {
        case 1:
        {
            AdminMainMenu(A);
            break;
        }
        case 2:
        {
            UserMainMenu(U, P,P1,P2);
            break;
        }
        case 3:
        {
            managerMainMenuforA(k,ip);
                break;
        }
        case 4:
        {
            managerMainMenuforB(B, ip);
            break;
        }
        case 5:
        {
            managerMainMenuforC(C, ip);
            break;
        }
        case 6:
        {
            cout << "\n\n\t\t\t\t\t\t\tExciting\n\n";
            cout << "\t\t\t------------------------------------------------------------------------------" << endl << endl;
             break;
        }
        default:
        {
            cout << "\t\t\tYou have Entered Invalid Input!\n\t\t\t Please Enter Again : ";
            cin >> choice;
            break;
        }
        }
        system("pause");

}
//-----------------------------------MAIN-----------------------------------------------
int main()

{
    system("color 7C");
    SuperMain();  
     return 0;

}
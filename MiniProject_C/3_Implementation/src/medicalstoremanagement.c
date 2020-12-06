#include<medicalstoremanagement.h>

//medicine to be purchased Function
 int PurchaseMedicine(int number)
 {
  
  int id,check,i,quantity,flag=0;
  char name[100];
  printf("Purchase Medicine\n");
  printf("Enter 1 if you know ID else any other number to enter Name of Medicine\n");
  fflush(stdin);//to flush off the buffer
  scanf("%d",&check);
  if(check==1)
  {
   printf("Enter Id to purchase Medicine\n");
   fflush(stdin);
   scanf("%d",&id);
   for(i=0;i<number;i++)
   {
    if(m[i].id==id)
    {
     flag=1;
     int c;
     printf("These are the details of Medicine\n");
     printf("Name=%s\nPrice=%d\nAvailable Quantity=%d\nCompany=%s\nMfg Date=%s\nExp Date=%s\n",m[i].medicneName,m[i].price,m[i].quantity,m[i].Company,m[i].Mfg_Date,m[i].Exp_Date);
      if(strcmp(m[i].info,"")==0)
      {
       printf("Medicine Review/Info=Not Available\n");
      }
      else
      {
       printf("Medicine Review/Info=%s\n",m[i].info);
      }
     printf("Do you want to purchase %s \nIf Yes Enter 1 else any other number\n",m[i].medicneName);
     fflush(stdin);
     scanf("%d",&c);
     if(c==1)
     {
      printf("Enter Quantity to Purchase\n");
      scanf("%d",&quantity);
      if(m[i].quantity>quantity)
      {
       printf("Total Price to be paid=%d\n",quantity*m[i].price);
      }
      else{
       printf("Please Enter quantity below Available Quantity\n");
      }
     }
     break;
    }
   }
   if(flag==0)
   {
    printf("Entered Id Not Found\n");
   }
  }
  else
  {
   printf("Enter Name to search and Purchase\n");
   fflush(stdin);
   gets(name);
   for(i=0;i<number;i++)
   {
    if(strcmp(m[i].medicneName,name)==0)
    {
     flag=1;
     int c;
     printf("These are the details of Medicine\n");
     printf("Name=%s\nPrice=%d\nAvailable Quantity=%d\nCompany=%s\nMfg Date=%s\nExp Date=%s\n",m[i].medicneName,m[i].price,m[i].quantity,m[i].Company,m[i].Mfg_Date,m[i].Exp_Date);
      if(strcmp(m[i].info,"")==0)
      {
       printf("Medicine Review/Info=Not Available\n");
      }
      else
      {
       printf("Medicine Review/Info=%s\n",m[i].info);
      }
     printf("Do you want to purchase %s \nIf Yes Enter 1 else any other number\n",m[i].medicneName);
     fflush(stdin);
     scanf("%d",&c);
     if(c==1)
     {
      printf("Enter Quantity to Purchase\n");
      scanf("%d",&quantity);
      if(m[i].quantity>quantity)
      {
       printf("Total Price to be paid=%d\n",quantity*m[i].price);
      }
      else
      {
       printf("Please Enter quantity below Available Quantity\n");
      }
     }
     break;
    }
   }
   if(flag==0)
   {
    printf("Entered Name Not Found\n");
   }
  }
  return 1;
 }

 //information about medicine function
 int EnterInfoAboutMedicine(int number)
 {
  return 2;
  int i,flag=0,c,id;
  char name[100],info[100];
  printf("EnterInfoAboutMedicine\nEnter Id of the medicine you want to Review or include Info\n");
  fflush(stdin);
  scanf("%d",&id);
  for(i=0;i<number;i++)
  {
   if(m[i].id==id)
   {
    flag=1;
    printf("These are the details of Medicine\n");
    printf("Name=%s\nPrice=%d\nAvailable Quantity=%d\nCompany=%s\nMfg Date=%s\nExp Date=%s\n",m[i].medicneName,m[i].price,m[i].quantity,m[i].Company,m[i].Mfg_Date,m[i].Exp_Date);
    if(strcmp(m[i].info,"")!=0)
    {
     printf("Review Already Available!\nIf you want to Add a Review Enter 1 else Any other number\n");
     fflush(stdin);
     scanf("%d",&c);
    }
    else
    {
     printf("Enter review(less than 100 Characters)\n");
     fflush(stdin);
     gets(m[i].info);
    }
    if(c==1)
    {
     printf("Enter review(less than 100 Characters)\n");
     fflush(stdin);
     gets(info);
     strcat(m[i].info,"; ");
     strcat(m[i].info,info);
    }
   }
  }
  if(flag==0)
  {
   printf("Entered Name Not Found\n");
  }
 }

 // function for knowing the information of a  particular medicine
 int KnowInfoAboutMedicine(int number)
 {
  return 3;
   int i,flag=0;
   char name[100];
  printf("KnowInfoAboutMedicine\nEnter Name of the medicine you want to see Review and Info\n");
  fflush(stdin);
  gets(name);
  for(i=0;i<number;i++)
  {
   if(strcmp(m[i].medicneName,name)==0)
   {
    flag=1;
    printf("These are the details of Medicine\n");
    printf("Name=%s\nPrice=%d\nAvailable Quantity=%d\nCompany=%s\nMfg Date=%s\nExp Date=%s\n",m[i].medicneName,m[i].price,m[i].quantity,m[i].Company,m[i].Mfg_Date,m[i].Exp_Date);
    if(strcmp(m[i].info,"")!=0)
    {
     printf("Review or Info=%s\n",m[i].info);
    }
    else
    {
     printf("Review or Info=Not Available\n");
    }
   }
  }
  if(flag==0)
  {
   printf("Entered Name Not Found\n");
  }
 }

 //stock of the medicine function
 int StockOfMedicine(int number)
 {
  return 4;
  int i,b=1;
  if(number!=0)
  {
      printf("StockOfMedicine\n");
      printf("Enter 1 to know about the stock of medicine in store\n");
      scanf("%d",&b);
      printf("All Available Items are\n");
   for(i=0;i<number;i++)
   {
    if(m[i].id!=0){
    printf("Id=%d\nName=%s\t\tPrice=%d\tAvailable Quantity=%d\nCompany=%s\t\tMfg Date=%s\tExp Date=%s\n",m[i].id,m[i].medicneName,m[i].price,m[i].quantity,m[i].Company,m[i].Mfg_Date,m[i].Exp_Date);
    if(strcmp(m[i].info,"")!=0)
    {
     printf("Review or Info=%s\n",m[i].info);
    }
    else
    {
     printf("Review or Info=Not Available\n");
    }
    }
   }
  }
  else{
   printf("No Items or Medicines Available\n");
  }
 }

 // function for adding a new medicine
 int AddMedicineinStore(int number,struct Medicine m[])
 {
   return 5;
  printf("AddMedicineinStore\n");
  char name[100];
  printf("Enter Medicine Id\n");
  scanf("%d",&(m[number].id));
  fflush(stdin);
  printf("Enter Medicine Name\n");
  fflush(stdin);
  gets(name);
  strcpy(m[number].medicneName,name);
  printf("Enter Company Name\n");
  fflush(stdin);
  gets(m[number].Company);
  printf("Enter Manufactured Date\n");
  fflush(stdin);
  gets(m[number].Mfg_Date);
  printf("Enter Expiry Date\n");
  fflush(stdin);
  gets(m[number].Exp_Date);
  printf("Enter Quantity\n");
  fflush(stdin);
  scanf("%d",&(m[number].quantity));
  printf("Enter Price\n");
  fflush(stdin);
  scanf("%d",&(m[number].price));
  strcpy(m[number].info,"");
  printf("Medicine with id %d Added Successfully\n",m[number].id);
 }

 //function for deleting a medicine from store
int DeleteMedicineStore(int number)
 {
 return 6;
  printf("DeleteMedicineStore\n");
  int id,i,flag=0,num;
  printf("Enter Id to be deleted\n");
  fflush(stdin);
  scanf("%d",&id);
  for(i=0;i<number;i++)
  {
   if(m[i].id==id)
   {
    flag=1;
    m[i].id=0;
    m[i].price=0;
    m[i].quantity=0;
    strcpy(m[i].medicneName,"");
    strcpy(m[i].Company,"");
    strcpy(m[i].Mfg_Date,"");
    strcpy(m[i].Exp_Date,"");
    strcpy(m[i].info,"");
    num=i;
    break;
   }
  }
  if(flag==1)
  {
   printf("Medicine with %d is Deleted Successfully\n",id);
  }
 }

 //function for changing any details of medicine
 int ChangeMedicineDetails(int number)
 {
  return 7;
  printf("ChangeMedicineDetails\n");
  int id,quantity,choice,c,i;
  printf("Enter id to change Details\n");
  scanf("%d",&id);
  for(i=0;i<number;i++)
  {
   if(m[i].id==id && m[i].id!=0)
   {
    do
    {
        printf("Enter\n1 - Change Quantity\n2 - Change Price\n3 - Change Name\n4 - Change Company\n5 - Change Manufaturing Date\n6 - Change Expiry Date\n7 - Change Info\nAny other number to exit");
        scanf("%d",&choice);
        if(choice==1)
        {
         int quantity;
         printf("Enter Quantity to be changed\n");
         fflush(stdin);
         scanf("%d",&quantity);
         m[i].quantity=quantity;
         printf("Quantity changed Successfully\n");
        }
        if(choice==2)
        {
         int price;
         printf("Enter Price to be changed\n");
         fflush(stdin);
         scanf("%d",&price);
         m[i].price=price;
         printf("Price changed Successfully\n");
        }
        if(choice==3)
        {
         char name[100];
         printf("Enter Name to be changed\n");
         fflush(stdin);
         gets(name);
         strcpy(m[i].medicneName,name);
         printf("Medicine Name changed Successfully\n");
        }
        if(choice==4)
        {
         char company[100];
         printf("Enter company to be changed\n");
         fflush(stdin);
         gets(company);
         strcpy(m[i].Company,company);
         printf("Company changed Successfully\n");
        }
        if(choice==5)
        {
         char mfg[11];
         printf("Enter Manufacturing date to be changed\n");
         fflush(stdin);
         gets(mfg);
         strcpy(m[i].Mfg_Date,mfg);
         printf("Manufacturing Date changed Successfully\n");
        }
        if(choice==6)
        {
         char exp[11];
         printf("Enter Expiry date to be changed\n");
         fflush(stdin);
         gets(exp);
         strcpy(m[i].Exp_Date,exp);
         printf("Expiry Date changed Successfully\n");
        }
        if(choice==7)
        {
         char info[100];
         printf("Enter Info to be changed(Less than 100 Characters)\n");
         fflush(stdin);
         gets(info);
         strcpy(m[i].info,info);
         printf("Info changed Successfully\n");
        }
        if(choice<=0 && choice>7)
        {
         printf("Enter valid Choice\n");
        }
        printf("Enter 1 to Change other Details Else any other number\n");
        fflush(stdin);
        scanf("%d",&c);
    }while(c==1);
    break;
   }
  }
  
 }

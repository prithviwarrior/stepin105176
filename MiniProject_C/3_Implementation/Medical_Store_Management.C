 #include<medicalstoremanagement.h>


  //required functions for management system
 int PurchaseMedicine(int number);//medicine to be purchased
 int EnterInfoAboutMedicine(int number);//information about any medicine and editing the information
 int KnowInfoAboutMedicine(int number);//about any medicine
 int StockOfMedicine(int number);//stock of the medicine available
 int AddMedicineinStore(int number,struct Medicine m[]);//medicine info to store
 int DeleteMedicineStore(int number);//delete a medicine from store
 int ChangeMedicineDetails(int number);//changing the medicine details

 //main function

//int test_main();
 int main(void)
 {
   int i,j,choice, number=0,c;;
   for(i=0;i<100;i++)
   {
    //entering the medicines details
    m[0].id=1;
    m[0].price=120;
    m[0].quantity=30;
   strcpy(m[0].Mfg_Date,"23-04-2019");
   strcpy(m[0].Exp_Date,"24-04-2023");
   strcpy(m[0].medicneName,"Paracetamol");
   strcpy(m[0].Company,"abbott");
   strcpy(m[0].info,"Good Medicine for Fever");

    m[1].id=2;
    m[1].price=130;
    m[1].quantity=30;
   strcpy(m[1].Mfg_Date,"23-07-2020");
   strcpy(m[1].Exp_Date,"24-06-2022");
   strcpy(m[1].medicneName,"Combliflam");
   strcpy(m[1].Company,"Sanofi");
   strcpy(m[1].info,"Good Medicine for Headache, Migrane and Fever");

    m[2].id=3;
    m[2].price=150;
    m[2].quantity=30;
   strcpy(m[2].Mfg_Date,"03-04-2020");
   strcpy(m[2].Exp_Date,"24-03-2023");
   strcpy(m[2].medicneName,"Digene");
   strcpy(m[2].Company,"Abbott");
   strcpy(m[2].info,"Good Medicine for Indigestion");

    m[3].id=4;
    m[3].price=20;
    m[3].quantity=30;
   strcpy(m[3].Mfg_Date,"02-02-2020");
   strcpy(m[3].Exp_Date,"04-01-2022");
   strcpy(m[3].medicneName,"Drotin-M");
   strcpy(m[3].Company,"Martin and Harris");
   strcpy(m[3].info,"Good Medicine for Abdominal pain Bloating");

    m[4].id=5;
    m[4].price=50;
    m[4].quantity=30;
   strcpy(m[4].Mfg_Date,"23-10-2019");
   strcpy(m[4].Exp_Date,"20-09-2022");
   strcpy(m[4].medicneName,"Flunarin 10");
   strcpy(m[4].Company,"Fdc Limited");
   strcpy(m[4].info,"Good Medicine for Blood Flow, Dizziness and Vertigo");

    m[5].id=6;
    m[5].price=120;
    m[5].quantity=30;
   strcpy(m[5].Mfg_Date,"13-06-2020");
   strcpy(m[5].Exp_Date,"28-05-2022");
   strcpy(m[5].medicneName,"Acenextp");
   strcpy(m[5].Company,"Carola");
   strcpy(m[5].info,"Good Medicine for pain relief and Ankolysing spondilyitis");

    m[6].id=7;
    m[6].price=90;
    m[6].quantity=30;
   strcpy(m[6].Mfg_Date,"23-12-2019");
   strcpy(m[6].Exp_Date,"26-11-2022");
   strcpy(m[6].medicneName,"Grenil");
   strcpy(m[6].Company,"Karnataka antiseditis pharmacetical ltd");
   strcpy(m[6].info,"Good Medicine for nausea and migrane");

    m[7].id=8;
    m[7].price=150;
    m[7].quantity=30;
   strcpy(m[7].Mfg_Date,"23-07-2020");
   strcpy(m[7].Exp_Date,"04-02-2023");
   strcpy(m[7].medicneName,"Cifran-500");
   strcpy(m[7].Company,"SUN Pharmacetical Ltd");
   strcpy(m[7].info,"Good Medicine for Lungs infection and Bone infection");

    m[8].id=9;
    m[8].price=120;
    m[8].quantity=30;
   strcpy(m[8].Mfg_Date,"23-01-2019");
   strcpy(m[8].Exp_Date,"24-04-2023");
   strcpy(m[8].medicneName,"R-cin 600");
   strcpy(m[8].Company,"Lupin");
   strcpy(m[8].info,"Good Medicine for Tuberculosis");

    m[9].id=10;
    m[9].price=220;
    m[9].quantity=30;
   strcpy(m[9].Mfg_Date,"13-03-2020");
   strcpy(m[9].Exp_Date,"14-02-2023");
   strcpy(m[9].medicneName,"Floxip");
   strcpy(m[9].Company,"Abott");
   strcpy(m[9].info,"Good Medicine for all types of infections");
   }
   //test_main();
  // return 0;
  do{

  printf("Enter\n1 - Purchase Medicine\n2 - Enter Information about a Medicine\n3 - Stock of Medicine in Store\n4 - Medicine Information\n5 - Add Medicine\n6 - Delete a Medicine\n7 - Change Quantity of Medicine\n");
   scanf("%d",&choice);
   switch(choice)
   {
    case 1:
    {
     PurchaseMedicine(number+1);
     break;
    }
     case 2:
    {
     EnterInfoAboutMedicine(number+1);
     break;
    }
    case 3:
      {
       StockOfMedicine(number+1);
       break;
      }
    case 4:
      {
       KnowInfoAboutMedicine(number+1);
       break;
      }
    case 5:
      {
       ++number;
       AddMedicineinStore(number,m);
       break;
      }
    case 6:
      {
       DeleteMedicineStore(number+1);
       break;
      }
    case 7:
      {
       ChangeMedicineDetails(number+1);
       break;
      }
   }
     printf("To Continue with other Options Enter 1 Else any other number\n");
     scanf("%d",&c);
   }while(c==1);
}

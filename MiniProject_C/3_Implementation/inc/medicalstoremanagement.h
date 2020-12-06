/**
* @mainpage Medical Store Management System  by Samudrala Apurva with PS:ID-104864 @subpage medicalstoremanagement.h
* @file medicalstoremanagement.h
* Medical store management system with 7 applications
*
*/

#ifndef _MEDICAL_STORE_MANAGEMENT_H_
#define _MEDICAL_STORE_MANAGEMENT_H_

//header files
#include<stdio.h>
//#include<conio.h>
#include<string.h>
#include<ctype.h>

//medicine structure
struct Medicine
 {
   int id,price,quantity;
   char medicneName[100],Company[100],Mfg_Date[11],Exp_Date[11],info[5000];
  }m[100];


//all the functions of the system
/**
*  medicine to be purchased
* @param[in] number
* @return details of the medicine to be purchased
* @return price of the medicine if medicine is to be purchased
*/
int PurchaseMedicine(int number);

/**
*  enter information about the medicine
* @param[in] number
* @return information about the medicine will be displayed
* @return review of the medicine can be added (if any)
*/
int EnterInfoAboutMedicine(int number);

/**
* knowing information about the medicine
* @param[in] number
* @return information about the medicine will be displayed
*/
int KnowInfoAboutMedicine(int number);

/**
* stock of medicine in the store
* @param[in] number
* @return information about the stock of medicines in the store will be displayed
*/
int StockOfMedicine(int number);

/**
* addition of new medicine to the store
* @param[in] number
* @param[in] details of the medicine to be added
* @return new medicine information will be added successfully
*/
int AddMedicineinStore(int number, struct Medicine m[]);

/**
* deletion of medicine from the store
* @param[in] number
* @return  medicine information will be deleted
*/
int DeleteMedicineStore(int number);

/**
* change of medicine details in the store
* @param[in] number
* @return  details of the medicine will be changed
*/
int ChangeMedicineDetails(int number);


#endif // _MEDICAL_STORE_MANAGEMENT_H_

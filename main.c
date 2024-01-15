#include <stdio.h>
#include "validations.c"
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define Max 50

struct Bank {
  char bank_name[Max];
  char account_holder_name[Max];
  char ifsc_code[Max];
  int age;
  char gender[10];
  char dob[Max];
  char city[Max];
  char address[Max];
  char account_type[Max];
  char aadhar[Max];
  char pan[Max];
  char account_number[Max];
  int balance;
};

//create bank account struct
struct Bank createBankAccount() {
  struct Bank b;
  printf("\ncreate account function called \n");
  
  // hard code names
  strcpy(b.bank_name, "ICICI");
  strcpy(b.account_holder_name, "Sarang Pramod Wadode");
  b.age = 23;
  strcpy(b.gender, "Male");
  strcpy(b.dob, "02/05/2000");
  strcpy(b.address, "xyz");
  strcpy(b.city, "Pune");
  strcpy(b.account_type, "Salary");
  strcpy(b.aadhar, "311860530326");
  strcpy(b.pan, "AGNPW5165B");

  // //bank name
  // int ch = chooseBankName();
  // switch (ch)
  // {
  // case 1:
  //   strcpy(b.bank_name, "ICICI");
  //   break;
  // case 2:
  //   strcpy(b.bank_name, "AXIS");
  //   break;
  // case 3:
  //   strcpy(b.bank_name, "ICICI");
  //   break;
  // case 4:
  //   strcpy(b.bank_name, "HDFC");
  //   break;
  // default:
  //   printf("Enter valid choice!");
  // }
  // printf("You selected %s bank\n", b.bank_name);

  // //accountholder name
  // int flag = 1;
  // printf("Enter bank account holder name: \n");
  // while (flag) {
  //   printf("First Middle Last: ");
  //   fgets(b.account_holder_name, Max, stdin);
  //   b.account_holder_name[strlen(b.account_holder_name) - 1] = '\0';
  //   //validate
  //   int n = validateBankAccountholderName(b.account_holder_name);
  //   if(n) {
  //     flag = 0;
  //     printf("valid\n");
  //   } else {
  //     printf("not valid\n");
  //   }
  // }
  // printf("bank account holder name: %s\n", b.account_holder_name);
  
  // //age
  // int age=1;
  // while (age) {
  //   printf("Enter your age: ");
  //   scanf("%d", &b.age);
  //   if (validateAge(b.age)) {
  //     printf("valid\n");
  //     age=0;
  //   }else {
  //     printf("not valid\n");
  //   }
  // }
  // printf("age is: %d\n", b.age);
  // getchar();

  // //gender
  // int cg = chooseGender();
  // switch (cg)
  // {
  //   case 1:
  //     strcpy(b.gender, "Male");
  //     break;
  //   case 2:
  //     strcpy(b.gender, "Female");
  //     break;
  //   case 3:
  //     strcpy(b.gender, "Other");
  //     break;
  //   default:
  //     printf("Invalid choice");
  // }
  // printf("Your gender is: %s\n", b.gender);
  
  // //dob
  // int v_dob = 1;
  // getchar();
  // while(v_dob) {
  //   printf("Enter DOB: dd-mm-yyyy: ");
  //   fgets(b.dob, Max, stdin);
  //   b.dob[strlen(b.dob) - 1] = '\0';
  // // strcpy(b.dob, "02052000");
  //   if(validateDOB(b.dob)) {
  //     printf("valid\n");
  //     v_dob=0;
  //   } else{
  //     printf("not valid\n");
  //   }
  // }
  // printf("your dob is: %s\n", b.dob);
  
  // //address
  // printf("Enter address: ");
  // fgets(b.address, Max, stdin);
  // b.address[strlen(b.address) - 1] = '\0';

  // //city
  // int cc = chooseCity();
  // switch (cc)
  // {
  //   case 1:
  //     strcpy(b.city, "Pune");
  //     break;
  //   case 2:
  //     strcpy(b.city, "Mumbai");
  //     break;
  //   case 3:
  //     strcpy(b.city, "Delhi");
  //     break;
  //   default:
  //     printf("Invalid choice");
  // }
  // printf("Your city is: %s", b.city);
  
  // //account type
  // int cat = chooseAccountType();
  // switch (cat)
  // {
  //   case 1:
  //     strcpy(b.account_type, "Current");
  //     break;
  //   case 2:
  //     strcpy(b.account_type, "Saving");
  //     break;
  //   case 3:
  //     strcpy(b.account_type, "Salary");
  //     break;
  //   default:
  //     printf("Invalid choice");
  // }
  // getchar();
  // printf("Your account type is: %s\n", b.account_type);
  
  // //aadhaar
  // int va=1;
  // while (va)
  // {
  //   printf("Enter aadhaar number: ");
  //   fgets(b.aadhar, Max, stdin);
  //   b.aadhar[strlen(b.aadhar) - 1] = '\0';
  //   // strcpy(b.aadhar, "311860530326");
  //   if(validAadhaar(b.aadhar)) {
  //     printf("Valid Aadhaar Number\n");
  //     va=0;
  //   } else {
  //     printf("Aadhaar Number not valid\n");
  //   }
  // }
  
  // //pan
  // int vp=1;
  // while(vp) {
  //   printf("Enter PAN: ");
  //   // getchar();
  //   fgets(b.pan, Max, stdin);
  //   b.pan[strlen(b.pan) - 1] = '\0';
  //   // strcpy(b.pan, "AGNPW5165B");
  //   if (validPan(b.pan)) {
  //     printf("Valid PAN\n");
  //     vp=0;
  //   }else {
  //     printf("Not a valid PAN\n");
  //   }
  // }
  
  //generate account number
  char acn[Max] = "";
  acn[0] = toupper(b.account_holder_name[0]);
  int next = 1;
  //take first 3 uppercase letters
  for(int i=0; i<strlen(b.account_holder_name); i++) {
    if (b.account_holder_name[i] == ' ') {
      acn[next] = toupper(b.account_holder_name[i+1]);
      next += 1;
    }
  }
  //generate 8 digit random number
  int randomNumber = rand() % 90000000 + 10000000;
  // printf("%d\n", randomNumber);
  //convert number to string
  int maxDigits = snprintf(NULL, 0, "%d", randomNumber);
  char numberString[maxDigits + 1];
  snprintf(numberString, sizeof(numberString), "%d", randomNumber);
  //concatenate string and number
  strcat(acn, numberString);
  // printf("array: %s\n", acn);
  //assigne the value to bank account number
  strcpy(b.account_number, acn);

  //generate ifsc code
  strcpy(b.ifsc_code, "ICIC000561");

  //set balance=0
  b.balance = 0;
  printf("Account created successfully\n");
  printf("\nYour bank account number is: %s\n", b.account_number);
  printf("------------------xx--------------------\n");
  return b;
};

//display bank details
void displayBankDetails(struct Bank b[2]) {
  printf("Bank account holder details\n");
  for(int i=0; i<2; i++) {
    printf("-----------------xx--------------\n");
    printf("Bank Details of customer %d are: \n", i);
    printf("Bank: %s\n", b[i].bank_name);
    printf("Bank account number: %s\n", b[i].account_number);
    printf("Bank account holder name: %s\n", b[i].account_holder_name);
    printf("IFSC code: %s\n", b[i].ifsc_code);
    printf("Age: %d \n", b[i].age);
    printf("Gender: %s\n", b[i].gender);
    printf("DOB: %s\n", b[i].dob);
    printf("Address: %s\n", b[i].address);
    printf("City: %s\n", b[i].city);
    printf("Account type: %s\n", b[i].account_type);
    printf("Aadhaar number: %s\n", b[i].aadhar);
    printf("PAN number: %s\n", b[i].pan);
    printf("Bank Balance: %d\n", b[i].balance);
  }
}

//update account details
void updateBankDetails(struct Bank* b) {
  printf("Update function \n");
  //ask to enter account number
  char acc_num[Max];
  printf("Enter your account number: ");
  fgets(acc_num, Max, stdin);
  acc_num[strlen(acc_num) - 1] = '\0';

  //we have to loop through here
  for(int i=0; i<2; i++) {
    // printf("%s\n", b[i].account_number);
    if (strcmp(b[i].account_number, acc_num) == 0) {
      printf("Account Detected Fetching Info... \n");
      int flag = 1;
      int exit = 1;
      while (exit) {
        printf("-------------------xx--------------------\n");
        printf("What do you want to update \n");
        printf("1) Update account holder name \n");
        printf("2) Update address \n");
        printf("3) Update DOB \n");
        printf("4) Don't want to update anything \n");
        printf("Enter your choice: ");
        int ch;
        scanf("%d",&ch);
        int flag_update_name = 1;
        int v_dob = 1;
        switch(ch) {
          case 1:
            printf("Enter new account holder name \n");
            char updated_name[Max];

            // int flag_update_name = 1;
            while (flag_update_name) {
              printf("First Middle Last: ");
              //take input
              
              fgets(updated_name, Max, stdin);
              
              updated_name[strlen(updated_name) - 1] = '\0';
              // printf("Entered name: %s\n", updated_name);

              //validate
              int n = validateBankAccountholderName(updated_name);
              if(n) {
                flag_update_name = 0;
                printf("valid and updating account holder name\n");
                strcpy(b[i].account_holder_name, updated_name);
              } else {
                printf("Enter valid name separated by two spaces\n");
              }
            }
            printf("Updated bank account holder name: %s\n", b[i].account_holder_name);
            printf("--------------------xx---------------------\n");
            break;

          case 2:
            printf("Enter new address: ");
            char updated_address[Max];
            getchar();
            fgets(updated_address, Max, stdin);
            updated_address[strlen(updated_address) - 1] = '\0';
            strcpy(b[i].address, updated_address);
            printf("Updated address: %s\n", b[i].address);
            break;

          case 3:
            printf("Enter new DOB \n");
            char updated_dob[Max];

            // int v_dob = 1;
            getchar();
            while(v_dob) {
              printf("Enter new DOB: dd-mm-yyyy: ");
              fgets(updated_dob, Max, stdin);
              updated_dob[strlen(updated_dob) - 1] = '\0';
              //validate
              if(validateDOB(updated_dob)) {
                printf("Valid! Updating DOB \n");
                strcpy(b[i].dob, updated_dob);
                v_dob=0;
              } else{
                printf("Please enter DOB in dd-mm-yy format\n");
              }
            }
            printf("Updated DOB: %s\n", b[i].dob);
            printf("--------------------xx---------------------\n");
            break;
          case 4:
            printf("Exited from update funtion.\n");
            // exit(1);
            exit=0;
            break;
          default:
            printf("Invalid choice \n");
        }
      }
      
    } else {
      printf("Account number not matched \n");
    }
  }
}

//deposite money
void deposite(struct Bank* b) {
  //ask to enter account number
  printf("------------------xx--------------------\n");
  printf("Deposite function\n");
  char acc_num[Max];
  printf("Enter your account number: ");
  fgets(acc_num, Max, stdin);
  acc_num[strlen(acc_num) - 1] = '\0';
  // getchar();

  //match account number
  for(int i=0; i<2; i++) {
    printf("bnk acc: %s acc num: %s\n", b[i].account_number, acc_num);
    if (strcmp(b[i].account_number, acc_num) == 0) {
      printf("Account Detected Fetching Info... \n");
      printf("Enter amount to be deposited: ");
      int amount;
      scanf("%d", &amount);
      b[i].balance += amount;
      printf("Balance deposited successfully\n");
      printf("New Balance: %d\n", b[i].balance);
      break;
    } else {
      printf("Account number not matched \n");
    }
  }
}

//withdraw money
void withdraw(struct Bank* b) {
  //ask to enter account number
  printf("------------------xx--------------------\n");
  printf("Withdraw function\n");
  char acc_num[Max];
  printf("Enter your account number: ");
  // getchar();
  fgets(acc_num, Max, stdin);
  acc_num[strlen(acc_num) - 1] = '\0';
  // getchar();

  for(int i=0; i<2; i++) {
    printf("bacn %s acc num: %s\n", b[i].account_number, acc_num);
    if (strcmp(b[i].account_number, acc_num) == 0) {
      printf("Account Detected Fetching Info... \n");
      printf("Enter amount to be withdrawn: ");
      int amount;
      scanf("%d", &amount);
      if(amount < b[i].balance) {
        b[i].balance -= amount;
        printf("Balance withdrawn successfully\n");
        printf("New Balance: %d\n", b[i].balance);
        break;
      } else {
        printf("Insufficient funds\n");
        printf("Your account balance is %d", b[i].balance);
        break;
      }
    } else {
      printf("Account number not matched \n");
    }
  }
}

//balance enquiry
void checkAccountBalance(struct Bank* b) {
  //ask to enter account number
  printf("------------------xx--------------------\n");
  printf("Account Balance function\n");
  char acc_num[Max];
  printf("Enter your account number: ");
  // getchar();
  fgets(acc_num, Max, stdin);
  acc_num[strlen(acc_num) - 1] = '\0';
  // getchar();

  for(int i=0; i<2; i++) {
    printf("bacn %s acc num: %s\n", b[i].account_number, acc_num);
    if (strcmp(b[i].account_number, acc_num) == 0) {
      printf("Account Detected Fetching Info... \n");
      printf("Your account balance is: %d\n", b[i].balance);
      break;
    } else {
      printf("Account number not matched \n");
    }
  }
}

//search account details
void searchBankDetails(struct Bank* b) {
  //ask to enter account number
  printf("Search Function\n");
  int search_flag=1;
  while (search_flag) {
    printf("-------------------xx--------------------\n");
    printf("Search details of bank account holder by: \n");
    printf("1) Account number \n");
    printf("2) Name \n");
    printf("3) Type of account \n");
    printf("4) Don't want to search anything \n");
    printf("Enter your choice: ");
    int ch;
    scanf("%d", &ch);
    // getchar();
    int fg = 1;
    int flag_acn = 1;
    int cat;
    switch(ch) {
      case 1:
        printf("Search by account number \n");
        char entered_number[Max];

        while (fg) {
          printf("Enter account number: ");
          //take input
          getchar();
          fgets(entered_number, Max, stdin);
          entered_number[strlen(entered_number) - 1] = '\0';
          // printf("Entered name: %s\n", updated_name);

          //validate to do
          // int n = validateBankAccount(updated_name);

          for(int i=0; i<2; i++) {
              if(strcmp(b[i].account_number, entered_number)==0) {
                printf("-----------------xx--------------\n");
                printf("Bank account found, fetching data...\n");
                printf("Bank Details of customer %s are: \n", b[i].account_number);
                printf("Bank: %s\n", b[i].bank_name);
                // printf("Bank account number: %s\n", b[i].account_number);
                printf("Bank account holder name: %s\n", b[i].account_holder_name);
                printf("IFSC code: %s\n", b[i].ifsc_code);
                printf("Age: %d \n", b[i].age);
                printf("Gender: %s\n", b[i].gender);
                printf("DOB: %s\n", b[i].dob);
                printf("Address: %s\n", b[i].address);
                printf("City: %s\n", b[i].city);
                printf("Account type: %s\n", b[i].account_type);
                printf("Aadhaar number: %s\n", b[i].aadhar);
                printf("PAN number: %s\n", b[i].pan);
                fg=0;
                break;
              }else {
                printf("not found\n");
              }
            }
          // if(n) {
          //   flag = 0;
          //   printf("valid and fetching account holder details\n");
          //   //fetch details
            
          // } else {
          //   printf("Enter valid name separated by two spaces\n");
          // }
        }
        break;

      case 2:
        printf("Enter new account holder name \n");
        char updated_name[Max];

        while (flag_acn) {
          printf("First Middle Last: ");
          //take input
          getchar();
          fgets(updated_name, Max, stdin);
          updated_name[strlen(updated_name) - 1] = '\0';
          // printf("Entered name: %s\n", updated_name);

          //validate
          int n = validateBankAccountholderName(updated_name);
          if(n) {
            flag_acn = 0;
            // printf("valid and fetching account holder details\n");
            //fetch details
            for(int i=0; i<2; i++) {
              if(strcmp(b[i].account_holder_name, updated_name)==0) {
                printf("-----------------xx--------------\n");
                printf("Bank account found, fetching data...\n");
                printf("Bank Details of customer %s are: \n", b[i].account_holder_name);
                printf("Bank: %s\n", b[i].bank_name);
                printf("Bank account number: %s\n", b[i].account_number);
                // printf("Bank account holder name: %s\n", b[i].account_holder_name);
                printf("IFSC code: %s\n", b[i].ifsc_code);
                printf("Age: %d \n", b[i].age);
                printf("Gender: %s\n", b[i].gender);
                printf("DOB: %s\n", b[i].dob);
                printf("Address: %s\n", b[i].address);
                printf("City: %s\n", b[i].city);
                printf("Account type: %s\n", b[i].account_type);
                printf("Aadhaar number: %s\n", b[i].aadhar);
                printf("PAN number: %s\n", b[i].pan);
                break;
              }else {
                printf("not found\n");
              }
            }
          } else {
            printf("Enter valid name separated by two spaces\n");
          }
        }
        // printf("Updated bank account holder name: %s\n", b[i].account_holder_name);
        printf("--------------------xx---------------------\n");
        break;

      case 3:
        //by choice of account
        printf("Search by type of account e.g.(Salary) \n");
        cat = chooseAccountType();
        char type[Max];
        switch (cat)
        {
          case 1:
            strcpy(type, "Current");
            break;
          case 2:
            strcpy(type, "Saving");
            break;
          case 3:
            strcpy(type, "Salary");
            break;
          default:
            printf("Invalid choice");
        }
        getchar();
        printf("-------------------------xx---------------------------\n");
        printf("Search by account type: %s\n", type);
        for (int i=0; i<2; i++) {
          if(strcmp(b[i].account_type, type) == 0) {
            printf("-----------------xx--------------\n");
            printf("Bank account found, fetching data...\n");
            printf("Bank Details of customer %s are: \n", b[i].account_number);
            printf("Bank: %s\n", b[i].bank_name);
            printf("Bank account number: %s\n", b[i].account_number);
            printf("Bank account holder name: %s\n", b[i].account_holder_name);
            printf("IFSC code: %s\n", b[i].ifsc_code);
            printf("Age: %d \n", b[i].age);
            printf("Gender: %s\n", b[i].gender);
            printf("DOB: %s\n", b[i].dob);
            printf("Address: %s\n", b[i].address);
            printf("City: %s\n", b[i].city);
            // printf("Account type: %s\n", b[i].account_type);
            printf("Aadhaar number: %s\n", b[i].aadhar);
            printf("PAN number: %s\n", b[i].pan);
          }
        }
        printf("--------------------xx---------------------\n");
        break;
      case 4:
        printf("Exited from search.\n");
        // exit(1);
        search_flag=0;
      default:
        printf("Invalid choice \n");
    }
  }
}


void fundTransfer(struct Bank* b) {
  // printf("-------------------xx---------------------------\n");
  printf("Welcome to fund tranfer function\n");
  char acc_num[Max];
  char bn_acc_num[Max];
  //enter your bank account
  int flag_an=1;
  // getchar();

  while(flag_an) {
    printf("----------------------------xx-----------------------------\n");
      printf("Enter your bank account number: ");
      fgets(acc_num, Max, stdin);
      acc_num[strlen(acc_num) - 1] = '\0';
      //validate
      printf("Entered Bank account number is: %s\n", acc_num);
      int n = validateBankAccountNumber(acc_num);
      if(n) {
        // flag_an=0;
        printf("Valid bank account number.\n");
        //check if account present
        // int acc_found=1;
        for(int i=0; i<2; i++) {
          if(strcmp(b[i].account_number, acc_num)==0) {
            //enter bank account to tranfer ammount
            flag_an=0;
            int flag_ban=1;
            while(flag_ban) {
              printf("-----------------------xx-------------------------\n");
              printf("Enter beneficiary bank account number: ");
              fgets(bn_acc_num, Max, stdin);
              bn_acc_num[strlen(bn_acc_num) - 1] = '\0';
              //validate
              printf("Entered Bank account number is: %s\n", bn_acc_num);
              int m = validateBankAccountNumber(bn_acc_num);
              if(m) {
                // flag_ban=0;
                printf("Valid bank account number.\n");
                //again check if account is present
                for(int j=0; j<2; j++) {
                  if(strcmp(b[j].account_number, bn_acc_num)==0) {
                    flag_ban=0;
                    printf("Enter amount to be tranfered: ");
                    int fund_tranfer;
                    scanf("%d",&fund_tranfer);
                    getchar();
                    printf("-----------------------xx--------------------------\n");
                    if(fund_tranfer<b[i].balance){
                      b[i].balance -= fund_tranfer;
                      b[j].balance += fund_tranfer;
                      printf("Amount of RS %d tranfered to %s\n", fund_tranfer, b[j].account_number);
                      printf("1 Your new bank balance is: %d\n", b[i].balance);
                      printf("2 Your new bank balance is: %d\n", b[j].balance);
                    }else {
                      printf("Insufficient funds.\n");
                      printf("Your account balance is: %d\n", b[i].balance);
                    }
                  } else{
                    // printf("Account not found\n");
                  }
                }
              } 
              if(flag_ban) {
                printf("Account not found\n");
              }
              
            }
          }else {
            // printf("Account not found. Please check your entered number.\n");
          }
        }
      } 
      if(flag_an){
        printf("Account not found\n");
      }
    }
}


int main() {
  printf("-----------------Bank Project-------------------\n");
  struct Bank b[2];
  for(int i=0; i<2; i++) {
    b[i] = createBankAccount();
  }

  while(1) {
    printf("\n-------------------xx----------------------\n");
    printf("What do you want to do\n");
    printf("1) Create account\n");
    printf("2) Update account\n");
    printf("3) Deposite\n");
    printf("4) Withdraw\n");
    printf("5) Search\n");
    printf("6) Balance Enquery\n");
    printf("7) Fund transfer \n");
    printf("8) Exit\n");
    printf("9) Display account details \n");
    int ch;
    printf("Enter your choice: ");
    scanf("%d", &ch);
    getchar();
    switch (ch)
    {
    case 1:
      printf("\nYou chose to create account\n");
      // create bank accounts
      for(int i=0; i<2; i++) {
        b[i] = createBankAccount();
      }
      break;

    case 2:
      printf("\nYou chose to update account\n");
      updateBankDetails(b);
      break;

    case 3:
      printf("\nYou chose to deposite money\n");
      deposite(b);
      break;

    case 4:
      printf("\nYou chose to withdraw money\n");
      withdraw(b);
      break;

    case 5:
      printf("\nYou chose to search account\n");
      searchBankDetails(b);
      break;

    case 6:
      printf("\nYou chose Balance Enquery\n");
      checkAccountBalance(b);
      break;

    case 7:
      printf("\nYou chose to tranfer transfer\n");
      fundTransfer(b);
      break;
    
    case 8:
      printf("\nYou chose to exit from switch\n");
      exit(1);
      break;

    case 9:
      printf("\nYou chose to display bank accounts\n");
      displayBankDetails(b);
      break;
    
    default:
      printf("Invalid choice enter again \n");
      getchar();
      break;
    }
  }
  
  // deposite(b);
  // fundTransfer(b);
  return 0;
}


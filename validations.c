#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#define Max 50

int chooseBankName() {
  int n;
  printf("Available Banks\n");
  printf("1) ICICI\n");
  printf("2) AXIS\n");
  printf("3) IDBI\n");
  printf("4) HDFC\n");
  printf("Choose your bank: ");
  scanf("%d", &n);
  getchar();
  return n;
}

int validateBankAccountholderName(char name[]) {
  printf("bank accountholder name is: %s\n", name);
  int spaces = 0;
  for(int i=0; i<strlen(name); i++) {
    //check alphabet
    if(name[i] != ' ' && isalpha(name[i]) == 0) {
      printf("Please enter alphabets\n");
      return 0;
    }
    //count spaces
    if (name[i] == ' ') {
      spaces += 1;
    }
  }
  // printf("number of spaces: %d", spaces);
  if (spaces != 2){
    printf("Please Enter 3 words with 2 spaces \n");
    return 0;
  }
  return 1;
}

int validateAge(int age) {
  // if(!isalnum(age)) {
  //   printf("Please enter number\n");
  //   return 0;
  // }
  //for age>10
  if(age < 10) {
    printf("Enter Age>10: ");
    return 0;
  }
  return 1;
}

int chooseGender() {
  int ch;
  printf("Gender Options: \n");
  printf("1) Male\n");
  printf("2) Female\n");
  printf("3) Others\n");
  printf("Enter Gender: ");
  scanf("%d", &ch);
  return ch;
}

int validateDOB(char dob[]) {
  if(strlen(dob) == 10) {
    for(int i=0; i<2; i++) {
      if(!(isdigit(dob[i]))) {
        printf("please enter digits as dd\n");
        return 0;
      }
    }
    for(int i=3; i<5; i++) {
      if(!(isdigit(dob[i]))) {
        printf("please enter digits as mm\n");
        return 0;
      }
    }
    for(int i=6; i<10; i++) {
      if(!(isdigit(dob[i]))) {
        printf("please enter digits as yyyy\n");
        return 0;
      }
    }
    if((!(dob[2]=='-' || dob[2]=='/') || !(dob[5]=='-' || dob[5]=='/'))) {
      printf("use - or / to separate dd-mm-yyyy\n");
      return 0;
    }
  } else{
    printf("Enter DOB in dd-mm-yyyy format\n");
    return 0;
  }
  return 1;
}

int chooseCity() {
  int ch;
  printf("City Options: \n");
  printf("1) Pune\n");
  printf("2) Mumbai\n");
  printf("3) Delhi\n");
  printf("Enter City: ");
  scanf("%d", &ch);
  return ch;
}

int chooseAccountType() {
  int ch;
  printf("Account Types: \n");
  printf("1) Current\n");
  printf("2) Saving\n");
  printf("3) Salary\n");
  printf("Enter Account Type: ");
  scanf("%d", &ch);
  return ch;
}

int validAadhaar(char aadhaar[]) {
  if(strlen(aadhaar) == 12) {
    for(int i=0; i<12; i++) {
      //check digit
      if(!(isdigit(aadhaar[i]))) {
        printf("please enter digits\n");
        return 0;
      }
    }
  }else {
    printf("Please enter 12 digit aadhaar number\n");
    return 0;
  }
  return 1;
}

int validPan(char pan[]) {
  if(strlen(pan) == 10) {
    for(int i=0; i<5; i++) {
      //check 1-5 uppercase alphas
      if(!(isalpha(pan[i])) || !(isupper(pan[i]))) {
        printf("Please enter first 5 uppecase alphabets \n");
        return 0;
      }
    }
    for(int i=5; i<9; i++) {
      //check 6-9 digits
      if(!(isdigit(pan[i]))) {
        printf("Please enter digits at 6-9th place\n");
        return 0;
      }
    }
    //for 10th character
    if(!(isalpha(pan[9])) || !(isupper(pan[9]))) {
      printf("Please enter uppecase alphabets at 10th place\n");
      return 0;
    }
  }else {
    printf("Please enter 10 digit pan number\n");
    return 0;
  }
  return 1;
}

int validateBankAccountNumber(char number[]) {
  if(strlen(number) == 11) {
    // printf("Valid Bank account number\n");
    //check for first 3 chars
    for(int i=0; i<3; i++) {
      if(!(isalpha(number[i]))) {
        printf("First three characters should be capital alphabets\n");
        return 0;
      }
    }
    // check for next 8 numbers
    for(int i=3; i<11; i++) {
      if(!(isdigit(number[i]))) {
        printf("4-11 characters should be digits\n");
        return 0;
      }
    }
    return 1;
  } else{
    printf("Enter 11 digits bank account number\n");
  }
  return 0;
}

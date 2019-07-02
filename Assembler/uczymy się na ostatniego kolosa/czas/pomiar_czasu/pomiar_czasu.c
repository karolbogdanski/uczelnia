//#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<sys/time.h>
#include<sys/resource.h>
#include "pomiar_czasu.h"

static struct rusage rp;
static struct timeval tp;
static struct timezone tzp;


void inicjuj_czas()
{
  getrusage(RUSAGE_SELF, &rp);
  gettimeofday(&tp,&tzp);
}


void drukuj_czas()
{ 
  
  struct rusage rk;
  struct timeval tk;
  double systime, usrtime,daytime;

  getrusage(RUSAGE_SELF, &rk);
  gettimeofday(&tk, &tzp);
  
  systime = ( rk.ru_stime.tv_usec - rp.ru_stime.tv_usec ) / 1.0e6 ;
  systime += rk.ru_stime.tv_sec - rp.ru_stime.tv_sec;

  usrtime = ( rk.ru_utime.tv_usec - rp.ru_utime.tv_usec ) / 1.0e6 ;
  usrtime += rk.ru_utime.tv_sec - rp.ru_utime.tv_sec;
  
  daytime = ( tk.tv_usec - tp.tv_usec ) / 1.0e6 + tk.tv_sec - tp.tv_sec ;
  
  printf("czas CPU systemu     = %lf\n",systime);
  printf("czas CPU uzytkownika = %lf\n",usrtime);
  printf("czas zegarowy        = %lf\n",daytime);
  
}

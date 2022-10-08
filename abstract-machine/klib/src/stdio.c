#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <string.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
   //panic("Not implemented");
   int a=1;
   return a;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  int a=1;
  return a;
   //panic("Not implemented");
}




void itoa(unsigned int n, char * buf)
{
        int i;  
        if(n < 10){
            buf[0] = n + '0';
            buf[1] = '\0';
            return;
        }
        itoa(n / 10, buf);
        for(i=0; buf[i]!='\0'; i++);
        buf[i] = (n % 10) + '0';
        buf[i+1] = '\0';
}

int sprintf(char *out, const char *fmt, ...) {
  //panic("Not implemented");

    //int count = 0;
    //char c;
    char *s;
    int num;
    //int index = 0;
    //int ret = 2;
    char buf[65];
    //char digit[16];
    //int num = 0;
    //int len = 0;
    memset(out, 0, strlen(out));
    memset(buf, 0, sizeof(buf));
    //memset(digit, 0, sizeof(digit));
    va_list ap;
    
    va_start(ap, fmt);
    while(*fmt != '\0'){
      
      if(*fmt == '%'){
        //panic("Not implemented");
        fmt++;
        switch(*fmt){
          case 'd':{
            //panic("Not implemented");
          
            num = va_arg(ap, int);
            if(num < 0){
              
          
              *out = '-';
              out++;
              num=-num;              
            }
            itoa(num, buf);
            memcpy(out, buf, strlen(buf));
            out += strlen(buf);
            
            break;

          }

          case 's':{
            //panic("Not implemented");
            s = va_arg(ap, char *);
            memcpy(out, s, strlen(s));
            out += strlen(s);
            
            break;
          }
          default:{
            //panic("Not implemented");
            break;
          }
        }
      }
      else {
          *out = *fmt;
          out++;
          //panic("Not implemented");
          if(*fmt == '\n'){}
        }
      fmt++;

    }
  va_end(ap);
  return 0;
}


int snprintf(char *out, size_t n, const char *fmt, ...) {
  int a=1;
  //panic("Not implemented");
  return a;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  int a=1;
  //panic("Not implemented");
  return a;
}

#endif

#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <string.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
void itoa(unsigned int n, char * buf);
void itox(unsigned int n, char * buf);


int printf(const char *fmt, ...) {
    const char*fmtbegin=fmt;
    
    char *s;
    char *c;
    int num;
    char buf[976];
    char buf2[976];
    char *out=buf2;
    memset(out, 0, strlen(out));
    memset(buf, 0, sizeof(buf));
    int space;
    va_list ap;
    va_start(ap, fmt);
    while(*fmt != '\0'){    
      if(*fmt == '%'){
        fmt++;
        switch(*fmt){
          case 'd':{
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
            s = va_arg(ap, char *);
            memcpy(out, s, strlen(s));
            out += strlen(s);
            break;
          }
          case 'c':{
            c = va_arg(ap, char* );
            *out = *c;
            out += 1;
            break;
          }
          case '0':{
            if(*(fmt+2)=='d'){
              num = va_arg(ap, int);
              if(num < 0){
              *out = '-';
              out++;
              num=-num;              
              }
              char temp=*(fmt+1);
              space=temp-'0';
              itoa(num, buf);
              if(strlen(buf)<space){memcpy(out, "0000000000000", (space-strlen(buf)));out += (space-strlen(buf));}//%2d
              memcpy(out, buf, strlen(buf));
              out += strlen(buf);
              fmt++;fmt++;
              break;
            }
            else if(*(fmt+2)=='x'){
              num = va_arg(ap, int);
              if(num < 0){
              *out = '-';
              out++;
              num=-num;              
              }
              char temp=*(fmt+1);
              space=temp-'0';
              itox(num, buf);
              if(strlen(buf)<space){memcpy(out, "000000000000000", (space-strlen(buf)));out += (space-strlen(buf));}
              memcpy(out, buf, strlen(buf));
              out += strlen(buf);
              fmt++;fmt++;
              break;
            }
          }
          case '3':{
            if(*(fmt+1)=='d'){
              num = va_arg(ap, int);
              if(num < 0){
              *out = '-';
              out++;
              num=-num;              
              }
              itoa(num, buf);
              if(strlen(buf)<3){memcpy(out, "                ", (2-strlen(buf)));out += (2-strlen(buf));}
              memcpy(out, buf, strlen(buf));
              out += strlen(buf);
              fmt++;
              break;
            }
           
          }
          default:{
            for (const char *p = fmtbegin; *p; p++) { putch(*p);}
            panic("This printf Not implemented");
            break;
          }
        }
      }
      else {
          *out = *fmt;
           out++;
        }
      fmt++;
    }
  va_end(ap);
  out=buf2;
  for (const char *p = out; *p; p++) {
    putch(*p);
  }
 
  return 0;
}






 int printf_count;
// void printNum(unsigned long num, int base);
// void printDeci(int dec);	
// void printHex(unsigned int dec);
// void printDeci_long(long int dec_long);			
// void printStr(char *str);	
// int printf(const char *fmt, ...) {
//   	int i = 0;
// 	printf_count = 0;
//     va_list va_ptr;
//     va_start(va_ptr, fmt);
//     while (fmt[i] != '\0')
//     {
// 		if (fmt[i-1] == '\\'||fmt[i] != '%')
// 		{
//     	    putch(fmt[i++]);
// 			printf_count ++;
// 			continue;
// 		}
// 		switch (fmt[++i]) 
// 		{
// 			case 'd': printDeci(va_arg(va_ptr,int));           
// 			  		  break; 
// 			case 'x': printHex(va_arg(va_ptr,unsigned int));           
// 			  		  break;
// 			case 'p': printHex(va_arg(va_ptr,unsigned int));           
// 			  		  break;  
// 			case 'l': printDeci_long(va_arg(va_ptr,int));     //mean ld      
// 			  		  break; 
// 		  case 'c': putch(va_arg(va_ptr,int));            
// 			  		  break;
// 		  case 's': {printStr(va_arg(va_ptr,char *));
//               break;}
//       // case '0':{ 
//       //           if(fmt[i+2]=='d'){
//       //             int num = va_arg(va_ptr, int);
//       //             char buf[2000];
//       //            // char temp=fmt[i+1];
//       //             //int space=temp-'0';
//       //             itoa(num, buf);
//       //            // if(strlen(buf)<space){for(int i = 0; i<(space-strlen(buf));i++){putch(temp);putch('4');}}//%2d
//       //             for (const char *p = buf; *p; p++) {putch(*p); }
//       //             i=i+2;
//       //           }
//       //           else if(fmt[i+2]=='x'){
//       //             int num = va_arg(va_ptr, int);
//       //             char buf[2000];
//       //         //    char temp=fmt[i+1];
//       //            // int space=temp-'0';
//       //             itox(num, buf);
//       //             //if(strlen(buf)<space){for(int i = 0; i<(space-strlen(buf));i++){putch('0');}}//%2d
//       //             for (const char *p = buf; *p; p++) {putch(*p); }
//       //             i=i+2;
//       //           }
//       //           break;  
//       //           }
//       // case '3':{ 
//       //           if(fmt[i+1]=='d'){
//       //             int num = va_arg(va_ptr, int);
//       //             char buf[10];
//       //         //    char temp=fmt[i];
//       //         //    int space=temp-'0';
//       //             itoa(num, buf);
//       //             //if(strlen(buf)<space){for(int i = 0; i<(space-strlen(buf));i++){putch(' ');}}//%2d
//       //             for (const char *p = buf; *p; p++) {putch(*p); }
//       //             i=i+1;
//       //           }
                
//       //         }        
// 			// 		  break;
// 			 default : {//panic("This printf Not implemented");
//       break;}
// 		}

// 		i++; 
//     }
//     va_end(va_ptr);
// 	return printf_count;				//return the long of string
// }

void printNum(unsigned long num, int base)
{
	if (num == 0)
    {
        return;
    }
	printNum(num/base, base);
    putch("0123456789abcdef"[num%base]);
	printf_count ++;
}
void printDeci(int dec)
{
	if (dec < 0)
    {
        putch('-');
		dec = -dec;  	 
    }
    if (dec == 0)
    {
        putch('0');
		return;
    }
    else
    {
        printNum(dec, 10); 
    }
}

void printHex(unsigned int dec)
{
	if (dec < 0)
    {
        putch('-');
		dec = -dec;  	 
    }
    if (dec == 0)
    {
        putch('0');
		return;
    }
    else
    {
        printNum(dec, 16); 
    }
}

void printDeci_long(long int dec_long)
{
	if (dec_long < 0)
    {
        putch('-');
		dec_long = -dec_long;  	 
    }
    if (dec_long == 0)
    {
        putch('0');
		return;
    }
    else
    {
        printNum(dec_long, 10); 
    }
}

void printStr(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        putch(str[i++]);
		printf_count ++;
    }
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
void itox(unsigned int n, char * buf)
{
        int i;  
        if(n < 16){
            buf[0] ="0123456789abcdef"[n];
            buf[1] = '\0';
            return;
        }
        
        itox(n / 16, buf);
        for(i=0; buf[i]!='\0'; i++);
        buf[i] = "0123456789abcdef"[n%16];
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

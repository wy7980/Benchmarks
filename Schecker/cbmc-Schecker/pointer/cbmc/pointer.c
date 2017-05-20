
int main() {
  int *p;
  int a;
  p = &a;


  if(a>10){
	*p = 2;
	p=0;
  }
  
  *p = 4;
  

}


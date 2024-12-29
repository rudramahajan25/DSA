bool isPalindrome(int x){
int num = x;
int rev = 0;
int rem=0;
int i =0;
while(i<num){
rem=num%10;
rev=(rev*10)+ rem;
num=num/10;
}
i++;
if(rev==x)
return true;
else 
return false; 
}
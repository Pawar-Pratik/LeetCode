class Solution {
public:
    bool isPalindrome(int x) {
        if( x<0 ){
            return false;
		}
		long long r=0;
		long long temp=x;
		while(x!=0){
            int digit = x%10;
			r = (r*10)+digit;
				x /= 10;
		}
		if(r==temp){
			return true;
		}
		else{
			return false;
		}
	}
};

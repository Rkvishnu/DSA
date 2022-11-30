//power of two
class Solution{
    public:
    bool isPowerOfTwo(int n){
        if (n==1 ) return true

        if(n==0 || n%2!=0) return false;

        return isPowerOfTwo(n/2);
    }
}

////power of three
class Solution{
    public:
    bool isPowerOfThree(int n){
        if (n==1 ) return true

        if(n==0 || n%3!=0) return false;

        return isPowerOfTwo(n/3);
    }
    

//power of four
class Solution{
    public:
    bool isPowerOfTwo(int n){
        if (n==1 ) return true

        if(n==0 || n%4!=0) return false;

        return isPowerOfTwo(n/4);
    }
}
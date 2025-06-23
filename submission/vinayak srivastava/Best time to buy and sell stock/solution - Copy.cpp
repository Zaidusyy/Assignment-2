class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=prices[0]; //socha buy krege
        int maxp=0;
        for(int i=1;i<n;i++){
            if(prices[i]<buy){ // jis din kam dikha ab iss din buy krege
                buy=prices[i];
            }
            else{
                maxp=maxp+(prices[i]-buy); // sell kar diya agar buy se jyada price dikha
                buy=prices[i]; // dubara buy karo , ussi din
            }
        }
        return maxp;
        

    }
};
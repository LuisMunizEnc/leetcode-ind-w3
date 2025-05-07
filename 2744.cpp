#define all(c) begin(c), end(c)

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size(), count = 0;
        for(int i = 0; i < n; i++){
            string aux = words[i];
            reverse(all(aux));
            for(int j = i + 1; j < n; j++){
                if(words[j] == aux)
                    count++;
            }
        }
        return count;
    }
}
class RecentCounter {
public:

    vector<int> queue;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        queue.push_back(t);
        int count = 0;

        for(int i = 0; i < queue.size(); i++){
            if(t - 3000 <= queue[i]){
                count++;
            }
        }
        return count;
    }
};
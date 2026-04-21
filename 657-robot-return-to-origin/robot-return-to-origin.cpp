class Solution {
public:
    bool judgeCircle(string moves) {
        int count_U=0,count_D=0,count_L=0,count_R=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U')
            count_U++;

            else if(moves[i]=='D')
            count_D++;

            else if(moves[i]=='L')
            count_L++;

            else if(moves[i]=='R')
            count_R++;
        }
        if(count_D==count_U && count_R==count_L)
        return true;

        return false;
    }
};
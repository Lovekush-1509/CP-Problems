class Solution {

    int countDays(int month,int day){
        cout<<day<<":"<<month<<endl;
        vector<int>daysInMonth = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int totalDays = 0;
        for(int i = 1; i < month; i++){
            totalDays += daysInMonth[i];
        }
        return totalDays+day;
    }

public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {


        int aam = stoi(arriveAlice.substr(0,2));
        int aad = stoi(arriveAlice.substr(3,4));
        int alm = stoi(leaveAlice.substr(0,2));
        int ald = stoi(leaveAlice.substr(3,4));


        int bam = stoi(arriveBob.substr(0,2));
        int bad = stoi(arriveBob.substr(3,4));
        int blm = stoi(leaveBob.substr(0,2));
        int bld = stoi(leaveBob.substr(3,4));

        cout<<aad<<":"<<aam<<"->"<<ald<<":"<<alm<<endl;
        cout<<bad<<":"<<bam<<"->"<<bld<<":"<<blm<<endl;


        int maxAm = 0,maxAd = 0;
        if(aam > bam){
            maxAm = aam;
            maxAd = aad;
        }else if(aam < bam){
            maxAm = bam;
            maxAd = bad;
        }else{
            maxAm = aam;
            maxAd = max(bad,aad);
        }

        int minLm = 12,minLd = 31;
        if(alm < blm){
            minLm = alm;
            minLd = ald;
        }else if(alm > blm){
            minLm = blm;
            minLd = bld;
        }else{
            minLm = alm;
            minLd = min(bld,ald);
        }

        int overlap = countDays(minLm,minLd)-countDays(maxAm,maxAd);
        return (overlap < 0)?0:overlap+1;
        
    }
};
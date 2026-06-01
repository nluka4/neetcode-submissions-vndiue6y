class Solution {
public:
    int partition(int l, int h, vector<int>&niz){
    int pivot = niz[(l + h)/2];
    int i = l -1;
    int j = h +1; 
    while(true){
        do{
           i++; 
        }while(pivot > niz[i]);
        do{
            j--; 
        }while(pivot < niz[j]);

        if(i>=j)
            return j; 

        int temp = niz[i];
        niz[i] = niz[j];
        niz[j] = temp;
        
    }
}

void quickSort(int l, int h, vector<int>&niz){
    if(l<h){
        int j = partition(l,h,niz);
        quickSort(l,j,niz);
        quickSort(j+1,h,niz);
    }
}
    int numRescueBoats(vector<int>& people, int limit) {
        int i = 0, j = people.size()-1;
        int boats = 0; 

        quickSort(0,people.size()-1,people);

         while (i <= j) {
        if (people[i] + people[j] <= limit) {
            i++;
            j--;
        } else {
            j--;
        }

        boats++;
    }


        return boats;

    }
};
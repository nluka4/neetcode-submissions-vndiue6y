class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        if(asteroids.size() == 2 && asteroids[0] == asteroids[1]){
            return asteroids;
        }
        int i = asteroids.size() - 1; 
    int j = i - 1; 
    while(i >= 0){
        if(j < 0){
            return asteroids;
        }
       if(asteroids[i] < 0 && asteroids[j] > 0){
            if(abs(asteroids[i]) == abs(asteroids[j])){
                asteroids.erase(asteroids.begin() + i);
                asteroids.erase(asteroids.begin() + j);
            }else if(abs(asteroids[i]) < abs(asteroids[j])){
                asteroids.erase(asteroids.begin() + i);
            }else if(abs(asteroids[i]) > abs(asteroids[j])){
                asteroids.erase(asteroids.begin() + j);
            }
        }else{
            i--;
            j = i - 1; 
            continue;
        }


        i = asteroids.size() -1; 
        if(i > 0){
            j = i - 1;
        }else{
            break;
        }
    }

    return asteroids;
    }
};
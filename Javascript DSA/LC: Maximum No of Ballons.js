/**
 * @param {string} text
 * @return {number}
 */
var maxNumberOfBalloons = function(s) {
    let  count= 0,map ={}, i;
    for(i=0; i<s.length; i++)
        {
           if(s[i]=='b'||s[i]=='a'||s[i]=='l'||s[i]=='o'||s[i]=='n')
            map[s[i]] = (map[s[i]] | 0) + 1;
        }
        while (map["b"] >= 1 && map["a"] >= 1 && map["l"] >= 2 && map["o"] >= 2 && map["n"] >= 1) {
        count++;
        map["b"]--;
        map["a"]--;
        map["l"] -= 2;
        map["o"] -= 2;
        map["n"]--;
    }
    return count;
};

class Solution {
public:
    int compress(vector<char>& chars) {
	int l = 0 , r = 0 ;

	for( int r = 0 ; r < chars.size() ; r++ ){
	    int cnt = 1;
	    while( r+1 < chars.size() and chars[r+1] == chars[r] ){
		r++;
		cnt++;
	    }

	    chars[l] = chars[r];
	    l++;
	    if( cnt > 1 ) {
		string count = to_string(cnt);
		for(auto ch : count ){
		    chars[l] = ch;
		    l++;
		}
	    }
	}

	return l;
}
};

class Solution {
    public String getHint(String secret, String guess) {
        HashMap<Character, Integer> secretFreq = new HashMap<>();
        HashMap<Character, Integer> guessFreq = new HashMap<>();

       
        int bulls = 0;
        int cows = 0;

        for (int i = 0; i < secret.length(); i++) {
            char s = secret.charAt(i);
            char g = guess.charAt(i);

            if (s == g)
                bulls++;

            else {
                secretFreq.put(s, secretFreq.getOrDefault(s, 0) + 1);
                guessFreq.put(g, guessFreq.getOrDefault(g, 0) + 1);
            }

        
        }
        
        for (char c1 : secretFreq.keySet()) {
            if (guessFreq.containsKey(c1)) {
                    cows += Math.min(guessFreq.get(c1), secretFreq.get(c1));
                }
        }
        

        return bulls + "A" + cows + "B";
    }
}
// Last updated: 1/22/2026, 7:52:21 PM
class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        vector<int> metal(garbage.size()), paper(garbage.size()),
            glass(garbage.size());

        int lastMetalPos = -1, lastPaperPos = -1, lastGlassPos = -1;

        for (int j = 0; j < garbage.size(); j++) {
            string houseGarbage = garbage[j];
            int metalCount = 0, paperCount = 0, glassCount = 0;
            for (char c : houseGarbage) {
                if (c == 'M')
                    metalCount++;
                if (c == 'P')
                    paperCount++;
                if (c == 'G')
                    glassCount++;
            }
            metal[j] = metalCount;
            paper[j] = paperCount;
            glass[j] = glassCount;
            if (metalCount > 0)
                lastMetalPos = j;
            if (paperCount > 0)
                lastPaperPos = j;
            if (glassCount > 0)
                lastGlassPos = j;
        }

        int timeMetal = 0, timePaper = 0, timeGarbage = 0;

        for (int i = 0; i <= lastMetalPos; i++) {
            timeMetal += metal[i];
            if (i != lastMetalPos)
                timeMetal += travel[i];
        }

        for (int i = 0; i <= lastPaperPos; i++) {
            timePaper += paper[i];
            if (i != lastPaperPos)
                timePaper += travel[i];
        }

        for (int i = 0; i <= lastGlassPos; i++) {
            timeGarbage += glass[i];
            if (i != lastGlassPos)
                timeGarbage += travel[i];
        }

        return timeMetal + timePaper + timeGarbage;
    }
};

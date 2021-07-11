#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    int next, cur;
    bool white;
    for(int i = 0 ; i < skill_trees.size(); i++) {
        white = true;
        next = 0;
        for(int j = 0 ; j < skill_trees[i].size() ; j++) {
            // skill 배열에서 skill_treesp[i][j]문자와 같은 것이 있으면
            // 해당 index를 반환
            cur = skill.find(skill_trees[i][j]);
            // 선행 스킬을 못 찾은 경우 continue
            if(cur == -1) continue;
            // 필요한 스킬을 skill_tree에서 찾고
            else {
                // 이것이 올바른 선행 스킬 순서가 아니라면 false
                if(next++ != cur) {
                    white = false;
                    break;
                }
            }
        }
        if(white == true) answer++;
    }
    return answer;
}
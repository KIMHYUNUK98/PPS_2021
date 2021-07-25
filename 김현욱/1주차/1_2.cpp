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
            // skill �迭���� skill_treesp[i][j]���ڿ� ���� ���� ������
            // �ش� index�� ��ȯ
            cur = skill.find(skill_trees[i][j]);
            // ���� ��ų�� �� ã�� ��� continue
            if(cur == -1) continue;
            // �ʿ��� ��ų�� skill_tree���� ã��
            else {
                // �̰��� �ùٸ� ���� ��ų ������ �ƴ϶�� false
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
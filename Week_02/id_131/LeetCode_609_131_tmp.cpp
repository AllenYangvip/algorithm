/* ��Ŀ���� :
 * ��ϵͳ�в����ظ��ļ�
 * ����һ��Ŀ¼��Ϣ�б�����Ŀ¼·�����Լ���Ŀ¼�е����а������ݵ��ļ���
 * ����Ҫ�ҵ��ļ�ϵͳ�е������ظ��ļ����·����һ���ظ����ļ����ٰ�������������ȫ��ͬ���ݵ��ļ�
 
 * ʾ�� 1��
 * ���룺
 * ["root/a 1.txt(abcd) 2.txt(efgh)", "root/c 3.txt(abcd)", "root/c/d 4.txt(efgh)", "root 4.txt(efgh)"]
 * �����
 * [["root/a/2.txt","root/c/d/4.txt","root/4.txt"],["root/a/1.txt","root/c/3.txt"]]
*/
class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) 
    {
        vector<vector<string>> resultVec;
        // key:�ļ�����  value:�ļ�Ŀ¼�б�
        unordered_map<string, vector<string>> hashMap;
        for(auto& path : paths)
        {
            
        }
        
        
        return resultVec;
    }
};
using UnityEngine;
using System.Collections;

public class EntityScript : MonoBehaviour {

	public class Entity
	{
		private string name;				//�ɸ����̸�
		private int nameCode;				//�ɸ��ͺз��ڵ�
		private int fullHp;					//HP�ִ�ġ
		private int currentHp;				//����HP
		private int str;					//��
		private int dex;					//��ø
		private int accuracyRate;			//���߷�
		private int accuracyRatePerDex;		//���߷� ������ ��ø
		private int avoidRate;				//ȸ����
		private int avoidRatePerDex;		//ȸ���� ������ ��ø
		private int speedLevel;				//�ӵ����
		private int fullMp;					//MP�ִ�ġ
		private int currentMp;				//����MP
		private int turnCount;				//��ī��Ʈ

		public Entity(int nameCode){
			name = Config.name[nameCode];
			fullHp=Config.fullHp[nameCode];
			currentHp = fullHp;
			str = Config.str[nameCode];
			dex = Config.dex[nameCode];
			accuracyRatePerDex = Config.accuracyRatePerDex[nameCode];
			accuracyRatePerDex = dex * accuracyRatePerDex;
			avoidRatePerDex = Config.avoidRatePerDex[nameCode];
			avoidRatePerDex = dex * avoidRatePerDex;
			if (dex = 0)
				speedLevel = 1;
			else if (dex > 0 && dex <= 30)
				speedLevel = 2;
			else if (dex > 30 && dex <= 60)
				speedLevel = 3;
			else if (dex >60)
				speedLevel = 4;
			fullMp = Config.fullMp[nameCode];
			currentMp = fullMp;
			turnCount = 0;
		}
	}


}

using UnityEngine;
using System.Collections;

public class EntityScript : MonoBehaviour {

	public class Entity
	{
		private string name;				//케릭터이름
		private int nameCode;				//케릭터분류코드
		private int fullHp;					//HP최대치
		private int currentHp;				//현재HP
		private int str;					//힘
		private int dex;					//민첩
		private int accuracyRate;			//명중률
		private int accuracyRatePerDex;		//명중률 나누기 민첩
		private int avoidRate;				//회피율
		private int avoidRatePerDex;		//회피율 나누기 민첩
		private int speedLevel;				//속도등급
		private int fullMp;					//MP최대치
		private int currentMp;				//현재MP
		private int turnCount;				//턴카운트

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

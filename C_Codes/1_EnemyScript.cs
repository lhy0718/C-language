using UnityEngine;
using System.Collections;

public class EnemyScript : MonoBehaviour {

	class Enemy : EntityScript.Entity
	{
		private int[] dropItem = new int[Config.dropItemLimit];	//몬스터 드롭템
		private int dropExp;						//몬스터 드롭경험치

		public Enemy(int nameCode) : base(nameCode)
		{
			for(int i = 0 ; i< Config.dropItemLimit; i++)
			{
				dropItem[i] = 0;
			}
			dropExp = Config.dropExp[nameCode];
		}
	}
}

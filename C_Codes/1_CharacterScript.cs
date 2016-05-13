using UnityEngine;
using System.Collections;

public class CharacterScript : MonoBehaviour {

	class Character : EntityScript.Entity
	{
		private int exp;															//(누적)경험치
		private int playerLevel;													//케릭터레벨
		private int intelligence;													//지식
		private int cocktailSuccessRate;											//세이커(칵테일 제조기) 제작 성공률
		private int cocktailSuccessRatePerIntelligence;								//세이커제작성공률 나누기 지식
		private int luck;															//운
		private int labeledAlcoholDropRate;											//라벨이 있는 술 드랍확률
		private int labeledAlcoholDropRatePerLuck;									//라벨술드랍률 나누기 운
		private int criticalRate;													//크리티컬 확률
		private int criticalRatePerLuck;											//크리티컬확률 나누기 운
		private int absoluteAvoidRate;												//완전회피율
		private int absoluteAvoidRatePerLuck;										//완전회피율 나누기 운
		private int luckZeroDeathRate;												//운이 0이 되었을때 다음턴에 죽을 확률
		private int maxDrunkenness;													//취기 최대치
		private int currentDrunkenness;												//현재 취기
		private bool isKoala;														//만취상태 여부
		private int DrunkenType;													//케릭터 주사유형
		private int[,] drink = new int[Config.inventoryRow, Config.inventoryCol];	//"drink"인벤토리 목록
		private int[,] equip = new int[Config.inventoryRow, Config.inventoryCol];	//"equip"인벤토리 목록
		private int[] buff = new int[Config.buffLimit];								//버프 목록
		/*
		private int[] remainBuffTime = new int[10];									//버프 남은시간
		*/
	
		public Character(int nameCode) : base(nameCode)
		{
			exp = 0;
			playerLevel = 1;
			intelligence = Config.intelligence[nameCode];
			cocktailSuccessRatePerIntelligence = Config.cocktailSuccessRatePerIntelligence[nameCode] ;
			cocktailSuccessRate = intelligence * cocktailSuccessRatePerIntelligence;
			luck = Config.luck[nameCode];
			labeledAlcoholDropRatePerLuck = Config.labeledAlcoholDropRatePerLuck[nameCode];
			labeledAlcoholDropRate = luck * labeledAlcoholDropRatePerLuck;
			criticalRatePerLuck = Config.criticalRatePerLuck[nameCode];
			criticalRate = luck * criticalRatePerLuck;
			luckZeroDeathRate = Config.luckZeroDeathRate[nameCode];
			maxDrunkenness = Config.maxDrunkenness[nameCode];
			currentDrunkenness = 0;
			if (currentDrunkenness = maxDrunkenness)
				isKoala = true;
			else 
				isKoala = false;
			DrunkenType = Config.DrunkenType[nameCode];
			for(int i = 0 ; i < Config.inventoryRow;i++)
			{
				for(int j = 0 ; j< Config.inventoryCol; j++)
				{
					drink[i,j] = 0;
				}
			}
			for(int i = 0 ; i < Config.inventoryRow;i++)
			{
				for(int j = 0 ; j< Config.inventoryCol; j++)
				{
					equip[i,j] = 0;
				}
			}
			for(int i = 0 ; i< Config.buffLimit; i++)
			{
				buff[i] = 0;
			}

		}
	}


}

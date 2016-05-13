using UnityEngine;
using System.Collections;

public class CharacterScript : MonoBehaviour {

	class Character : EntityScript.Entity
	{
		private int exp;															//(����)����ġ
		private int playerLevel;													//�ɸ��ͷ���
		private int intelligence;													//����
		private int cocktailSuccessRate;											//����Ŀ(Ĭ���� ������) ���� ������
		private int cocktailSuccessRatePerIntelligence;								//����Ŀ���ۼ����� ������ ����
		private int luck;															//��
		private int labeledAlcoholDropRate;											//���� �ִ� �� ���Ȯ��
		private int labeledAlcoholDropRatePerLuck;									//�󺧼������ ������ ��
		private int criticalRate;													//ũ��Ƽ�� Ȯ��
		private int criticalRatePerLuck;											//ũ��Ƽ��Ȯ�� ������ ��
		private int absoluteAvoidRate;												//����ȸ����
		private int absoluteAvoidRatePerLuck;										//����ȸ���� ������ ��
		private int luckZeroDeathRate;												//���� 0�� �Ǿ����� �����Ͽ� ���� Ȯ��
		private int maxDrunkenness;													//��� �ִ�ġ
		private int currentDrunkenness;												//���� ���
		private bool isKoala;														//������� ����
		private int DrunkenType;													//�ɸ��� �ֻ�����
		private int[,] drink = new int[Config.inventoryRow, Config.inventoryCol];	//"drink"�κ��丮 ���
		private int[,] equip = new int[Config.inventoryRow, Config.inventoryCol];	//"equip"�κ��丮 ���
		private int[] buff = new int[Config.buffLimit];								//���� ���
		/*
		private int[] remainBuffTime = new int[10];									//���� �����ð�
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

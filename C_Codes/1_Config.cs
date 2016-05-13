using UnityEngine;
using System.Collections;

public class Config : MonoBehaviour {
	public const int inventoryRow = 4;												//인벤토리 행 수
	public const int inventoryCol = 5;												//인벤토리 열 수
	public const int buffLimit = 0 ;												//동시버프 최대 수 
	public const int dropItemLimit = 0 ;											//몬스터 드롭템 최대 수 

	public const string[] name = new string[3]{"sullime","abc","zzz"};				//케릭터 이름 
	public const int[] fullHp = new int[3]{0,0,0};									//HP최대치
	public const int[] str = new int[3]{0,0,0};										//힘
	public const int[] dex = new int[3]{0,0,0};										//민첩
	public const int[] accuracyRatePerDex = new int[3]{0,0,0};						//명중률 나누기 민첩
	public const int[] avoidRatePerDex = new int[3]{0,0,0};							//회피율 나누기 민첩
	public const int[] fullMp = new int[3]{0,0,0};									//MP최대치
	public const int[] intelligence = new int[3]{0,0,0};							//지식
	public const int[] cocktailSuccessRatePerIntelligence = new int[3]{0,0,0};		//세이커(칵테일 제조기)제작성공률 나누기 지식
	public const int[] luck = new int[3]{0,0,0};									//운
	public const int[] labeledAlcoholDropRatePerLuck = new int[3]{0,0,0};			//라벨이있는술드랍확률 나누기 운
	public const int[] criticalRatePerLuck = new int[3]{0,0,0};						//크리티컬확률 나누기 운
	public const int[] absoluteAvoidRatePerLuck = new int[3]{0,0,0};				//완전회피율 나누기 운
	public const int[] luckZeroDeathRate = new int[3]{0,0,0};				//운이 0이 되었을때 다음턴에 죽을 확률
	public const int[] maxDrunkenness = new int[3]{0,0,0};							//취기 최대치
	public const int[] DrunkenType = new int[3]{1,1,2};								//케릭터 주사유형
	public const int[] dropExp = new int[3] {0,0,0};								//몬스터 드롭경험치
}

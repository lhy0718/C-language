using UnityEngine;
using System.Collections;

public class Config : MonoBehaviour {
	public const int inventoryRow = 4;												//�κ��丮 �� ��
	public const int inventoryCol = 5;												//�κ��丮 �� ��
	public const int buffLimit = 0 ;												//���ù��� �ִ� �� 
	public const int dropItemLimit = 0 ;											//���� ����� �ִ� �� 

	public const string[] name = new string[3]{"sullime","abc","zzz"};				//�ɸ��� �̸� 
	public const int[] fullHp = new int[3]{0,0,0};									//HP�ִ�ġ
	public const int[] str = new int[3]{0,0,0};										//��
	public const int[] dex = new int[3]{0,0,0};										//��ø
	public const int[] accuracyRatePerDex = new int[3]{0,0,0};						//���߷� ������ ��ø
	public const int[] avoidRatePerDex = new int[3]{0,0,0};							//ȸ���� ������ ��ø
	public const int[] fullMp = new int[3]{0,0,0};									//MP�ִ�ġ
	public const int[] intelligence = new int[3]{0,0,0};							//����
	public const int[] cocktailSuccessRatePerIntelligence = new int[3]{0,0,0};		//����Ŀ(Ĭ���� ������)���ۼ����� ������ ����
	public const int[] luck = new int[3]{0,0,0};									//��
	public const int[] labeledAlcoholDropRatePerLuck = new int[3]{0,0,0};			//�����ִ¼����Ȯ�� ������ ��
	public const int[] criticalRatePerLuck = new int[3]{0,0,0};						//ũ��Ƽ��Ȯ�� ������ ��
	public const int[] absoluteAvoidRatePerLuck = new int[3]{0,0,0};				//����ȸ���� ������ ��
	public const int[] luckZeroDeathRate = new int[3]{0,0,0};				//���� 0�� �Ǿ����� �����Ͽ� ���� Ȯ��
	public const int[] maxDrunkenness = new int[3]{0,0,0};							//��� �ִ�ġ
	public const int[] DrunkenType = new int[3]{1,1,2};								//�ɸ��� �ֻ�����
	public const int[] dropExp = new int[3] {0,0,0};								//���� ��Ӱ���ġ
}

// EFTkitRandomizer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <sstream>
#include <stdio.h>

#define elemsof(arr) ((sizeof(arr)/sizeof(arr[0])))
using namespace std;


int main()
{
	srand(time(NULL));
    
	std::string Output;

	

	std::string Helmets[] = {"None " , "UNTAR    " , "Vulcan     " , "SSH-68       " , "LZSh        " , "TC 800" , "Highcom Striker ACHHC IIIA" , "ULACH IIIA"  , 
							 "LZSh"  , "Crye Precision Airframe"  , "Tac-Kek Fast MT Non Balistic Replica"  , "Kolpak 1S"  , "SHPM Firefighters"  , "PSH-97 Djeta" 
							, "6B47 Ratnik"  , "DEVTAC Ronin"  , "SSSh 95 Sfera S"  , "MSA ACH TC 2001"  , "MSA ACH TC 2002"  , "Zsh-1-2M"  , "Diamond Age Bastion" 
							, "Ops Core Fast MT"  , "Team Wendy EXFIL"  , "Galvion Caiman"  , "BNTI LSHZ"  , "Maska 1Sch (Killa Helmet)"  , "Altyn" 
						    , "Rys T"   , "Ushanka" };

	


	std::string BodyArmour[] = { "None" , "6B43 Zabralo" , "PACA" , "6B13" , "Module 3M" , "Zhuk-3 Press Armor"
								, "Korund VM"  , "6B13 M Tan (Killa Armor)"  , "BNTI Gzhel-K"  , "6B2 Flora"  , "MF-UNTAR"  , "BNTI Kirasa-N"
							    , "Highcom Trooper TFO"  , "6B23 Mountain Flora"  , "FORT Redunt M"  , "IOTV Gen 4 High Mobility"  , "Fort Defender 2" 
							    , "IOTV Gen4 Assault Kit"  , "FORT Redut T5"  , "5.11 Hexgrid"  , "LBT Slick"  , "Zhuk 6a Heavy" };

	


	std::string Gun[] = { "None" , "ADAR" , "M4A1" , "AKM" , "ASH 12" , "AS Val" , "MCX (Honey Badger)" , "OP SKS" , "Vepr Hunter"
						, "P90" , "PPSH" , "Vector 9x19" , "M870" , "TOZ-106"	, "M700"	, "RSASS"	, "AK-101" , "AK-102" 
					    , "AK-103" , "AK-104" , "AK-105" , "AK-74" , "AK-74M" , "AK-74N" , "AKMN" , "AKMS" , "AKS-74" 
						, "AKS-74N" , "AKS-74U" , "AKS-74UB" , "AKS-74UN" , "DT MDR 5.56" , "DT MDR .308" , "HK 416A5" , "KelTec RFB" 
					    , "SA-58" , "TX-15 DML" , "Vepr AKM/VPO 209" , "Vepr AKM/VPO 136" , "SKS" , "RPK-16" , "MP5" , "MP5K-N" 
					    , "MP7A1" , "MP7A2" , "MP9" , "MP9-N" , "MPX" , "PP-19-01" , "PP-9 Klin" , "PP-91 Kedr" , "PP-91-01 Keder B" 
						, "Saiga-9" , "UMP 45" , "Vector .45" , "590A1" , "MP 133" , "MP 153" , "Saiga 12" , "KS-23M" , "MK-18" 
						, "M1A" , "SR-25" , "SVDS" , "VSS Vintorez" , "DVL-10" , "Mosin" , "Mosin Inf" , "SV-98" , "T-5000" 
						, "VPO-215" };

	


	std::string Sidearm[] = { "None" , "Glock17" , "M1911A1" , "FN 57" , "None" , "P226R" , "PM Pistol (Makarov)" , "TT" 
							, "APB" , "TT Gold" , "APS" , "Glock 18C" , "M45A1" , "M9A3" , "MP-443 Grach" , "PB" , "PM(t)" 
						    , "SR-1MP" };

	


	std::string Rig[] = { "None" , "Bankrobber" , "Triton" , "LBT-1961A" , "WarTech Gear Rig" , "Blackhawk Commando" , "BlackRock" , "Wartech MK3"
						, "Velocity Systems Multi-Purpose Patrol Vest" , "Scav Vest" , "Security Vest" , "DIY IDEA Chest Rig" , "SOE Micro Rig" , "UMBTB s Scout Sniper" 
						, "Splav Tarzan"  , "Haley Strategic D3CRX" , "Direct Action Thunderbolt" , "Gear Craft GC-BSS-MK1" , "ANA Tactical Alpha Chest Rig" 
						, "Belt A+Belt B" };

	


	std::string Backpack[] = { "None" , "Blackjack 50" , "Attack 2" , "Scav BP" , "Duffle Bag" , "Sanitar Bag" , "VKBO Army Bag"
							  , "LK 3F Transfer Tourists Bag" , "Ana Tactical Beta 2" , "Camelbak Tri-Zip" , "Oakley Mechanism" , "3V G Paratus" 
							  , "6SH118 Raid" , "Eberlestock F4 Terminator" , "Pilgrim Tourist" , "Eberlestock F5 Switchblade" , "Wartech Berkut" 
							  , "Day Pack" , "Flyye MBSS" , "Transformer Bag" , "Tactical Sling" };

	std::string Map[] = { "Factory" , "Customs" , "Woods" , "Reserve" , "Shoreline" , "Inetrchange" , "Labs" };



	std::string Headphones[] = { "Ops-Core FAST RAC Headset" , "Peltor ComTac 2 headset" , "MSA Sordin Supreme PRO-X/L active headphones" , "GSSh-01 active headset" 
								, "Peltor Tactical Sport headset" , "Walker's Razor Digital headset" , "Walker's XCEL 500BT Digital headset" };


	std::string Time[] = { "Day" , "Night"};


	std::string GrenadeType[] = { "F-1" , "M67" , "RGD-5" , "VOG-25" , "VOG-17" , "RGD-2B (Smoke Grenade)" , "Zarya" };


	std::string GrenadeAmnt[] = { "1" , "2" , "3" , "4" , "5" , "6"};



	int randomMapNum = rand() % elemsof(Map);
	int randomHelmNum = rand() % elemsof(Helmets);
	int randomBArmourNum = rand() % elemsof(BodyArmour);
	int randomGunNum = rand() % elemsof(Gun);
	int randomSidearmrNum = rand() % elemsof(Sidearm);
	int randomRigNum = rand() % elemsof(Rig);
	int randomBackPackNum = rand() % elemsof(Backpack);
	int randomHeadphoneNum = rand() % elemsof(Headphones);
	int randomTimeNum = rand() % elemsof(Time);
	int randomGrenadeTypeNum = rand() % elemsof(GrenadeType);
	int randomGrenadeAmntNum = rand() % elemsof(GrenadeAmnt);

	std::ostringstream os;
	

		   os << std::endl << std::endl << " Map: " << Map[randomMapNum] << std::endl << "\n-\n" << std::endl << " Helmet: " << Helmets[randomHelmNum] << std::endl << "\n-\n" << std::endl << " Body Armor: " << BodyArmour[randomBArmourNum] 
		      << std::endl << "\n-\n" << std::endl << " Primary Gun: " <<  Gun[randomGunNum] << std::endl << "\n-\n" << std::endl 
			  << " Sidearm: " <<  Sidearm[randomSidearmrNum] << std::endl << "\n-\n" << std::endl << " Backpack: " << Backpack[randomBackPackNum] 
			  << std::endl << "\n-\n" << std::endl << " Tac-Rig: " << Rig[randomRigNum] << std::endl
			  << "\n-\n" << std::endl << " Headphones: " << Headphones[randomHeadphoneNum] << std::endl << "\n-\n" << std::endl
			  << " Time: " << Time[randomTimeNum] << std::endl << "\n-\n" << std::endl << " GrenadeType: " << GrenadeType[randomGrenadeTypeNum]
			  << std::endl << "\n-\n" << std::endl << " Grenade Amount: " << GrenadeAmnt[randomGrenadeAmntNum] << "\n" << std::endl << std::endl;

	   std::cout << os.str();

	   Output = os.str();

	   ofstream OutputFile("Kit.txt");
	   OutputFile << Output;
	   OutputFile.close();

	system("pause");

}


#pragma once
#include <iostream>
#include <iomanip>
#include "clsInputValidate.h"
#include"clsScreen.h"
#include "clsCurrenciesListScreen.h"
#include "clsCurrencyCalculatorScreen.h"
#include "clsFindCurrencyScreen.h"
#include "clsUpdateRateScreen.h"
class clsCurrenctExchangeMainScreen:protected clsScreen
{
private:
	enum enCurrencyExchangeMenueOptions
	{
		eListCurrencies = 1, eFindCurrency = 2, eUpdateRate = 3, eCurrencyCalculator = 4, eMainMenue = 5
	};
	static short _ReadCurrencyExchangeMenueOption()
	{
		cout << setw(37) << left << "" << "Choose What Do You Want To Do [ 1 , 5 ] ? ";
		short Choice = clsInputValidate::ReadNumberBetween<short>(1, 5, "Please Enter Choice Between 1 , 5 ? ");
		return Choice;
	}
	static  void _GoBackToCurrencyExchangeMenue()
	{
		cout << setw(37) << left << "" << "\n\tPress any key to go back to Currency Exchange Menue...\n";

		system("pause>0");
		ShowCurrencyExchangeMenue();
	}
	static void _ShowListCurrencyScreen()
	{
		/*cout << "List screen will be here ....";*/
		clsCurrenciesListScreen::ShowCurrenciesListScreen();
	}
	static void _ShowFindCurrencyScreen()
	{
		/*cout << "Find  Currency will be here ....";*/
		clsFindCurrencyScreen::ShowFindCurrencyScreen();
	}
	static void _ShowUpdateRateScreen()
	{
		/*cout << "Update Rate screen will be here ....";*/
		clsUpdateCurrencyRateScreen::ShowUpdateCurrencyRateScreen();
	}
	static void _ShowCurrencyCalculatorScreen()
	{
		/*cout << "Currency Calculator screen will be here ....";*/
		clsCurrencyCalculatorScreen::ShowCurrencyCalculatorScreen();
	}
	static void _BackToMainMenueScreen()
	{
		// do not do anything main screen will handle it
	}
	static void _PerformCurrencyExchangeMenueOption(enCurrencyExchangeMenueOptions Option)
	{
		switch (Option)
		{
		case eListCurrencies:
			system("cls");
			_ShowListCurrencyScreen();
			_GoBackToCurrencyExchangeMenue();
		case eFindCurrency:
			system("cls");
			_ShowFindCurrencyScreen();
			_GoBackToCurrencyExchangeMenue();
		case eUpdateRate:
			system("cls");
			_ShowUpdateRateScreen();
			_GoBackToCurrencyExchangeMenue();
		case eCurrencyCalculator:
			system("cls");
			_ShowCurrencyCalculatorScreen();
			_GoBackToCurrencyExchangeMenue();
		case eMainMenue:
			_BackToMainMenueScreen();
		}
	}

public:
	static void ShowCurrencyExchangeMenue()
	{
		system("cls");
		_DrawScreenHeader("   Currency Exchange Main Screen");

		cout << setw(37) << left << "" << "===========================================\n";
		cout << setw(37) << left << "" << "\t\tCurrency Exchange Menue\n";
		cout << setw(37) << left << "" << "===========================================\n";
		cout << setw(37) << left << "" << "\t[1] List Currencies.\n";
		cout << setw(37) << left << "" << "\t[2] Find Currency.\n";
		cout << setw(37) << left << "" << "\t[3] Update Rate.\n";
		cout << setw(37) << left << "" << "\t[4] Currency Calculator.\n";
		cout << setw(37) << left << "" << "\t[5] Main Menue.\n";
		cout << setw(37) << left << "" << "===========================================\n";
		
		_PerformCurrencyExchangeMenueOption((enCurrencyExchangeMenueOptions)_ReadCurrencyExchangeMenueOption());

	}
};



//Germany

	class Germany_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Germany";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Germany\Germany.paa""";
};
	};
	class EastGermany_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "East Germany 1949 to 1990";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Germany\EastGermany.paa""";
};
	};
	class NaziGermany_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Nazi Germany 1933 to 1945";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Germany\NaziGermany.paa""";
		};
	};


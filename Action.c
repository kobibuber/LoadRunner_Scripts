Action()
{

	web_set_max_html_param_len("109600");

/*Correlation comment - Do not change!  Original value='137038.259295261HAtiQAfptzcftccQDptDcHHf' Name ='userSession' Type ='Manual'*/
	web_reg_save_param_attrib(
		"ParamName=userSession",
		"TagName=input",
		"Extract=value",
		"Name=userSession",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		"RequestUrl=*/nav.pl*",
		LAST);

	web_url("Index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/Index.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=115", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTE1LjAuNTc5MC4xNzESFwk32UHgj34xiRIFDeeNQA4SBQ3OQUx6?alt=proto", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(53);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:64ao4J-6K42lHFvmmqoVdoD-itY-S69VCkWJCJvD-V4&cup2hreq=5a8c1463bef0aa5f6c3f4b613e2dbe9f6af9437372cf4d2658be115072c6bdec", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"_internal_experimental_sets\":\"false\",\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GCEA\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto General release\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.5a506939f22e0e53bd8b919b551401480815141ab3143004ac047b045713615b\"}]},\"ping\":{\"ping_freshness\":\""
		"{ec682ca1-30c1-4305-a55b-e847df8466c8}\",\"rd\":6065},\"updatecheck\":{},\"version\":\"2023.8.9.0\"},{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GCEA\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{e5b9519a-66af-4959-b27e-188f6e3d9e5f}\",\"rd\":6065},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GCEA\",\"cohort\":\"1:1unx:\",\"cohortname\":\"Chrome 115+\",\""
		"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{1ee4dc43-73a7-4b3d-894a-fa49e6f9cdc4}\",\"rd\":6065},\"updatecheck\":{},\"version\":\"4.10.2662.3\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GCEA\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\""
		"{429f2e31-373c-43d8-9535-69ec8c11ba2e}\",\"rd\":6065},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GCEA\",\"cohort\":\"1:bm1:\",\"cohortname\":\"M54AndUp\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.4c67e9ab7c30c48322e5f6fe5acbd64132c054ebb91bd510b414b1506167ffc9\"}]},\"ping\":{\"ping_freshness\":\"{9ec5312e-6997-4923-a284-488de0699fc3}\",\"rd\":6065},\"updatecheck\":{},\"version\""
		":\"9.47.0\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GCEA\",\"cohort\":\"1:s6f:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c6a2b5d414c3f81c83288c5b469da86843655012a11de08c3162af2d35272039\"}]},\"ping\":{\"ping_freshness\":\"{a7754fc1-3cbb-496a-9aea-1ac12785583a}\",\"rd\":6065},\"updatecheck\":{},\"version\":\"20230802.554445550.14\"},{\"appid\":\""
		"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GCEA\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.637291d97df4f18b565debcf86891de8bc2ea0b137294c1069bff44864d74f7d\"}]},\"ping\":{\"ping_freshness\":\"{92d4659e-086d-4eee-ad18-e551d2d38652}\",\"rd\":6065},\"updatecheck\":{},\"version\":\"405\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GCEA\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto"
		"\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{a905d4de-eab7-4fc5-aad8-7bc1247bc2f0}\",\"rd\":6065},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GCEA\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.05e2beeeef168c53566610c28f4301ec0a6211339fb14260fc08d6896f0341e7\"}]},\"ping\":{\"ping_freshness\":\"{bd3fbebb-7fd9-4bb7-8d7d-2ba9c8cf3063}\",\"rd\":6065},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"61\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GCEA\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.f6ef3d9ef413c09e2612788995fee1e00c0700dadc0f7e5b0b53a047203a2b58\"}]},\"ping"
		"\":{\"ping_freshness\":\"{4b94f95f-076a-41b2-b9cd-8986fadf6583}\",\"rd\":6065},\"updatecheck\":{},\"version\":\"8169\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GCEA\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.3e4f959036fef1cae2b1f426864a23f11caae1c96a2816523f2daf4213c3cc73\"}]},\"ping\":{\"ping_freshness\":\"{c04d8cf9-3e99-4704-94f8-37938dba529b}\",\"rd\":6065},\"updatecheck\":{},\"version\":\"1.0.0.14\"},"
		"{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GCEA\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{58bc2c56-f7ab-4110-b82f-ecc60760c58e}\",\"rd\":6065},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GCEA\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6065,\"lang\":\"en-US\",\"packages\":{\""
		"package\":[{\"fp\":\"1.8dbdf891d2522487b7bfb83486ea742486c57b13372bbbfacbbd7765b4145a11\"}]},\"ping\":{\"ping_freshness\":\"{2a1f92c9-8e9e-4173-ad3d-3575d141ebaa}\",\"rd\":6065},\"updatecheck\":{},\"version\":\"2023.8.8.3\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GCEA\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.7c9864699c68bff25256b15d79fea947f95707615610e34e5cb50f8bb0e7844d\"}]},\"ping\":{\"ping_freshness\":\"{ee55a390-e78f-41e9-a96a-cafff9572fc0}\",\"rd\":6065},\"updatecheck\":{},\"version\":\"670\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GCEA\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\""
		"ping_freshness\":\"{77a5a520-bf33-4abd-b60c-78d6c696002b}\",\"rd\":6065},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GCEA\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.202f4c3b173713c18031e8f1e7f271b999a59d8a8d14651225a287ca91c2751e\"}]},\"ping\":{\"ping_freshness\":\"{d9b47193-a01d-4a1b-9448-014e56eaaf87}\",\"rd\":6065},\"updatecheck\":{}"
		",\"version\":\"2987\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GCEA\",\"cohort\":\"1:ut9/1a0f:\",\"cohortname\":\"108-and-above-all-users\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ed2f4d0fa9d2f99837719f80e3990498314290c6a294a72296ddcada784dd278\"}]},\"ping\":{\"ping_freshness\":\"{63fa6e01-9739-4b72-9280-f424da5e8d41}\",\"rd\":6065},\"updatecheck\":{},\"version\":\"2022.12.16.779\"},{\"appid\":\""
		"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GCEA\",\"cohort\":\"1:wvr/1wdr/1wdx:\",\"cohortname\":\"Control\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.1cf51b2226cb49c5fedd71899a6f36bca71017c67394be34708e76283c77ec1c\"}]},\"ping\":{\"ping_freshness\":\"{5d59c58c-a5ee-4863-9bff-37d39744f583}\",\"rd\":6065},\"updatecheck\":{},\"version\":\"117.0.5938.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GCEA\",\"cohort\":\"1:w0x:\","
		"\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{17b60489-52a8-4ac8-aaee-7f596dc6f753}\",\"rd\":6065},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GCEA\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":"
		"{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{3a1aa6da-1e97-4a1d-9acc-f35066050e9b}\",\"rd\":6065},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\""
		":\"Windows\",\"version\":\"10.0.17763.1935\"},\"prodversion\":\"115.0.5790.171\",\"protocol\":\"3.1\",\"requestid\":\"{10981ff3-6402-4874-a5ca-dbc3a2e1d301}\",\"sessionid\":\"{28e19742-cef8-4207-8510-6ac06222d379}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.292\"},\"updaterversion\":\"115.0.5790.171\"}}", 
		LAST);

	lr_think_time(71);

	web_submit_data("login.pl",
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t7.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value=jojo", ENDITEM,
		"Name=password", "Value=bean", ENDITEM,
		"Name=login.x", "Value=36", ENDITEM,
		"Name=login.y", "Value=13", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		EXTRARES,
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req=Ch4KDGdvb2dsZWNocm9tZRIOMTE1LjAuNTc5MC4xNzEaKQgFEAEaGwoNCAUQBhgBIgMwMDEwARCdixIaAhgHBP8uXyIEIAEgAigBGikIARABGhsKDQgBEAYYASIDMDAxMAEQwuUMGgIYB2xvCGoiBCABIAIoARopCAMQARobCg0IAxAGGAEiAzAwMTABEP7bDBoCGAcA17xYIgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARCdjwcaAhgHOZMiDCIEIAEgAigBGigIARAIGhoKDQgBEAgYASIDMDAxMAQQzTQaAhgHC0g_rSIEIAEgAigEGikIDxABGhsKDQgPEAYYASIDMDAxMAEQqqgBGgIYBzHHyh0iBCABIAIoARonCAoQCBoZCg0IChAIGAEiAzAwMTABEAcaAhgHRPylUyIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQIRoCGAcm7GMZIgQgASACKAEaKAgIEAEaGgoNCAgQBhgBIgMwMDEwARDbExoCGAdJSPIxIgQgASACKAEaKQgNEAEaGwoNCA0QBhgBIgMwMDEwARCw9AEaAhgHVpbn0SIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQwqsNGgIYB4hEo3IiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEOobGgIYBwxbbdAiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", ENDITEM,
		LAST);
	
	lr_think_time(316);

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t8.inf", 
		LAST);

	lr_think_time(255);

                   
	/*web_submit_form("reservations.pl", 
		"Snapshot=t9.inf", 
		ITEMDATA, 
		"Name=depart", "Value=San Francisco", ENDITEM, 
		"Name=departDate", "Value=08/12/2023", ENDITEM, 
		"Name=arrive", "Value=Paris", ENDITEM, 
		"Name=returnDate", "Value=08/13/2023", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=on", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		LAST);*/
	
	web_submit_data("reservations.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=San Francisco", ENDITEM, 
		"Name=departDate", "Value=08/12/2023", ENDITEM, 
		"Name=arrive", "Value=Paris", ENDITEM, 
		"Name=returnDate", "Value=08/13/2023", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=on", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=46", ENDITEM, 
		"Name=findFlights.y", "Value=7", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	lr_think_time(273);

	web_submit_form("reservations.pl_2",
		"Snapshot=t10.inf",
		ITEMDATA,
		"Name=outboundFlight", "Value=640;622;08/12/2023", ENDITEM,
		"Name=returnFlight", "Value=460;622;08/13/2023", ENDITEM,
		"Name=reserveFlights.x", "Value=53", ENDITEM,
		"Name=reserveFlights.y", "Value=8", ENDITEM,
		LAST);

	lr_think_time(249);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t11.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=1234567890", ENDITEM, 
		"Name=expDate", "Value=12/25", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		LAST);

	lr_think_time(168);
	web_url("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	 return 0;
}
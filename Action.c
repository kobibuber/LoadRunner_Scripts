Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_user("TestingUser", 
		lr_unmask("64da0d4221f50400f517b66e0eb3"), 
		"www.advantageonlineshopping.com:80");

	web_add_cookie("_ga=GA1.1.1128454808.1692011737; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1692011736.1.0.1692011736.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1692011739.1.1.1692011773.26.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1692011739.1.1.1692011789.10.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_url("www.advantageonlineshopping.com", 
		"URL=http://www.advantageonlineshopping.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&tid=G-56EMNRF2S2&cid=1128454808.1692011737&gtm=45je3890&aip=1&z=75274344", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=mice", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=tablets", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=speakers", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=laptops", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=headphones", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/category_banner_3.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3200", ENDITEM, 
		"Url=/css/images/Filter.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3301", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3303", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3302", ENDITEM, 
		"Url=/css/images/SafePay.png", ENDITEM, 
		"Url=/css/images/Shipex.png", ENDITEM, 
		"Url=/css/images/User.jpg", ENDITEM, 
		"Url=/css/images/Master_credit.png", ENDITEM, 
		LAST);

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=115", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("collect", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-TBPYED8WSW&gtm=45je3890&_p=861535974&cid=1128454808.1692011737&ul=en-us&sr=1598x1048&_s=1&sid=1692011736&sct=1&seg=0&dl=http%3A%2F%2Fwww.advantageonlineshopping.com%2F&dt=%C2%A0Advantage%20Shopping&en=page_view&_fv=1&_nsi=1&_ss=1&_ee=1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	web_url("ALL", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=http://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=http://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=http://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		LAST);

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=http://www.advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTE1LjAuNTc5MC4xNzESJQnToD8hWAYqkhIFDeeNQA4SBQ3OQUx6EgUNeG8SGRIFDQ8Wvis=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("_ga=GA1.2.1128454808.1692011737; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gid=GA1.2.810696112.1692011739; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");

	web_url("categories", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("collect_2", 
		"URL=https://analytics.google.com/g/collect?v=2&tid=G-56EMNRF2S2&gtm=45je3890&_p=861535974&_gaz=1&ul=en-us&sr=1598x1048&cid=1128454808.1692011737&ir=1&_eu=EBAI&_s=1&dl=http%3A%2F%2Fwww.advantageonlineshopping.com%2F&dt=%C2%A0Advantage%20Shopping&sid=1692011739&sct=1&seg=0&en=page_view&_fv=1&_ss=1&_ee=1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1692011739.1.0.1692011739.60.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_url("search", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("collect_3", 
		"URL=https://stats.g.doubleclick.net/g/collect?v=2&tid=G-56EMNRF2S2&cid=1128454808.1692011737&gtm=45je3890&aip=1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("popularProducts.json", 
		"URL=http://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1692011739.1.1.1692011741.58.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_url("home-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/images/arrow_right.png", "Referer=http://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=http://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=http://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/FacebookLogo.png", "Referer=http://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		LAST);

	lr_think_time(12);

	web_custom_request("AccountLoginRequest", 
		"URL=http://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>Testing123</loginPassword><loginUser>TestingUser</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1692011739.1.1.1692011758.41.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_url("564717920", 
		"URL=http://www.advantageonlineshopping.com/order/api/v1/carts/564717920", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(14);

	web_url("products", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories/3/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attributes", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_url("category-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/category-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(13);

	web_url("18", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/products/18", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_url("all_data", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products_2", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories/3/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_url("product-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:-ps0Cl1BXg6FxoRKETLe43HV1J0AEE1t53KccGGH8oA&cup2hreq=f304c3d019b7e7a2b7ef58a9e4ff016d3d7ebb1b77a4bc75182c2e1323913a56", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"_internal_experimental_sets\":\"false\",\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GCEA\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto General release\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.5a506939f22e0e53bd8b919b551401480815141ab3143004ac047b045713615b\"}]},\"ping\":{\"ping_freshness\":\""
		"{a4a95d23-3238-4d12-87a5-b9deff875e24}\",\"rd\":6069},\"updatecheck\":{},\"version\":\"2023.8.9.0\"},{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GCEA\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{590b1b06-27c7-4294-975e-09d94996172f}\",\"rd\":6069},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GCEA\",\"cohort\":\"1:1unx:\",\"cohortname\":\"Chrome 115+\",\""
		"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{ef706c3c-4717-45cc-8a4b-aeed33b4bf8d}\",\"rd\":6069},\"updatecheck\":{},\"version\":\"4.10.2662.3\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GCEA\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\""
		"{51443ca1-d24f-49b6-8f36-f6babc4472fa}\",\"rd\":6069},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GCEA\",\"cohort\":\"1:bm1:\",\"cohortname\":\"M54AndUp\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.4c67e9ab7c30c48322e5f6fe5acbd64132c054ebb91bd510b414b1506167ffc9\"}]},\"ping\":{\"ping_freshness\":\"{3373f82b-ffdb-4912-8d16-8c429a9c1dd4}\",\"rd\":6069},\"updatecheck\":{},\"version\""
		":\"9.47.0\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GCEA\",\"cohort\":\"1:s6f:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c6a2b5d414c3f81c83288c5b469da86843655012a11de08c3162af2d35272039\"}]},\"ping\":{\"ping_freshness\":\"{0a0e4f85-c371-4b92-9ff0-b84c3f975a02}\",\"rd\":6069},\"updatecheck\":{},\"version\":\"20230802.554445550.14\"},{\"appid\":\""
		"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GCEA\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.637291d97df4f18b565debcf86891de8bc2ea0b137294c1069bff44864d74f7d\"}]},\"ping\":{\"ping_freshness\":\"{49585737-248f-45d0-8a6f-82ee8f6c7647}\",\"rd\":6069},\"updatecheck\":{},\"version\":\"405\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GCEA\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto"
		"\",\"enabled\":true,\"installdate\":6065,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8dbdf891d2522487b7bfb83486ea742486c57b13372bbbfacbbd7765b4145a11\"}]},\"ping\":{\"ping_freshness\":\"{47e37036-7f37-4b35-9471-9573513ef32a}\",\"rd\":6069},\"updatecheck\":{},\"version\":\"2023.8.8.3\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GCEA\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\""
		"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{29c92419-1653-41dc-acab-46b335771890}\",\"rd\":6069},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GCEA\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.05e2beeeef168c53566610c28f4301ec0a6211339fb14260fc08d6896f0341e7\"}]},\"ping\":{\""
		"ping_freshness\":\"{0d8b2e2d-d4e1-4177-811c-8f28361d4d30}\",\"rd\":6069},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"61\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GCEA\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.3e4f959036fef1cae2b1f426864a23f11caae1c96a2816523f2daf4213c3cc73\"}]},\"ping\":{\"ping_freshness\":\"{197e58d3-e1f0-4033-af00-96ced3169808}\",\"rd\":6069},\"updatecheck\":{},\"version\":\""
		"1.0.0.14\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GCEA\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{6d1b1cf7-a362-4f9e-aa5b-3a2f7327a23e}\",\"rd\":6069},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GCEA\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\""
		"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{3cc93dd0-534c-42b0-91a7-129d35c77537}\",\"rd\":6069},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GCEA\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.ec39f3b70e4c48394c959aad9807df86ac91e7061bf2f2e7fafb33524f5d7eed\"}]},\"ping\":{\"ping_freshness\":\"{e852e4a3-c918-4ad0-ae07-99a77648077f}\",\"rd\":6069},\"updatecheck\":{},\"version\":\"675\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GCEA\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.202f4c3b173713c18031e8f1e7f271b999a59d8a8d14651225a287ca91c2751e\"}]},\"ping\":{\""
		"ping_freshness\":\"{5b969530-acec-42aa-89be-cb4a062fb9e2}\",\"rd\":6069},\"updatecheck\":{},\"version\":\"2987\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GCEA\",\"cohort\":\"1:ut9/1a0f:\",\"cohortname\":\"108-and-above-all-users\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ed2f4d0fa9d2f99837719f80e3990498314290c6a294a72296ddcada784dd278\"}]},\"ping\":{\"ping_freshness\":\"{49a7843d-41dd-44ad-9674-f59d504c7fda}\",\"rd\":6069},"
		"\"updatecheck\":{},\"version\":\"2022.12.16.779\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GCEA\",\"cohort\":\"1:wvr/1wdr/1wdx:\",\"cohortname\":\"Control\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.1cf51b2226cb49c5fedd71899a6f36bca71017c67394be34708e76283c77ec1c\"}]},\"ping\":{\"ping_freshness\":\"{7fee4833-8543-45d3-9ab7-0780d780964a}\",\"rd\":6069},\"updatecheck\":{},\"version\":\"117.0.5938.0\"},{\"appid\":\""
		"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GCEA\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{ac40887b-5985-4ecb-b7ea-ac2389991266}\",\"rd\":6069},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GCEA\",\"cohort\":\"1:jcl:\",\"cohortname\":\""
		"Auto\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.020f49fdceddcbd6dbe124b357f5151433eecabe509384ff14cf16feac034fd2\"}]},\"ping\":{\"ping_freshness\":\"{2383a5c1-e9d6-48b3-98d1-f98e785f97d9}\",\"rd\":6069},\"updatecheck\":{},\"version\":\"8175\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GCEA\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5971,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp"
		"\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{c1dcceab-5f58-43fe-a555-31b2676b9cc0}\",\"rd\":6069},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\""
		"version\":\"10.0.17763.1935\"},\"prodversion\":\"115.0.5790.171\",\"protocol\":\"3.1\",\"requestid\":\"{b0e92105-ec2b-44e6-9d52-6e5224d4f514}\",\"sessionid\":\"{a4cf05a2-749f-4213-a549-c2ec6bcf1149}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.292\"},\"updaterversion\":\"115.0.5790.171\"}}", 
		LAST);

	lr_think_time(4);

	web_submit_data("414141", 
		"Action=http://www.advantageonlineshopping.com/order/api/v1/carts/564717920/product/18/color/414141?quantity=2", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=sessionId", "Value=B6FE73EE257323C208D0C74C5CED6493", ENDITEM, 
		LAST);

	web_custom_request("GetAccountByIdRequest", 
		"URL=http://www.advantageonlineshopping.com/accountservice/ws/GetAccountByIdRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>564717920</accountId><base64Token>Basic VGVzdGluZ1VzZXI6VGVzdGluZzEyMw==</base64Token></GetAccountByIdRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_custom_request("GetAccountByIdNewRequest", 
		"URL=http://www.advantageonlineshopping.com/accountservice/ws/GetAccountByIdNewRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>564717920</accountId><base64Token>Basic VGVzdGluZ1VzZXI6VGVzdGluZzEyMw==</base64Token></GetAccountByIdNewRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("564717920_2", 
		"URL=http://www.advantageonlineshopping.com/order/api/v1/carts/564717920", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("shippingcost", 
		"URL=http://www.advantageonlineshopping.com/order/api/v1/shippingcost/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"seaddress\":{\"addressLine1\":\"\",\"addressLine2\":\"\",\"city\":\"\",\"country\":\"us\",\"postalCode\":\"\",\"state\":\"\"},\"secustomerName\":\"TestingUser \",\"secustomerPhone\":\"\",\"senumberOfProducts\":2,\"setransactionType\":\"SHIPPING_COST\",\"sessionId\":\"B6FE73EE257323C208D0C74C5CED6493\"}", 
		LAST);

	web_custom_request("GetAccountPaymentPreferencesRequest", 
		"URL=http://www.advantageonlineshopping.com/accountservice/ws/GetAccountPaymentPreferencesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>564717920</accountId><base64Token>Basic VGVzdGluZ1VzZXI6VGVzdGluZzEyMw==</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1692011739.1.1.1692011799.60.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_url("orderPayment-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/order/views/orderPayment-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/images/Bell.png", "Referer=http://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		LAST);

	web_custom_request("GetCountriesRequest", 
		"URL=http://www.advantageonlineshopping.com/accountservice/ws/GetCountriesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		EXTRARES, 
		"Url=/css/images/Check.png", "Referer=http://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		LAST);

	lr_think_time(25);

	web_custom_request("AddSafePayMethodRequest", 
		"URL=http://www.advantageonlineshopping.com/accountservice/ws/AddSafePayMethodRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AddSafePayMethodRequest xmlns=\"com.advantage.online.store.accountservice\"><safePayUsername>TestingUser</safePayUsername><accountId>564717920</accountId><safePayPassword>Testing123</safePayPassword><base64Token>Basic VGVzdGluZ1VzZXI6VGVzdGluZzEyMw==</base64Token></"
		"AddSafePayMethodRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_custom_request("564717920_3", 
		"URL=http://www.advantageonlineshopping.com/order/api/v1/orders/users/564717920", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"orderPaymentInformation\":{\"Transaction_AccountNumber\":\"843200971\",\"Transaction_Currency\":\"USD\",\"Transaction_CustomerPhone\":\"\",\"Transaction_MasterCredit_CVVNumber\":\"\",\"Transaction_MasterCredit_CardNumber\":\"4886\",\"Transaction_MasterCredit_CustomerName\":\"\",\"Transaction_MasterCredit_ExpirationDate\":\"122027\",\"Transaction_PaymentMethod\":\"SafePay\",\"Transaction_ReferenceNumber\":0,\"Transaction_SafePay_Password\":\"Testing123\",\"Transaction_SafePay_UserName\":\""
		"TestingUser\",\"Transaction_TransactionDate\":\"14082023\",\"Transaction_Type\":\"PAYMENT\"},\"orderShippingInformation\":{\"Shipping_Address_Address\":\"\",\"Shipping_Address_City\":\"\",\"Shipping_Address_CountryCode\":40,\"Shipping_Address_CustomerName\":\"TestingUser \",\"Shipping_Address_CustomerPhone\":\"\",\"Shipping_Address_PostalCode\":\"\",\"Shipping_Address_State\":\"\",\"Shipping_Cost\":958,\"Shipping_NumberOfProducts\":2,\"Shipping_TrackingNumber\":0},\"purchasedProducts\":[{\""
		"hexColor\":\"414141\",\"productId\":18,\"quantity\":2,\"hasWarranty\":false}]}", 
		LAST);

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1692011739.1.1.1692011826.33.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_custom_request("564717920_4", 
		"URL=http://www.advantageonlineshopping.com/order/api/v1/carts/564717920", 
		"Method=DELETE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1692011739.1.1.1692011831.28.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1692011736.1.1.1692011833.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	lr_think_time(7);

	web_custom_request("AccountLogoutRequest", 
		"URL=http://www.advantageonlineshopping.com/accountservice/ws/AccountLogoutRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>564717920</loginUser><base64Token>Basic VGVzdGluZ1VzZXI6VGVzdGluZzEyMw==</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>", 
		LAST);

	return 0;
}
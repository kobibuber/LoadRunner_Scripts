Action()
{
	
	lr_start_transaction("TR01_Launch");


/*Correlation comment - Do not change!  Original value='137114.798622924HAfcitcptftVzzzHtcDVHpAftHcf' Name ='userSession' Type ='ResponseBased'*/
	web_reg_save_param_ex(
		"ParamName=userSession",
		"LB=name=\"userSession\" value=\"",
		"RB=\"/>\n<table border",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/nav.pl*",
		LAST);

	web_url("Index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/Index.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		//"Url=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=116", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("TR01_Launch", LR_AUTO);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	lr_think_time(53);

	
	lr_start_transaction("TR02_Login");

	web_submit_data("login.pl",
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t4.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value={Param1_UserName}", ENDITEM,
		"Name=password", "Value={Param2_Password}", ENDITEM,
		"Name=login.x", "Value=51", ENDITEM,
		"Name=login.y", "Value=12", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		LAST);

	lr_end_transaction("TR02_Login",LR_AUTO);

	lr_think_time(1102);

	lr_start_transaction("TR03_SignOff");

	web_url("SignOff Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTE2LjAuNTg0NS45NxIXCTfZQeCPfjGJEgUN541ADhIFDc5BTHo=?alt=proto", "Referer=", ENDITEM, 
		LAST);
	
	lr_end_transaction("TR03_SignOff",LR_AUTO);

	return 0;
}
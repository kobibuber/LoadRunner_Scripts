Action()
{
	web_reg_save_param_ex(
		"ParamName=Corr1_UserSession",
		"LB=<input type=\"hidden\" name=\"userSession\" value=\"",
		"RB=\"/>",
		SEARCH_FILTERS,
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
		"Url=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=115", "Referer=", ENDITEM, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTE1LjAuNTc5MC4xNzMSFwk32UHgj34xiRIFDeeNQA4SBQ3OQUx6?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	lr_think_time(30);

	web_submit_data("login.pl",
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl",
		"Method=POST",
		"TargetFrame=body",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t2.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={Corr1_UserSession}", ENDITEM,
		"Name=username", "Value=jojo", ENDITEM,
		"Name=password", "Value=bean", ENDITEM,
		"Name=login.x", "Value=45", ENDITEM,
		"Name=login.y", "Value=11", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		LAST);

	web_url("Search Flights Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTE1LjAuNTc5MC4xNzMSLAnrCB0dNWv2fxIFDVRiKa0SBQ17ncSlEgUNHzs5hRIFDdqFmWESBQ2pjkq9?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_submit_data("reservations.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=San Francisco", ENDITEM, 
		"Name=departDate", "Value=08/18/2023", ENDITEM, 
		"Name=arrive", "Value=Paris", ENDITEM, 
		"Name=returnDate", "Value=08/19/2023", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=on", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=52", ENDITEM, 
		"Name=findFlights.y", "Value=6", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	lr_think_time(59);

	web_submit_data("reservations.pl_2", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=640;622;08/18/2023", ENDITEM, 
		"Name=returnFlight", "Value=460;622;08/19/2023", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=reserveFlights.x", "Value=35", ENDITEM, 
		"Name=reserveFlights.y", "Value=12", ENDITEM, 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req="
		"Ch4KDGdvb2dsZWNocm9tZRIOMTE1LjAuNTc5MC4xNzMaKQgFEAEaGwoNCAUQBhgBIgMwMDEwARCwkhIaAhgHTz5unyIEIAEgAigBGikIARABGhsKDQgBEAYYASIDMDAxMAEQ8-cMGgIYBwFh71AiBCABIAIoARopCAMQARobCg0IAxAGGAEiAzAwMTABELDeDBoCGAewKIeVIgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARDZjwcaAhgHi6sVdCIEIAEgAigBGigIARAIGhoKDQgBEAgYASIDMDAxMAQQ0jQaAhgH-EoSUSIEIAEgAigEGikIDxABGhsKDQgPEAYYASIDMDAxMAEQ26oBGgIYB0E1Y_MiBCABIAIoARonCAoQCBoZCg0IChAIGAEiAzAwMTABEAcaAhgHRPylUyIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQIRoCGAcm7GMZIgQgASACKAEaKAgIEA"
		"EaGgoNCAgQBhgBIgMwMDEwARDeExoCGAeqok3mIgQgASACKAEaKQgNEAEaGwoNCA0QBhgBIgMwMDEwARDY9AEaAhgHW9tTdSIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQ8q0NGgIYB2Pl8N4iBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEPUbGgIYB-IeFOAiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		LAST);

	web_submit_data("reservations.pl_3", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=1234567890", ENDITEM, 
		"Name=expDate", "Value=12/25", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=outboundFlight", "Value=640;622;08/18/2023", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=460;622;08/19/2023", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=buyFlights.x", "Value=58", ENDITEM, 
		"Name=buyFlights.y", "Value=7", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		LAST);

	lr_think_time(47);

	web_url("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
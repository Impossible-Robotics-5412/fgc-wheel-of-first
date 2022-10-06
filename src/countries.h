//
// Created by Bauke Westendorp on 05/10/2022.
//

#pragma once

#define COUNTRIES countries_1

const char *countries_1[]{
		"Albania",
		"American Samoa",
		"Angola",
		"Argentina",
		"Aruba",
		"Austria",
		"Bahamas",
		"Bangladesh",
		"Belarus",
		"Benin",
		"Bhutan",
		"Bosnia and#Herzegovina",
		"Brazil",
		"Bulgaria",
		"Burundi",
		"Cambodia",
		"Canada",
		"Central African#Republic",
		"Chile",
		"Chinese Taipei",
		"Comoros",
		"Republic of#the Congo",
		"Costa Rica",
		"Croatia",
		"Cyprus",
		"Denmark",
		"Dominica",
		"Ecuador",
		"El Salvador",
		"Eritrea",
		"Eswatini",
		"Fiji",
		"France",
		"Gambia",
		"Germany",
		"Greece",
		"Guam",
		"Guinea",
		"Guyana",
		"Honduras",
		"Hungary",
		"India",
		"Iran",
		"Israel",
		"Jamaica",
		"Jordan",
		"Kenya",
		"Republic of#Korea",
		"Kuwait",
		"Laos",
		"Lebanon",
		"Liberia",
		"Liechtenstein",
		"Luxembourg",
		"Malawi",
		"Maldives",
		"Malta",
		"Mauritania",
		"Mexico",
		"Moldova",
		"Mongolia",
		"Morocco",
		"Myanmar",
		"Nauru",
		"New Zealand",
		"Niger",
		"North Macedonia",
		"Oman",
		"Palau",
		"Panama",
		"Paraguay",
		"Philippines",
		"Portugal",
		"Rwanda",
		"Saint Lucia",
		"Samoa",
		"Sao Tome#and Principe",
		"Senegal",
		"Seychelles",
		"Singapore",
		"Slovenia",
		"South Africa",
		"Spain",
		"Sudan",
		"Switzerland",
		"Tajikistan",
		"Thailand",
		"Togo",
		"Trinidad and#Tobago",
		"Turkey",
		"Tuvalu",
		"Ukraine",
		"United Kingdom",
		"Uruguay",
		"Vanuatu",
		"Vietnam",
		"U.S. Virgin#Islands",
		"Zambia",
		"Zimbabwe",
};

const char *countries_2[]{
		"Afghanistan",
		"Algeria",
		"Andorra",
		"Antigua and#Barbuda",
		"Armenia",
		"Australia",
		"Azerbaijan",
		"Bahrain",
		"Barbados",
		"Belize",
		"Bermuda",
		"Bolivia",
		"Botswana",
		"Brunei Darussalam",
		"Burkina Faso",
		"Cabo Verde",
		"Cameroon",
		"Cayman Islands",
		"Chad",
		"People's Republic#of China",
		"Colombia",
		"Democratic#Republic Congo",
		"Cook Islands",
		"Côte d'Ivoire",
		"Cuba",
		"Czech#Republic",
		"Djibouti",
		"Dominican#Republic",
		"Egypt",
		"Equatorial#Guinea",
		"Estonia",
		"Ethiopia",
		"Finland",
		"Gabon",
		"Georgia",
		"Ghana",
		"Grenada",
		"Guatemala",
		"Guinea-Bissau",
		"Haiti",
		"Hong Kong, China",
		"Iceland",
		"Indonesia",
		"Iraq",
		"Italy",
		"Japan",
		"Kazakhstan",
		"Kiribati",
		"Kosovo",
		"Kyrgyzstan",
		"Latvia",
		"Lesotho",
		"Libya",
		"Lithuania",
		"Madagascar",
		"Malaysia",
		"Mali",
		"Marshall Islands",
		"Mauritius",
		"Federated States#of Micronesia",
		"Monaco",
		"Montenegro",
		"Mozambique",
		"Namibia",
		"Nepal",
		"Nicaragua",
		"Nigeria",
		"Norway",
		"Pakistan",
		"Palestine",
		"Papua New Guinea",
		"Peru",
		"Poland",
		"Puerto Rico",
		"Romania",
		"Saint Kitts and Nevis",
		"Saint Vincent and#the Grenadines",
		"San Marino",
		"Saudi Arabia",
		"Serbia",
		"Sierra Leone",
		"Slovakia",
		"Solomon#Islands",
		"South Sudan",
		"Sri Lanka",
		"Suriname",
		"Syria",
		"Tanzania",
		"Timor-Leste",
		"Tonga",
		"Tunisia",
		"Turkmenistan",
		"Uganda",
		"United Arab#Emirates",
		"United States#of America",
		"Uzbekistan",
		"Venezuela",
		"British Virgin#Islands",
		"Yemen",
};

int total_countries = 98;

const char *pick_country() {
	return COUNTRIES[random(total_countries)];
}
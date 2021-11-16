#include "Address.h"

void Address::setNumberAddress(int value) { _numberAddress = value; }
void Address::setStreetName(string value) { _streetName = value; }
void Address::setWardName(string value) { _wardName = value; }
void Address::setDistrictName(string value) { _districtName = value; }
void Address::setCityName(string value) { _cityName = value; }

int Address::numberAddress() { return _numberAddress; }
string Address::streetName() { return _streetName; }
string Address::wardName() { return _wardName; }
string Address::districtName() { return _districtName; }
string Address::cityName() { return _cityName; }
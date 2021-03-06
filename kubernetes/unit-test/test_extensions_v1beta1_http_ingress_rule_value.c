#ifndef extensions_v1beta1_http_ingress_rule_value_TEST
#define extensions_v1beta1_http_ingress_rule_value_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define extensions_v1beta1_http_ingress_rule_value_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/extensions_v1beta1_http_ingress_rule_value.h"
extensions_v1beta1_http_ingress_rule_value_t* instantiate_extensions_v1beta1_http_ingress_rule_value(int include_optional);



extensions_v1beta1_http_ingress_rule_value_t* instantiate_extensions_v1beta1_http_ingress_rule_value(int include_optional) {
  extensions_v1beta1_http_ingress_rule_value_t* extensions_v1beta1_http_ingress_rule_value = NULL;
  if (include_optional) {
    extensions_v1beta1_http_ingress_rule_value = extensions_v1beta1_http_ingress_rule_value_create(
      list_create()
    );
  } else {
    extensions_v1beta1_http_ingress_rule_value = extensions_v1beta1_http_ingress_rule_value_create(
      list_create()
    );
  }

  return extensions_v1beta1_http_ingress_rule_value;
}


#ifdef extensions_v1beta1_http_ingress_rule_value_MAIN

void test_extensions_v1beta1_http_ingress_rule_value(int include_optional) {
    extensions_v1beta1_http_ingress_rule_value_t* extensions_v1beta1_http_ingress_rule_value_1 = instantiate_extensions_v1beta1_http_ingress_rule_value(include_optional);

	cJSON* jsonextensions_v1beta1_http_ingress_rule_value_1 = extensions_v1beta1_http_ingress_rule_value_convertToJSON(extensions_v1beta1_http_ingress_rule_value_1);
	printf("extensions_v1beta1_http_ingress_rule_value :\n%s\n", cJSON_Print(jsonextensions_v1beta1_http_ingress_rule_value_1));
	extensions_v1beta1_http_ingress_rule_value_t* extensions_v1beta1_http_ingress_rule_value_2 = extensions_v1beta1_http_ingress_rule_value_parseFromJSON(jsonextensions_v1beta1_http_ingress_rule_value_1);
	cJSON* jsonextensions_v1beta1_http_ingress_rule_value_2 = extensions_v1beta1_http_ingress_rule_value_convertToJSON(extensions_v1beta1_http_ingress_rule_value_2);
	printf("repeating extensions_v1beta1_http_ingress_rule_value:\n%s\n", cJSON_Print(jsonextensions_v1beta1_http_ingress_rule_value_2));
}

int main() {
  test_extensions_v1beta1_http_ingress_rule_value(1);
  test_extensions_v1beta1_http_ingress_rule_value(0);

  printf("Hello world \n");
  return 0;
}

#endif // extensions_v1beta1_http_ingress_rule_value_MAIN
#endif // extensions_v1beta1_http_ingress_rule_value_TEST

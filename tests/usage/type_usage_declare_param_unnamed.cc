struct ForwardType;
void foo(ForwardType*) {}
/*
OUTPUT:
{
  "types": [{
      "id": 0,
      "usr": "c:@S@ForwardType",
      "all_uses": ["tests/usage/type_usage_declare_param_unnamed.cc:1:8", "tests/usage/type_usage_declare_param_unnamed.cc:2:10"],
      "interesting_uses": ["tests/usage/type_usage_declare_param_unnamed.cc:2:10"]
    }],
  "functions": [{
      "id": 0,
      "usr": "c:@F@foo#*$@S@ForwardType#",
      "short_name": "foo",
      "qualified_name": "foo",
      "definition": "tests/usage/type_usage_declare_param_unnamed.cc:2:6",
      "all_uses": ["tests/usage/type_usage_declare_param_unnamed.cc:2:6"]
    }],
  "variables": []
}
*/
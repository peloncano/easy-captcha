#ifndef SV_H
#define SV_H
#include <node.h>
#include <string>



class cap {

 public:
  static void create(const v8::FunctionCallbackInfo<v8::Value>& args);
  static int save();
  
 protected:
  static std::string toCString(v8::Handle<v8::Value> strp);

 private:
  cap();
  ~cap();
  
};

#endif
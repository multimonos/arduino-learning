# cpp

```cpp
#define Type DHT11;
```
- text substition
- outdated style
- everywhere the `Type` occurs it will be replaced with `DHT11`


```cpp
static const int type = 1;`
```
- private to this file
- no name collisions across files
- avoids linker conflicts


```cpp
constexpr int type = DHT11;
```
- already has internal linkage by default
- cleaner and most modern


```cpp
void foo() {
    static int count = 0;
    count++;
}
```
- initialized once
- value persists between fn calls


```cpp
class Foo {
public:
    static int count;
}
```
- shared across all instances
- belongs to the class, not objects


`static`
- tyically required for multi-file project only
- avoid symbol collisions

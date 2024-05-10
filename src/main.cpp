/*
 * @Author: test 3402502077@qq.com
 * @Date: 2024-05-10 21:59:13
 * @LastEditors: test 3402502077@qq.com
 * @LastEditTime: 2024-05-10 23:34:45
 * @FilePath: \LED of flowing water\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>

void setup() {
  // 设定主角（程序里的变量对应硬件的引脚），引脚功能/作用（输入/输出）
for(int i = 2; i < 8; i++)
pinMode(i,OUTPUT);
}


void loop() {
  //来回for循环，设置好起止点
for(int i = 2; i < 8; i++ )
  {
    digitalWrite(i , HIGH);
    delay(500);
    digitalWrite(i , LOW);
  }
  for(int i = 7;i > 2;i--)
  {
    digitalWrite(i , HIGH);
    delay(500);
    digitalWrite(i , LOW);
    }
}

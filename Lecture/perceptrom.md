# perceptron

퍼센트론은 다수의 신호를 입력으로 받아 하나의 신호로 출력합니다. <br/>
여기서 말하는 신호란 전류나 강물처럼 흐름이 있는 것을 상상하면 좋습니다. <br/>
다만, 실제 전류와 달리 퍼셉트론 신호는 '흐른다/안 흐른다(1이나 0)'의 두 가지 값을 가질 수 있습니다.

## 가중치와 편향 도입

$
y = 
\begin{cases}
0\;(b + w_1x_1 + w_2x_2\le0) \\
1\;(b + w_1x_1 + w_2x_2>0) \\
\end{cases}
$

$b$ = bias

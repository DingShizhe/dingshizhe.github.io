---
layout: math
title:  "Test for Tags"
date:   2017-05-09 12:10:10 +0800
categories: jekyll update
tags: test
---
### Test for MathJax

$$ \cos^2 x + \sin^2 x = 1 $$   

$$\tan (x+y) = \frac{\tan x + \tan y}{1 - \tan x \tan y}$$

$$F(y)=\int_{\alpha(x)}^{\beta(x)}f(x,y)dx $$

$$F'(y)=f(\beta(y),y)\cdot\beta'(y) + f(\alpha(y),y)\cdot\alpha'(y)+\int_{\alpha(y)}^{\beta(y)}\frac{\partial f}{\partial y}(x, y)dx$$

### Test for C Codes
{% highlight C linenos%}
#inlude <stdio.h>
int main(){
    printf("Hello, world!\n");
    return 0;
}
{% endhighlight %}

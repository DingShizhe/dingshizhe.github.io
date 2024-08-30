---
permalink: /
title: "About Me"
author_profile: true
redirect_from: 
  - /about/
  - /about.html
---


I am currently a Ph.D. student at [the Key Lab of Intelligent Information Processing of the Chinese Academy of Sciences (CAS), Institute of Computing Technology, CAS](https://iip.ict.ac.cn/), supervised by Professor [Dongbo Bu](https://people.ucas.edu.cn/~dbu?language=en). My research is focused on artificial intelligence, with a particular emphasis on numerical methods and combinatorial optimization. I received my Bachelor of Engineering degree from the [University of Chinese Academy of Sciences (UCAS)](https://english.ucas.ac.cn/) in 2019. My work aims to advance the development of robust, efficient, and explainable AI models that can be applied to solve practical problems in daily life, bridging the gap between theoretical research and real-world applications.


## Publications

{% for category in site.publication_category  %}
  {% assign title_shown = false %}
  {% for post in site.publications reversed %}
    {% if post.category != category[0] %}
      {% continue %}
    {% endif %}
    {% unless title_shown %}
      {% assign title_shown = true %}
    {% endunless %}
    {% include archive-single-cv.html %}
  {% endfor %}
{% endfor %}


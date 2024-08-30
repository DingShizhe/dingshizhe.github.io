---
title: "NIERT: Accurate Numerical Interpolation through Unifying Scattered Data Representations using Transformer Encoder"
authors: "<strong>Shizhe Ding</strong>, <a href=\"https://lawrencexia2008.github.io/\">Boyang Xia</a>, Milong Ren and <a href=\"https://people.ucas.edu.cn/~dbu?language=en/\">Dongbo Bu</a>"
collection: publications
category: interpolation
permalink: /publication/2024-niert
excerpt: 
date: 2024-05-03
venue: 'IEEE Transactions on Knowledge and Data Engineering (TKDE)'
slidesurl: 
paperurl: 'https://papers.nips.cc/paper_files/paper/2023/hash/1d5a92867cf463fad136cfa23395840b-Abstract-Conference.html'
# citation: 'Your Name, You. (2009). &quot;Paper Title Number 1.&quot; <i>Journal 1</i>. 1(1).'
citation:
header:
  teaser: "niert_pipeline.png"
---

Interpolation for scattered data is a classical problem in numerical analysis, with a long history of theoretical and practical contributions. Recent advances have utilized deep neural networks to construct interpolators, exhibiting excellent and generalizable performance. However, they still fall short in two aspects: **1) inadequate representation learning**, resulting from separate embeddings of observed and target points in popular encoder-decoder frameworks and **2) limited generalization power**, caused by overlooking prior interpolation knowledge shared across different domains. To overcome these limitations, we present a **N**umerical **I**nterpolation approach using **E**ncoder **R**epresentation of **T**ransformers (called **NIERT**). On one hand, NIERT utilizes an encoder-only framework rather than the encoder-decoder structure. This way, NIERT can embed observed and target points into a unified encoder representation space, thus effectively exploiting the correlations among them and obtaining more precise representations.  On the other hand, we propose to pre-train NIERT on large-scale synthetic mathematical functions to acquire prior interpolation knowledge, and transfer it to multiple interpolation domains with consistent performance gain. On both synthetic and real-world datasets, NIERT outperforms the existing approaches by a large margin, i.e., 4.3~14.3x lower MAE on TFRD subsets, and 1.7/1.8/8.7x lower MSE on Mathit/PhysioNet/PTV datasets. The source code of NIERT is available at [https://github.com/DingShizhe/NIERT](https://github.com/DingShizhe/NIERT).
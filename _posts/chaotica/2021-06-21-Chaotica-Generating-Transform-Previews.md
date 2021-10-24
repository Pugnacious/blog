---
layout: single
title: 'Chaotica: Generating Transform Previews'
categories: fractal chaotica
permalink: /chaotica/transform/previews
author: Pugnacious
toc: true
toc_label: Table of Contents
excerpt: This is a tutorial on generating transform previews
---

## Credits

All credit for the method to generate the previews goes out to [Toan Lish](https://www.artstation.com/toanlish) who did all the research and put together this awesome chaos file.

> _If I have seen further than others, it is by standing upon the shoulders of giants. - Isaac Newton_

## The Setup

First, we need a special Chaos file. This was created by Toan Lish and released on the fractal discord around a year ago. It's purpose is to generate preview images for transforms.

[Chaos File](/assets/files/chaotica-generating-transform-previews/Generating-Chaotica-Thumbnails.chaos)

As you absolutely shouldn't trust a random download on the internet, I'm also including the file in text format here. You can skip this section if you choose to just download the file.

### Chaos File

```
<?xml version="1.0" encoding="utf-8"?>
<world name="World">
<int name="format_version">2</int>
<IFS name="Generating Chaotica Thumbnails">
<imaging name="img">
  <int name="image_width">160</int>
  <int name="image_height">160</int>
  <int name="image_aa_level">4</int>
  <int name="image_layers">1</int>
  <int name="image_quality">0</int>
  <string name="antialiasing_mode">smooth</string>
  <real name="brightness">60</real>
  <vec4 name="background_colour">0 0 0 1</vec4>
  <bool name="apply_bg_before_curves">false</bool>
  <real name="flam3_gamma">3</real>
  <real name="flam3_vibrancy">1</real>
  <bool name="flam3_use_highlight_power">false</bool>
  <real name="flam3_highlight_power">100</real>
  <real name="flam3_gamma_linear_threshold">0</real>
  <table name="layer_weights">
    <values>1 1 1 1</values>
  </table>
</imaging>
<camera name="flam3 camera">
  <vec2 name="pos">0 0</vec2>
  <real name="rotate">0</real>
  <real name="sensor_width">2.65</real>
  <flam3_transform name="Camera transform">
    <affine2 name="Pre affine">
      <real name="x_axis_angle">0</real>
      <real name="x_axis_length">1</real>
      <real name="y_axis_angle">90</real>
      <real name="y_axis_length">1</real>
      <vec2 name="offset">0 0</vec2>
    </affine2>
    <node name="transforms">
      <flam3_variation name="linear">
        <string name="variation_name">linear</string>
        <params>
          <real name="linear">1</real>
        </params>
      </flam3_variation>
    </node>
    <node name="post_transforms">
      <flam3_variation name="New variation">
        <string name="variation_name">post_smartcrop</string>
        <params>
          <real name="post_smartcrop">1</real>
          <real name="post_scrop_power">4</real>
          <real name="post_scrop_radius">1</real>
          <real name="post_scrop_roundstr">0</real>
          <real name="post_scrop_roundwidth">0</real>
          <real name="post_scrop_distortion">1</real>
          <real name="post_scrop_edge">0</real>
          <real name="post_scrop_scatter">0</real>
          <real name="post_scrop_offset">0</real>
          <real name="post_scrop_rotation">0</real>
          <real name="post_scrop_cropmode">0</real>
          <real name="post_scrop_static">2</real>
        </params>
      </flam3_variation>
      <flam3_variation name="New variation">
        <string name="variation_name">linear</string>
        <params>
          <real name="linear">1</real>
        </params>
      </flam3_variation>
    </node>
  </flam3_transform>
</camera>
<node name="iterators">
  <iterator name="Iterator 1">
    <flam3_transform name="flam3_xform 1">
      <affine2 name="Pre affine">
        <real name="x_axis_angle">0</real>
        <real name="x_axis_length">1</real>
        <real name="y_axis_angle">90</real>
        <real name="y_axis_length">1</real>
        <vec2 name="offset">0 0</vec2>
      </affine2>
      <affine2 name="Post affine">
        <real name="x_axis_angle">0</real>
        <real name="x_axis_length">1</real>
        <real name="y_axis_angle">90</real>
        <real name="y_axis_length">1</real>
        <vec2 name="offset">0.5 -0.5</vec2>
      </affine2>
      <node name="transforms">
        <flam3_variation name="Transform 3">
          <string name="variation_name">sineblur</string>
          <params>
            <real name="sineblur">2</real>
            <real name="sineblur_power">0.5</real>
          </params>
        </flam3_variation>
      </node>
    </flam3_transform>
    <flam3_shader name="flam3 shader">
      <real name="palette_index">0.108</real>
      <real name="blend_speed">1</real>
      <real name="opacity">1</real>
      <table name="layer_weights">
        <values>1 1 1 1</values>
      </table>
    </flam3_shader>
    <weights_selector name="Iterator selection weights">
      <real name="Base weight">0.5</real>
      <node name="per_iterator_weights">
        <real name="Iterator 1 weight">1</real>
        <real name="Iterator 2 weight">1</real>
        <real name="Iterator 3 weight">1</real>
        <real name="Iterator 4 weight">1</real>
      </node>
    </weights_selector>
    <real name="time_scale">1</real>
  </iterator>
  <iterator name="Iterator 2">
    <flam3_transform name="flam3_xform 2">
      <affine2 name="Pre affine">
        <real name="x_axis_angle">0</real>
        <real name="x_axis_length">1</real>
        <real name="y_axis_angle">90</real>
        <real name="y_axis_length">1</real>
        <vec2 name="offset">0 0</vec2>
      </affine2>
      <affine2 name="Post affine">
        <real name="x_axis_angle">0</real>
        <real name="x_axis_length">1</real>
        <real name="y_axis_angle">90</real>
        <real name="y_axis_length">1</real>
        <vec2 name="offset">-0.5 -0.5</vec2>
      </affine2>
      <node name="transforms">
        <flam3_variation name="Transform 3">
          <string name="variation_name">sineblur</string>
          <params>
            <real name="sineblur">2</real>
            <real name="sineblur_power">0.5</real>
          </params>
        </flam3_variation>
      </node>
    </flam3_transform>
    <flam3_shader name="flam3 shader">
      <real name="palette_index">0.382</real>
      <real name="blend_speed">1</real>
      <real name="opacity">1</real>
      <table name="layer_weights">
        <values>1 1 1 1</values>
      </table>
    </flam3_shader>
    <weights_selector name="Iterator selection weights">
      <real name="Base weight">0.5</real>
      <node name="per_iterator_weights">
        <real name="Iterator 1 weight">1</real>
        <real name="Iterator 2 weight">1</real>
        <real name="Iterator 3 weight">1</real>
        <real name="Iterator 4 weight">1</real>
      </node>
    </weights_selector>
    <real name="time_scale">1</real>
  </iterator>
  <iterator name="Iterator 3">
    <flam3_transform name="flam3_xform 3">
      <affine2 name="Pre affine">
        <real name="x_axis_angle">0</real>
        <real name="x_axis_length">1</real>
        <real name="y_axis_angle">90</real>
        <real name="y_axis_length">1</real>
        <vec2 name="offset">0 0</vec2>
      </affine2>
      <affine2 name="Post affine">
        <real name="x_axis_angle">0</real>
        <real name="x_axis_length">1</real>
        <real name="y_axis_angle">90</real>
        <real name="y_axis_length">1</real>
        <vec2 name="offset">-0.5 0.5</vec2>
      </affine2>
      <node name="transforms">
        <flam3_variation name="Transform 3">
          <string name="variation_name">sineblur</string>
          <params>
            <real name="sineblur">2</real>
            <real name="sineblur_power">0.5</real>
          </params>
        </flam3_variation>
      </node>
    </flam3_transform>
    <flam3_shader name="flam3 shader">
      <real name="palette_index">0.656</real>
      <real name="blend_speed">1</real>
      <real name="opacity">1</real>
      <table name="layer_weights">
        <values>1 1 1 1</values>
      </table>
    </flam3_shader>
    <weights_selector name="Iterator selection weights">
      <real name="Base weight">0.5</real>
      <node name="per_iterator_weights">
        <real name="Iterator 1 weight">1</real>
        <real name="Iterator 2 weight">1</real>
        <real name="Iterator 3 weight">1</real>
        <real name="Iterator 4 weight">1</real>
      </node>
    </weights_selector>
    <real name="time_scale">1</real>
  </iterator>
  <iterator name="Iterator 4">
    <flam3_transform name="flam3_xform 4">
      <affine2 name="Pre affine">
        <real name="x_axis_angle">0</real>
        <real name="x_axis_length">1</real>
        <real name="y_axis_angle">90</real>
        <real name="y_axis_length">1</real>
        <vec2 name="offset">0 0</vec2>
      </affine2>
      <affine2 name="Post affine">
        <real name="x_axis_angle">0</real>
        <real name="x_axis_length">1</real>
        <real name="y_axis_angle">90</real>
        <real name="y_axis_length">1</real>
        <vec2 name="offset">0.5 0.5</vec2>
      </affine2>
      <node name="transforms">
        <flam3_variation name="Transform 3">
          <string name="variation_name">sineblur</string>
          <params>
            <real name="sineblur">2</real>
            <real name="sineblur_power">0.5</real>
          </params>
        </flam3_variation>
      </node>
    </flam3_transform>
    <flam3_shader name="flam3 shader">
      <real name="palette_index">0.906</real>
      <real name="blend_speed">1</real>
      <real name="opacity">1</real>
      <table name="layer_weights">
        <values>1 1 1 1</values>
      </table>
    </flam3_shader>
    <weights_selector name="Iterator selection weights">
      <real name="Base weight">0.5</real>
      <node name="per_iterator_weights">
        <real name="Iterator 1 weight">1</real>
        <real name="Iterator 2 weight">1</real>
        <real name="Iterator 3 weight">1</real>
        <real name="Iterator 4 weight">1</real>
      </node>
    </weights_selector>
    <real name="time_scale">1</real>
  </iterator>
</node>
<colouring>
  <table name="flam3_palette">
    <values>0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.50980395 0.019607844 0.26666668 0.41176474 0.019607844 0.2627451 0.3137255 0.019607844 0.25882354 0.21568629 0.019607844 0.2509804 0.11764707 0.019607844 0.24705884 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.019607844 0.24313727 0.019607844 0.14117648 0.2509804 0.019607844 0.26666668 0.25490198 0.019607844 0.38823533 0.25882354 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.019607844 0.50980395 0.26666668 0.15686275 0.5254902 0.27450982 0.2901961 0.5372549 0.28235295 0.427451 0.54901963 0.28627452 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766 0.5647059 0.5647059 0.29411766</values>
  </table>
</colouring>
</IFS>
</world>
```

## How to use it

Now, when you open the file, you'll see a rainbow square. This is normal.

[![First Open](/assets/images/chaotica-generating-transform-previews/chaotica_2021-06-26_09-13-29.png)](/assets/images/chaotica-generating-transform-previews/chaotica_2021-06-26_09-13-29.png)

Next, go to the camera transform. Click on the second post transform and change that to the transform you want an image of. Save the image.

[![Editor Window](/assets/images/chaotica-generating-transform-previews/chaotica_2021-06-26_09-16-38.png)](/assets/images/chaotica-generating-transform-previews/chaotica_2021-06-26_09-16-38.png)

Move this generated image to the following folder.

`C:\Program Files\Chaotica\data\transform_thumbs`

Yeah...that was a bit too easy, right?

### Note

Sometimes it may be a good idea to adjust the transform's variables in order to get a preview image that better reflects what the transform does. I would suggest using your own judgement and making it look the way you prefer.

Optional: If you did change the variables for the preview to look better, you may want to save those values inside the transform code using the "demoval" tag. For example, the default values for the curl transform are `curl_c1=0, curl_c1=0<>`, but the preview uses the values `curl_c1=0.25, curl_c2=-0.2`. And this is how it looks like inside curl's code:

```
<transform_def name="curl">
        <node name="input_params">
            <real name="curl">1</real>
            <real name="curl_c1" demoval="0.25">0</real>
            <real name="curl_c2" demoval="-0.2">0</real>
        </node>
```

Good luck friends!

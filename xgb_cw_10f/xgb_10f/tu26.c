
#include "header.h"

void predict_unit26(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)272)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[7] += -0.00019946783;
            } else {
              result[7] += 0.13659488;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[7] += -0.1103432;
            } else {
              result[7] += -0.0005998605;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53207)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52615)) {
              result[7] += 0.0018125664;
            } else {
              result[7] += 0.023041591;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
              result[7] += -0.04909685;
            } else {
              result[7] += 0.00013319192;
            }
          }
        }
      } else {
        result[7] += -0.06303972;
      }
    } else {
      result[7] += 0.101138316;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)495)) {
      result[7] += -0.09655905;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        result[7] += 0.061425064;
      } else {
        result[7] += -0.04367168;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)57338)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
              result[8] += -0.00019770706;
            } else {
              result[8] += -0.01472566;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56523)) {
              result[8] += 0.06990848;
            } else {
              result[8] += 0.13354155;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            result[8] += -0.12903985;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.09624684;
            } else {
              result[8] += -0.052064333;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57868)) {
          result[8] += 0.18548584;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58035)) {
            result[8] += -0.11144305;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58206)) {
              result[8] += 0.14842474;
            } else {
              result[8] += 0.005472769;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[8] += 0.055082347;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          result[8] += -0.02549887;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58035)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[8] += -0.002307308;
            } else {
              result[8] += 0.0027933908;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58206)) {
              result[8] += -0.04736262;
            } else {
              result[8] += -0.0019174119;
            }
          }
        }
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[8] += -0.021797184;
            } else {
              result[8] += -0.086973704;
            }
          } else {
            result[8] += 0.034177855;
          }
        } else {
          result[8] += -0.15273683;
        }
      } else {
        result[8] += 0.019357031;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)39)) {
        result[8] += 0.085638724;
      } else {
        result[8] += -0.058992445;
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    result[9] += -7.114544e-05;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[9] += 0.005479529;
    } else {
      result[9] += 0.0012754272;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[10] += -0.0001726766;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[10] += 0.0017830608;
            } else {
              result[10] += -0.07798124;
            }
          } else {
            result[10] += 0.036708713;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
              result[10] += -0.00084026245;
            } else {
              result[10] += 0.000344182;
            }
          } else {
            result[10] += 0.036343772;
          }
        }
      }
    } else {
      result[10] += -0.0012938819;
    }
  } else {
    result[10] += -0.022251137;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[11] += -0.0003601092;
            } else {
              result[11] += -0.10031213;
            }
          } else {
            result[11] += 0.0048623835;
          }
        } else {
          result[11] += -0.013485751;
        }
      } else {
        result[11] += -0.09101158;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.00035596528;
            } else {
              result[11] += -0.009578367;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += 0.0037570184;
            } else {
              result[11] += 0.10039141;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.026277134;
            } else {
              result[11] += 0.11816359;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[11] += -0.1081598;
            } else {
              result[11] += -0.0039459635;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.117424145;
        } else {
          result[11] += -0.00015056031;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
      result[11] += -0.09225675;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
          result[11] += 0.00018532407;
        } else {
          result[11] += -0.1048888;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
          result[11] += 0.0013461962;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
              result[11] += -0.00094444235;
            } else {
              result[11] += -0.0032640595;
            }
          } else {
            result[11] += 0.017362174;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
              result[12] += -0.00018407189;
            } else {
              result[12] += -0.12180905;
            }
          } else {
            result[12] += 0.001678055;
          }
        } else {
          result[12] += -0.042806633;
        }
      } else {
        result[12] += 0.048041184;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
        result[12] += 0.036461473;
      } else {
        result[12] += -0.053511217;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          result[12] += 0.006533181;
        } else {
          result[12] += 0.08737962;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          result[12] += 0.005223908;
        } else {
          result[12] += 0.021808615;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          result[12] += -0.018399112;
        } else {
          result[12] += -0.06538593;
        }
      } else {
        result[12] += 0.01498668;
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[13] += -0.00014099124;
            } else {
              result[13] += -0.07724388;
            }
          } else {
            result[13] += 0.097597055;
          }
        } else {
          result[13] += -0.060547914;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
          result[13] += -0.10299007;
        } else {
          result[13] += -0.011818867;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
            result[13] += 0.014278528;
          } else {
            result[13] += 0.07431648;
          }
        } else {
          result[13] += -0.06411353;
        }
      } else {
        result[13] += 0.07756798;
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
      result[13] += 0.09139848;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += 0.00087576057;
            } else {
              result[13] += 0.02781907;
            }
          } else {
            result[13] += -0.0777193;
          }
        } else {
          result[13] += 0.01014842;
        }
      } else {
        result[13] += 0.058824413;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += 0.0001252897;
            } else {
              result[14] += 0.026613617;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[14] += -0.094284855;
            } else {
              result[14] += 0.018629521;
            }
          }
        } else {
          result[14] += -0.07918089;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            result[14] += 0.020416858;
          } else {
            result[14] += 0.079008974;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            result[14] += 0.022335999;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[14] += 0.0038879106;
            } else {
              result[14] += -0.021639459;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        result[14] += 0.09532196;
      } else {
        result[14] += 0.01779918;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            result[14] += -0.09705222;
          } else {
            result[14] += 0.060034838;
          }
        } else {
          result[14] += -0.10684067;
        }
      } else {
        result[14] += 0.014369748;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[14] += -0.019888468;
            } else {
              result[14] += 0.08085653;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[14] += 0.059731837;
            } else {
              result[14] += -0.036497764;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[14] += 0.003682889;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
              result[14] += -0.093506314;
            } else {
              result[14] += -0.0042811823;
            }
          }
        }
      } else {
        result[14] += 0.034632348;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            result[0] += -0.00022726199;
          } else {
            result[0] += -0.0792737;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)22277)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)17050)) {
              result[0] += 0.0016092582;
            } else {
              result[0] += 0.06677385;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)28681)) {
              result[0] += -0.054633785;
            } else {
              result[0] += 0.00025269832;
            }
          }
        }
      } else {
        result[0] += -0.05401749;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          result[0] += 0.0056068515;
        } else {
          result[0] += 0.050182905;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[0] += 0.047087483;
          } else {
            result[0] += -0.04185725;
          }
        } else {
          result[0] += -0.0028318365;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
        result[0] += -0.052467503;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          result[0] += 0.094652586;
        } else {
          result[0] += -0.008236497;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
        result[0] += -0.077387094;
      } else {
        result[0] += -0.023353122;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += -0.0004406584;
            } else {
              result[1] += -0.12535228;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[1] += 0.032287635;
            } else {
              result[1] += 0.0011360494;
            }
          }
        } else {
          result[1] += -0.0786648;
        }
      } else {
        result[1] += -0.08085756;
      }
    } else {
      result[1] += 0.08441301;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
      result[1] += -0.14305127;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
          result[1] += 0.0006517281;
        } else {
          result[1] += 0.074405715;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
              result[1] += -0.0009543737;
            } else {
              result[1] += 0.02278361;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += -0.0030299353;
            } else {
              result[1] += -0.13342066;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
              result[1] += -0.12554513;
            } else {
              result[1] += -0.050123274;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
              result[1] += 0.009915294;
            } else {
              result[1] += -0.010523511;
            }
          }
        }
      }
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[2] += -3.6799775e-05;
      } else {
        result[2] += 0.00091732916;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
              result[2] += 0.011413747;
            } else {
              result[2] += 0.03490229;
            }
          } else {
            result[2] += -0.03519052;
          }
        } else {
          result[2] += 0.04421543;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
          result[2] += -0.031304233;
        } else {
          result[2] += 0.019283367;
        }
      }
    }
  } else {
    result[2] += -0.07542621;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[3] += 0.010772291;
    } else {
      result[3] += 0.0007756646;
    }
  } else {
    result[3] += -0.029374296;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      result[4] += 6.5410146e-05;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
          result[4] += 0.042769067;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
            result[4] += -0.0048920065;
          } else {
            result[4] += 0.030678228;
          }
        }
      } else {
        result[4] += -0.008320229;
      }
    }
  } else {
    result[4] += 0.046734776;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[5] += -0.00039642816;
          } else {
            result[5] += 0.0021740901;
          }
        } else {
          result[5] += 0.002188584;
        }
      } else {
        result[5] += 0.013056785;
      }
    } else {
      result[5] += -0.016772157;
    }
  } else {
    result[5] += 0.013422581;
  }
  result[6] += -7.0290036e-05;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[7] += -5.3575233e-05;
            } else {
              result[7] += -0.07808821;
            }
          } else {
            result[7] += -0.086742386;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[7] += 0.02056544;
          } else {
            result[7] += 0.088583335;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)41)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.0018522977;
            } else {
              result[7] += 0.051814403;
            }
          } else {
            result[7] += -0.048701264;
          }
        } else {
          result[7] += -0.12078533;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
        result[7] += 0.045620203;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
          result[7] += -0.03642869;
        } else {
          result[7] += 0.043308467;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)495)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)272)) {
        result[7] += -0.016312737;
      } else {
        result[7] += -0.09260695;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        result[7] += 0.056716576;
      } else {
        result[7] += -0.039842717;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        result[8] += -0.0072136214;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49638)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
              result[8] += -3.706642e-05;
            } else {
              result[8] += 0.025560372;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49786)) {
              result[8] += -0.04108278;
            } else {
              result[8] += -0.008068914;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50146)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += 0.0650479;
            } else {
              result[8] += -0.04365722;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
              result[8] += -0.00011927056;
            } else {
              result[8] += 0.009539325;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        result[8] += -0.04511568;
      } else {
        result[8] += -0.0026869748;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.109769434;
    } else {
      result[8] += 0.00781457;
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    result[9] += -8.116338e-05;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[9] += 0.0055762874;
    } else {
      result[9] += 0.0016572219;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)689205)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
              result[10] += 0.00012931472;
            } else {
              result[10] += -0.016196672;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
              result[10] += 0.045809872;
            } else {
              result[10] += -0.001101051;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
            result[10] += -0.10019398;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
              result[10] += 0.05154549;
            } else {
              result[10] += -0.04165269;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
            result[10] += 0.009841382;
          } else {
            result[10] += 0.13312821;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
            result[10] += -0.08803183;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)464371)) {
              result[10] += 0.055938523;
            } else {
              result[10] += -0.002705913;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[10] += -0.00241813;
      } else {
        result[10] += -0.007846413;
      }
    }
  } else {
    result[10] += -0.021544646;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[11] += -0.00033003403;
            } else {
              result[11] += -0.0967078;
            }
          } else {
            result[11] += 0.004110265;
          }
        } else {
          result[11] += -0.011784013;
        }
      } else {
        result[11] += -0.08618505;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[11] += 0.000769785;
            } else {
              result[11] += -0.010262368;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.10881101;
            } else {
              result[11] += 0.0046549174;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += -0.055945013;
            } else {
              result[11] += 0.048583932;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += 0.008313213;
            } else {
              result[11] += -0.009168783;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.11434343;
        } else {
          result[11] += -0.00011470436;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
      result[11] += -0.08889693;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
          result[11] += 0.00013527254;
        } else {
          result[11] += -0.10119783;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
          result[11] += 0.0011051208;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[11] += -0.002843216;
            } else {
              result[11] += -0.00070440274;
            }
          } else {
            result[11] += 0.017455118;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[12] += -0.0047439607;
            } else {
              result[12] += 0.00034144727;
            }
          } else {
            result[12] += -0.03627741;
          }
        } else {
          result[12] += -0.09820291;
        }
      } else {
        result[12] += 0.107051104;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[12] += -0.1434032;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
            result[12] += 0.09182419;
          } else {
            result[12] += -0.027688323;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[12] += -0.0014580565;
            } else {
              result[12] += 0.0630398;
            }
          } else {
            result[12] += -0.12999606;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[12] += 0.00043871728;
            } else {
              result[12] += 0.008224116;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[12] += -0.007337967;
            } else {
              result[12] += 0.0005278751;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          result[12] += 0.007722908;
        } else {
          result[12] += 0.083910786;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          result[12] += 0.0049449485;
        } else {
          result[12] += 0.018495765;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            result[12] += 0.022593297;
          } else {
            result[12] += -0.03360873;
          }
        } else {
          result[12] += -0.075620025;
        }
      } else {
        result[12] += 0.022613943;
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)17327)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
              result[13] += -0.000121821126;
            } else {
              result[13] += -0.078250945;
            }
          } else {
            result[13] += -0.080052;
          }
        } else {
          result[13] += 0.041749466;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
          result[13] += -0.09961363;
        } else {
          result[13] += -0.010852947;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
            result[13] += 0.0410257;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
              result[13] += -0.08556087;
            } else {
              result[13] += -0.030055879;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            result[13] += 0.089520305;
          } else {
            result[13] += -0.00971205;
          }
        }
      } else {
        result[13] += 0.070054814;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      result[13] += 0.070724435;
    } else {
      result[13] += 0.0071877716;
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[14] += 0.0006693476;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[14] += -0.00082821224;
            } else {
              result[14] += -0.10723347;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
              result[14] += 0.003499658;
            } else {
              result[14] += -0.00023439089;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += 0.0008888704;
            } else {
              result[14] += 0.008385278;
            }
          } else {
            result[14] += -0.085450254;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[14] += -0.0007766579;
            } else {
              result[14] += 0.011316504;
            }
          } else {
            result[14] += 0.113911204;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          result[14] += 0.0045159026;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[14] += -0.09810759;
          } else {
            result[14] += -0.029175509;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            result[14] += 0.059260666;
          } else {
            result[14] += -0.028831083;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[14] += -0.10095358;
            } else {
              result[14] += 0.04968175;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[14] += 0.05050657;
            } else {
              result[14] += -0.043712046;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      result[14] += -0.039911505;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        result[14] += 0.015469321;
      } else {
        result[14] += -0.03440301;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[0] += -0.00018057745;
            } else {
              result[0] += -0.07500778;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[0] += 0.0017541547;
            } else {
              result[0] += -0.00011011967;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1440)) {
            result[0] += -0.051278833;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
              result[0] += -0.008881943;
            } else {
              result[0] += 0.023776803;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          result[0] += 0.008207154;
        } else {
          result[0] += -0.083886415;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[0] += -0.038665332;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[0] += 0.004279654;
            } else {
              result[0] += 0.023082517;
            }
          } else {
            result[0] += -0.013757297;
          }
        } else {
          result[0] += 0.05603581;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
        result[0] += -0.0489022;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          result[0] += 0.082467586;
        } else {
          result[0] += -0.008094426;
        }
      }
    } else {
      result[0] += -0.05821657;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)4)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[1] += -6.8089554e-05;
            } else {
              result[1] += -0.03808533;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.009746312;
            } else {
              result[1] += -5.9538674e-05;
            }
          }
        } else {
          result[1] += -0.115249716;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
          result[1] += 0.08229351;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)17)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)14)) {
              result[1] += -0.005148863;
            } else {
              result[1] += 0.005163747;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
              result[1] += 0.05952751;
            } else {
              result[1] += 0.010940354;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
          result[1] += -0.14369394;
        } else {
          result[1] += 0.020036798;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
          result[1] += 0.09680349;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
              result[1] += 0.0003534391;
            } else {
              result[1] += 0.08967183;
            }
          } else {
            result[1] += -0.048886124;
          }
        }
      }
    }
  } else {
    result[1] += 0.058886867;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.00012268726;
    } else {
      result[2] += 0.0010967555;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
      result[2] += 0.02945801;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[2] += -0.026230633;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[2] += 0.019733379;
            } else {
              result[2] += -0.032159768;
            }
          } else {
            result[2] += 0.034761153;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
            result[2] += -0.03947931;
          } else {
            result[2] += 0.023149068;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    result[3] += 0.009726631;
  } else {
    result[3] += -0.020816913;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
    result[4] += 4.4850298e-05;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[4] += 0.040629867;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
        result[4] += -0.009116795;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          result[4] += 0.04163111;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
              result[4] += 0.010137411;
            } else {
              result[4] += -0.016244886;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
              result[4] += 0.04543089;
            } else {
              result[4] += 0.0063992236;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52615)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)52332)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51446)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[5] += 2.3714392e-05;
            } else {
              result[5] += 0.0021454894;
            }
          } else {
            result[5] += 0.053164117;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
            result[5] += -0.08518103;
          } else {
            result[5] += 0.004489565;
          }
        }
      } else {
        result[5] += 0.031196633;
      }
    } else {
      result[5] += -0.076885924;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
        result[5] += 0.009155268;
      } else {
        result[5] += 0.019426282;
      }
    } else {
      result[5] += -0.003288509;
    }
  }
  result[6] += -7.210676e-05;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[7] += -2.6904885e-05;
            } else {
              result[7] += -0.075046904;
            }
          } else {
            result[7] += -0.08355035;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[7] += 0.018859243;
          } else {
            result[7] += 0.0855279;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)41)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.0020363827;
            } else {
              result[7] += 0.04852752;
            }
          } else {
            result[7] += -0.04456233;
          }
        } else {
          result[7] += -0.111312404;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
        result[7] += 0.040820528;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
          result[7] += -0.03317895;
        } else {
          result[7] += 0.04126344;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
      result[7] += -0.0889578;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
          result[7] += -0.0069627115;
        } else {
          result[7] += 0.07958436;
        }
      } else {
        result[7] += -0.041767627;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58206)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58035)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
              result[8] += 6.442839e-06;
            } else {
              result[8] += 0.0041873655;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[8] += -0.04287695;
            } else {
              result[8] += 0.15709259;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[8] += 0.0139392195;
          } else {
            result[8] += 0.038373977;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[8] += -0.023148406;
          } else {
            result[8] += 0.030055897;
          }
        } else {
          result[8] += -0.08857959;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58700)) {
          result[8] += 0.0064732456;
        } else {
          result[8] += 0.014177429;
        }
      } else {
        result[8] += 0.1497171;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          result[8] += -0.10069573;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[8] += 0.029347317;
          } else {
            result[8] += -0.06381635;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          result[8] += 0.0051888726;
        } else {
          result[8] += -0.018775728;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[8] += -0.009763674;
            } else {
              result[8] += -0.005708209;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[8] += 0.02871768;
            } else {
              result[8] += -0.01010146;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[8] += 0.01649312;
            } else {
              result[8] += 0.0011108665;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
              result[8] += 0.048654046;
            } else {
              result[8] += 0.012622874;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[8] += 0.085326344;
            } else {
              result[8] += -0.009659488;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[8] += -0.014265706;
            } else {
              result[8] += -0.048260223;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[8] += 0.004258272;
            } else {
              result[8] += 0.017318169;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += -0.006875202;
            } else {
              result[8] += -0.047129136;
            }
          }
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    result[9] += -8.264442e-05;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[9] += -0.0011717404;
      } else {
        result[9] += -0.00026540895;
      }
    } else {
      result[9] += 0.003546492;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[10] += -0.00019964554;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
              result[10] += 0.0014973602;
            } else {
              result[10] += -0.016120836;
            }
          } else {
            result[10] += 0.031537537;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
              result[10] += -0.0009780104;
            } else {
              result[10] += 0.00034811447;
            }
          } else {
            result[10] += 0.033893585;
          }
        }
      }
    } else {
      result[10] += -0.0013708608;
    }
  } else {
    result[10] += -0.020018453;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[11] += -0.0002569788;
            } else {
              result[11] += -0.030599475;
            }
          } else {
            result[11] += 0.047862228;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            result[11] += -0.006350772;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[11] += 0.0022534507;
            } else {
              result[11] += -0.010300847;
            }
          }
        }
      } else {
        result[11] += -0.082687944;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.00028572063;
            } else {
              result[11] += -0.00823902;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += 0.0029784401;
            } else {
              result[11] += 0.094660066;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.035591695;
            } else {
              result[11] += 0.094191074;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[11] += -0.11489654;
            } else {
              result[11] += -0.0009276045;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.11113616;
        } else {
          result[11] += -7.27189e-05;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
      result[11] += -0.08564668;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
          result[11] += 4.4390534e-05;
        } else {
          result[11] += -0.09760491;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
              result[11] += 0.0008637336;
            } else {
              result[11] += -0.0025486993;
            }
          } else {
            result[11] += 0.0019198095;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[11] += -0.0024701466;
            } else {
              result[11] += -0.0042058295;
            }
          } else {
            result[11] += 0.017408524;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.0005338788;
            } else {
              result[12] += 0.09369322;
            }
          } else {
            result[12] += -0.11881197;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            result[12] += 0.0011964985;
          } else {
            result[12] += 0.0019052159;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[12] += -0.12864324;
            } else {
              result[12] += 0.021459907;
            }
          } else {
            result[12] += -0.13761802;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
              result[12] += 0.057356108;
            } else {
              result[12] += -0.021113308;
            }
          } else {
            result[12] += -0.124507;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
        result[12] += 0.00478209;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
          result[12] += -0.003763653;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
            result[12] += 0.004897424;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[12] += -0.0022676701;
            } else {
              result[12] += 0.001147348;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[12] += -0.0703791;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 0.0007614359;
            } else {
              result[12] += -0.034508888;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.019048676;
            } else {
              result[12] += 0.08238703;
            }
          } else {
            result[12] += -0.033649106;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
          result[12] += -0.07336389;
        } else {
          result[12] += 0.014298519;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            result[12] += -0.061280835;
          } else {
            result[12] += 0.036419053;
          }
        } else {
          result[12] += -0.068818346;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
          result[12] += 0.08850806;
        } else {
          result[12] += -0.04007307;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += -0.0024658816;
            } else {
              result[13] += 0.013031312;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += 0.002392347;
            } else {
              result[13] += -0.026736876;
            }
          }
        } else {
          result[13] += 0.083798274;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
          result[13] += -0.13576089;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
            result[13] += 0.08169894;
          } else {
            result[13] += -0.13389708;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[13] += 0.02194931;
            } else {
              result[13] += 0.0031350579;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.007403199;
            } else {
              result[13] += 0.027406452;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[13] += -0.1282832;
          } else {
            result[13] += 0.03324711;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          result[13] += 0.04314082;
        } else {
          result[13] += 0.09429862;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49638)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += -0.00055479055;
            } else {
              result[13] += -0.05520732;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49509)) {
              result[13] += -0.036413245;
            } else {
              result[13] += -0.011846363;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
            result[13] += -0.010298044;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49509)) {
              result[13] += 0.059128996;
            } else {
              result[13] += 0.0045449357;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
              result[13] += 0.004861867;
            } else {
              result[13] += -0.001395345;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[13] += 0.03597155;
            } else {
              result[13] += -0.004218886;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51039)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[13] += -0.0052361568;
            } else {
              result[13] += -0.03039479;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[13] += 0.011829541;
            } else {
              result[13] += -0.030141009;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        result[13] += 0.09702664;
      } else {
        result[13] += 0.01715544;
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
              result[14] += -0.00030586656;
            } else {
              result[14] += 0.003945846;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[14] += 0.0008256848;
            } else {
              result[14] += 0.010549558;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            result[14] += 0.06268013;
          } else {
            result[14] += -0.0072260858;
          }
        }
      } else {
        result[14] += -0.07584624;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          result[14] += 0.0039498415;
        } else {
          result[14] += -0.08192121;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[14] += 0.04373489;
          } else {
            result[14] += -0.0025048808;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            result[14] += -0.0827642;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[14] += 0.031999767;
            } else {
              result[14] += -0.0034374793;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      result[14] += -0.03441144;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        result[14] += 0.013530671;
      } else {
        result[14] += -0.029508797;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[0] += -0.00030044856;
            } else {
              result[0] += 0.00074186944;
            }
          } else {
            result[0] += -0.08117291;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            result[0] += 0.006321194;
          } else {
            result[0] += -0.001835054;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[0] += -0.041475423;
        } else {
          result[0] += -0.0006594411;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[0] += 0.02603477;
        } else {
          result[0] += 0.012157473;
        }
      } else {
        result[0] += -0.010638114;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
        result[0] += -0.047096968;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          result[0] += 0.07272499;
        } else {
          result[0] += -0.006787066;
        }
      }
    } else {
      result[0] += -0.05327097;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.018863387;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
              result[1] += -0.00020949202;
            } else {
              result[1] += 0.012143342;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.04559119;
            } else {
              result[1] += 0.04175456;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[1] += 0.026727848;
            } else {
              result[1] += 0.0009671978;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.11928076;
            } else {
              result[1] += -0.0057988646;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          result[1] += -0.0325495;
        } else {
          result[1] += -0.00843598;
        }
      }
    }
  } else {
    result[1] += 0.055583313;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.00011628702;
    } else {
      result[2] += 0.0009362164;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
      result[2] += 0.02823847;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[2] += -0.024366789;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)24760)) {
            result[2] += 0.010546898;
          } else {
            result[2] += 0.024007667;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
            result[2] += -0.034249246;
          } else {
            result[2] += 0.016951753;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    result[3] += 0.008746855;
  } else {
    result[3] += -0.020232037;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      result[4] += 3.3819608e-05;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
          result[4] += 0.038159866;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            result[4] += -0.0086996015;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
              result[4] += 0.039228722;
            } else {
              result[4] += 0.009112794;
            }
          }
        }
      } else {
        result[4] += -0.0063195517;
      }
    }
  } else {
    result[4] += 0.04536375;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[5] += -0.00036442204;
          } else {
            result[5] += 0.0021504012;
          }
        } else {
          result[5] += 0.0022225375;
        }
      } else {
        result[5] += 0.010881574;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
        result[5] += -0.02601329;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          result[5] += 0.019468071;
        } else {
          result[5] += -0.011615219;
        }
      }
    }
  } else {
    result[5] += 0.022973808;
  }
  result[6] += -7.3962154e-05;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)495)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)272)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[7] += -0.000371355;
            } else {
              result[7] += 0.0004363774;
            }
          } else {
            result[7] += -0.06276249;
          }
        } else {
          result[7] += 0.09325294;
        }
      } else {
        result[7] += -0.086973816;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
        result[7] += 0.11934397;
      } else {
        result[7] += -0.008058345;
      }
    }
  } else {
    result[7] += -0.07582072;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += 0.00081909;
            } else {
              result[8] += -0.001420893;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[8] += -0.13909918;
            } else {
              result[8] += -0.027043648;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += -0.027557997;
            } else {
              result[8] += 0.08722906;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[8] += 0.011093289;
            } else {
              result[8] += -0.010340629;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[8] += -0.040042534;
            } else {
              result[8] += 0.04650208;
            }
          } else {
            result[8] += -0.13475387;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.08443655;
            } else {
              result[8] += -0.029272426;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[8] += 0.023938272;
            } else {
              result[8] += -0.0019367147;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[8] += 0.05272005;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          result[8] += -0.022156382;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += 0.0006391163;
            } else {
              result[8] += -0.08206547;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += 0.094186164;
            } else {
              result[8] += -0.0015546848;
            }
          }
        }
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
        result[8] += -0.055373743;
      } else {
        result[8] += 0.017854508;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)39)) {
        result[8] += 0.08278102;
      } else {
        result[8] += -0.051679756;
      }
    }
  }
}



#include "header.h"

void predict_unit10(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
              result[5] += 0.0025397611;
            } else {
              result[5] += -0.06425459;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[5] += 0.084835395;
            } else {
              result[5] += -0.0039959177;
            }
          }
        } else {
          result[5] += -0.13817167;
        }
      } else {
        result[5] += -0.14300755;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        result[5] += -0.14392935;
      } else {
        result[5] += 0.07545388;
      }
    }
  } else {
    result[5] += -0.14717154;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            result[6] += 0.0026156032;
          } else {
            result[6] += -0.09676669;
          }
        } else {
          result[6] += -0.1073616;
        }
      } else {
        result[6] += 0.112854645;
      }
    } else {
      result[6] += -0.12351481;
    }
  } else {
    result[6] += -0.14883524;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[7] += -0.007536529;
            } else {
              result[7] += 0.009259667;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
              result[7] += -0.039309584;
            } else {
              result[7] += 0.082295746;
            }
          }
        } else {
          result[7] += 0.14990847;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[7] += -0.15047146;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[7] += -0.35932785;
            } else {
              result[7] += -0.12965365;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[7] += 0.0062573194;
            } else {
              result[7] += 0.13286941;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[7] += -0.006024355;
            } else {
              result[7] += 0.1350021;
            }
          }
        }
      }
    } else {
      result[7] += 0.14696436;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
              result[7] += 0.021747582;
            } else {
              result[7] += 0.13008867;
            }
          } else {
            result[7] += -0.0885291;
          }
        } else {
          result[7] += 0.14745831;
        }
      } else {
        result[7] += -0.0754342;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)84290)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
            result[7] += -0.14729811;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1177192448)) {
              result[7] += 0.004615022;
            } else {
              result[7] += -0.1002416;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
              result[7] += -0.0065625;
            } else {
              result[7] += 0.34132653;
            }
          } else {
            result[7] += -0.14027116;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
          result[7] += 0.027853398;
        } else {
          result[7] += 0.14745997;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[8] += -0.0006181754;
            } else {
              result[8] += 0.014731116;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += -0.010757968;
            } else {
              result[8] += 0.03580924;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
              result[8] += 0.18251681;
            } else {
              result[8] += -0.109173805;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[8] += -0.16857716;
            } else {
              result[8] += -0.035809867;
            }
          }
        }
      } else {
        result[8] += -0.14876814;
      }
    } else {
      result[8] += 0.15520044;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      result[8] += -0.15538019;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
            result[8] += 0.13494013;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
              result[8] += 0.1030213;
            } else {
              result[8] += -0.05252825;
            }
          }
        } else {
          result[8] += -0.07581825;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
            result[8] += -0.14815277;
          } else {
            result[8] += -0.3303626;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
              result[8] += 0.13426964;
            } else {
              result[8] += 0.0568237;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[8] += -0.17382605;
            } else {
              result[8] += 0.0887212;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
              result[9] += 0.004537556;
            } else {
              result[9] += -0.06691;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57887)) {
              result[9] += 0.038434166;
            } else {
              result[9] += 0.1362695;
            }
          }
        } else {
          result[9] += -0.13718827;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
          result[9] += -0.14567322;
        } else {
          result[9] += 0.10707415;
        }
      }
    } else {
      result[9] += -0.14304972;
    }
  } else {
    result[9] += -0.14739956;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[10] += 0.00372144;
            } else {
              result[10] += -0.12075639;
            }
          } else {
            result[10] += -0.14761943;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
              result[10] += 0.015328343;
            } else {
              result[10] += 0.09030334;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += -0.14919204;
            } else {
              result[10] += 0.014971614;
            }
          }
        }
      } else {
        result[10] += -0.12752306;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
            result[10] += -0.10985205;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)32530)) {
              result[10] += 0.031532034;
            } else {
              result[10] += 0.15192603;
            }
          }
        } else {
          result[10] += -0.14433245;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
          result[10] += -0.098888345;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[10] += 0.29992726;
            } else {
              result[10] += 0.10461386;
            }
          } else {
            result[10] += -0.09632768;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.14621414;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
        result[10] += 0.14040123;
      } else {
        result[10] += -0.11154188;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += -0.00035031178;
            } else {
              result[11] += 0.15715863;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[11] += -0.1712653;
            } else {
              result[11] += -0.02487751;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += 0.022194803;
            } else {
              result[11] += 0.1853095;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[11] += 0.2077174;
            } else {
              result[11] += -0.20868304;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.18402487;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)350722368)) {
              result[11] += 0.1190164;
            } else {
              result[11] += 0.024732789;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.034293957;
            } else {
              result[11] += -0.20252453;
            }
          }
        }
      }
    } else {
      result[11] += -0.14194964;
    }
  } else {
    result[11] += -0.14642406;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += 0.0032088226;
            } else {
              result[12] += 0.13627179;
            }
          } else {
            result[12] += -0.14921732;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[12] += 0.1507403;
            } else {
              result[12] += 0.36399162;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[12] += -0.035728153;
            } else {
              result[12] += 0.06311151;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5394)) {
              result[12] += -0.097272165;
            } else {
              result[12] += -0.15771738;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[12] += -0.14678532;
            } else {
              result[12] += 0.10817795;
            }
          }
        } else {
          result[12] += 0.14980175;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
              result[12] += -0.14253683;
            } else {
              result[12] += -0.0894787;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += 0.0886793;
            } else {
              result[12] += -0.096328475;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[12] += -0.12784897;
            } else {
              result[12] += 0.13719127;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[12] += -0.008541153;
            } else {
              result[12] += 0.083371215;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 0.019600207;
            } else {
              result[12] += -0.12804839;
            }
          } else {
            result[12] += -0.12980124;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
            result[12] += -0.14049669;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[12] += 0.0994136;
            } else {
              result[12] += -0.10144221;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[12] += -0.14780742;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.12833963;
            } else {
              result[12] += -0.0964636;
            }
          } else {
            result[12] += -0.14170168;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.11732258;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 0.13152252;
          } else {
            result[12] += -0.102828994;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        result[12] += 0.1483982;
      } else {
        result[12] += -0.13024423;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.0020363177;
            } else {
              result[13] += 0.030049315;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
              result[13] += -0.10447831;
            } else {
              result[13] += -0.024732878;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[13] += -0.13861558;
            } else {
              result[13] += -0.037306655;
            }
          } else {
            result[13] += -0.12717095;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[13] += 0.044274952;
            } else {
              result[13] += -0.0031881263;
            }
          } else {
            result[13] += 0.15981178;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[13] += -0.043393314;
            } else {
              result[13] += 0.3115482;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.08825533;
            } else {
              result[13] += 0.025672514;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        result[13] += 0.1398805;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
            result[13] += 0.08181358;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1232591872)) {
              result[13] += -0.12894544;
            } else {
              result[13] += -0.023172747;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)31487)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1632386176)) {
              result[13] += 0.18373078;
            } else {
              result[13] += 0.05217484;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[13] += 0.05811069;
            } else {
              result[13] += -0.065045975;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
      result[13] += -0.13693307;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          result[13] += 0.036479652;
        } else {
          result[13] += -0.14263865;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
          result[13] += 0.11621476;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            result[13] += -0.10096333;
          } else {
            result[13] += 0.044628154;
          }
        }
      }
    }
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[14] += 0.0017833;
            } else {
              result[14] += 0.016477358;
            }
          } else {
            result[14] += -0.1366513;
          }
        } else {
          result[14] += -0.13741307;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[14] += -0.053848773;
        } else {
          result[14] += -0.02011105;
        }
      }
    } else {
      result[14] += -0.13869306;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
        result[14] += -0.147972;
      } else {
        result[14] += 0.03271882;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[14] += -0.10217597;
            } else {
              result[14] += 0.10797087;
            }
          } else {
            result[14] += 0.1369578;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[14] += -0.15758514;
            } else {
              result[14] += 0.049438816;
            }
          } else {
            result[14] += -0.14639145;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52901)) {
          result[14] += -0.1381553;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)44552)) {
            result[14] += -0.081447914;
          } else {
            result[14] += 0.042433836;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2256408064)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2130028928)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1452252288)) {
              result[0] += 0.00027976383;
            } else {
              result[0] += 0.14252518;
            }
          } else {
            result[0] += -0.14420232;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[0] += -0.0757369;
          } else {
            result[0] += 0.15765952;
          }
        }
      } else {
        result[0] += -0.14172347;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)48646)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          result[0] += -0.12047613;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
            result[0] += -0.026934424;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45315)) {
              result[0] += 0.16153899;
            } else {
              result[0] += 0.049197912;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)53268)) {
          result[0] += -0.214346;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1516537088)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)900580480)) {
              result[0] += 0.0014708248;
            } else {
              result[0] += -0.14347531;
            }
          } else {
            result[0] += 0.13539164;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      result[0] += -0.14704694;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        result[0] += -0.13588013;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[0] += 0.052005794;
            } else {
              result[0] += -0.23714083;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
              result[0] += -0.017955817;
            } else {
              result[0] += 0.15540549;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += -0.15002239;
            } else {
              result[0] += 0.07770164;
            }
          } else {
            result[0] += -0.1497011;
          }
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += -0.029102908;
            } else {
              result[1] += 0.01630653;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22283)) {
              result[1] += -0.0024415515;
            } else {
              result[1] += 0.0029767412;
            }
          }
        } else {
          result[1] += -0.14858496;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57172)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
              result[1] += 0.006012372;
            } else {
              result[1] += 0.044177115;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.005206697;
            } else {
              result[1] += -0.07461565;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            result[1] += -0.14757912;
          } else {
            result[1] += -0.0074136867;
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)59171)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)48385)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2256408064)) {
              result[1] += 0.018614028;
            } else {
              result[1] += 0.11213515;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3217214720)) {
              result[1] += 0.25640988;
            } else {
              result[1] += 0.06433705;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)62466)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1392936448)) {
              result[1] += -0.015687643;
            } else {
              result[1] += -0.1599222;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
              result[1] += -0.14017779;
            } else {
              result[1] += 0.14947683;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2051944064)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)196699376)) {
              result[1] += 0.066888794;
            } else {
              result[1] += -0.10349901;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
              result[1] += 0.32943776;
            } else {
              result[1] += 0.01955212;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1091894528)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)702701760)) {
              result[1] += 0.00026749063;
            } else {
              result[1] += 0.2406611;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1269061760)) {
              result[1] += -0.14656682;
            } else {
              result[1] += 0.038716644;
            }
          }
        }
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
            result[1] += -0.14804703;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1177192448)) {
              result[1] += 0.15152368;
            } else {
              result[1] += -0.113808446;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[1] += 0.12027935;
            } else {
              result[1] += -0.09787192;
            }
          } else {
            result[1] += -0.12880239;
          }
        }
      } else {
        result[1] += 0.15544023;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
          result[1] += 0.12292973;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3239138816)) {
              result[1] += -0.112051286;
            } else {
              result[1] += -0.037933584;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44297)) {
              result[1] += -0.038369387;
            } else {
              result[1] += 0.14819789;
            }
          }
        }
      } else {
        result[1] += 0.12652554;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)786)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[2] += -0.093410335;
            } else {
              result[2] += 0.014833545;
            }
          } else {
            result[2] += -0.014225817;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[2] += -0.037367094;
          } else {
            result[2] += -0.018006194;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1280)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1051)) {
            result[2] += 0.059192155;
          } else {
            result[2] += 0.018016605;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)2057)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1805)) {
              result[2] += 0.008327695;
            } else {
              result[2] += -0.09558413;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)3123)) {
              result[2] += 0.045024432;
            } else {
              result[2] += 0.0033121672;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
          result[2] += -0.022762729;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
            result[2] += 0.091708764;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
              result[2] += -0.023683535;
            } else {
              result[2] += 0.036494263;
            }
          }
        }
      } else {
        result[2] += 0.14638849;
      }
    }
  } else {
    result[2] += -0.14859761;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)34651916)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[3] += -0.14814746;
      } else {
        result[3] += -0.03650319;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.12722787;
      } else {
        result[3] += 0.13352872;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      result[3] += -0.09330954;
    } else {
      result[3] += 0.13587482;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.14619333;
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
              result[4] += 0.021008685;
            } else {
              result[4] += 0.078862265;
            }
          } else {
            result[4] += -0.083026074;
          }
        } else {
          result[4] += 0.08107984;
        }
      } else {
        result[4] += -0.07818418;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.14725384;
    } else {
      result[4] += -0.09294054;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[5] += 0.0028387536;
            } else {
              result[5] += -0.14032978;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[5] += -0.11562508;
            } else {
              result[5] += 0.042775303;
            }
          }
        } else {
          result[5] += -0.13654661;
        }
      } else {
        result[5] += -0.14145833;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        result[5] += -0.14285506;
      } else {
        result[5] += 0.075896986;
      }
    }
  } else {
    result[5] += -0.14658816;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            result[6] += 0.0015660116;
          } else {
            result[6] += -0.08924527;
          }
        } else {
          result[6] += -0.10142826;
        }
      } else {
        result[6] += 0.10936191;
      }
    } else {
      result[6] += -0.12056309;
    }
  } else {
    result[6] += -0.14858417;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[7] += 0.00026844582;
            } else {
              result[7] += 0.13502413;
            }
          } else {
            result[7] += -0.14586756;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12831)) {
              result[7] += -0.08882284;
            } else {
              result[7] += -0.14509273;
            }
          } else {
            result[7] += 0.029504543;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[7] += -0.15527137;
        } else {
          result[7] += 0.13279425;
        }
      }
    } else {
      result[7] += 0.14612013;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[7] += 0.12891397;
          } else {
            result[7] += -0.07608242;
          }
        } else {
          result[7] += -0.09085087;
        }
      } else {
        result[7] += 0.1467436;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
            result[7] += -0.14658307;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1177192448)) {
              result[7] += 0.004391026;
            } else {
              result[7] += -0.093433574;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
              result[7] += -0.0042095133;
            } else {
              result[7] += 0.30549443;
            }
          } else {
            result[7] += -0.13781606;
          }
        }
      } else {
        result[7] += 0.14667143;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[8] += -0.0005459254;
            } else {
              result[8] += 0.06306935;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[8] += 0.14076734;
            } else {
              result[8] += -0.036996473;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            result[8] += -0.15754974;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.13923168;
            } else {
              result[8] += -0.13503885;
            }
          }
        }
      } else {
        result[8] += -0.14803043;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        result[8] += 0.15637599;
      } else {
        result[8] += -0.09531137;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      result[8] += -0.15442881;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
          result[8] += 0.13516574;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[8] += -0.16506836;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
              result[8] += 0.047173943;
            } else {
              result[8] += 0.13636306;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
            result[8] += -0.14740898;
          } else {
            result[8] += -0.32038802;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.14606342;
            } else {
              result[8] += -0.013843653;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += 0.061411116;
            } else {
              result[8] += -0.1739231;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[9] += 0.0042901235;
            } else {
              result[9] += -0.09567914;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[9] += -0.10474186;
            } else {
              result[9] += 0.04524866;
            }
          }
        } else {
          result[9] += -0.1344554;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
          result[9] += -0.14491555;
        } else {
          result[9] += 0.1027276;
        }
      }
    } else {
      result[9] += -0.14169033;
    }
  } else {
    result[9] += -0.14688057;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[10] += 0.003167108;
            } else {
              result[10] += -0.14715363;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
              result[10] += 0.123241395;
            } else {
              result[10] += 0.007544483;
            }
          }
        } else {
          result[10] += -0.11636228;
        }
      } else {
        result[10] += -0.12483262;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
            result[10] += -0.10653313;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)32530)) {
              result[10] += 0.027528388;
            } else {
              result[10] += 0.13082792;
            }
          }
        } else {
          result[10] += -0.14314386;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
          result[10] += -0.09489479;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
              result[10] += 0.093058854;
            } else {
              result[10] += 0.2634037;
            }
          } else {
            result[10] += -0.092370644;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.14546067;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
        result[10] += 0.13211232;
      } else {
        result[10] += -0.10490275;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[11] += 0.00014011656;
            } else {
              result[11] += 0.12803543;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.24480169;
            } else {
              result[11] += 0.008931206;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[11] += 0.018757252;
            } else {
              result[11] += -0.16331322;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5905)) {
              result[11] += -0.056450356;
            } else {
              result[11] += 0.05763168;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.1384057;
            } else {
              result[11] += -0.10209761;
            }
          } else {
            result[11] += -0.13254774;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[11] += -0.39096883;
            } else {
              result[11] += -0.12583129;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[11] += 0.09594063;
            } else {
              result[11] += -0.1322953;
            }
          }
        }
      }
    } else {
      result[11] += -0.14981805;
    }
  } else {
    result[11] += -0.14570262;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[12] += -0.056677382;
            } else {
              result[12] += 0.0026230041;
            }
          } else {
            result[12] += -0.14750646;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.06218369;
            } else {
              result[12] += 0.1084544;
            }
          } else {
            result[12] += -0.15219148;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
            result[12] += 0.034643635;
          } else {
            result[12] += -0.14927278;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            result[12] += 0.14627078;
          } else {
            result[12] += -0.09608508;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          result[12] += -0.20382968;
        } else {
          result[12] += -0.14756343;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[12] += 0.14719936;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[12] += 0.13389863;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
              result[12] += -0.14860497;
            } else {
              result[12] += 0.08983716;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
        result[12] += -0.14738402;
      } else {
        result[12] += 0.04003056;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3109958656)) {
            result[12] += 0.17679252;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
              result[12] += 0.011983419;
            } else {
              result[12] += 0.09189308;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
            result[12] += -0.13987303;
          } else {
            result[12] += 0.10715784;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
          result[12] += -0.1332262;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[12] += 0.09151314;
          } else {
            result[12] += -0.098433256;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.0051567517;
            } else {
              result[13] += -0.120351866;
            }
          } else {
            result[13] += 0.14800279;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1263)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[13] += -0.14925082;
            } else {
              result[13] += -0.08217381;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[13] += 0.067615055;
            } else {
              result[13] += -0.18380824;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += 0.013798732;
            } else {
              result[13] += 0.09851994;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += -0.0755314;
            } else {
              result[13] += 0.15662168;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
            result[13] += 0.16365671;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
              result[13] += -0.10866857;
            } else {
              result[13] += 0.16212013;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        result[13] += 0.1365026;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            result[13] += -0.056585092;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43031)) {
              result[13] += 0.04074494;
            } else {
              result[13] += 0.12382256;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)44297)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[13] += 0.046504803;
            } else {
              result[13] += -0.075296134;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[13] += -0.1428478;
            } else {
              result[13] += 0.008821956;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
      result[13] += -0.13455056;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          result[13] += 0.03272286;
        } else {
          result[13] += -0.13949937;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
          result[13] += 0.107511915;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            result[13] += -0.09629442;
          } else {
            result[13] += 0.038399167;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[14] += 0.0017677865;
            } else {
              result[14] += -0.120505534;
            }
          } else {
            result[14] += -0.1473908;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[14] += 0.066635445;
            } else {
              result[14] += 0.14813817;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[14] += -0.020595398;
            } else {
              result[14] += 0.072481714;
            }
          }
        }
      } else {
        result[14] += -0.14481962;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[14] += -0.078583196;
        } else {
          result[14] += 0.1473598;
        }
      } else {
        result[14] += -0.11508804;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[14] += -0.17224607;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[14] += 0.01875637;
            } else {
              result[14] += -0.13301338;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)41235)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
              result[14] += 0.08498515;
            } else {
              result[14] += -0.040842988;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
              result[14] += 0.14113632;
            } else {
              result[14] += 0.023983689;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[14] += -0.16021559;
            } else {
              result[14] += -0.10253594;
            }
          } else {
            result[14] += 0.09907448;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
            result[14] += -0.11888178;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
              result[14] += 0.4437626;
            } else {
              result[14] += -0.09121083;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)486985984)) {
          result[14] += -0.102712795;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[14] += 0.16057472;
            } else {
              result[14] += 0.72540325;
            }
          } else {
            result[14] += 0.09616549;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            result[14] += -0.14758508;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
              result[14] += 0.25313884;
            } else {
              result[14] += -0.11191172;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
            result[14] += 0.4473327;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[14] += -0.13364235;
            } else {
              result[14] += 0.22410895;
            }
          }
        }
      }
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[0] += 0.0037171277;
            } else {
              result[0] += -0.10067596;
            }
          } else {
            result[0] += -0.10557046;
          }
        } else {
          result[0] += -0.14768952;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
              result[0] += 0.016595552;
            } else {
              result[0] += -0.13231248;
            }
          } else {
            result[0] += 0.14945512;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
            result[0] += -0.14183395;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[0] += 0.051483855;
            } else {
              result[0] += -0.14143588;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            result[0] += -0.13366324;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[0] += 0.019498646;
            } else {
              result[0] += -0.09161494;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[0] += -0.1063844;
          } else {
            result[0] += 0.06401822;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)23300)) {
            result[0] += 0.16283801;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
              result[0] += 0.007516788;
            } else {
              result[0] += 0.090171695;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            result[0] += -0.13023447;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[0] += 0.2712822;
            } else {
              result[0] += -0.12027948;
            }
          }
        }
      }
    }
  } else {
    result[0] += -0.14231585;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[1] += -0.098508246;
    } else {
      result[1] += -0.013909216;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)57172)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[1] += -0.000119944256;
            } else {
              result[1] += 0.030060336;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[1] += -0.1607365;
            } else {
              result[1] += 0.011896836;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.056729127;
            } else {
              result[1] += -0.049687203;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += -0.12307408;
            } else {
              result[1] += 0.028762817;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57338)) {
              result[1] += -0.07214948;
            } else {
              result[1] += -0.15716693;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[1] += 0.04463723;
            } else {
              result[1] += -0.014753224;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[1] += -0.15351689;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += -0.030510055;
            } else {
              result[1] += 0.08465865;
            }
          }
        }
      }
    } else {
      result[1] += -0.13829441;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)786)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[2] += -0.08762513;
            } else {
              result[2] += 0.013721051;
            }
          } else {
            result[2] += -0.012461967;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[2] += -0.033434596;
          } else {
            result[2] += -0.015801612;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1280)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1051)) {
            result[2] += 0.05425394;
          } else {
            result[2] += 0.01644687;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1556)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.055163577;
            } else {
              result[2] += 0.011892616;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1805)) {
              result[2] += 0.051047843;
            } else {
              result[2] += 0.003152632;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46494)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
              result[2] += 0.046204098;
            } else {
              result[2] += -0.011510295;
            }
          } else {
            result[2] += 0.10476912;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
            result[2] += -0.032847278;
          } else {
            result[2] += 0.079825506;
          }
        }
      } else {
        result[2] += 0.14574704;
      }
    }
  } else {
    result[2] += -0.14832468;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[3] += -0.14821969;
      } else {
        result[3] += -0.03319131;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.12374257;
      } else {
        result[3] += 0.12931319;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      result[3] += -0.08901933;
    } else {
      result[3] += 0.13330697;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)796)) {
      result[4] += -0.14456472;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
              result[4] += 0.07749916;
            } else {
              result[4] += -0.08845952;
            }
          } else {
            result[4] += 0.06013893;
          }
        } else {
          result[4] += -0.09319974;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          result[4] += 0.12168468;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
            result[4] += -0.08086049;
          } else {
            result[4] += 0.0713511;
          }
        }
      }
    }
  } else {
    result[4] += 0.14037849;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)59329708)) {
              result[5] += 0.003053272;
            } else {
              result[5] += -0.06577377;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[5] += 0.09292897;
            } else {
              result[5] += 0.017954953;
            }
          }
        } else {
          result[5] += -0.13475074;
        }
      } else {
        result[5] += -0.13969482;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        result[5] += -0.14178492;
      } else {
        result[5] += 0.07577558;
      }
    }
  } else {
    result[5] += -0.14594734;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            result[6] += 0.0013773957;
          } else {
            result[6] += -0.08160017;
          }
        } else {
          result[6] += -0.09548279;
        }
      } else {
        result[6] += 0.10576494;
      }
    } else {
      result[6] += -0.11756059;
    }
  } else {
    result[6] += -0.14830895;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.005404689;
            } else {
              result[7] += -0.004501923;
            }
          } else {
            result[7] += -0.1447215;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12831)) {
              result[7] += -0.08280147;
            } else {
              result[7] += -0.14412396;
            }
          } else {
            result[7] += 0.03234651;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[7] += -0.15352145;
        } else {
          result[7] += 0.12922087;
        }
      }
    } else {
      result[7] += 0.14504638;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
          result[7] += 0.08943921;
        } else {
          result[7] += -0.08665589;
        }
      } else {
        result[7] += 0.14591613;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
            result[7] += -0.1456287;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1177192448)) {
              result[7] += 0.0014205631;
            } else {
              result[7] += -0.08664547;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10521)) {
              result[7] += 0.066184916;
            } else {
              result[7] += -0.07061299;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[7] += 0.11576435;
            } else {
              result[7] += -0.101487465;
            }
          }
        }
      } else {
        result[7] += 0.14568564;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += 0.0010113552;
            } else {
              result[8] += -0.15732548;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
              result[8] += 0.07173042;
            } else {
              result[8] += 0.14065799;
            }
          }
        } else {
          result[8] += -0.14723843;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[8] += -0.15383013;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += -0.1321746;
            } else {
              result[8] += 0.12768453;
            }
          } else {
            result[8] += -0.1518874;
          }
        }
      }
    } else {
      result[8] += 0.15070255;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      result[8] += -0.15350804;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
          result[8] += 0.122922905;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
            result[8] += 0.09018208;
          } else {
            result[8] += -0.06469839;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
            result[8] += -0.14679676;
          } else {
            result[8] += -0.32189244;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
              result[8] += 0.12537408;
            } else {
              result[8] += 0.052023225;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[8] += -0.17495489;
            } else {
              result[8] += 0.07758573;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[9] += 0.011396739;
            } else {
              result[9] += -0.12330953;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[9] += 0.00073939166;
            } else {
              result[9] += -0.0039984193;
            }
          }
        } else {
          result[9] += -0.13153417;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
          result[9] += -0.14412893;
        } else {
          result[9] += 0.09642552;
        }
      }
    } else {
      result[9] += -0.14026594;
    }
  } else {
    result[9] += -0.14629307;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)61197)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60429)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[10] += 0.0019139145;
            } else {
              result[10] += -0.11178443;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
              result[10] += -0.13895366;
            } else {
              result[10] += -0.058587957;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[10] += 0.04464786;
            } else {
              result[10] += 0.21303073;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2631808512)) {
              result[10] += -0.054962583;
            } else {
              result[10] += 0.09046663;
            }
          }
        }
      } else {
        result[10] += -0.12208147;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
            result[10] += -0.10217696;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30457)) {
              result[10] += 0.024090834;
            } else {
              result[10] += 0.11693664;
            }
          }
        } else {
          result[10] += -0.14177479;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[10] += -0.09043785;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)45831)) {
            result[10] += 0.032764353;
          } else {
            result[10] += 0.16027714;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.14461991;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
        result[10] += 0.123086564;
      } else {
        result[10] += -0.09816542;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)42509)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)39929)) {
              result[11] += -0.0018487624;
            } else {
              result[11] += -0.021395832;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[11] += 0.004230522;
            } else {
              result[11] += 0.17726727;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[11] += -0.15059866;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[11] += -0.10048732;
            } else {
              result[11] += -0.0034065575;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[11] += -0.12458334;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3087300608)) {
              result[11] += 0.05006202;
            } else {
              result[11] += 0.09644782;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += -0.03558338;
            } else {
              result[11] += 0.1469868;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += 0.030226113;
            } else {
              result[11] += 0.00043708913;
            }
          }
        }
      }
    } else {
      result[11] += -0.13959275;
    }
  } else {
    result[11] += -0.14488791;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
              result[12] += 0.004066228;
            } else {
              result[12] += -0.14681719;
            }
          } else {
            result[12] += -0.14888638;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[12] += 0.14986624;
            } else {
              result[12] += 0.25707093;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)40946396)) {
              result[12] += -0.16310659;
            } else {
              result[12] += 0.039189275;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5394)) {
              result[12] += -0.08619232;
            } else {
              result[12] += -0.15322042;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[12] += -0.14016038;
            } else {
              result[12] += 0.09539012;
            }
          }
        } else {
          result[12] += 0.13558555;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
              result[12] += -0.14068884;
            } else {
              result[12] += -0.082816534;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1535688832)) {
              result[12] += -0.10137801;
            } else {
              result[12] += 0.08317541;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[12] += -0.11840363;
            } else {
              result[12] += 0.13055259;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[12] += -0.0048271082;
            } else {
              result[12] += 0.07015976;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 0.0150001515;
            } else {
              result[12] += -0.12038556;
            }
          } else {
            result[12] += -0.121573575;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
            result[12] += -0.13709775;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[12] += 0.08527885;
            } else {
              result[12] += -0.09327102;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[12] += -0.14674611;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.1112649;
            } else {
              result[12] += -0.08551341;
            }
          } else {
            result[12] += -0.13766088;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.10544938;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 0.12421016;
          } else {
            result[12] += -0.086537175;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        result[12] += 0.14336118;
      } else {
        result[12] += -0.12297153;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)5394)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2170663424)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2051944064)) {
              result[13] += -0.022018878;
            } else {
              result[13] += 0.19929937;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4620)) {
              result[13] += -0.06667106;
            } else {
              result[13] += 0.04487027;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49786)) {
              result[13] += 0.005596719;
            } else {
              result[13] += 0.2549911;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
              result[13] += -0.13692744;
            } else {
              result[13] += -0.015013677;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
            result[13] += 0.3107231;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += 0.18371437;
            } else {
              result[13] += -0.07027743;
            }
          }
        } else {
          result[13] += -0.11284668;
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[13] += 0.0031208948;
            } else {
              result[13] += -0.08707977;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
              result[13] += 0.06255278;
            } else {
              result[13] += 0.02107677;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[13] += -0.032320764;
            } else {
              result[13] += 0.25848797;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.07975191;
            } else {
              result[13] += 0.023883762;
            }
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
          result[13] += 0.13322626;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
            result[13] += 0.096364655;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)880668160)) {
              result[13] += -0.14567696;
            } else {
              result[13] += 0.00808081;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
      result[13] += -0.13191018;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2398340864)) {
          result[13] += 0.108354054;
        } else {
          result[13] += -0.08161032;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
          result[13] += -0.12974833;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            result[13] += -0.074044146;
          } else {
            result[13] += 0.032453198;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[14] += 0.0015495742;
            } else {
              result[14] += -0.13152122;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += 0.21245694;
            } else {
              result[14] += 0.123557635;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[14] += -0.15045376;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[14] += 0.01836361;
            } else {
              result[14] += -0.13610785;
            }
          }
        }
      } else {
        result[14] += -0.14991303;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[14] += 0.26644278;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
              result[14] += -0.12131377;
            } else {
              result[14] += 0.14549798;
            }
          }
        } else {
          result[14] += -0.18713099;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          result[14] += -0.15054075;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)742410688)) {
            result[14] += 0.12786238;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
              result[14] += -0.025443228;
            } else {
              result[14] += 0.060646307;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)52901)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.039519228;
            } else {
              result[14] += -0.14578435;
            }
          } else {
            result[14] += 0.12493769;
          }
        } else {
          result[14] += -0.15827373;
        }
      } else {
        result[14] += 0.09367724;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          result[14] += -0.10680472;
        } else {
          result[14] += 0.14673974;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += 0.078434765;
            } else {
              result[14] += -0.06951865;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[14] += -0.12671204;
            } else {
              result[14] += 0.0652998;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1296776704)) {
              result[14] += 0.07101923;
            } else {
              result[14] += -0.14246385;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
              result[14] += 0.4256805;
            } else {
              result[14] += -0.007989657;
            }
          }
        }
      }
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47082)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[0] += 0.002470723;
            } else {
              result[0] += 0.06713157;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[0] += -0.13817976;
            } else {
              result[0] += -0.008416891;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[0] += -0.13659997;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
              result[0] += -0.13685219;
            } else {
              result[0] += 0.036045123;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
          result[0] += 0.12991999;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
            result[0] += -0.119870394;
          } else {
            result[0] += 0.11938488;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[0] += -0.13348384;
          } else {
            result[0] += 0.17436683;
          }
        } else {
          result[0] += -0.13986969;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
          result[0] += -0.11952644;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2700765696)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[0] += 0.04908833;
            } else {
              result[0] += 0.25247967;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[0] += 0.09100747;
            } else {
              result[0] += -0.11929903;
            }
          }
        }
      }
    }
  } else {
    result[0] += -0.1412252;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
              result[1] += 4.6384375e-05;
            } else {
              result[1] += 0.12615612;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[1] += -0.14696345;
            } else {
              result[1] += 0.006487644;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[1] += 0.14871158;
            } else {
              result[1] += -0.0887831;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
              result[1] += 0.06417179;
            } else {
              result[1] += -0.03968645;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)36048)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4016157440)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
              result[1] += -0.0820858;
            } else {
              result[1] += -0.3339997;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23043)) {
              result[1] += 0.12012995;
            } else {
              result[1] += -0.02786182;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1516537088)) {
              result[1] += -0.026465103;
            } else {
              result[1] += -0.24566226;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59674)) {
              result[1] += 0.08315263;
            } else {
              result[1] += -0.13529438;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)2084)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
          result[1] += 0.051132526;
        } else {
          result[1] += -0.16405621;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59171)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48385)) {
              result[1] += 0.058655117;
            } else {
              result[1] += 0.15112671;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62466)) {
              result[1] += -0.10302473;
            } else {
              result[1] += 0.006658199;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)50449)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24560)) {
              result[1] += -0.0057296185;
            } else {
              result[1] += 0.0648118;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)61197)) {
              result[1] += -0.10068013;
            } else {
              result[1] += 0.09849162;
            }
          }
        }
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[1] += -0.15242721;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[1] += 0.10664813;
            } else {
              result[1] += -0.12599511;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.17264095;
            } else {
              result[1] += -0.1424187;
            }
          } else {
            result[1] += 0.1867626;
          }
        }
      } else {
        result[1] += 0.14354604;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
          result[1] += 0.11847217;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[1] += -0.009491455;
            } else {
              result[1] += -0.09697359;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31487)) {
              result[1] += -0.05964427;
            } else {
              result[1] += 0.071381606;
            }
          }
        }
      } else {
        result[1] += 0.11380347;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)786)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[2] += -0.08155993;
            } else {
              result[2] += 0.012720049;
            }
          } else {
            result[2] += -0.010851545;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[2] += -0.029542126;
          } else {
            result[2] += -0.014046601;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1280)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1051)) {
            result[2] += 0.04978502;
          } else {
            result[2] += 0.015043832;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)2057)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1805)) {
              result[2] += 0.006871854;
            } else {
              result[2] += -0.086198054;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)2860)) {
              result[2] += 0.048310284;
            } else {
              result[2] += 0.003004199;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
          result[2] += -0.02287883;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
            result[2] += 0.09008698;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
              result[2] += -0.026071735;
            } else {
              result[2] += 0.03743161;
            }
          }
        }
      } else {
        result[2] += 0.1449754;
      }
    }
  } else {
    result[2] += -0.14800821;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[3] += -0.14786664;
      } else {
        result[3] += -0.030292494;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.11970005;
      } else {
        result[3] += 0.12427142;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      result[3] += -0.08122685;
    } else {
      result[3] += 0.13013974;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.14469579;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
        result[4] += 0.060575962;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
            result[4] += -0.0068296087;
          } else {
            result[4] += -0.08737535;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
            result[4] += 0.07076584;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
              result[4] += -0.07990558;
            } else {
              result[4] += 0.06928163;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.1462609;
    } else {
      result[4] += -0.091389544;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44297)) {
              result[5] += 0.0015229891;
            } else {
              result[5] += 0.0498194;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[5] += 0.20511927;
            } else {
              result[5] += -0.024815513;
            }
          }
        } else {
          result[5] += -0.13284114;
        }
      } else {
        result[5] += -0.13770662;
      }
    } else {
      result[5] += -0.12460067;
    }
  } else {
    result[5] += -0.14520061;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          result[6] += 0.0017552319;
        } else {
          result[6] += -0.08966005;
        }
      } else {
        result[6] += 0.10247426;
      }
    } else {
      result[6] += -0.11439717;
    }
  } else {
    result[6] += -0.14798981;
  }
}


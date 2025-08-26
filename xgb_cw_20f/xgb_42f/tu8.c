
#include "header.h"

void predict_unit8(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[1] += -0.12720862;
    } else {
      result[1] += -0.043537505;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[1] += -0.0028702058;
            } else {
              result[1] += 0.012864666;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)428962464)) {
              result[1] += -0.057107132;
            } else {
              result[1] += -0.15255919;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[1] += -0.031663198;
            } else {
              result[1] += 0.18077247;
            }
          } else {
            result[1] += -0.1514898;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[1] += 0.2958308;
            } else {
              result[1] += -0.091352955;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[1] += -0.023351988;
            } else {
              result[1] += 0.1516479;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += 0.012599169;
            } else {
              result[1] += 0.14881973;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.16300198;
            } else {
              result[1] += 0.020773914;
            }
          }
        }
      }
    } else {
      result[1] += -0.1474328;
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        result[2] += -0.14828564;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[2] += -0.07468306;
        } else {
          result[2] += -0.04206344;
        }
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
          result[2] += -0.024136962;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
            result[2] += 0.103216924;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
              result[2] += -0.041752446;
            } else {
              result[2] += 0.043507237;
            }
          }
        }
      } else {
        result[2] += -0.0761933;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)65281)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)65015)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)64747)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += 0.011501147;
            } else {
              result[2] += 0.0039250692;
            }
          } else {
            result[2] += -0.039057422;
          }
        } else {
          result[2] += 0.06031439;
        }
      } else {
        result[2] += -0.029578058;
      }
    } else {
      result[2] += 0.14918365;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.14966899;
    } else {
      result[3] += -0.066791184;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[3] += -0.14083782;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
              result[3] += -0.09938339;
            } else {
              result[3] += 0.1468815;
            }
          }
        } else {
          result[3] += 0.14795649;
        }
      } else {
        result[3] += -0.14081426;
      }
    } else {
      result[3] += -0.14754286;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[4] += -0.14903158;
      } else {
        result[4] += -0.037278365;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
              result[4] += 0.076740995;
            } else {
              result[4] += -0.06622307;
            }
          } else {
            result[4] += 0.112513684;
          }
        } else {
          result[4] += 0.010290521;
        }
      } else {
        result[4] += -0.13048463;
      }
    }
  } else {
    result[4] += 0.14778279;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)3123)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)2057)) {
              result[5] += -0.009236533;
            } else {
              result[5] += -0.10692831;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1805)) {
              result[5] += -0.016203117;
            } else {
              result[5] += 0.10599781;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)4155)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)3906)) {
              result[5] += 0.040839918;
            } else {
              result[5] += 0.08426307;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)5162)) {
              result[5] += -0.050957896;
            } else {
              result[5] += 0.009877355;
            }
          }
        }
      } else {
        result[5] += -0.13225709;
      }
    } else {
      result[5] += -0.1337448;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.14968157;
      } else {
        result[5] += 0.10218873;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
        result[5] += -0.14181182;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
              result[5] += 0.056929715;
            } else {
              result[5] += 0.3233235;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[5] += 0.06361182;
            } else {
              result[5] += -0.12437124;
            }
          }
        } else {
          result[5] += -0.13671154;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[6] += 0.0027846785;
          } else {
            result[6] += 0.13119864;
          }
        } else {
          result[6] += -0.13372345;
        }
      } else {
        result[6] += -0.13594691;
      }
    } else {
      result[6] += -0.1371473;
    }
  } else {
    result[6] += -0.14971153;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.0125674745;
            } else {
              result[7] += -0.00763097;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.08315467;
            } else {
              result[7] += 0.14849234;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[7] += -0.15664707;
            } else {
              result[7] += 0.09704323;
            }
          } else {
            result[7] += 0.13104545;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
          result[7] += -0.14625838;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)40706)) {
            result[7] += -0.098707356;
          } else {
            result[7] += 0.057438713;
          }
        }
      }
    } else {
      result[7] += 0.14952005;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.14241134;
            } else {
              result[7] += -0.10616345;
            }
          } else {
            result[7] += 0.14967965;
          }
        } else {
          result[7] += -0.053622976;
        }
      } else {
        result[7] += -0.10348221;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[7] += -0.104718864;
            } else {
              result[7] += 0.2149009;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
              result[7] += -0.14945428;
            } else {
              result[7] += -0.032895766;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            result[7] += -0.12934496;
          } else {
            result[7] += 0.15250097;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[7] += -0.1353766;
        } else {
          result[7] += 0.14953776;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[8] += -0.0011293871;
            } else {
              result[8] += 0.11072314;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[8] += -0.15090157;
            } else {
              result[8] += -0.008053782;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
              result[8] += 0.0028188722;
            } else {
              result[8] += 0.05428378;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[8] += 0.05797448;
            } else {
              result[8] += -0.037562456;
            }
          }
        }
      } else {
        result[8] += -0.15202457;
      }
    } else {
      result[8] += 0.18045722;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
        result[8] += -0.16151507;
      } else {
        result[8] += -0.22512051;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
            result[8] += 0.15677696;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[8] += -0.17742649;
            } else {
              result[8] += 0.14384674;
            }
          }
        } else {
          result[8] += -0.096770294;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            result[8] += -0.15121496;
          } else {
            result[8] += -1.2321628;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[8] += 0.11782747;
            } else {
              result[8] += -0.041354086;
            }
          } else {
            result[8] += -0.15501314;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[9] += 0.005522555;
            } else {
              result[9] += -0.1462582;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[9] += 0.013489147;
            } else {
              result[9] += 0.08137399;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            result[9] += -0.148363;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.1468659;
            } else {
              result[9] += -0.11592037;
            }
          }
        }
      } else {
        result[9] += -0.14622548;
      }
    } else {
      result[9] += -0.14788717;
    }
  } else {
    result[9] += -0.14922486;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.0050418004;
            } else {
              result[10] += -0.13434616;
            }
          } else {
            result[10] += -0.1389998;
          }
        } else {
          result[10] += -0.14923972;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[10] += 0.0142715275;
            } else {
              result[10] += 0.07410907;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
              result[10] += -0.13229558;
            } else {
              result[10] += -0.013268232;
            }
          }
        } else {
          result[10] += -0.13946037;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
            result[10] += -0.1332452;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33551)) {
              result[10] += 0.07587157;
            } else {
              result[10] += 0.2280445;
            }
          }
        } else {
          result[10] += -0.1484803;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[10] += -0.120807074;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
              result[10] += 0.0994717;
            } else {
              result[10] += 0.32738125;
            }
          } else {
            result[10] += -0.08219681;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.1488507;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        result[10] += 0.16867308;
      } else {
        result[10] += -0.13835512;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[11] += -0.041865345;
            } else {
              result[11] += -0.14118773;
            }
          } else {
            result[11] += -0.1422941;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[11] += 0.00042979312;
            } else {
              result[11] += 0.066682324;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)14103)) {
              result[11] += -0.07518665;
            } else {
              result[11] += -0.13101758;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          result[11] += -0.15168959;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += -0.015429098;
            } else {
              result[11] += -0.1467699;
            }
          } else {
            result[11] += 0.1477835;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.1408998;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3087300608)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)138283152)) {
              result[11] += 0.1736695;
            } else {
              result[11] += 0.078050956;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19991)) {
              result[11] += 0.17165507;
            } else {
              result[11] += 0.11314991;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[11] += 0.005295051;
            } else {
              result[11] += -0.18792711;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.0076326677;
            } else {
              result[11] += -0.09392429;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += 0.25431705;
            } else {
              result[11] += 0.15592691;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[11] += -0.0060019195;
            } else {
              result[11] += 0.053879067;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.14893678;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += -0.0027991796;
            } else {
              result[12] += -0.14266622;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[12] += 0.037766114;
            } else {
              result[12] += -0.13939694;
            }
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[12] += -0.08837707;
            } else {
              result[12] += 0.02313473;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51039)) {
              result[12] += -0.15177034;
            } else {
              result[12] += 0.01876347;
            }
          }
        }
      } else {
        result[12] += -0.14931192;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[12] += 0.10129177;
            } else {
              result[12] += 0.15123612;
            }
          } else {
            result[12] += -0.12191707;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            result[12] += 0.07382745;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += -0.30503654;
            } else {
              result[12] += -0.09844952;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            result[12] += -0.2473716;
          } else {
            result[12] += -0.15298471;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)16917)) {
              result[12] += 0.13394468;
            } else {
              result[12] += 0.073147036;
            }
          } else {
            result[12] += -0.14337751;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[12] += -0.14979953;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.16359988;
            } else {
              result[12] += -0.11731087;
            }
          } else {
            result[12] += -0.14796671;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.14300305;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 0.14766149;
          } else {
            result[12] += -0.13907865;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        result[12] += 0.17376064;
      } else {
        result[12] += -0.14603779;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[13] += 0.005887426;
            } else {
              result[13] += -0.09729909;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += -0.10032638;
            } else {
              result[13] += -0.13797528;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += 0.031427942;
            } else {
              result[13] += 0.089634806;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[13] += 0.07236357;
            } else {
              result[13] += -0.037339833;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[13] += -0.15158308;
            } else {
              result[13] += -0.040777706;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += 0.12705767;
            } else {
              result[13] += -0.09954631;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.2511724;
            } else {
              result[13] += -0.13368356;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[13] += -0.13200916;
            } else {
              result[13] += 0.11345385;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[13] += 0.13885593;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
              result[13] += 0.042911004;
            } else {
              result[13] += -0.1050183;
            }
          }
        } else {
          result[13] += 0.15213856;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)196699376)) {
            result[13] += 0.121506736;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6686)) {
              result[13] += 0.11584533;
            } else {
              result[13] += -0.043946825;
            }
          }
        } else {
          result[13] += 0.11879411;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        result[13] += -0.12178354;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
          result[13] += 0.11454381;
        } else {
          result[13] += -0.034366537;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
        result[13] += -0.15131748;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2398340864)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
            result[13] += -0.08084185;
          } else {
            result[13] += 0.19124833;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            result[13] += -0.14647336;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[13] += -0.08955234;
            } else {
              result[13] += 0.101452604;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[14] += -4.5860368e-05;
            } else {
              result[14] += 0.032391887;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.14929743;
            } else {
              result[14] += 0.03082394;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += 0.18922749;
            } else {
              result[14] += -0.08934739;
            }
          } else {
            result[14] += -0.11320924;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
          result[14] += -0.1518393;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[14] += 0.17539486;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += 0.38453332;
            } else {
              result[14] += -0.1446284;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[14] += -0.098828994;
        } else {
          result[14] += 0.15352987;
        }
      } else {
        result[14] += -0.13392125;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6686)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1296776704)) {
              result[14] += 0.015945751;
            } else {
              result[14] += -0.11282069;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[14] += -0.14978093;
            } else {
              result[14] += -0.066655874;
            }
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
            result[14] += 0.18446855;
          } else {
            result[14] += -0.12227959;
          }
        }
      } else {
        result[14] += -0.5866578;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)742410688)) {
          result[14] += 0.14478616;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
              result[14] += -0.033565298;
            } else {
              result[14] += 0.0725248;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3544269056)) {
              result[14] += 0.087656006;
            } else {
              result[14] += 0.13354051;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[14] += -0.21608669;
          } else {
            result[14] += -0.14811815;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[14] += 0.0013575515;
            } else {
              result[14] += 0.33411247;
            }
          } else {
            result[14] += -0.14514443;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[0] += 0.006872844;
            } else {
              result[0] += -0.13344024;
            }
          } else {
            result[0] += -0.13426302;
          }
        } else {
          result[0] += -0.14920154;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[0] += 0.01089012;
            } else {
              result[0] += 0.12838422;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
              result[0] += -0.14746739;
            } else {
              result[0] += 0.03897392;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.09889226;
            } else {
              result[0] += -0.10542882;
            }
          } else {
            result[0] += 0.7045605;
          }
        }
      }
    } else {
      result[0] += -0.14717795;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[0] += -0.14658965;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[0] += 0.3511268;
          } else {
            result[0] += 0.10389227;
          }
        }
      } else {
        result[0] += -0.14775366;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
        result[0] += -0.14363453;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          result[0] += -0.1316597;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3800402176)) {
              result[0] += 0.18423681;
            } else {
              result[0] += -0.085550055;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3649703168)) {
              result[0] += -0.12766375;
            } else {
              result[0] += 0.058727644;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[1] += -0.12288596;
            } else {
              result[1] += -0.038724914;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[1] += -0.0026766122;
            } else {
              result[1] += 0.019156298;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)390465472)) {
              result[1] += -0.036303263;
            } else {
              result[1] += 0.048287522;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[1] += 0.0079482775;
            } else {
              result[1] += -0.16101354;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += -0.340499;
            } else {
              result[1] += -0.13291919;
            }
          } else {
            result[1] += -0.15583701;
          }
        } else {
          result[1] += -0.19446665;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
              result[1] += -0.09090809;
            } else {
              result[1] += 0.26112208;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[1] += 0.06671729;
            } else {
              result[1] += -0.15636113;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            result[1] += -0.14968751;
          } else {
            result[1] += 0.1518948;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)38113)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[1] += 0.01698723;
            } else {
              result[1] += 0.15916449;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1807130496)) {
              result[1] += 0.16769084;
            } else {
              result[1] += 0.054700617;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.16216438;
            } else {
              result[1] += -0.059463587;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[1] += -0.03130942;
            } else {
              result[1] += 0.13294156;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[1] += 0.17832461;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1054373056)) {
              result[1] += -0.023139164;
            } else {
              result[1] += 0.07770809;
            }
          }
        } else {
          result[1] += -0.1377546;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3971443456)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1750554752)) {
              result[1] += -0.106748365;
            } else {
              result[1] += -0.023030844;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50704)) {
              result[1] += 0.16581689;
            } else {
              result[1] += -0.092524916;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)33269)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)27352)) {
              result[1] += -0.13452639;
            } else {
              result[1] += 0.12706415;
            }
          } else {
            result[1] += -0.13641034;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        result[1] += -0.15540276;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            result[1] += -0.30183083;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += 0.05925439;
            } else {
              result[1] += 0.14258;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31234)) {
              result[1] += 0.075554386;
            } else {
              result[1] += -0.035863806;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4079296768)) {
              result[1] += -0.15508707;
            } else {
              result[1] += 0.07649077;
            }
          }
        }
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        result[2] += -0.14788371;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[2] += -0.068619914;
        } else {
          result[2] += -0.037576217;
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
        result[2] += -0.025674237;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[2] += 0.09331928;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
            result[2] += -0.03204517;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21042)) {
              result[2] += 0.09574124;
            } else {
              result[2] += 0.020648412;
            }
          }
        }
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)786)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += 0.019866064;
        } else {
          result[2] += -0.04615453;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1051)) {
          result[2] += 0.07321066;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)18664)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)17886)) {
              result[2] += 0.007847688;
            } else {
              result[2] += -0.08975333;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)19166)) {
              result[2] += 0.08432911;
            } else {
              result[2] += 0.009070545;
            }
          }
        }
      }
    } else {
      result[2] += 0.14894797;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.14956205;
    } else {
      result[3] += -0.061756194;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          result[3] += 0.13329266;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.13804264;
          } else {
            result[3] += 0.14427777;
          }
        }
      } else {
        result[3] += -0.1391892;
      }
    } else {
      result[3] += -0.14688718;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[4] += -0.14878872;
      } else {
        result[4] += -0.034710065;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
              result[4] += 0.039417777;
            } else {
              result[4] += 0.118507;
            }
          } else {
            result[4] += -0.08654298;
          }
        } else {
          result[4] += 0.100125276;
        }
      } else {
        result[4] += -0.12522818;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.14914007;
    } else {
      result[4] += -0.079140745;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[5] += -0.015932683;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[5] += -0.0029770238;
            } else {
              result[5] += 0.001918676;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)61488)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)60991)) {
              result[5] += 0.008767304;
            } else {
              result[5] += -0.11222371;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)63462)) {
              result[5] += 0.04692368;
            } else {
              result[5] += 0.0043354155;
            }
          }
        }
      } else {
        result[5] += -0.12743734;
      }
    } else {
      result[5] += -0.12939031;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.14957702;
      } else {
        result[5] += 0.09514237;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
        result[5] += -0.139807;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[5] += 0.058319625;
            } else {
              result[5] += 0.26080477;
            }
          } else {
            result[5] += -0.11794441;
          }
        } else {
          result[5] += -0.13444048;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[6] += 0.0036248243;
          } else {
            result[6] += 0.128575;
          }
        } else {
          result[6] += -0.12936695;
        }
      } else {
        result[6] += -0.1324582;
      }
    } else {
      result[6] += -0.13530035;
    }
  } else {
    result[6] += -0.14961255;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.010095796;
            } else {
              result[7] += -0.0068818354;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.076221764;
            } else {
              result[7] += 0.14808193;
            }
          }
        } else {
          result[7] += -0.15040344;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
          result[7] += -0.14525007;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1496744960)) {
            result[7] += 0.073300965;
          } else {
            result[7] += -0.093539074;
          }
        }
      }
    } else {
      result[7] += 0.14929444;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.13892537;
            } else {
              result[7] += -0.10290946;
            }
          } else {
            result[7] += 0.14952281;
          }
        } else {
          result[7] += -0.04935134;
        }
      } else {
        result[7] += -0.10025405;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[7] += -0.09952213;
            } else {
              result[7] += 0.20348202;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
              result[7] += -0.14741574;
            } else {
              result[7] += -0.028234681;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            result[7] += -0.124039225;
          } else {
            result[7] += 0.14964975;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[7] += -0.123972714;
        } else {
          result[7] += 0.14954063;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += 0.0021810965;
            } else {
              result[8] += -0.16417816;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[8] += 0.14720981;
            } else {
              result[8] += -0.09821768;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[8] += -0.15536217;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.11638919;
            } else {
              result[8] += -0.15452205;
            }
          }
        }
      } else {
        result[8] += -0.15159939;
      }
    } else {
      result[8] += 0.17429169;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
        result[8] += -0.1594648;
      } else {
        result[8] += -0.20206775;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
            result[8] += 0.15445794;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[8] += -0.17660862;
            } else {
              result[8] += 0.14150386;
            }
          }
        } else {
          result[8] += -0.09096585;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            result[8] += -0.15049753;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
              result[8] += -0.18078405;
            } else {
              result[8] += -0.5277205;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.15795022;
            } else {
              result[8] += 0.050009064;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[8] += -0.1287986;
            } else {
              result[8] += 0.122291096;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[9] += 0.006070633;
            } else {
              result[9] += -0.14550562;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
              result[9] += -0.009530384;
            } else {
              result[9] += 0.07501721;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            result[9] += -0.14804469;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.14518909;
            } else {
              result[9] += -0.10851302;
            }
          }
        }
      } else {
        result[9] += -0.14546695;
      }
    } else {
      result[9] += -0.14729434;
    }
  } else {
    result[9] += -0.14903054;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.005471105;
            } else {
              result[10] += -0.13011827;
            }
          } else {
            result[10] += -0.1363838;
          }
        } else {
          result[10] += -0.14904538;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
              result[10] += 0.0047266656;
            } else {
              result[10] += 0.027688539;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
              result[10] += 0.1083763;
            } else {
              result[10] += -0.12575595;
            }
          }
        } else {
          result[10] += -0.13797747;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
            result[10] += -0.12993765;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33551)) {
              result[10] += 0.06860658;
            } else {
              result[10] += 0.22334775;
            }
          }
        } else {
          result[10] += -0.14805721;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[10] += -0.11731762;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
              result[10] += -0.07539745;
            } else {
              result[10] += 0.24007206;
            }
          } else {
            result[10] += -0.07923885;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.14857054;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
        result[10] += 0.19795299;
      } else {
        result[10] += -0.13560276;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[11] += -0.045705058;
            } else {
              result[11] += -0.14017753;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)42509)) {
              result[11] += -0.0030613898;
            } else {
              result[11] += 0.007298225;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)14103)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7966)) {
              result[11] += -0.13230002;
            } else {
              result[11] += 0.00088497374;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)52745)) {
              result[11] += -0.1390681;
            } else {
              result[11] += -0.07765928;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          result[11] += -0.1514334;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.14612444;
            } else {
              result[11] += -0.061248895;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += 0.043087553;
            } else {
              result[11] += -0.065752044;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.13668643;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3087300608)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
              result[11] += 0.07723794;
            } else {
              result[11] += -0.14619598;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19991)) {
              result[11] += 0.1624262;
            } else {
              result[11] += 0.10304747;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.14264466;
            } else {
              result[11] += -0.0025645604;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += 0.16381034;
            } else {
              result[11] += 0.0052462025;
            }
          }
        } else {
          result[11] += -0.14625898;
        }
      }
    }
  } else {
    result[11] += -0.14867379;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[12] += -0.046947155;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[12] += -0.106192835;
            } else {
              result[12] += -0.07381187;
            }
          }
        } else {
          result[12] += -0.14252618;
        }
      } else {
        result[12] += -0.14343612;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[12] += -0.0052186903;
            } else {
              result[12] += 0.017866123;
            }
          } else {
            result[12] += -0.14904118;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[12] += 0.12367082;
            } else {
              result[12] += -0.14786491;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[12] += -0.18039139;
            } else {
              result[12] += 0.06716797;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[12] += -0.14933911;
            } else {
              result[12] += -0.091559865;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += -0.13975158;
            } else {
              result[12] += 0.06635803;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[12] += 0.16755378;
          } else {
            result[12] += -0.14185862;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
        result[12] += -0.14926372;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
          result[12] += 0.1043451;
        } else {
          result[12] += -0.079588324;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
            result[12] += 0.24410738;
          } else {
            result[12] += 0.13117415;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
            result[12] += -0.12523797;
          } else {
            result[12] += 0.12159709;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
          result[12] += -0.14551911;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[12] += 0.13954853;
          } else {
            result[12] += -0.13636136;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += 0.0005856875;
            } else {
              result[13] += 0.05100638;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += -0.11717672;
            } else {
              result[13] += -0.007927043;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.19166666;
            } else {
              result[13] += -0.083876684;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3370453760)) {
              result[13] += 0.15020305;
            } else {
              result[13] += -0.10208703;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)486985984)) {
              result[13] += -0.07412289;
            } else {
              result[13] += -0.56647426;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += -0.18765625;
            } else {
              result[13] += 0.033945654;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)17327)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
              result[13] += 0.14704606;
            } else {
              result[13] += -0.06677751;
            }
          } else {
            result[13] += -0.14427048;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
              result[13] += 0.16384153;
            } else {
              result[13] += 0.0041433335;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.13987955;
            } else {
              result[13] += 0.0901911;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
            result[13] += 0.15310897;
          } else {
            result[13] += -0.09871881;
          }
        }
      } else {
        result[13] += -0.13423589;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
      result[13] += -0.14465824;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          result[13] += 0.073659234;
        } else {
          result[13] += -0.15216655;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2540421888)) {
          result[13] += 0.19399276;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            result[13] += -0.11902628;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
              result[13] += 0.01139627;
            } else {
              result[13] += 0.09812905;
            }
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
              result[14] += 0.0040699933;
            } else {
              result[14] += -0.1333807;
            }
          } else {
            result[14] += -0.14905067;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[14] += 0.032393306;
            } else {
              result[14] += 0.1702378;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.15228777;
            } else {
              result[14] += 0.10389565;
            }
          }
        }
      } else {
        result[14] += -0.14767897;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[14] += -0.095094174;
        } else {
          result[14] += 0.1521655;
        }
      } else {
        result[14] += -0.13317709;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6686)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1296776704)) {
              result[14] += 0.016278142;
            } else {
              result[14] += -0.10879056;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[14] += -0.14880398;
            } else {
              result[14] += -0.061776444;
            }
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2372276224)) {
              result[14] += 0.21225004;
            } else {
              result[14] += 0.020662596;
            }
          } else {
            result[14] += -0.11879042;
          }
        }
      } else {
        result[14] += -0.40668997;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)742410688)) {
          result[14] += 0.14202546;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1269061760)) {
              result[14] += 0.06661915;
            } else {
              result[14] += -0.031625748;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3544269056)) {
              result[14] += 0.08045388;
            } else {
              result[14] += 0.1295203;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[14] += -0.20317061;
          } else {
            result[14] += -0.14745153;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[14] += -0.07188376;
            } else {
              result[14] += 0.117453195;
            }
          } else {
            result[14] += -0.14349677;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[0] += 0.006801956;
            } else {
              result[0] += -0.12903306;
            }
          } else {
            result[0] += -0.13048185;
          }
        } else {
          result[0] += -0.14900424;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1353621248)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[0] += 0.012240914;
            } else {
              result[0] += -0.1745558;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
              result[0] += -0.13730715;
            } else {
              result[0] += -0.05914773;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
              result[0] += 0.06392987;
            } else {
              result[0] += 0.16712436;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.14606859;
            } else {
              result[0] += 0.14535704;
            }
          }
        }
      }
    } else {
      result[0] += -0.14672877;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[0] += -0.14564386;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            result[0] += 0.2996258;
          } else {
            result[0] += 0.097870804;
          }
        }
      } else {
        result[0] += -0.14719436;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
        result[0] += -0.14178711;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          result[0] += -0.12761626;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3800402176)) {
              result[0] += 0.17759517;
            } else {
              result[0] += -0.08027913;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
              result[0] += -0.006500629;
            } else {
              result[0] += -0.102057956;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[1] += -0.11806309;
    } else {
      result[1] += -0.034233417;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.0010527314;
            } else {
              result[1] += 0.025579348;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[1] += 0.057064865;
            } else {
              result[1] += -0.14711693;
            }
          }
        } else {
          result[1] += -0.16172169;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
              result[1] += 0.15974158;
            } else {
              result[1] += 0.049568888;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[1] += -0.14884645;
            } else {
              result[1] += 0.13909252;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.05572364;
            } else {
              result[1] += -0.12958676;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.16026708;
            } else {
              result[1] += -0.015937896;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 0.16764502;
            } else {
              result[1] += -0.01097088;
            }
          } else {
            result[1] += -0.13466357;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)33269)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)27352)) {
              result[1] += -0.13222803;
            } else {
              result[1] += 0.10508091;
            }
          } else {
            result[1] += -0.13427487;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          result[1] += -0.1545437;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[1] += -0.267696;
            } else {
              result[1] += 0.08270381;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
              result[1] += 0.010442761;
            } else {
              result[1] += -0.12650207;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          result[2] += -0.11421482;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[2] += -0.062729;
          } else {
            result[2] += -0.03339138;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)47877)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)44766)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)44284)) {
              result[2] += 0.008654664;
            } else {
              result[2] += -0.07452866;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)46100)) {
              result[2] += 0.07618191;
            } else {
              result[2] += 0.005241871;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)50669)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)50397)) {
              result[2] += -0.025231345;
            } else {
              result[2] += -0.15944305;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += 0.017763732;
            } else {
              result[2] += -0.012773269;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
          result[2] += -0.0482911;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
            result[2] += 0.09112737;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
              result[2] += -0.024595525;
            } else {
              result[2] += 0.035676543;
            }
          }
        }
      } else {
        result[2] += 0.14865339;
      }
    }
  } else {
    result[2] += -0.14950494;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.14944012;
    } else {
      result[3] += -0.056877576;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[3] += -0.13794346;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
              result[3] += -0.08602092;
            } else {
              result[3] += 0.14484026;
            }
          }
        } else {
          result[3] += 0.14615583;
        }
      } else {
        result[3] += -0.13728459;
      }
    } else {
      result[3] += -0.14606825;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[4] += -0.14850517;
      } else {
        result[4] += -0.032493018;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
          result[4] += 0.113942534;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            result[4] += -0.08880697;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46494)) {
              result[4] += 0.10236984;
            } else {
              result[4] += 0.026186671;
            }
          }
        }
      } else {
        result[4] += -0.119029246;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.14890173;
    } else {
      result[4] += -0.07580492;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[5] += 0.0012498733;
            } else {
              result[5] += -0.14534609;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[5] += -0.13391964;
            } else {
              result[5] += 0.06252271;
            }
          }
        } else {
          result[5] += -0.14307296;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          result[5] += -0.14657155;
        } else {
          result[5] += 0.09109339;
        }
      }
    } else {
      result[5] += -0.14726798;
    }
  } else {
    result[5] += -0.14872038;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[6] += 0.004102817;
          } else {
            result[6] += 0.12575652;
          }
        } else {
          result[6] += -0.1241733;
        }
      } else {
        result[6] += -0.12839213;
      }
    } else {
      result[6] += -0.13327609;
    }
  } else {
    result[6] += -0.14949887;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[7] += 0.0013614136;
            } else {
              result[7] += -0.12455485;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
              result[7] += -0.04351259;
            } else {
              result[7] += 0.14736725;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            result[7] += -0.14340615;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
              result[7] += 0.07179331;
            } else {
              result[7] += -0.08449417;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[7] += -0.14721876;
            } else {
              result[7] += -0.3048129;
            }
          } else {
            result[7] += 0.06778956;
          }
        } else {
          result[7] += 0.123738736;
        }
      }
    } else {
      result[7] += 0.14902042;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.13478279;
            } else {
              result[7] += -0.098898314;
            }
          } else {
            result[7] += 0.14934483;
          }
        } else {
          result[7] += -0.04272738;
        }
      } else {
        result[7] += -0.093717925;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[7] += -0.14737621;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
              result[7] += 0.1724681;
            } else {
              result[7] += -0.06283587;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[7] += -0.12953787;
            } else {
              result[7] += 0.14594781;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[7] += -0.11935999;
        } else {
          result[7] += 0.14930347;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2830898688)) {
              result[8] += -0.06309872;
            } else {
              result[8] += 0.1476329;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[8] += 0.010522935;
            } else {
              result[8] += -0.033799205;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.23474824;
            } else {
              result[8] += -0.07125493;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += -0.0134091815;
            } else {
              result[8] += 0.04222802;
            }
          }
        }
      } else {
        result[8] += -0.15104505;
      }
    } else {
      result[8] += 0.16971627;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      result[8] += -0.16065979;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
            result[8] += 0.15205076;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[8] += -0.17415899;
            } else {
              result[8] += 0.13878018;
            }
          }
        } else {
          result[8] += -0.08586295;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            result[8] += -0.14998174;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
              result[8] += -0.18595898;
            } else {
              result[8] += -0.5928892;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
              result[8] += -0.18072203;
            } else {
              result[8] += 0.1479311;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[8] += -0.17443669;
            } else {
              result[8] += 0.112293564;
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
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[9] += 0.0062713535;
            } else {
              result[9] += -0.14465053;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[9] += 0.0073125088;
            } else {
              result[9] += 0.072282195;
            }
          }
        } else {
          result[9] += -0.14437723;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
          result[9] += -0.14768577;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[9] += 0.14319603;
          } else {
            result[9] += -0.10088455;
          }
        }
      }
    } else {
      result[9] += -0.14666927;
    }
  } else {
    result[9] += -0.14880049;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[10] += 0.004492758;
            } else {
              result[10] += -0.14748345;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
              result[10] += 0.022270637;
            } else {
              result[10] += -0.058512427;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            result[10] += -0.14929546;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
              result[10] += 0.0566897;
            } else {
              result[10] += -0.13196494;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          result[10] += -0.13211465;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)3083)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[10] += -0.073085986;
            } else {
              result[10] += 0.04160497;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[10] += 0.12350585;
            } else {
              result[10] += 0.025584277;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
            result[10] += -0.12639078;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
              result[10] += 0.19120175;
            } else {
              result[10] += 0.031157257;
            }
          }
        } else {
          result[10] += -0.14754134;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[10] += -0.11358219;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[10] += -0.0758865;
            } else {
              result[10] += 0.09809049;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[10] += 0.35944647;
            } else {
              result[10] += 0.057798937;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.14823559;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
        result[10] += 0.17665678;
      } else {
        result[10] += -0.1315449;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[11] += 8.3628496e-05;
            } else {
              result[11] += -0.15447763;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += -0.12444957;
            } else {
              result[11] += 0.1646176;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[11] += -0.17362161;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[11] += -0.04990329;
            } else {
              result[11] += 0.022423087;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += -0.075604334;
            } else {
              result[11] += 0.04997788;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[11] += 0.44658947;
            } else {
              result[11] += 0.12624684;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50704)) {
              result[11] += 0.07683004;
            } else {
              result[11] += 0.33925152;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[11] += -0.3664253;
            } else {
              result[11] += -0.20379613;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[11] += -0.13356052;
          } else {
            result[11] += -0.23146224;
          }
        } else {
          result[11] += -0.14572723;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)861303040)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)702701760)) {
              result[11] += 0.08679945;
            } else {
              result[11] += 0.22019221;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.0261174;
            } else {
              result[11] += 0.15412909;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += 0.1429187;
            } else {
              result[11] += -0.005956794;
            }
          } else {
            result[11] += -0.2390603;
          }
        }
      }
    }
  } else {
    result[11] += -0.14836054;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[12] += -0.060794417;
            } else {
              result[12] += -0.16377145;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
              result[12] += -0.009735622;
            } else {
              result[12] += -0.087913245;
            }
          }
        } else {
          result[12] += -0.14822651;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[12] += 0.15385614;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[12] += -0.15316778;
            } else {
              result[12] += -0.050507106;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[12] += 0.14293313;
            } else {
              result[12] += -0.13372743;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[12] += 0.023231149;
            } else {
              result[12] += 0.116628475;
            }
          } else {
            result[12] += -0.14883;
          }
        } else {
          result[12] += -0.1620009;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
              result[12] += -0.14422527;
            } else {
              result[12] += 0.12050941;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[12] += 0.00607606;
            } else {
              result[12] += 0.10395444;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[12] += 0.030632053;
            } else {
              result[12] += -0.14043479;
            }
          } else {
            result[12] += -0.1458175;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[12] += -0.14928265;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.15982477;
            } else {
              result[12] += -0.110422805;
            }
          } else {
            result[12] += -0.14592253;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)13367)) {
              result[12] += 0.021778224;
            } else {
              result[12] += 0.1383453;
            }
          } else {
            result[12] += -0.12742446;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.04528805;
            } else {
              result[12] += -0.10325026;
            }
          } else {
            result[12] += -0.13735256;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        result[12] += 0.16246922;
      } else {
        result[12] += -0.14304021;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)5394)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[13] += -0.019857075;
            } else {
              result[13] += -0.14038293;
            }
          } else {
            result[13] += -0.14102635;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.010786966;
            } else {
              result[13] += -0.1084023;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
              result[13] += 0.13594374;
            } else {
              result[13] += -0.11964659;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[13] += -0.15007284;
            } else {
              result[13] += -0.036580805;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += 0.11048053;
            } else {
              result[13] += -0.08017601;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.20666972;
            } else {
              result[13] += -0.116825946;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
              result[13] += -0.12909956;
            } else {
              result[13] += 0.09609008;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[13] += 0.1332499;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
              result[13] += 0.06643704;
            } else {
              result[13] += -0.09260715;
            }
          }
        } else {
          result[13] += 0.15103608;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)307)) {
            result[13] += -0.12324014;
          } else {
            result[13] += 0.011892541;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40452)) {
              result[13] += 0.113246016;
            } else {
              result[13] += -0.024044152;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.12347933;
            } else {
              result[13] += 0.02361014;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
      result[13] += -0.15033561;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2398340864)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)37849)) {
          result[13] += -0.05887817;
        } else {
          result[13] += 0.20392859;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          result[13] += -0.14486493;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
              result[13] += -0.02005027;
            } else {
              result[13] += -0.089522615;
            }
          } else {
            result[13] += 0.0867273;
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
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[14] += -0.00012567686;
            } else {
              result[14] += 0.02815002;
            }
          } else {
            result[14] += -0.14874792;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[14] += 0.03051351;
            } else {
              result[14] += 0.1626242;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.15131688;
            } else {
              result[14] += 0.09243446;
            }
          }
        }
      } else {
        result[14] += -0.14714263;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[14] += -0.09070728;
        } else {
          result[14] += 0.15085079;
        }
      } else {
        result[14] += -0.13147762;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6686)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1296776704)) {
              result[14] += 0.019063149;
            } else {
              result[14] += -0.10383192;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[14] += -0.14762995;
            } else {
              result[14] += -0.055523075;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
              result[14] += 0.19513;
            } else {
              result[14] += 0.015208517;
            }
          } else {
            result[14] += -0.116203435;
          }
        }
      } else {
        result[14] += -0.3226312;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)41235)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
              result[14] += 0.056369018;
            } else {
              result[14] += 0.12389134;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3325106688)) {
              result[14] += -0.0318059;
            } else {
              result[14] += 0.08932157;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
            result[14] += 0.14647593;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2631808512)) {
              result[14] += -0.018479453;
            } else {
              result[14] += 0.13584134;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[14] += -0.1922956;
          } else {
            result[14] += -0.14672868;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1296776704)) {
              result[14] += 0.04644682;
            } else {
              result[14] += -0.14882171;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
              result[14] += 0.91477174;
            } else {
              result[14] += -0.05613865;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[0] += 0.0053459117;
            } else {
              result[0] += -0.12614061;
            }
          } else {
            result[0] += -0.14877006;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[0] += 0.010056179;
            } else {
              result[0] += 0.10196326;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
              result[0] += -0.14604379;
            } else {
              result[0] += 0.03855984;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1452252288)) {
              result[0] += -0.1005251;
            } else {
              result[0] += 0.097024314;
            }
          } else {
            result[0] += -0.11749409;
          }
        } else {
          result[0] += 0.81476116;
        }
      }
    } else {
      result[0] += -0.1461925;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)62732)) {
          result[0] += -0.14179659;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[0] += -0.098441824;
          } else {
            result[0] += 0.03955695;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[0] += -0.08545307;
          } else {
            result[0] += 0.16409136;
          }
        } else {
          result[0] += -0.13270763;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
        result[0] += 0.15008046;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
          result[0] += -0.13978489;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2700765696)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[0] += -0.0984037;
            } else {
              result[0] += 0.25869226;
            }
          } else {
            result[0] += -0.13502538;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += -0.0023378567;
            } else {
              result[1] += -0.1501025;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[1] += 0.012103073;
            } else {
              result[1] += -0.08656737;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[1] += 0.47084925;
            } else {
              result[1] += 0.14988193;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.1492112;
            } else {
              result[1] += 0.06302881;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)449359968)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[1] += -0.13182671;
            } else {
              result[1] += -0.06525963;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.17707299;
            } else {
              result[1] += -0.06867617;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[1] += 0.14873585;
          } else {
            result[1] += -0.078402735;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
              result[1] += 0.13365304;
            } else {
              result[1] += -0.02810085;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[1] += 0.25045142;
            } else {
              result[1] += -0.08774762;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            result[1] += -0.15027773;
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[1] += -0.026747957;
            } else {
              result[1] += 0.12185451;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.0387586;
            } else {
              result[1] += 0.0351426;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[1] += 0.13055089;
            } else {
              result[1] += -0.11512074;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            result[1] += -0.14393789;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1963317504)) {
              result[1] += -0.13438335;
            } else {
              result[1] += 0.110277474;
            }
          }
        }
      }
    }
  } else {
    result[1] += -0.14403652;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          result[2] += -0.1089032;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[2] += -0.05741001;
          } else {
            result[2] += -0.029736094;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)37885)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)36088)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)35330)) {
              result[2] += 0.0071381973;
            } else {
              result[2] += -0.058882996;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)36349)) {
              result[2] += 0.16373903;
            } else {
              result[2] += 0.038793366;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)41406)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)41154)) {
              result[2] += -0.010986533;
            } else {
              result[2] += -0.1701267;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)41951)) {
              result[2] += 0.08721573;
            } else {
              result[2] += 0.0055849236;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
          result[2] += -0.04148507;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
            result[2] += 0.09112315;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
              result[2] += -0.024188414;
            } else {
              result[2] += 0.035637546;
            }
          }
        }
      } else {
        result[2] += 0.148316;
      }
    }
  } else {
    result[2] += -0.14937425;
  }
}


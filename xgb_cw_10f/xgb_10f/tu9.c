
#include "header.h"

void predict_unit9(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.14788109;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[3] += 0.1275736;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.09410274;
          } else {
            result[3] += 0.12213704;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.14130314;
        } else {
          result[3] += 0.13795869;
        }
      }
    } else {
      result[3] += -0.14505118;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.14822683;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
              result[4] += 0.015247011;
            } else {
              result[4] += 0.10115436;
            }
          } else {
            result[4] += -0.08468389;
          }
        } else {
          result[4] += 0.18312787;
        }
      } else {
        result[4] += -0.00514197;
      }
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
            result[4] += -0.013199534;
          } else {
            result[4] += 0.14115825;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
            result[4] += -0.013733091;
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
              result[4] += 0.13347323;
            } else {
              result[4] += -0.0017806388;
            }
          }
        }
      } else {
        result[4] += 0.13419606;
      }
    } else {
      result[4] += 0.14817685;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[5] += 0.001951843;
        } else {
          result[5] += 0.0058682645;
        }
      } else {
        result[5] += -0.11668112;
      }
    } else {
      result[5] += -0.12896557;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.1493504;
      } else {
        result[5] += 0.08673526;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[5] += -0.13332817;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[5] += 0.06279705;
            } else {
              result[5] += 0.0029281047;
            }
          } else {
            result[5] += 0.14213687;
          }
        } else {
          result[5] += -0.10159621;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[6] += 0.0025940996;
        } else {
          result[6] += 0.0965791;
        }
      } else {
        result[6] += -0.11950478;
      }
    } else {
      result[6] += -0.12896582;
    }
  } else {
    result[6] += -0.14939496;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[7] += -0.0006965127;
            } else {
              result[7] += -0.03401423;
            }
          } else {
            result[7] += 0.14970464;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += -0.15139881;
            } else {
              result[7] += -0.17476815;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += 0.003693307;
            } else {
              result[7] += -0.035460647;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
          result[7] += -0.34724778;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            result[7] += 0.04270692;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
              result[7] += -0.13171147;
            } else {
              result[7] += -0.23912592;
            }
          }
        }
      }
    } else {
      result[7] += 0.14824554;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
            result[7] += 0.11150977;
          } else {
            result[7] += -0.09013538;
          }
        } else {
          result[7] += 0.14914338;
        }
      } else {
        result[7] += -0.018510304;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[7] += -0.14711186;
        } else {
          result[7] += -0.023018725;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[7] += -0.031532172;
            } else {
              result[7] += 0.17451951;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[7] += -0.09500141;
            } else {
              result[7] += 0.13862535;
            }
          }
        } else {
          result[7] += 0.14857563;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[8] += -0.00589819;
            } else {
              result[8] += 0.04832561;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[8] += -0.061892774;
            } else {
              result[8] += 0.04363458;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.18745697;
            } else {
              result[8] += -0.010773957;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[8] += -0.01058002;
            } else {
              result[8] += 0.016368;
            }
          }
        }
      } else {
        result[8] += -0.15580599;
      }
    } else {
      result[8] += 0.15645349;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      result[8] += -0.15930943;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
            result[8] += 0.15135014;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[8] += -0.18867363;
            } else {
              result[8] += 0.13623503;
            }
          }
        } else {
          result[8] += -0.07997442;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          result[8] += -0.15265259;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.15345934;
            } else {
              result[8] += -0.009267781;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[8] += -0.14859347;
            } else {
              result[8] += 0.11975798;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[9] += 0.003555339;
      } else {
        result[9] += -0.121379994;
      }
    } else {
      result[9] += -0.13044319;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
          result[9] += -0.14857808;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            result[9] += 0.051108453;
          } else {
            result[9] += -0.10874725;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)351236864)) {
            result[9] += 0.04545755;
          } else {
            result[9] += 0.13243477;
          }
        } else {
          result[9] += -0.07702596;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.11557269;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[9] += 0.035439294;
            } else {
              result[9] += 0.078248814;
            }
          } else {
            result[9] += 0.03147296;
          }
        }
      } else {
        result[9] += -0.13726275;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[10] += 0.0041591995;
            } else {
              result[10] += -0.123310186;
            }
          } else {
            result[10] += -0.13064139;
          }
        } else {
          result[10] += -0.14846973;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          result[10] += 0.022267826;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[10] += -0.13617468;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
              result[10] += 0.008609679;
            } else {
              result[10] += -0.11354149;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[10] += -0.14619923;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[10] += -0.13286148;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[10] += -0.072048984;
            } else {
              result[10] += 0.096289985;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[10] += -0.108701356;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[10] += 0.042834464;
            } else {
              result[10] += 0.18645354;
            }
          } else {
            result[10] += -0.08986014;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.14783995;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          result[10] += -0.07741992;
        } else {
          result[10] += 0.10606479;
        }
      } else {
        result[10] += -0.122413054;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[11] += 0.0009782008;
            } else {
              result[11] += 0.06495313;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[11] += -0.23453437;
            } else {
              result[11] += 0.15112093;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[11] += -0.1829884;
            } else {
              result[11] += -0.53754735;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.09058078;
            } else {
              result[11] += -0.21364908;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.041620098;
            } else {
              result[11] += 0.07521114;
            }
          } else {
            result[11] += -0.12299244;
          }
        } else {
          result[11] += -0.14654231;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[11] += -0.11474811;
        } else {
          result[11] += -0.16635144;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          result[11] += 0.18954746;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += -0.02404206;
            } else {
              result[11] += 0.022376783;
            }
          } else {
            result[11] += -0.14445624;
          }
        }
      }
    }
  } else {
    result[11] += -0.14802937;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
              result[12] += 0.00361291;
            } else {
              result[12] += -0.09599174;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[12] += -0.13283196;
            } else {
              result[12] += 0.10981056;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[12] += 0.024343578;
            } else {
              result[12] += -0.07140515;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[12] += -0.024415126;
            } else {
              result[12] += -0.1344485;
            }
          }
        }
      } else {
        result[12] += -0.14913724;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          result[12] += 0.14990745;
        } else {
          result[12] += -0.13020939;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[12] += 0.074440375;
            } else {
              result[12] += 0.14673544;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[12] += -0.16251235;
            } else {
              result[12] += 0.06979727;
            }
          }
        } else {
          result[12] += -0.14996879;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[12] += -0.14881271;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.13409527;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 0.1621725;
          } else {
            result[12] += -0.12945601;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.13699353;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.14409858;
            } else {
              result[12] += -0.14445198;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[12] += 0.16281292;
            } else {
              result[12] += -0.123221025;
            }
          }
        }
      } else {
        result[12] += -0.13726404;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.0067161694;
            } else {
              result[13] += -0.13789427;
            }
          } else {
            result[13] += 0.15587728;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
              result[13] += -0.14989296;
            } else {
              result[13] += -0.018944222;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
              result[13] += 0.08146515;
            } else {
              result[13] += -0.14696915;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += 0.016610533;
            } else {
              result[13] += 0.08668734;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += -0.06218225;
            } else {
              result[13] += 0.14995918;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            result[13] += 0.1713183;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += -0.104745425;
            } else {
              result[13] += 0.14303584;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        result[13] += 0.13682814;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            result[13] += -0.08788316;
          } else {
            result[13] += 0.007742181;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            result[13] += 0.07223273;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[13] += -0.009457115;
            } else {
              result[13] += 0.038135815;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
      result[13] += -0.14304784;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[13] += 0.04021943;
            } else {
              result[13] += -0.106195934;
            }
          } else {
            result[13] += 0.2425615;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            result[13] += -0.10146405;
          } else {
            result[13] += -0.004299145;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          result[13] += -0.14201453;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            result[13] += 0.1289759;
          } else {
            result[13] += -0.1268205;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[14] += 0.001516984;
            } else {
              result[14] += -0.045405388;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[14] += -0.1404256;
            } else {
              result[14] += 0.12916213;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[14] += 0.011867258;
            } else {
              result[14] += -0.14662473;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += 0.06757503;
            } else {
              result[14] += -0.14195864;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
          result[14] += -0.14756972;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += 0.19217713;
            } else {
              result[14] += 0.014837994;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
              result[14] += -0.020436676;
            } else {
              result[14] += -0.13199337;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[14] += 0.020029161;
          } else {
            result[14] += 0.07752517;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[14] += 0.10056097;
          } else {
            result[14] += -0.08557757;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[14] += -0.14827277;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[14] += -0.09454414;
            } else {
              result[14] += 0.14345062;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
              result[14] += 0.062165435;
            } else {
              result[14] += -0.11834262;
            }
          } else {
            result[14] += -0.117587514;
          }
        }
      }
    }
  } else {
    result[14] += -0.14159071;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[0] += 0.004288203;
            } else {
              result[0] += -0.11935076;
            }
          } else {
            result[0] += -0.13014722;
          }
        } else {
          result[0] += -0.14829393;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
              result[0] += 0.01706897;
            } else {
              result[0] += 0.08302749;
            }
          } else {
            result[0] += 0.1386047;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[0] += -0.0021126976;
            } else {
              result[0] += -0.06821282;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
              result[0] += 0.07812014;
            } else {
              result[0] += 0.007640078;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[0] += -0.14363965;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            result[0] += 0.28115222;
          } else {
            result[0] += 0.09632011;
          }
        } else {
          result[0] += -0.12519401;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      result[0] += -0.14817075;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        result[0] += -0.14107288;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[0] += 0.043424547;
            } else {
              result[0] += -0.21344052;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[0] += 0.20208387;
            } else {
              result[0] += 0.039398603;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[0] += 0.042219523;
            } else {
              result[0] += -0.104137644;
            }
          } else {
            result[0] += -0.13154505;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[1] += -0.09692491;
    } else {
      result[1] += -0.1359808;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[1] += -0.0018044364;
            } else {
              result[1] += -0.14923522;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
              result[1] += 0.14872272;
            } else {
              result[1] += 0.0042999536;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[1] += 0.011711433;
            } else {
              result[1] += -0.030520726;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
              result[1] += -0.14874129;
            } else {
              result[1] += 0.060679577;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[1] += -0.11650697;
            } else {
              result[1] += 0.25599992;
            }
          } else {
            result[1] += -0.13407357;
          }
        } else {
          result[1] += -0.14761214;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.040550567;
            } else {
              result[1] += -0.111738525;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[1] += -0.14946795;
            } else {
              result[1] += -0.030445179;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
              result[1] += -0.036839113;
            } else {
              result[1] += 0.03816959;
            }
          } else {
            result[1] += -0.10431092;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          result[1] += -0.12945633;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
              result[1] += -0.10794193;
            } else {
              result[1] += 0.17910977;
            }
          } else {
            result[1] += 0.13746326;
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += 0.0012128996;
        } else {
          result[2] += 0.004682621;
        }
      } else {
        result[2] += -0.12408613;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
            result[2] += 0.12402484;
          } else {
            result[2] += 0.07082952;
          }
        } else {
          result[2] += 0.13727626;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
          result[2] += 0.048500814;
        } else {
          result[2] += 0.13216597;
        }
      }
    }
  } else {
    result[2] += -0.14924599;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)18395080)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      result[3] += -0.14739074;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.13715798;
      } else {
        result[3] += 0.14146969;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      result[3] += -0.108308844;
    } else {
      result[3] += 0.14122619;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[4] += -0.12733252;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
              result[4] += -0.011536128;
            } else {
              result[4] += 0.13859935;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[4] += -0.0121751595;
            } else {
              result[4] += -0.0004823618;
            }
          }
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
              result[4] += 0.11708109;
            } else {
              result[4] += 0.030663347;
            }
          } else {
            result[4] += 0.14719373;
          }
        } else {
          result[4] += 0.0019556803;
        }
      }
    } else {
      result[4] += 0.14779516;
    }
  } else {
    result[4] += -0.14925253;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[5] += 0.0017723344;
          } else {
            result[5] += 0.0055809934;
          }
        } else {
          result[5] += -0.110030085;
        }
      } else {
        result[5] += -0.12503117;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
          result[5] += -0.148707;
        } else {
          result[5] += 0.083755545;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[5] += -0.12991047;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[5] += 0.059846003;
            } else {
              result[5] += 0.012583944;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[5] += 0.3305069;
            } else {
              result[5] += -0.020934606;
            }
          }
        }
      }
    }
  } else {
    result[5] += -0.14773048;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[6] += 0.0023057377;
        } else {
          result[6] += 0.092621185;
        }
      } else {
        result[6] += -0.113554664;
      }
    } else {
      result[6] += -0.12503147;
    }
  } else {
    result[6] += -0.149246;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[7] += 0.00037722968;
            } else {
              result[7] += 0.13813202;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.027409945;
            } else {
              result[7] += -0.20476604;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[7] += 0.14934333;
            } else {
              result[7] += -0.03090635;
            }
          } else {
            result[7] += 0.14940287;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
          result[7] += -0.14288613;
        } else {
          result[7] += 0.019619195;
        }
      }
    } else {
      result[7] += 0.14766866;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
            result[7] += 0.10954983;
          } else {
            result[7] += -0.0867527;
          }
        } else {
          result[7] += 0.14889042;
        }
      } else {
        result[7] += -0.02416047;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[7] += -0.14652434;
        } else {
          result[7] += -0.024041137;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[7] += 0.02960455;
            } else {
              result[7] += 0.48385927;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[7] += -0.14555229;
            } else {
              result[7] += 0.12946545;
            }
          }
        } else {
          result[7] += 0.14810157;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[8] += 0.0010850229;
            } else {
              result[8] += 0.07025557;
            }
          } else {
            result[8] += -0.1605345;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[8] += 0.1440233;
          } else {
            result[8] += -0.15332274;
          }
        }
      } else {
        result[8] += -0.15518498;
      }
    } else {
      result[8] += 0.1532515;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      result[8] += -0.15825306;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
          result[8] += 0.1455182;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[8] += -0.18474829;
          } else {
            result[8] += 0.13300659;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          result[8] += -0.15268213;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.15163922;
            } else {
              result[8] += -0.017609596;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[8] += -0.13979976;
            } else {
              result[8] += 0.113524996;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[9] += 0.0029235866;
            } else {
              result[9] += -0.12671019;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[9] += -0.14771211;
            } else {
              result[9] += 0.038304057;
            }
          }
        } else {
          result[9] += 0.1375337;
        }
      } else {
        result[9] += -0.13666338;
      }
    } else {
      result[9] += -0.14498058;
    }
  } else {
    result[9] += -0.14828825;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[10] += 0.0036043588;
            } else {
              result[10] += -0.117806144;
            }
          } else {
            result[10] += -0.12693611;
          }
        } else {
          result[10] += -0.14814547;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          result[10] += 0.021354584;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[10] += -0.13438831;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
              result[10] += 0.007436267;
            } else {
              result[10] += -0.10890881;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[10] += -0.14533718;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[10] += -0.12916975;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[10] += 0.0370676;
            } else {
              result[10] += -0.117933534;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[10] += -0.10452891;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[10] += 0.16315117;
          } else {
            result[10] += -0.07969937;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.1473925;
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[10] += -0.11619624;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
          result[10] += 0.09677547;
        } else {
          result[10] += -0.07767778;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
              result[11] += -0.0461386;
            } else {
              result[11] += 0.0007678711;
            }
          } else {
            result[11] += -0.18992701;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[11] += -0.15045948;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[11] += 0.008298063;
            } else {
              result[11] += -0.014607479;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += -0.042753838;
            } else {
              result[11] += 0.015192579;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.07554503;
            } else {
              result[11] += 0.024573835;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += -0.039815456;
            } else {
              result[11] += 0.14268932;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.013360464;
            } else {
              result[11] += -0.05873679;
            }
          }
        }
      }
    } else {
      result[11] += -0.14474523;
    }
  } else {
    result[11] += -0.14761023;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[12] += -0.03828559;
            } else {
              result[12] += -0.13310646;
            }
          } else {
            result[12] += -0.1394061;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[12] += 0.0035540152;
            } else {
              result[12] += -0.07652362;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[12] += 0.018461393;
            } else {
              result[12] += -0.13187252;
            }
          }
        }
      } else {
        result[12] += -0.14876527;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          result[12] += 0.14931169;
        } else {
          result[12] += -0.123204336;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[12] += 0.06651638;
            } else {
              result[12] += 0.14557819;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[12] += -0.15583298;
            } else {
              result[12] += 0.06491329;
            }
          }
        } else {
          result[12] += -0.14814442;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[12] += -0.14841135;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.13159813;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 0.15218394;
          } else {
            result[12] += -0.12547368;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[12] += -0.13412921;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.14154269;
            } else {
              result[12] += -0.14195509;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[12] += 0.15766604;
            } else {
              result[12] += -0.11686044;
            }
          }
        } else {
          result[12] += -0.13344811;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[13] += -0.027562333;
            } else {
              result[13] += -0.13768439;
            }
          } else {
            result[13] += -0.14060627;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[13] += 0.0068702903;
            } else {
              result[13] += -0.15276735;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
              result[13] += 0.15146622;
            } else {
              result[13] += -0.005545995;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[13] += -0.15299962;
            } else {
              result[13] += -0.008213537;
            }
          } else {
            result[13] += 0.017822618;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
              result[13] += -0.051512055;
            } else {
              result[13] += 0.17306998;
            }
          } else {
            result[13] += -0.11124132;
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[13] += 0.67757607;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[13] += -0.104168355;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)26237)) {
              result[13] += 0.17410025;
            } else {
              result[13] += -0.002847984;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[13] += -0.13628617;
            } else {
              result[13] += -0.0041258605;
            }
          } else {
            result[13] += 0.12978265;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += 0.21240793;
            } else {
              result[13] += 0.023307916;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.10870948;
            } else {
              result[13] += 0.08741435;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
      result[13] += -0.14169957;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[13] += 0.12346644;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += -0.10410423;
            } else {
              result[13] += 0.07740801;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[13] += -0.08893174;
          } else {
            result[13] += -0.02391184;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
          result[13] += -0.14140701;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            result[13] += 0.14205435;
          } else {
            result[13] += -0.12484844;
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
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[14] += 0.0020016795;
            } else {
              result[14] += -0.13792485;
            }
          } else {
            result[14] += -0.14826359;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[14] += 0.032770414;
            } else {
              result[14] += 0.17046261;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.15451533;
            } else {
              result[14] += 0.072462894;
            }
          }
        }
      } else {
        result[14] += -0.14607039;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[14] += -0.0808711;
        } else {
          result[14] += 0.15030633;
        }
      } else {
        result[14] += -0.11180787;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51039)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.12837876;
            } else {
              result[14] += -0.0154847875;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
              result[14] += 0.28206035;
            } else {
              result[14] += -0.08361136;
            }
          }
        } else {
          result[14] += -0.13993403;
        }
      } else {
        result[14] += -0.5790235;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[14] += 0.07041628;
        } else {
          result[14] += -0.082201235;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[14] += -0.1580184;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[14] += -0.046222247;
            } else {
              result[14] += 0.1228146;
            }
          } else {
            result[14] += -0.13462718;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[0] += 0.0036923287;
          } else {
            result[0] += -0.11357598;
          }
        } else {
          result[0] += -0.12654206;
        }
      } else {
        result[0] += -0.14839783;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)272)) {
              result[0] += 0.01997936;
            } else {
              result[0] += -0.23644392;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
              result[0] += 0.021539848;
            } else {
              result[0] += 0.11520537;
            }
          }
        } else {
          result[0] += 0.13642299;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
              result[0] += -0.04113589;
            } else {
              result[0] += 0.03240053;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)404894)) {
              result[0] += -0.057737928;
            } else {
              result[0] += -0.0038979526;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
              result[0] += 0.01584679;
            } else {
              result[0] += 0.087398104;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)464371)) {
              result[0] += -0.056076415;
            } else {
              result[0] += 0.028127685;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      result[0] += -0.14775743;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        result[0] += -0.13973598;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)17050)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[0] += 0.19580801;
            } else {
              result[0] += 0.09021889;
            }
          } else {
            result[0] += -0.08748688;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[0] += -0.13009594;
            } else {
              result[0] += 0.083042786;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[0] += -0.14195956;
            } else {
              result[0] += -0.0069349003;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[1] += -0.08354549;
      } else {
        result[1] += -0.123921156;
      }
    } else {
      result[1] += -0.13319977;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += 0.0004140813;
            } else {
              result[1] += 0.14691722;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
              result[1] += -0.05047256;
            } else {
              result[1] += -0.114148125;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            result[1] += 0.08889862;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
              result[1] += 0.0016568128;
            } else {
              result[1] += 0.1764162;
            }
          }
        }
      } else {
        result[1] += -0.14388339;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.03819205;
            } else {
              result[1] += -0.10455052;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[1] += -0.14731604;
            } else {
              result[1] += -0.028657563;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
              result[1] += -0.0242818;
            } else {
              result[1] += 0.04404794;
            }
          } else {
            result[1] += -0.09722967;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          result[1] += -0.12484276;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
              result[1] += -0.10502325;
            } else {
              result[1] += 0.13397235;
            }
          } else {
            result[1] += 0.13223222;
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += 0.001118045;
        } else {
          result[2] += 0.004416148;
        }
      } else {
        result[2] += -0.11981117;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
            result[2] += 0.11971486;
          } else {
            result[2] += 0.06417431;
          }
        } else {
          result[2] += 0.13452747;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
          result[2] += 0.044117272;
        } else {
          result[2] += 0.12864164;
        }
      }
    }
  } else {
    result[2] += -0.14907439;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      result[3] += -0.14708406;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.13501202;
      } else {
        result[3] += 0.13936128;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      result[3] += -0.10244037;
    } else {
      result[3] += 0.13885505;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[4] += -0.12439025;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[4] += 0.0002794813;
            } else {
              result[4] += 0.1310543;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)52239)) {
              result[4] += -0.004756492;
            } else {
              result[4] += 0.0026629178;
            }
          }
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
          result[4] += 0.10911261;
        } else {
          result[4] += 0.0050580306;
        }
      }
    } else {
      result[4] += 0.14722104;
    }
  } else {
    result[4] += -0.14908205;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[5] += 0.001588236;
          } else {
            result[5] += 0.0052339244;
          }
        } else {
          result[5] += -0.10300592;
        }
      } else {
        result[5] += -0.12083221;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
          result[5] += -0.14846468;
        } else {
          result[5] += 0.0841045;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[5] += -0.12611537;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[5] += 0.053207006;
            } else {
              result[5] += 0.0038618052;
            }
          } else {
            result[5] += 0.12453665;
          }
        }
      }
    }
  } else {
    result[5] += -0.1471493;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[6] += 0.0020306248;
        } else {
          result[6] += 0.08852602;
        }
      } else {
        result[6] += -0.10725897;
      }
    } else {
      result[6] += -0.120832525;
    }
  } else {
    result[6] += -0.1490744;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += 0.00034802596;
            } else {
              result[7] += -0.037782334;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[7] += 0.016114302;
            } else {
              result[7] += 0.14907235;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            result[7] += -0.07552929;
          } else {
            result[7] += -0.14701569;
          }
        }
      } else {
        result[7] += 0.14693739;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
        result[7] += -0.3026871;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          result[7] += 0.022816656;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[7] += 0.030450668;
            } else {
              result[7] += -0.13578239;
            }
          } else {
            result[7] += -0.22194506;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
            result[7] += 0.10243104;
          } else {
            result[7] += -0.0835963;
          }
        } else {
          result[7] += 0.14862436;
        }
      } else {
        result[7] += -0.0789533;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[7] += -0.1458178;
        } else {
          result[7] += -0.02363001;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += 0.01772821;
            } else {
              result[7] += -0.08557314;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += 0.17014438;
            } else {
              result[7] += -0.03056587;
            }
          }
        } else {
          result[7] += 0.14747703;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[8] += -0.0033724834;
            } else {
              result[8] += 0.06331002;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += 0.1633529;
            } else {
              result[8] += 0.0028270218;
            }
          }
        } else {
          result[8] += -0.15400678;
        }
      } else {
        result[8] += 0.14984012;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
        result[8] += -0.15606137;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
            result[8] += 0.14203992;
          } else {
            result[8] += 0.10538676;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            result[8] += -0.15262409;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[8] += 0.13703614;
            } else {
              result[8] += 0.00045811775;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.15327926;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.123907335;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[8] += 0.14236602;
            } else {
              result[8] += 0.099675454;
            }
          } else {
            result[8] += -0.07733383;
          }
        }
      } else {
        result[8] += -0.14996383;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[9] += 0.0025187968;
            } else {
              result[9] += -0.12269463;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[9] += -0.14731976;
            } else {
              result[9] += 0.036326673;
            }
          }
        } else {
          result[9] += 0.13413888;
        }
      } else {
        result[9] += -0.13367273;
      }
    } else {
      result[9] += -0.14386758;
    }
  } else {
    result[9] += -0.14792232;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[10] += 0.0031078863;
            } else {
              result[10] += -0.11187768;
            }
          } else {
            result[10] += -0.122946166;
          }
        } else {
          result[10] += -0.14780115;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          result[10] += 0.020366106;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[10] += -0.13229941;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
              result[10] += 0.006690923;
            } else {
              result[10] += -0.10414362;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[10] += -0.14433432;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[10] += -0.12512743;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[10] += 0.030840697;
            } else {
              result[10] += -0.11408739;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[10] += -0.100091435;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[10] += 0.029289313;
            } else {
              result[10] += 0.17519134;
            }
          } else {
            result[10] += -0.083107956;
          }
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
      result[10] += -0.14684491;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
        result[10] += 0.15011568;
      } else {
        result[10] += -0.12365791;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[11] += -0.00384579;
            } else {
              result[11] += -0.13840115;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[11] += -0.19308521;
            } else {
              result[11] += -0.0016547908;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            result[11] += 0.15066884;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[11] += 0.0030258987;
            } else {
              result[11] += -0.10897443;
            }
          }
        }
      } else {
        result[11] += -0.1503689;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[11] += 0.011254039;
            } else {
              result[11] += -0.0034847842;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
              result[11] += -0.1502074;
            } else {
              result[11] += 0.004821523;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
              result[11] += 0.13258834;
            } else {
              result[11] += -0.15269466;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[11] += -0.40049627;
            } else {
              result[11] += 0.035403408;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          result[11] += -0.15897003;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += -0.119890705;
            } else {
              result[11] += -0.1585783;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += 0.09256021;
            } else {
              result[11] += -0.005755909;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.14709154;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[12] += -0.0338523;
            } else {
              result[12] += -0.12922716;
            }
          } else {
            result[12] += -0.13718605;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
              result[12] += 0.006691442;
            } else {
              result[12] += -0.14783686;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.14928994;
            } else {
              result[12] += 0.0020834338;
            }
          }
        }
      } else {
        result[12] += -0.14827032;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          result[12] += 0.14860836;
        } else {
          result[12] += -0.114695214;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.113443084;
            } else {
              result[12] += 0.046444938;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[12] += -0.21848463;
            } else {
              result[12] += 0.016416963;
            }
          }
        } else {
          result[12] += -0.14556673;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[12] += -0.14801265;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.12832135;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 0.14730527;
          } else {
            result[12] += -0.121873595;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[12] += -0.13127606;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.13979942;
            } else {
              result[12] += -0.13900048;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[12] += 0.15405905;
            } else {
              result[12] += -0.11142278;
            }
          }
        } else {
          result[12] += -0.12919508;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.009484472;
            } else {
              result[13] += -0.032194935;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[13] += -0.14628549;
            } else {
              result[13] += -0.05176218;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[13] += 0.023575261;
            } else {
              result[13] += -0.025234891;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[13] += 0.08663716;
            } else {
              result[13] += 0.16526748;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[13] += -0.15244545;
            } else {
              result[13] += -0.0007814768;
            }
          } else {
            result[13] += 0.019177064;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
              result[13] += -0.036397487;
            } else {
              result[13] += 0.16322842;
            }
          } else {
            result[13] += -0.10437975;
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[13] += 0.4076185;
          } else {
            result[13] += 0.1268755;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[13] += -0.10269561;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)26237)) {
              result[13] += 0.14757301;
            } else {
              result[13] += -0.0051291734;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)254)) {
              result[13] += -0.046705745;
            } else {
              result[13] += -0.1386521;
            }
          } else {
            result[13] += 0.12559353;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
              result[13] += 0.035970204;
            } else {
              result[13] += 0.13800135;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[13] += 0.11373589;
            } else {
              result[13] += -0.122824706;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
      result[13] += -0.14004377;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
          result[13] += 0.11009991;
        } else {
          result[13] += -0.08181226;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
          result[13] += -0.14135829;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[13] += -0.05242527;
            } else {
              result[13] += 0.13476194;
            }
          } else {
            result[13] += -0.12072535;
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
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += 0.0019124515;
            } else {
              result[14] += -0.07921974;
            }
          } else {
            result[14] += -0.147653;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += 0.038917646;
            } else {
              result[14] += 0.17571674;
            }
          } else {
            result[14] += -0.12200966;
          }
        }
      } else {
        result[14] += -0.14521368;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[14] += -0.07755433;
        } else {
          result[14] += 0.14959246;
        }
      } else {
        result[14] += -0.10829409;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51039)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.12517194;
            } else {
              result[14] += -0.01410958;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
              result[14] += 0.24226448;
            } else {
              result[14] += -0.07709934;
            }
          }
        } else {
          result[14] += -0.13801248;
        }
      } else {
        result[14] += -0.40007994;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[14] += 0.06411839;
        } else {
          result[14] += -0.07870332;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[14] += -0.1563752;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[14] += -0.016711561;
            } else {
              result[14] += 0.16092128;
            }
          } else {
            result[14] += -0.13076049;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[0] += 0.0032339261;
          } else {
            result[0] += -0.10745096;
          }
        } else {
          result[0] += -0.12259827;
        }
      } else {
        result[0] += -0.14807579;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[0] += 0.017882057;
            } else {
              result[0] += 0.003257959;
            }
          } else {
            result[0] += 0.20604679;
          }
        } else {
          result[0] += -0.13241446;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[0] += -0.12060865;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            result[0] += 0.06925376;
          } else {
            result[0] += 0.04313916;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      result[0] += -0.14728425;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        result[0] += -0.13830319;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[0] += 0.034494482;
            } else {
              result[0] += -0.22516991;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[0] += 0.20675248;
            } else {
              result[0] += 0.035395637;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[0] += -0.124501646;
          } else {
            result[0] += -0.046502326;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)6)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += 0.0012855295;
            } else {
              result[1] += -0.019396333;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 0.00022843046;
            } else {
              result[1] += 0.13246813;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            result[1] += -0.14838189;
          } else {
            result[1] += -0.18154056;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[1] += 0.1916228;
            } else {
              result[1] += 0.2765506;
            }
          } else {
            result[1] += -0.12575606;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[1] += -0.004731158;
            } else {
              result[1] += -0.106967315;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.12915659;
            } else {
              result[1] += 0.025721218;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        result[1] += -0.14964288;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.017154582;
            } else {
              result[1] += -0.15328357;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[1] += 0.13798662;
            } else {
              result[1] += -0.012749509;
            }
          }
        } else {
          result[1] += 0.15254536;
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[1] += 0.015217901;
            } else {
              result[1] += -0.057540614;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[1] += -0.14793874;
            } else {
              result[1] += 0.01819;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[1] += 0.1836028;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += -0.08225181;
            } else {
              result[1] += 0.0832382;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += -0.021091197;
            } else {
              result[1] += -0.14606068;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[1] += 0.017967284;
            } else {
              result[1] += -0.097317666;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            result[1] += -0.14636064;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.19439821;
            } else {
              result[1] += -0.082972825;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
        result[1] += -0.14742644;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[1] += 0.034198146;
          } else {
            result[1] += 0.14339419;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[1] += 0.12032646;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += -0.0011783402;
            } else {
              result[1] += -0.082121305;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += 0.0010762232;
        } else {
          result[2] += 0.00429546;
        }
      } else {
        result[2] += -0.11528489;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
            result[2] += 0.11558112;
          } else {
            result[2] += 0.059222016;
          }
        } else {
          result[2] += 0.13189343;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
          result[2] += 0.040997673;
        } else {
          result[2] += 0.12504959;
        }
      }
    }
  } else {
    result[2] += -0.1488777;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      result[3] += -0.14666012;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.13238649;
      } else {
        result[3] += 0.13693722;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      result[3] += -0.09646944;
    } else {
      result[3] += 0.13670638;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[4] += -0.1211711;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
              result[4] += -0.00999465;
            } else {
              result[4] += 0.13585882;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[4] += -0.011692148;
            } else {
              result[4] += -0.0009983003;
            }
          }
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
              result[4] += 0.12608229;
            } else {
              result[4] += -0.051726475;
            }
          } else {
            result[4] += 0.114699;
          }
        } else {
          result[4] += 0.008443822;
        }
      }
    } else {
      result[4] += 0.14658637;
    }
  } else {
    result[4] += -0.14888665;
  }
}


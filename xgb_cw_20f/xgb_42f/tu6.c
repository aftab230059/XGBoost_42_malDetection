
#include "header.h"

void predict_unit6(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[12] += 0.00848074;
            } else {
              result[12] += -0.14977992;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[12] += 0.14093886;
            } else {
              result[12] += -0.09838844;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[12] += -0.14459565;
            } else {
              result[12] += -0.012934648;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
              result[12] += 0.10124037;
            } else {
              result[12] += -0.14837366;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            result[12] += -0.14982547;
          } else {
            result[12] += -0.1715505;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[12] += 1.0656055;
          } else {
            result[12] += -0.1493622;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61197)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11301)) {
              result[12] += 0.06475903;
            } else {
              result[12] += 0.0892625;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
              result[12] += -0.00499211;
            } else {
              result[12] += 0.12603354;
            }
          }
        } else {
          result[12] += -0.14780822;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)28681)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
              result[12] += 0.16187516;
            } else {
              result[12] += 0.11648282;
            }
          } else {
            result[12] += 0.20792075;
          }
        } else {
          result[12] += -0.09378382;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[12] += -0.15146692;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[12] += 0.15798873;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[12] += -0.14881587;
            } else {
              result[12] += 0.008636547;
            }
          } else {
            result[12] += -0.14894556;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          result[12] += -0.08357975;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
            result[12] += 0.15437987;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
              result[12] += -0.035179507;
            } else {
              result[12] += 0.106995165;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
          result[12] += -0.1573194;
        } else {
          result[12] += 0.12906791;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[13] += -0.06565541;
            } else {
              result[13] += -0.023336912;
            }
          } else {
            result[13] += -0.14833471;
          }
        } else {
          result[13] += -0.14843526;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.006006154;
            } else {
              result[13] += 0.0513512;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[13] += -0.123163566;
            } else {
              result[13] += 0.14373286;
            }
          }
        } else {
          result[13] += -0.14904667;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
              result[13] += 0.26892388;
            } else {
              result[13] += 0.02510099;
            }
          } else {
            result[13] += -0.15143293;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[13] += 0.1672198;
            } else {
              result[13] += 0.14986534;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[13] += 0.4457951;
            } else {
              result[13] += 0.11271504;
            }
          }
        }
      } else {
        result[13] += -0.14687951;
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
      result[13] += -0.15298349;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2398340864)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
          result[13] += 0.2669758;
        } else {
          result[13] += -0.08953573;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            result[13] += -0.15005034;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
              result[13] += 0.13710463;
            } else {
              result[13] += -0.14454718;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
            result[13] += 0.18650398;
          } else {
            result[13] += -0.096610315;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.005739234;
            } else {
              result[14] += -0.12348201;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[14] += 0.026697215;
            } else {
              result[14] += -0.14793831;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            result[14] += -0.15505551;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[14] += 0.4601955;
            } else {
              result[14] += -0.017925171;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
              result[14] += 0.05942532;
            } else {
              result[14] += -0.13825548;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[14] += 0.1537295;
            } else {
              result[14] += -0.09925183;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)277)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.13927731;
            } else {
              result[14] += 0.05257965;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[14] += 0.14207098;
            } else {
              result[14] += -0.13866767;
            }
          }
        }
      }
    } else {
      result[14] += -0.1493352;
    }
  } else {
    result[14] += -0.14943556;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[0] += 0.014027398;
            } else {
              result[0] += -0.028539097;
            }
          } else {
            result[0] += -0.14740928;
          }
        } else {
          result[0] += -0.14753748;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[0] += -0.1487029;
            } else {
              result[0] += 0.0066015553;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[0] += 0.40877572;
            } else {
              result[0] += -0.052702777;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[0] += -0.14552683;
            } else {
              result[0] += 0.3165562;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.14924906;
            } else {
              result[0] += 0.05661389;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
        result[0] += -0.1273094;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
          result[0] += 0.15288338;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
            result[0] += -0.14111042;
          } else {
            result[0] += 0.14763199;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
        result[0] += -0.14822145;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
            result[0] += -0.13802902;
          } else {
            result[0] += 0.087392956;
          }
        } else {
          result[0] += -0.14651611;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[0] += -0.09806196;
          } else {
            result[0] += 0.15455347;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            result[0] += 0.7438176;
          } else {
            result[0] += 0.17584473;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
            result[0] += -0.14907758;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2692863232)) {
              result[0] += 0.1542827;
            } else {
              result[0] += -0.15091476;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[0] += 0.14534603;
          } else {
            result[0] += -0.080989525;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[1] += -0.14090222;
      } else {
        result[1] += -0.0723494;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[1] += 0.0008701268;
            } else {
              result[1] += 0.06749541;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.15268034;
            } else {
              result[1] += -0.19356824;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.13483924;
            } else {
              result[1] += 0.19478224;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += 0.04797639;
            } else {
              result[1] += -0.06640467;
            }
          }
        }
      } else {
        result[1] += -0.14896064;
      }
    }
  } else {
    result[1] += -0.14415172;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += -0.14970846;
        } else {
          result[2] += -0.04711284;
        }
      } else {
        result[2] += -0.10041733;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)40611)) {
              result[2] += 0.058827512;
            } else {
              result[2] += -0.06862298;
            }
          } else {
            result[2] += 0.116163485;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
            result[2] += -0.046287484;
          } else {
            result[2] += 0.09821308;
          }
        }
      } else {
        result[2] += -0.120900504;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)65281)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)65015)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)64235)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)63462)) {
              result[2] += 0.014411658;
            } else {
              result[2] += 0.053716898;
            }
          } else {
            result[2] += -0.03334742;
          }
        } else {
          result[2] += 0.067421295;
        }
      } else {
        result[2] += -0.031486213;
      }
    } else {
      result[2] += 0.15030882;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.15009908;
    } else {
      result[3] += -0.096652836;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[3] += -0.14680794;
            } else {
              result[3] += 0.14987814;
            }
          } else {
            result[3] += 0.15055175;
          }
        } else {
          result[3] += -0.12878;
        }
      } else {
        result[3] += -0.14691107;
      }
    } else {
      result[3] += -0.14955343;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[4] += -0.14992277;
      } else {
        result[4] += -0.05009598;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46494)) {
              result[4] += 0.13567977;
            } else {
              result[4] += -0.07852702;
            }
          } else {
            result[4] += 0.22553523;
          }
        } else {
          result[4] += 0.044367358;
        }
      } else {
        result[4] += -0.14621279;
      }
    }
  } else {
    result[4] += 0.15003729;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[5] += -0.0430902;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[5] += -0.018346958;
            } else {
              result[5] += -0.005117734;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)61488)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)60991)) {
              result[5] += 0.016248511;
            } else {
              result[5] += -0.123450205;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)62215)) {
              result[5] += 0.079251364;
            } else {
              result[5] += 0.01945923;
            }
          }
        }
      } else {
        result[5] += -0.14646514;
      }
    } else {
      result[5] += -0.14687358;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.15009287;
      } else {
        result[5] += 0.12932092;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
        result[5] += -0.14826643;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36306)) {
              result[5] += 0.5841497;
            } else {
              result[5] += 0.073700815;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[5] += 0.054892898;
            } else {
              result[5] += -0.14229676;
            }
          }
        } else {
          result[5] += -0.1461696;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[6] += 0.0023402474;
          } else {
            result[6] += 0.14521089;
          }
        } else {
          result[6] += -0.14461966;
        }
      } else {
        result[6] += -0.14678828;
      }
    } else {
      result[6] += -0.14700973;
    }
  } else {
    result[6] += -0.15010543;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
              result[7] += 0.002248967;
            } else {
              result[7] += -0.14713201;
            }
          } else {
            result[7] += -0.14784792;
          }
        } else {
          result[7] += 0.15090352;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          result[7] += -0.15425722;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
              result[7] += -0.004712607;
            } else {
              result[7] += 0.044012226;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[7] += -0.017156266;
            } else {
              result[7] += 0.005366069;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[7] += -0.118870296;
      } else {
        result[7] += 0.15020686;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)6)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
              result[7] += -0.05934277;
            } else {
              result[7] += 0.013210319;
            }
          } else {
            result[7] += -0.14161481;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[7] += 0.16136205;
          } else {
            result[7] += -0.117738485;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          result[7] += -0.14871179;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
            result[7] += -0.14140977;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[7] += 0.2885334;
            } else {
              result[7] += -0.13683501;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[7] += 0.15069982;
        } else {
          result[7] += -0.108606435;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
              result[7] += -0.20691292;
            } else {
              result[7] += 0.0499899;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[7] += 0.15025899;
            } else {
              result[7] += 0.027416253;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[7] += 0.13848738;
            } else {
              result[7] += -0.15022215;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[7] += 0.1441701;
            } else {
              result[7] += 0.15240964;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[8] += 0.0011877205;
            } else {
              result[8] += 0.13129461;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[8] += -0.14992318;
            } else {
              result[8] += -0.1268122;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += 0.03840187;
            } else {
              result[8] += -0.15628272;
            }
          } else {
            result[8] += 0.1558653;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          result[8] += -0.14898705;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[8] += -0.17344782;
            } else {
              result[8] += -0.20945874;
            }
          } else {
            result[8] += -0.14819929;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[8] += -0.11537686;
          } else {
            result[8] += 0.15442085;
          }
        } else {
          result[8] += -0.13501379;
        }
      } else {
        result[8] += -0.15290809;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.15913822;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.14738296;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[8] += 0.1492445;
          } else {
            result[8] += -0.08748582;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          result[8] += -0.24118902;
        } else {
          result[8] += -0.14948602;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.038096845;
            } else {
              result[9] += -0.075386725;
            }
          } else {
            result[9] += -0.08999833;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[9] += 0.0042454684;
          } else {
            result[9] += -0.0011985971;
          }
        }
      } else {
        result[9] += -0.14760537;
      }
    } else {
      result[9] += -0.14785309;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
          result[9] += -0.1498356;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.15074015;
            } else {
              result[9] += -0.11218006;
            }
          } else {
            result[9] += -0.14603502;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[9] += 0.145501;
        } else {
          result[9] += -0.14112031;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.1388292;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[9] += 0.048763473;
            } else {
              result[9] += 0.11871659;
            }
          } else {
            result[9] += -0.10611267;
          }
        }
      } else {
        result[9] += -0.1486583;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.0070056943;
            } else {
              result[10] += -0.14693274;
            }
          } else {
            result[10] += -0.14763536;
          }
        } else {
          result[10] += -0.1500079;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
              result[10] += 0.03900912;
            } else {
              result[10] += -0.14323352;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += -0.15293348;
            } else {
              result[10] += 0.03345033;
            }
          }
        } else {
          result[10] += -0.1455688;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
        result[10] += -0.14948514;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2979963136)) {
          result[10] += -0.08829165;
        } else {
          result[10] += 0.16925374;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[10] += -0.14927386;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[10] += -0.14233132;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2371643392)) {
              result[10] += 0.037953503;
            } else {
              result[10] += 0.17075479;
            }
          } else {
            result[10] += -0.13099326;
          }
        }
      } else {
        result[10] += -0.14917667;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[11] += -0.05860104;
            } else {
              result[11] += -0.14656985;
            }
          } else {
            result[11] += -0.14698187;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[11] += 0.007602905;
            } else {
              result[11] += -0.044743504;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
              result[11] += 0.117460474;
            } else {
              result[11] += -0.18282625;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.1512323;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += -0.0023031821;
            } else {
              result[11] += 0.10486151;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2275607552)) {
              result[11] += -0.016682742;
            } else {
              result[11] += -0.17916483;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[11] += 0.012669307;
            } else {
              result[11] += -0.14983472;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[11] += 0.73940086;
            } else {
              result[11] += -0.121360414;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[11] += 0.058057595;
            } else {
              result[11] += 0.120666154;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += 0.044041224;
            } else {
              result[11] += -0.007812275;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)2084)) {
            result[11] += -0.16085516;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[11] += 0.19332096;
            } else {
              result[11] += 0.019310288;
            }
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += -0.06568985;
            } else {
              result[11] += 0.05652533;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[11] += 0.16564612;
            } else {
              result[11] += -0.3468598;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.14983365;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[12] += 0.007813515;
            } else {
              result[12] += -0.14965554;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[12] += 0.13666132;
            } else {
              result[12] += -0.09214523;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[12] += -0.14290391;
            } else {
              result[12] += -0.010597696;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
              result[12] += 0.08633273;
            } else {
              result[12] += -0.14778537;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          result[12] += -0.1571981;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
              result[12] += 0.47748294;
            } else {
              result[12] += 0.14006846;
            }
          } else {
            result[12] += -0.1485758;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
              result[12] += 0.06609495;
            } else {
              result[12] += 0.12594652;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
              result[12] += -0.13071361;
            } else {
              result[12] += 0.1241722;
            }
          }
        } else {
          result[12] += -0.14711492;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)28681)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
              result[12] += 0.16001056;
            } else {
              result[12] += 0.107668065;
            }
          } else {
            result[12] += 0.19286579;
          }
        } else {
          result[12] += -0.087382525;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[12] += -0.15087453;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[12] += 0.14996721;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[12] += -0.14805073;
            } else {
              result[12] += 0.007454913;
            }
          } else {
            result[12] += -0.14857015;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          result[12] += -0.076681025;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)428962464)) {
              result[12] += 0.09388525;
            } else {
              result[12] += 0.15616742;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
              result[12] += -0.037327517;
            } else {
              result[12] += 0.09935411;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
          result[12] += -0.15524557;
        } else {
          result[12] += 0.12442931;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[13] += -0.060130484;
            } else {
              result[13] += -0.02101756;
            }
          } else {
            result[13] += -0.14774448;
          }
        } else {
          result[13] += -0.14786974;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.002277024;
            } else {
              result[13] += 0.045936618;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[13] += -0.1253208;
            } else {
              result[13] += 0.07173062;
            }
          }
        } else {
          result[13] += -0.14868681;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
              result[13] += 0.23228724;
            } else {
              result[13] += 0.018806748;
            }
          } else {
            result[13] += -0.14860372;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
            result[13] += 0.15542078;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[13] += 0.41439953;
            } else {
              result[13] += 0.110011436;
            }
          }
        }
      } else {
        result[13] += -0.14598553;
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
      result[13] += -0.1527956;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2398340864)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
          result[13] += 0.23520659;
        } else {
          result[13] += -0.0832751;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            result[13] += -0.14959522;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
              result[13] += 0.12582643;
            } else {
              result[13] += -0.13818938;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
            result[13] += 0.16639484;
          } else {
            result[13] += -0.08973828;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[14] += -0.0024042279;
            } else {
              result[14] += -0.14759468;
            }
          } else {
            result[14] += -0.1480696;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            result[14] += -0.15339369;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += -0.04587347;
            } else {
              result[14] += 0.31993502;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
              result[14] += 0.053494994;
            } else {
              result[14] += -0.13054234;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[14] += 0.14687985;
            } else {
              result[14] += -0.09155152;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.1523315;
            } else {
              result[14] += 0.027913583;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[14] += 0.10318319;
            } else {
              result[14] += -0.14338464;
            }
          }
        }
      }
    } else {
      result[14] += -0.14907269;
    }
  } else {
    result[14] += -0.14921066;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[0] += 0.011885648;
            } else {
              result[0] += -0.14655459;
            }
          } else {
            result[0] += -0.14669746;
          }
        } else {
          result[0] += -0.15007456;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1452252288)) {
              result[0] += 0.021608165;
            } else {
              result[0] += 0.11520492;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[0] += -0.114884526;
            } else {
              result[0] += 0.26951092;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            result[0] += -0.14892007;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[0] += -0.14533196;
            } else {
              result[0] += 0.14545713;
            }
          }
        }
      }
    } else {
      result[0] += -0.14900024;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
        result[0] += -0.14759284;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
            result[0] += -0.1344351;
          } else {
            result[0] += 0.08638446;
          }
        } else {
          result[0] += -0.14552487;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          result[0] += -0.08539432;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            result[0] += 0.46360186;
          } else {
            result[0] += 0.16188613;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
            result[0] += -0.14874685;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2692863232)) {
              result[0] += 0.15087886;
            } else {
              result[0] += -0.15050885;
            }
          }
        } else {
          result[0] += 0.13173051;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[1] += -0.13866104;
      } else {
        result[1] += -0.066913605;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[1] += -6.783993e-05;
            } else {
              result[1] += 0.038731158;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)428962464)) {
              result[1] += -0.0973618;
            } else {
              result[1] += -0.16438882;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[1] += 0.03489078;
            } else {
              result[1] += -0.054316334;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.18904975;
            } else {
              result[1] += 0.046356965;
            }
          }
        }
      } else {
        result[1] += -0.1487071;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[1] += -0.14236614;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
            result[1] += -0.126524;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[1] += -0.08633541;
            } else {
              result[1] += 0.24184114;
            }
          }
        }
      } else {
        result[1] += -0.15091997;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            result[1] += -0.09955697;
          } else {
            result[1] += 0.1595456;
          }
        } else {
          result[1] += 0.26325873;
        }
      } else {
        result[1] += -0.12314425;
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += -0.14955787;
        } else {
          result[2] += -0.047215637;
        }
      } else {
        result[2] += -0.09523862;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[2] += 0.10625069;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
            result[2] += -0.06370168;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
              result[2] += 0.08731797;
            } else {
              result[2] += 0.017334225;
            }
          }
        }
      } else {
        result[2] += -0.11404369;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)37885)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)36088)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)35330)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)32565)) {
              result[2] += 0.014951792;
            } else {
              result[2] += -0.0071360264;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)35553)) {
              result[2] += -0.16791421;
            } else {
              result[2] += -0.01809174;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)36349)) {
            result[2] += 0.20408782;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)37341)) {
              result[2] += 0.0072561954;
            } else {
              result[2] += 0.11263674;
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)41406)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)41154)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)40628)) {
              result[2] += -0.042448513;
            } else {
              result[2] += 0.07094961;
            }
          } else {
            result[2] += -0.2054107;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)41951)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)41676)) {
              result[2] += 0.01458227;
            } else {
              result[2] += 0.15643658;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)47877)) {
              result[2] += 0.033045195;
            } else {
              result[2] += 0.005790525;
            }
          }
        }
      }
    } else {
      result[2] += 0.1501096;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.15004626;
    } else {
      result[3] += -0.091880895;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[3] += -0.14607637;
            } else {
              result[3] += 0.14950396;
            }
          } else {
            result[3] += 0.15019885;
          }
        } else {
          result[3] += -0.12600586;
        }
      } else {
        result[3] += -0.14623652;
      }
    } else {
      result[3] += -0.14935745;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[4] += -0.14982288;
      } else {
        result[4] += -0.048420873;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
          result[4] += 0.15868995;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            result[4] += -0.07420903;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
              result[4] += 0.124427035;
            } else {
              result[4] += 0.040309947;
            }
          }
        }
      } else {
        result[4] += -0.14493479;
      }
    }
  } else {
    result[4] += 0.14967002;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[5] += -0.038082868;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[5] += -0.01578572;
            } else {
              result[5] += -0.0043638027;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)37885)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)36088)) {
              result[5] += 0.016731884;
            } else {
              result[5] += -0.079839125;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)41406)) {
              result[5] += 0.071231;
            } else {
              result[5] += 0.009983358;
            }
          }
        }
      } else {
        result[5] += -0.14529453;
      }
    } else {
      result[5] += -0.14581291;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.15004079;
      } else {
        result[5] += 0.1237854;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
          result[5] += -0.13943094;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
              result[5] += 0.17137732;
            } else {
              result[5] += 0.018308176;
            }
          } else {
            result[5] += -0.12835348;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
          result[5] += -0.1472203;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[5] += -0.09291716;
            } else {
              result[5] += 0.03435067;
            }
          } else {
            result[5] += 0.41710097;
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[6] += 0.0022729363;
          } else {
            result[6] += 0.14296141;
          }
        } else {
          result[6] += -0.14370547;
        }
      } else {
        result[6] += -0.1457168;
      }
    } else {
      result[6] += -0.14604206;
    }
  } else {
    result[6] += -0.15005594;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
              result[7] += 0.002186042;
            } else {
              result[7] += -0.14616598;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)48661)) {
              result[7] += -0.14730607;
            } else {
              result[7] += -0.10242162;
            }
          }
        } else {
          result[7] += 0.15067004;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          result[7] += -0.15347211;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[7] += -0.002021737;
            } else {
              result[7] += 0.04672816;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[7] += -0.013379767;
            } else {
              result[7] += 0.0028864155;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[7] += -0.111766815;
      } else {
        result[7] += 0.14981264;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)6)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
              result[7] += -0.03782074;
            } else {
              result[7] += 0.14250341;
            }
          } else {
            result[7] += -0.1402077;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[7] += 0.15858915;
          } else {
            result[7] += -0.11367553;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          result[7] += -0.14834322;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
            result[7] += -0.13920234;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[7] += 0.23742814;
            } else {
              result[7] += -0.13367799;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[7] += 0.15053539;
        } else {
          result[7] += -0.101509474;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
              result[7] += -0.20762967;
            } else {
              result[7] += 0.037862442;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[7] += 0.14999743;
            } else {
              result[7] += 0.021561783;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[7] += 0.1340605;
            } else {
              result[7] += -0.14961445;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[7] += 0.14136201;
            } else {
              result[7] += 0.15214193;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[8] += 0.008226823;
            } else {
              result[8] += -0.17490867;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.16272837;
            } else {
              result[8] += -0.1116338;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
            result[8] += -0.15306324;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += -0.99841195;
            } else {
              result[8] += -0.10316262;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[8] += -0.1498295;
            } else {
              result[8] += -0.08648955;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[8] += 0.1417914;
            } else {
              result[8] += 0.18889275;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            result[8] += 0.15025774;
          } else {
            result[8] += -0.104865104;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          result[8] += -0.15473002;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[8] += 0.011574224;
            } else {
              result[8] += 0.16391534;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[8] += 0.016000273;
            } else {
              result[8] += 0.15508486;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[8] += 0.15495819;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += -0.09197348;
            } else {
              result[8] += 0.05880663;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += 0.09688994;
            } else {
              result[8] += -0.18738931;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.15798308;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.14655747;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[8] += 0.14758328;
          } else {
            result[8] += -0.08892095;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          result[8] += -0.21827395;
        } else {
          result[8] += -0.14918889;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[9] += 0.030970503;
          } else {
            result[9] += -0.08562657;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[9] += 0.0035732575;
          } else {
            result[9] += -0.00088690553;
          }
        }
      } else {
        result[9] += -0.14680341;
      }
    } else {
      result[9] += -0.14711073;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
          result[9] += -0.14969833;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.14696454;
            } else {
              result[9] += -0.10430878;
            }
          } else {
            result[9] += -0.1452383;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[9] += 0.14345872;
        } else {
          result[9] += -0.13842003;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.13726002;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[9] += 0.04068609;
            } else {
              result[9] += 0.11305398;
            }
          } else {
            result[9] += -0.09777981;
          }
        }
      } else {
        result[9] += -0.1482131;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.006060942;
            } else {
              result[10] += -0.14590546;
            }
          } else {
            result[10] += -0.14683615;
          }
        } else {
          result[10] += -0.14989154;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1307060480)) {
              result[10] += 0.015005481;
            } else {
              result[10] += -0.062082417;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
              result[10] += 0.14300694;
            } else {
              result[10] += 0.02124634;
            }
          }
        } else {
          result[10] += -0.14479837;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
        result[10] += -0.14930144;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3239138816)) {
          result[10] += 0.18112367;
        } else {
          result[10] += -0.08789833;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[10] += -0.14901221;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[10] += -0.14012475;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[10] += 0.028862096;
            } else {
              result[10] += 0.17409591;
            }
          } else {
            result[10] += -0.12753785;
          }
        }
      } else {
        result[10] += -0.14887929;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[11] += 0.00487625;
            } else {
              result[11] += -0.06878094;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.026634842;
            } else {
              result[11] += -0.024979802;
            }
          }
        } else {
          result[11] += -0.14869808;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
          result[11] += -0.15225625;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
              result[11] += 0.08838459;
            } else {
              result[11] += 0.011785406;
            }
          } else {
            result[11] += -0.14532639;
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.14061949;
            } else {
              result[11] += -0.17803761;
            }
          } else {
            result[11] += -0.15316808;
          }
        } else {
          result[11] += -0.16238874;
        }
      } else {
        result[11] += -0.15111618;
      }
    }
  } else {
    result[11] += -0.14974235;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[12] += -0.07070834;
            } else {
              result[12] += -0.14689893;
            }
          } else {
            result[12] += -0.14719932;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += 0.0011682567;
            } else {
              result[12] += 0.083360806;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[12] += -0.0507469;
            } else {
              result[12] += 0.06962188;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          result[12] += -0.15654424;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[12] += 0.29780546;
          } else {
            result[12] += -0.1477284;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)53779)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
              result[12] += 0.0672326;
            } else {
              result[12] += -0.009590637;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54286)) {
              result[12] += -0.12746736;
            } else {
              result[12] += 0.050735738;
            }
          }
        } else {
          result[12] += -0.1457484;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[12] += 0.18798223;
            } else {
              result[12] += 0.15287521;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3800402176)) {
              result[12] += -0.09226589;
            } else {
              result[12] += 0.14630261;
            }
          }
        } else {
          result[12] += -0.07962498;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[12] += -0.15053628;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[12] += 0.14352399;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
              result[12] += -0.106768355;
            } else {
              result[12] += 0.096044324;
            }
          } else {
            result[12] += -0.14803621;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)215123600)) {
              result[12] += 0.121496834;
            } else {
              result[12] += -0.0287025;
            }
          } else {
            result[12] += 0.15035439;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[12] += 0.09379701;
          } else {
            result[12] += -0.036213353;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
          result[12] += -0.15341644;
        } else {
          result[12] += 0.119854525;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)3338)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[13] += -0.053320106;
            } else {
              result[13] += -0.14713247;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.036513075;
            } else {
              result[13] += -0.03718344;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[13] += -0.14981528;
            } else {
              result[13] += -0.19569905;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[13] += 0.07707879;
            } else {
              result[13] += -0.17515911;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += 0.18337551;
            } else {
              result[13] += 0.032468706;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[13] += -0.1236623;
            } else {
              result[13] += 0.034200143;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += 0.24109264;
            } else {
              result[13] += 0.14961652;
            }
          } else {
            result[13] += -0.13506772;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
              result[13] += 0.14360002;
            } else {
              result[13] += -0.13560782;
            }
          } else {
            result[13] += -0.14557613;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
            result[13] += 0.1547695;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[13] += 0.3728254;
            } else {
              result[13] += 0.105657145;
            }
          }
        }
      } else {
        result[13] += -0.14523777;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        result[13] += -0.13614793;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1278356224)) {
          result[13] += 0.16185689;
        } else {
          result[13] += -0.033180296;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
        result[13] += -0.15256928;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2398340864)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
            result[13] += 0.2094296;
          } else {
            result[13] += -0.077674985;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            result[13] += -0.14901483;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[13] += -0.12722145;
            } else {
              result[13] += 0.22026382;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.001792828;
            } else {
              result[14] += -0.14058013;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += 0.0058937906;
            } else {
              result[14] += 0.08077408;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            result[14] += -0.15283592;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[14] += 0.23196067;
            } else {
              result[14] += -0.05145035;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53779)) {
              result[14] += 0.046207882;
            } else {
              result[14] += 0.076752014;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[14] += 0.14290318;
            } else {
              result[14] += -0.0838579;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.15191373;
            } else {
              result[14] += 0.019690689;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[14] += 0.09289251;
            } else {
              result[14] += -0.14158863;
            }
          }
        }
      }
    } else {
      result[14] += -0.14874196;
    }
  } else {
    result[14] += -0.1489287;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[0] += 0.010090146;
            } else {
              result[0] += -0.1454601;
            }
          } else {
            result[0] += -0.14560209;
          }
        } else {
          result[0] += -0.14995688;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1452252288)) {
              result[0] += 0.018597685;
            } else {
              result[0] += 0.108746804;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[0] += -0.11108028;
            } else {
              result[0] += 0.23124577;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[0] += -0.15007219;
            } else {
              result[0] += -0.08684883;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[0] += -0.14384538;
            } else {
              result[0] += 0.14243178;
            }
          }
        }
      }
    } else {
      result[0] += -0.14877373;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
        result[0] += -0.14689784;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
            result[0] += -0.13001865;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23807)) {
              result[0] += 0.09676634;
            } else {
              result[0] += 0.034670036;
            }
          }
        } else {
          result[0] += -0.14419962;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
          result[0] += -0.07948543;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[0] += -0.08007341;
            } else {
              result[0] += 0.15522863;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[0] += 0.42325285;
            } else {
              result[0] += 0.1690628;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
            result[0] += -0.14830878;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2692863232)) {
              result[0] += 0.14425091;
            } else {
              result[0] += -0.14951462;
            }
          }
        } else {
          result[0] += 0.12709248;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[1] += -0.13601281;
      } else {
        result[1] += -0.061598748;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
              result[1] += -0.0025044952;
            } else {
              result[1] += 0.04262763;
            }
          } else {
            result[1] += -0.15144673;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.03173472;
            } else {
              result[1] += -0.03754046;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)280)) {
              result[1] += -0.15115656;
            } else {
              result[1] += 0.0764031;
            }
          }
        }
      } else {
        result[1] += -0.14828196;
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        result[1] += 0.07108305;
      } else {
        result[1] += -0.081797466;
      }
    } else {
      result[1] += -0.14642829;
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += -0.14938018;
        } else {
          result[2] += -0.042106517;
        }
      } else {
        result[2] += -0.089864016;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[2] += 0.10517075;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
            result[2] += -0.059022464;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
              result[2] += 0.07314071;
            } else {
              result[2] += 0.006027215;
            }
          }
        }
      } else {
        result[2] += -0.10638375;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)47877)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)44766)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)44284)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)43510)) {
              result[2] += 0.011178799;
            } else {
              result[2] += 0.08643534;
            }
          } else {
            result[2] += -0.09342373;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)45575)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)45299)) {
              result[2] += 0.051360805;
            } else {
              result[2] += 0.17752896;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)46341)) {
              result[2] += -0.035957046;
            } else {
              result[2] += 0.05946846;
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)48906)) {
          result[2] += -0.10037802;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)63974)) {
              result[2] += 0.024238003;
            } else {
              result[2] += -0.031384215;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)58434)) {
              result[2] += -0.13547756;
            } else {
              result[2] += 0.017677583;
            }
          }
        }
      }
    } else {
      result[2] += 0.14993396;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.14998667;
    } else {
      result[3] += -0.08702927;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[3] += -0.1317216;
            } else {
              result[3] += 0.1483621;
            }
          } else {
            result[3] += 0.14896515;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.14461295;
          } else {
            result[3] += 0.1493238;
          }
        }
      } else {
        result[3] += -0.1454056;
      }
    } else {
      result[3] += -0.14913514;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[4] += -0.14970776;
      } else {
        result[4] += -0.046511278;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
          result[4] += 0.14459574;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            result[4] += -0.07385985;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
              result[4] += 0.06735813;
            } else {
              result[4] += 0.1397139;
            }
          }
        }
      } else {
        result[4] += -0.14326459;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.14999273;
    } else {
      result[4] += -0.07795696;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[5] += -0.03348152;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[5] += -0.013528385;
            } else {
              result[5] += -0.0037352827;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)61488)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)60991)) {
              result[5] += 0.012878657;
            } else {
              result[5] += -0.1179746;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)62215)) {
              result[5] += 0.06725995;
            } else {
              result[5] += 0.016233088;
            }
          }
        }
      } else {
        result[5] += -0.14377668;
      }
    } else {
      result[5] += -0.14442469;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.14998439;
      } else {
        result[5] += 0.117869325;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
        result[5] += -0.14699706;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)43798)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[5] += 0.3599385;
            } else {
              result[5] += 0.03549283;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[5] += 0.016551401;
            } else {
              result[5] += 0.26682907;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[5] += -0.08285527;
            } else {
              result[5] += 0.04825237;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[5] += 0.7053601;
            } else {
              result[5] += -0.11129783;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[6] += 0.0021676333;
          } else {
            result[6] += 0.14075871;
          }
        } else {
          result[6] += -0.14268422;
        }
      } else {
        result[6] += -0.14432384;
      }
    } else {
      result[6] += -0.1448071;
    }
  } else {
    result[6] += -0.15000135;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38627)) {
              result[7] += 0.00303241;
            } else {
              result[7] += -0.07262664;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)48661)) {
              result[7] += -0.14632724;
            } else {
              result[7] += -0.09267948;
            }
          }
        } else {
          result[7] += 0.15046562;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          result[7] += -0.15259515;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
              result[7] += -0.006303323;
            } else {
              result[7] += 0.03457717;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[7] += -0.014612961;
            } else {
              result[7] += 0.00027505116;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[7] += -0.104362495;
      } else {
        result[7] += 0.1494302;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)6)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
              result[7] += -0.050892934;
            } else {
              result[7] += 0.016055657;
            }
          } else {
            result[7] += -0.1383022;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[7] += 0.15618783;
          } else {
            result[7] += -0.10954894;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          result[7] += -0.14794126;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
            result[7] += -0.13635291;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[7] += 0.20934244;
            } else {
              result[7] += -0.1296655;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[7] += 0.15040602;
        } else {
          result[7] += -0.094271675;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
              result[7] += 0.027552703;
            } else {
              result[7] += -0.19489804;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[7] += 0.14974701;
            } else {
              result[7] += 0.014774772;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[7] += 0.12818107;
            } else {
              result[7] += -0.14894626;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[7] += 0.13795373;
            } else {
              result[7] += 0.15187833;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[8] += 0.001593239;
            } else {
              result[8] += 0.12044563;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[8] += -0.14946291;
            } else {
              result[8] += -0.11584876;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += 0.03896761;
            } else {
              result[8] += -0.15538228;
            }
          } else {
            result[8] += 0.1534619;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          result[8] += -0.15238261;
        } else {
          result[8] += -0.18065311;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[8] += -0.108983524;
          } else {
            result[8] += 0.15314057;
          }
        } else {
          result[8] += -0.12670657;
        }
      } else {
        result[8] += -0.14881416;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.15696411;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.14549853;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[8] += 0.14612067;
          } else {
            result[8] += -0.08448612;
          }
        }
      } else {
        result[8] += -0.15393528;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[9] += 0.010486224;
            } else {
              result[9] += -0.14577086;
            }
          } else {
            result[9] += -0.14614211;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            result[9] += -0.1498714;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.15079375;
            } else {
              result[9] += -0.1365425;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
              result[9] += -0.17059417;
            } else {
              result[9] += 0.09909945;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
              result[9] += 0.07938979;
            } else {
              result[9] += -0.24127908;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4620)) {
              result[9] += 0.059317794;
            } else {
              result[9] += 0.1127443;
            }
          } else {
            result[9] += -0.087362245;
          }
        }
      }
    } else {
      result[9] += -0.14928733;
    }
  } else {
    result[9] += -0.14976121;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.001560334;
            } else {
              result[10] += -0.14456889;
            }
          } else {
            result[10] += -0.1458367;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[10] += -0.15066107;
            } else {
              result[10] += -0.01777389;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
              result[10] += 0.06967085;
            } else {
              result[10] += -0.13902703;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33010)) {
              result[10] += 0.021109855;
            } else {
              result[10] += -0.056539055;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3994002688)) {
              result[10] += 0.26748946;
            } else {
              result[10] += 0.10019998;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)51204)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[10] += -0.1338269;
            } else {
              result[10] += 0.118030496;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)52745)) {
              result[10] += -0.099683724;
            } else {
              result[10] += 0.048028316;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
        result[10] += -0.14908856;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)43031)) {
          result[10] += 0.17296219;
        } else {
          result[10] += -0.08394999;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[10] += -0.14869651;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[10] += -0.13730408;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2371643392)) {
              result[10] += 0.019940991;
            } else {
              result[10] += 0.17977077;
            }
          } else {
            result[10] += -0.12344306;
          }
        }
      } else {
        result[10] += -0.1485177;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[11] += -0.07941097;
            } else {
              result[11] += 0.0031740356;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
              result[11] += -0.15203577;
            } else {
              result[11] += 0.018706558;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[11] += 0.12202864;
            } else {
              result[11] += -0.16227251;
            }
          } else {
            result[11] += -0.1489977;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
              result[11] += 0.0988106;
            } else {
              result[11] += -0.039159305;
            }
          } else {
            result[11] += -0.17869005;
          }
        } else {
          result[11] += -0.14383158;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)14103)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7966)) {
              result[11] += -0.14215703;
            } else {
              result[11] += -0.048005268;
            }
          } else {
            result[11] += -0.14181174;
          }
        } else {
          result[11] += -0.24580911;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            result[11] += 0.2196451;
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[11] += -0.02244521;
            } else {
              result[11] += 0.13661733;
            }
          }
        } else {
          result[11] += -0.15244043;
        }
      }
    }
  } else {
    result[11] += -0.14963284;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
              result[12] += -0.016831491;
            } else {
              result[12] += 0.041207414;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[12] += -0.2099338;
            } else {
              result[12] += -0.15063721;
            }
          }
        } else {
          result[12] += -0.14983521;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[12] += 0.1552057;
            } else {
              result[12] += 0.24014066;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 0.08210276;
            } else {
              result[12] += -0.15357536;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[12] += -0.14867406;
            } else {
              result[12] += -0.20119195;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[12] += -0.14498658;
            } else {
              result[12] += 0.13776897;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[12] += -0.14688237;
            } else {
              result[12] += -0.013879777;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += -0.44581786;
            } else {
              result[12] += -0.15291066;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
              result[12] += 0.1171713;
            } else {
              result[12] += 0.22020318;
            }
          } else {
            result[12] += -0.09211701;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[12] += -0.15225948;
            } else {
              result[12] += 0.15555023;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
              result[12] += -0.012248556;
            } else {
              result[12] += -0.11478421;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += 0.15622486;
            } else {
              result[12] += -0.0015911167;
            }
          } else {
            result[12] += -0.17395377;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += 0.08350188;
            } else {
              result[12] += -0.14665116;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
              result[12] += 0.11673572;
            } else {
              result[12] += -0.06861187;
            }
          }
        } else {
          result[12] += -0.1487839;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
          result[12] += -0.15235364;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[12] += 0.13114783;
          } else {
            result[12] += -0.11146652;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4079296768)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
              result[12] += 0.006743876;
            } else {
              result[12] += 0.13954951;
            }
          } else {
            result[12] += -0.16710456;
          }
        } else {
          result[12] += -0.14778285;
        }
      } else {
        result[12] += -0.14923526;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[13] += -0.066662885;
            } else {
              result[13] += -0.14640093;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.029061345;
            } else {
              result[13] += -0.033743;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
              result[13] += -0.1522588;
            } else {
              result[13] += -0.019930674;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[13] += 0.10041737;
            } else {
              result[13] += -0.07200729;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[13] += 0.03276486;
            } else {
              result[13] += -0.14551282;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[13] += -0.16151616;
            } else {
              result[13] += 0.22460888;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.03516803;
            } else {
              result[13] += 0.15544161;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += 0.20846283;
            } else {
              result[13] += 0.1552728;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
              result[13] += 0.19015794;
            } else {
              result[13] += -0.003141958;
            }
          } else {
            result[13] += -0.14348616;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
            result[13] += 0.15394965;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[13] += 0.33141348;
            } else {
              result[13] += 0.10135967;
            }
          }
        }
      } else {
        result[13] += -0.14439645;
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
      result[13] += -0.15238537;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2398340864)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
          result[13] += -0.08115666;
        } else {
          result[13] += 0.2158061;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          result[13] += -0.14864102;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2938224384)) {
              result[13] += -0.037445188;
            } else {
              result[13] += -0.13653782;
            }
          } else {
            result[13] += 0.18641083;
          }
        }
      }
    }
  }
}


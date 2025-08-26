
#include "header.h"

void predict_unit2(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        result[4] += -0.14996953;
      } else {
        result[4] += -0.15278943;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)52507)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)51884)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)49564)) {
              result[4] += 0.1097179;
            } else {
              result[4] += 0.03978366;
            }
          } else {
            result[4] += -0.08431962;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)52818)) {
            result[4] += 0.5447547;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)53109)) {
              result[4] += -0.117919125;
            } else {
              result[4] += 0.11572827;
            }
          }
        }
      } else {
        result[4] += -0.15152717;
      }
    }
  } else {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
      result[4] += 0.17686203;
    } else {
      result[4] += -0.095324226;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2011381248)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
              result[5] += 0.08345249;
            } else {
              result[5] += -0.15173683;
            }
          } else {
            result[5] += -0.15262936;
          }
        } else {
          result[5] += -0.1554828;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[5] += 0.20418555;
            } else {
              result[5] += -0.15577374;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)63923)) {
              result[5] += 0.7292439;
            } else {
              result[5] += 0.26292935;
            }
          }
        } else {
          result[5] += -0.1549272;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59630)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
            result[5] += -0.15386938;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)37736)) {
              result[5] += 0.36427844;
            } else {
              result[5] += -0.1806169;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
            result[5] += 0.8747336;
          } else {
            result[5] += -0.14727229;
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[5] += -0.15310887;
        } else {
          result[5] += -0.1629563;
        }
      }
    }
  } else {
    result[5] += -0.15221919;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[6] += 0.07361655;
            } else {
              result[6] += -0.14934884;
            }
          } else {
            result[6] += -0.153288;
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
            result[6] += 0.19429052;
          } else {
            result[6] += 0.17885056;
          }
        }
      } else {
        result[6] += -0.15151297;
      }
    } else {
      result[6] += -0.15156874;
    }
  } else {
    result[6] += -0.15278764;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)5)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[7] += -0.13514999;
            } else {
              result[7] += -0.15155688;
            }
          } else {
            result[7] += -0.15155879;
          }
        } else {
          result[7] += 0.20170666;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
          result[7] += -0.08303661;
        } else {
          result[7] += -0.1395349;
        }
      }
    } else {
      result[7] += 0.20008554;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[31].missing != -1) && (data[31].fvalue < (float)16)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[7] += 0.19145246;
            } else {
              result[7] += 0.20079342;
            }
          } else {
            result[7] += 0.19175167;
          }
        } else {
          result[7] += 0.18038292;
        }
      } else {
        result[7] += -0.14502908;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1377281)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)28873)) {
              result[7] += -0.1534401;
            } else {
              result[7] += -0.14161526;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[7] += 0.12725852;
            } else {
              result[7] += -0.13861525;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18365288)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)57306)) {
              result[7] += 0.18710211;
            } else {
              result[7] += 0.26027647;
            }
          } else {
            result[7] += 0.17657384;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[7] += 0.096530184;
            } else {
              result[7] += -0.16753581;
            }
          } else {
            result[7] += -0.1539696;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)15)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)343)) {
              result[7] += 0.21560416;
            } else {
              result[7] += -0.17495647;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)129921)) {
              result[7] += -0.15439817;
            } else {
              result[7] += 0.18212777;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          result[8] += -0.14303213;
        } else {
          result[8] += -0.15138197;
        }
      } else {
        result[8] += -0.1515186;
      }
    } else {
      result[8] += -0.15157467;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
              result[8] += 0.02987265;
            } else {
              result[8] += 0.12507671;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
              result[8] += -0.15454501;
            } else {
              result[8] += 0.0100054685;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)261)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[8] += 0.20091379;
            } else {
              result[8] += -0.13799483;
            }
          } else {
            result[8] += -0.15920277;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)303)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[8] += 0.17425805;
            } else {
              result[8] += -0.15296122;
            }
          } else {
            result[8] += -0.15421015;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[8] += -0.15383531;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[8] += 0.17768048;
            } else {
              result[8] += -0.1524804;
            }
          }
        }
      }
    } else {
      result[8] += -0.15273194;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)311377)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[9] += -0.03720633;
            } else {
              result[9] += -0.15156874;
            }
          } else {
            result[9] += -0.15280612;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
            result[9] += 0.0665817;
          } else {
            result[9] += 0.0630872;
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            result[9] += -0.15004858;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2182849)) {
              result[9] += 0.29524842;
            } else {
              result[9] += 0.17617753;
            }
          }
        } else {
          result[9] += -0.15155798;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)35344664)) {
              result[9] += -0.106228545;
            } else {
              result[9] += -0.20339867;
            }
          } else {
            result[9] += 0.36779442;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
              result[9] += -0.08923622;
            } else {
              result[9] += 0.19978431;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)21099)) {
              result[9] += 0.28805894;
            } else {
              result[9] += -0.16712655;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)17307)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
              result[9] += 0.14641367;
            } else {
              result[9] += 0.20016374;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
              result[9] += -0.23278199;
            } else {
              result[9] += 0.1523691;
            }
          }
        } else {
          result[9] += -0.1507071;
        }
      }
    }
  } else {
    result[9] += -0.15301731;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[10] += 0.04808003;
            } else {
              result[10] += -0.15549694;
            }
          } else {
            result[10] += -0.15150286;
          }
        } else {
          result[10] += -0.15163162;
        }
      } else {
        result[10] += -0.15156874;
      }
    } else {
      result[10] += -0.15275368;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)12872)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1326377)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
              result[10] += 0.079430014;
            } else {
              result[10] += 0.16928001;
            }
          } else {
            result[10] += -0.15303753;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
              result[10] += -0.15165815;
            } else {
              result[10] += 0.19730745;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[10] += -0.09080087;
            } else {
              result[10] += 0.10918724;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)26732)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)265957824)) {
              result[10] += 0.19517289;
            } else {
              result[10] += 0.34106588;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48401)) {
              result[10] += 0.20750155;
            } else {
              result[10] += 0.17614502;
            }
          }
        } else {
          result[10] += -0.15218997;
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
        result[10] += -0.15316167;
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            result[10] += 0.20953034;
          } else {
            result[10] += -0.13021068;
          }
        } else {
          result[10] += -0.15215193;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          result[11] += -0.14490461;
        } else {
          result[11] += -0.15138748;
        }
      } else {
        result[11] += -0.15151808;
      }
    } else {
      result[11] += -0.15157413;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[11] += 0.07857716;
            } else {
              result[11] += -0.030368054;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[11] += -0.14840059;
            } else {
              result[11] += 0.037033807;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[11] += -0.15382165;
            } else {
              result[11] += 0.12362307;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
              result[11] += 0.17439649;
            } else {
              result[11] += -0.15684195;
            }
          }
        }
      } else {
        result[11] += -0.15186028;
      }
    } else {
      result[11] += -0.15301141;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            result[12] += -0.1413984;
          } else {
            result[12] += -0.1466188;
          }
        } else {
          result[12] += -0.15137757;
        }
      } else {
        result[12] += -0.15151432;
      }
    } else {
      result[12] += -0.1515702;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)108)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
              result[12] += -0.038060002;
            } else {
              result[12] += 0.093362704;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
              result[12] += 0.2513732;
            } else {
              result[12] += 0.052818716;
            }
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[12] += 0.2178674;
            } else {
              result[12] += 0.19244094;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)121)) {
              result[12] += -0.0098752985;
            } else {
              result[12] += -0.15460034;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1879)) {
            result[12] += -0.15513176;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
              result[12] += 0.4609377;
            } else {
              result[12] += -0.140552;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
            result[12] += -0.14785583;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[12] += 0.18194592;
            } else {
              result[12] += -0.1575433;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)39638)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[12] += -0.15203989;
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[12] += 0.19524911;
            } else {
              result[12] += 0.21859811;
            }
          }
        } else {
          result[12] += -0.1521279;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)1311)) {
            result[12] += 0.21045357;
          } else {
            result[12] += 0.18080336;
          }
        } else {
          result[12] += -0.15181762;
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[13] += -0.14485382;
            } else {
              result[13] += -0.15139097;
            }
          } else {
            result[13] += -0.15152735;
          }
        } else {
          result[13] += -0.15157416;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += -0.07926512;
            } else {
              result[13] += -0.15211722;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[13] += 0.13830276;
            } else {
              result[13] += -0.15411104;
            }
          }
        } else {
          result[13] += -0.15300703;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48838)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)280)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
              result[13] += 0.010680841;
            } else {
              result[13] += 0.1686522;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
              result[13] += -0.15851484;
            } else {
              result[13] += 0.020103166;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)440)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[13] += 0.22002092;
            } else {
              result[13] += 0.1931436;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2984166400)) {
              result[13] += 0.3192578;
            } else {
              result[13] += 0.035671305;
            }
          }
        }
      } else {
        result[13] += -0.15158695;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)862)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)14490)) {
              result[13] += 0.0113752615;
            } else {
              result[13] += 0.19430633;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)40854)) {
              result[13] += -0.12110646;
            } else {
              result[13] += -0.05133664;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)940)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8771)) {
              result[13] += -0.034252558;
            } else {
              result[13] += 0.21274905;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
              result[13] += -0.11597558;
            } else {
              result[13] += 0.2489339;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
          result[13] += -0.15200181;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51042)) {
              result[13] += 0.35765696;
            } else {
              result[13] += -0.19156638;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
              result[13] += 0.28242624;
            } else {
              result[13] += -0.14879505;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.5606178;
            } else {
              result[13] += 0.19014771;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
              result[13] += -0.15744501;
            } else {
              result[13] += 0.051224787;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.1848898;
            } else {
              result[13] += -0.21090356;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)68027)) {
              result[13] += 0.17489566;
            } else {
              result[13] += -0.11434501;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
              result[13] += -0.08504886;
            } else {
              result[13] += -0.17106661;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
              result[13] += -0.122417726;
            } else {
              result[13] += 0.2864137;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)4457)) {
            result[13] += -0.1801476;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)6869)) {
              result[13] += -0.062184483;
            } else {
              result[13] += -0.15279905;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[14] += 0.016959673;
            } else {
              result[14] += -0.15171365;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)86)) {
              result[14] += -0.15582708;
            } else {
              result[14] += -0.18194932;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
            result[14] += 0.36734942;
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
              result[14] += -0.11212101;
            } else {
              result[14] += 0.21531305;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3101)) {
              result[14] += -0.15255436;
            } else {
              result[14] += -0.06989814;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
              result[14] += 0.4430757;
            } else {
              result[14] += -0.1557902;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
              result[14] += -0.15727423;
            } else {
              result[14] += -0.15180023;
            }
          } else {
            result[14] += -0.1860385;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[14] += 0.3235239;
            } else {
              result[14] += 0.2481099;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[14] += 0.19489355;
            } else {
              result[14] += 0.17900115;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
            result[14] += 0.33594087;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)472)) {
              result[14] += 0.17826493;
            } else {
              result[14] += -0.11961853;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)441)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
              result[14] += -0.034711648;
            } else {
              result[14] += -0.14324325;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
              result[14] += -0.16639736;
            } else {
              result[14] += 0.17231534;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[14] += -0.18943591;
            } else {
              result[14] += 0.18726243;
            }
          } else {
            result[14] += -0.15183131;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5742)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)507)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51042)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
              result[14] += -0.15631054;
            } else {
              result[14] += -0.14063396;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
              result[14] += 0.3661881;
            } else {
              result[14] += -0.15270567;
            }
          }
        } else {
          result[14] += 0.5187218;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
              result[14] += -0.019785903;
            } else {
              result[14] += 0.5072343;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1295143936)) {
              result[14] += 0.1364286;
            } else {
              result[14] += -0.15295604;
            }
          }
        } else {
          result[14] += -0.15132393;
        }
      }
    } else {
      result[14] += -0.15174584;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
              result[0] += -0.03067461;
            } else {
              result[0] += 0.0066090296;
            }
          } else {
            result[0] += -0.15093946;
          }
        } else {
          result[0] += -0.15111203;
        }
      } else {
        result[0] += -0.15121406;
      }
    } else {
      result[0] += -0.15232171;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1453306624)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)62186)) {
              result[0] += 0.09097108;
            } else {
              result[0] += -0.06441465;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)65016)) {
              result[0] += 0.1969929;
            } else {
              result[0] += 0.25410637;
            }
          }
        } else {
          result[0] += -0.15405235;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)57306)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[0] += 0.24733327;
            } else {
              result[0] += -0.09054285;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)314)) {
              result[0] += 0.17495771;
            } else {
              result[0] += 0.18870343;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2119496576)) {
            result[0] += -0.15667917;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[0] += 0.1739837;
            } else {
              result[0] += -0.104482986;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34750)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)992)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56324)) {
              result[0] += -0.15315023;
            } else {
              result[0] += -0.13805705;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
              result[0] += -0.15154472;
            } else {
              result[0] += 0.106020994;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[0] += -0.00025969415;
            } else {
              result[0] += -0.16200292;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
              result[0] += 0.12910049;
            } else {
              result[0] += -0.14424182;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2456591104)) {
          result[0] += -0.15111847;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[0] += 0.16901515;
          } else {
            result[0] += -0.11468342;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    result[1] += -0.15108502;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)319)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)278)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)68)) {
              result[1] += 0.05051133;
            } else {
              result[1] += -0.15550785;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)283)) {
              result[1] += 0.25225094;
            } else {
              result[1] += 0.030646505;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)280)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[1] += -0.14301328;
            } else {
              result[1] += 0.9939472;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)299)) {
              result[1] += 0.31473136;
            } else {
              result[1] += 0.08606295;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)442)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[1] += 0.19486523;
            } else {
              result[1] += -0.124425046;
            }
          } else {
            result[1] += -0.15372549;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
              result[1] += 0.2884899;
            } else {
              result[1] += 0.13064736;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
              result[1] += -0.13501556;
            } else {
              result[1] += 0.090729736;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)280)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)51103944)) {
              result[1] += 0.14480157;
            } else {
              result[1] += -0.109762445;
            }
          } else {
            result[1] += 0.18278767;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2692215808)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2384619520)) {
              result[1] += 0.14021109;
            } else {
              result[1] += -0.12229252;
            }
          } else {
            result[1] += 0.19202797;
          }
        }
      } else {
        result[1] += -0.15099724;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1636)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
        result[2] += -0.15226255;
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1360)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)837)) {
            result[2] += -0.098054;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
              result[2] += -0.02129089;
            } else {
              result[2] += -0.11310605;
            }
          }
        } else {
          result[2] += -0.12616603;
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)30864)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)27655)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)21308)) {
              result[2] += -0.067563824;
            } else {
              result[2] += -0.0074329358;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)30467)) {
              result[2] += -0.08040437;
            } else {
              result[2] += -0.14505258;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)47007)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += -0.01203451;
            } else {
              result[2] += 0.061060518;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += -0.0062796474;
            } else {
              result[2] += -0.14747478;
            }
          }
        }
      } else {
        result[2] += -0.15036637;
      }
    }
  } else {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1675)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1060)) {
              result[2] += 0.12724534;
            } else {
              result[2] += 0.013596321;
            }
          } else {
            result[2] += -0.11275553;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)52507)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)49564)) {
              result[2] += 0.09384108;
            } else {
              result[2] += 0.14432782;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)52818)) {
              result[2] += -0.23733334;
            } else {
              result[2] += 0.0902195;
            }
          }
        }
      } else {
        result[2] += 0.16910736;
      }
    } else {
      result[2] += -0.15029776;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    result[3] += -0.1524656;
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[3] += -0.15158853;
            } else {
              result[3] += 0.17254329;
            }
          } else {
            result[3] += 0.16897742;
          }
        } else {
          result[3] += -0.15147166;
        }
      } else {
        result[3] += -0.15166573;
      }
    } else {
      result[3] += -0.15170403;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        result[4] += -0.14898185;
      } else {
        result[4] += -0.15238877;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)41059)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)40237)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)38841)) {
              result[4] += 0.086756766;
            } else {
              result[4] += 0.17295079;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)40780)) {
              result[4] += -0.014637497;
            } else {
              result[4] += -0.1226366;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)43656)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)42189)) {
              result[4] += 0.11736228;
            } else {
              result[4] += 0.24761541;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)45055)) {
              result[4] += -0.01109139;
            } else {
              result[4] += 0.097589344;
            }
          }
        }
      } else {
        result[4] += -0.15110648;
      }
    }
  } else {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
      result[4] += 0.16982527;
    } else {
      result[4] += -0.086024284;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2011381248)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
              result[5] += 0.07083555;
            } else {
              result[5] += -0.15150183;
            }
          } else {
            result[5] += -0.15483019;
          }
        } else {
          result[5] += -0.15453866;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)63923)) {
              result[5] += 0.4295825;
            } else {
              result[5] += 0.19434841;
            }
          } else {
            result[5] += -0.15296331;
          }
        } else {
          result[5] += -0.15236394;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2054161792)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)11064)) {
            result[5] += -0.15188222;
          } else {
            result[5] += -0.17842326;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
            result[5] += -0.15490028;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59630)) {
              result[5] += 0.15358458;
            } else {
              result[5] += 0.40661773;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[5] += -0.15267098;
        } else {
          result[5] += -0.16217065;
        }
      }
    }
  } else {
    result[5] += -0.15181234;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[6] += 0.05745139;
            } else {
              result[6] += -0.14792481;
            }
          } else {
            result[6] += -0.15271737;
          }
        } else {
          result[6] += -0.15109552;
        }
      } else {
        result[6] += -0.15119708;
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
        result[6] += 0.18255654;
      } else {
        result[6] += 0.17101106;
      }
    }
  } else {
    result[6] += -0.1523871;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
              result[7] += -0.12161849;
            } else {
              result[7] += -0.15117538;
            }
          } else {
            result[7] += -0.15118073;
          }
        } else {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)5)) {
            result[7] += -0.15088801;
          } else {
            result[7] += 0.18204242;
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
          result[7] += -0.07521564;
        } else {
          result[7] += -0.13665965;
        }
      }
    } else {
      result[7] += 0.19122884;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[31].missing != -1) && (data[31].fvalue < (float)16)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[7] += 0.18233082;
            } else {
              result[7] += 0.1902754;
            }
          } else {
            result[7] += 0.18259332;
          }
        } else {
          result[7] += 0.17325367;
        }
      } else {
        result[7] += -0.14281648;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1377281)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)28873)) {
              result[7] += -0.15282068;
            } else {
              result[7] += -0.13822411;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[7] += 0.10703575;
            } else {
              result[7] += -0.13392721;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18365288)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)57306)) {
              result[7] += 0.17599484;
            } else {
              result[7] += 0.22222088;
            }
          } else {
            result[7] += 0.16911823;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[7] += 0.08067401;
            } else {
              result[7] += -0.16548683;
            }
          } else {
            result[7] += -0.15331507;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)15)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)343)) {
              result[7] += 0.19993627;
            } else {
              result[7] += -0.16887487;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)129921)) {
              result[7] += -0.1530682;
            } else {
              result[7] += 0.173976;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          result[8] += -0.14071874;
        } else {
          result[8] += -0.15092562;
        }
      } else {
        result[8] += -0.15109986;
      }
    } else {
      result[8] += -0.15120173;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)311)) {
              result[8] += 0.038085148;
            } else {
              result[8] += -0.11680092;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[8] += 0.28683764;
            } else {
              result[8] += -0.16232352;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
              result[8] += 0.5368228;
            } else {
              result[8] += 1.0636404;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[8] += -0.06414436;
            } else {
              result[8] += 0.13230385;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[8] += 0.2547122;
            } else {
              result[8] += -0.15222818;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)303)) {
              result[8] += -0.033145018;
            } else {
              result[8] += -0.15348297;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[8] += -0.15355343;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[8] += 0.15119728;
            } else {
              result[8] += -0.1517767;
            }
          }
        }
      }
    } else {
      result[8] += -0.15232575;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)311377)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[9] += -0.024243189;
            } else {
              result[9] += -0.15119708;
            }
          } else {
            result[9] += -0.15236136;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
            result[9] += 0.054583747;
          } else {
            result[9] += 0.052373163;
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            result[9] += -0.14911237;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2182849)) {
              result[9] += 0.24044204;
            } else {
              result[9] += 0.16896294;
            }
          }
        } else {
          result[9] += -0.15111062;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)215557952)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)201685632)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
              result[9] += -0.13420822;
            } else {
              result[9] += 0.24145967;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)21836)) {
              result[9] += -0.3766773;
            } else {
              result[9] += 0.20103037;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1842962816)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1206383360)) {
              result[9] += 0.207455;
            } else {
              result[9] += 0.08285688;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1957388416)) {
              result[9] += -0.2550066;
            } else {
              result[9] += 0.20365599;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
              result[9] += 0.14823572;
            } else {
              result[9] += -0.098704785;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)37225)) {
              result[9] += 0.16483773;
            } else {
              result[9] += 0.12981215;
            }
          }
        } else {
          result[9] += -0.15004158;
        }
      }
    }
  } else {
    result[9] += -0.15263785;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[10] += 0.043153115;
            } else {
              result[10] += -0.15365434;
            }
          } else {
            result[10] += -0.1510229;
          }
        } else {
          result[10] += -0.15118629;
        }
      } else {
        result[10] += -0.15119708;
      }
    } else {
      result[10] += -0.15232164;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)12872)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2020837248)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2011381248)) {
              result[10] += 0.08233325;
            } else {
              result[10] += 0.17473167;
            }
          } else {
            result[10] += -0.15266824;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
              result[10] += -0.15149549;
            } else {
              result[10] += 0.1482249;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[10] += -0.08250897;
            } else {
              result[10] += 0.08578449;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)26732)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)265957824)) {
              result[10] += 0.18121707;
            } else {
              result[10] += 0.26835;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48401)) {
              result[10] += 0.1905531;
            } else {
              result[10] += 0.16883212;
            }
          }
        } else {
          result[10] += -0.15149152;
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
        result[10] += -0.15277208;
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            result[10] += 0.1930913;
          } else {
            result[10] += -0.124541655;
          }
        } else {
          result[10] += -0.15163377;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          result[11] += -0.1429148;
        } else {
          result[11] += -0.15093009;
        }
      } else {
        result[11] += -0.15109944;
      }
    } else {
      result[11] += -0.15120131;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)304)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[11] += 0.023301242;
            } else {
              result[11] += -0.15324594;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
              result[11] += 0.20444624;
            } else {
              result[11] += -0.17434327;
            }
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[11] += 0.27995536;
            } else {
              result[11] += 0.16516332;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)365)) {
              result[11] += -0.15398383;
            } else {
              result[11] += -0.19830059;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          result[11] += -0.18268305;
        } else {
          result[11] += -0.1518812;
        }
      }
    } else {
      result[11] += -0.15264466;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            result[12] += -0.1388064;
          } else {
            result[12] += -0.14486869;
          }
        } else {
          result[12] += -0.15092207;
        }
      } else {
        result[12] += -0.15109658;
      }
    } else {
      result[12] += -0.15119822;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)188)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[12] += 0.07201929;
            } else {
              result[12] += -0.16316606;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[12] += -0.02703135;
            } else {
              result[12] += 0.32485396;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1614904576)) {
              result[12] += 0.25551876;
            } else {
              result[12] += 0.2355855;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
              result[12] += -0.15342036;
            } else {
              result[12] += 0.199318;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[12] += -0.15786475;
          } else {
            result[12] += -0.15135804;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
              result[12] += 0.19965182;
            } else {
              result[12] += -0.17302433;
            }
          } else {
            result[12] += -0.15848614;
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)39638)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[12] += -0.15160413;
          } else {
            result[12] += 0.18680598;
          }
        } else {
          result[12] += -0.15172577;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)1311)) {
            result[12] += 0.19342908;
          } else {
            result[12] += 0.1725573;
          }
        } else {
          result[12] += -0.15126635;
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[13] += -0.14285874;
            } else {
              result[13] += -0.1509329;
            }
          } else {
            result[13] += -0.15110658;
          }
        } else {
          result[13] += -0.15120134;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += -0.07003504;
            } else {
              result[13] += -0.15136237;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[13] += 0.10995373;
            } else {
              result[13] += -0.15324475;
            }
          }
        } else {
          result[13] += -0.15252256;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)37)) {
          result[13] += 0.18754208;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)39)) {
            result[13] += -0.1519716;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
              result[13] += 0.1295463;
            } else {
              result[13] += -0.13630712;
            }
          }
        }
      } else {
        result[13] += -0.15095855;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)862)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)14490)) {
              result[13] += 0.0036200988;
            } else {
              result[13] += 0.16941303;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46443)) {
              result[13] += -0.06495473;
            } else {
              result[13] += -0.14837289;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
              result[13] += 0.108384654;
            } else {
              result[13] += 0.26920995;
            }
          } else {
            result[13] += -0.14866826;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
          result[13] += -0.15157609;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)615)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51042)) {
              result[13] += 0.2622837;
            } else {
              result[13] += -0.17996047;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
              result[13] += 0.25674227;
            } else {
              result[13] += -0.151137;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.072962455;
            } else {
              result[13] += -0.17238411;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[13] += 0.19592924;
            } else {
              result[13] += 0.10903396;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)512)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)68027)) {
              result[13] += 0.16952962;
            } else {
              result[13] += 0.026411314;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
              result[13] += -0.09461304;
            } else {
              result[13] += 0.18281707;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
              result[13] += -0.07129616;
            } else {
              result[13] += -0.16688265;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
              result[13] += -0.111682214;
            } else {
              result[13] += 0.23986097;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)4457)) {
            result[13] += -0.17656419;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)6869)) {
              result[13] += -0.055526182;
            } else {
              result[13] += -0.15201482;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)4)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
              result[14] += 0.004663018;
            } else {
              result[14] += -0.1514549;
            }
          } else {
            result[14] += -0.15131053;
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[14] += 0.06874251;
            } else {
              result[14] += -0.15381667;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
              result[14] += 0.280683;
            } else {
              result[14] += 0.036130976;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)229)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)484)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
              result[14] += -0.15311867;
            } else {
              result[14] += -0.1085442;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
              result[14] += -0.14085399;
            } else {
              result[14] += 0.22684242;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)307)) {
              result[14] += 0.20280008;
            } else {
              result[14] += -0.15371014;
            }
          } else {
            result[14] += -0.17142683;
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
          result[14] += -0.15330599;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)52948)) {
              result[14] += -0.15187147;
            } else {
              result[14] += -0.097178064;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
              result[14] += 0.49354583;
            } else {
              result[14] += -0.15135583;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1811010176)) {
          result[14] += -0.15207231;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2854760192)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2829588992)) {
              result[14] += -0.05591121;
            } else {
              result[14] += 0.48894045;
            }
          } else {
            result[14] += -0.15157515;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[14] += 0.12047935;
            } else {
              result[14] += -0.1594853;
            }
          } else {
            result[14] += -0.15612334;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[14] += 0.1925063;
            } else {
              result[14] += 0.1742326;
            }
          } else {
            result[14] += -0.1548188;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1730588800)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[14] += -0.13562807;
            } else {
              result[14] += 0.14667007;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1763358336)) {
              result[14] += 0.37810802;
            } else {
              result[14] += 0.0076682586;
            }
          }
        } else {
          result[14] += -0.15244499;
        }
      }
    } else {
      result[14] += -0.15149769;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
              result[0] += -0.023736686;
            } else {
              result[0] += 0.008317161;
            }
          } else {
            result[0] += -0.15055287;
          }
        } else {
          result[0] += -0.15078177;
        }
      } else {
        result[0] += -0.15092482;
      }
    } else {
      result[0] += -0.15197378;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1453306624)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)47199)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)22343)) {
              result[0] += 0.06798069;
            } else {
              result[0] += 0.11314907;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48458)) {
              result[0] += -0.10938219;
            } else {
              result[0] += 0.06546366;
            }
          }
        } else {
          result[0] += -0.15331762;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)57306)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[0] += 0.22810307;
            } else {
              result[0] += -0.08299821;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)314)) {
              result[0] += 0.16979125;
            } else {
              result[0] += 0.18163624;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2119496576)) {
            result[0] += -0.15501572;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[0] += 0.1677346;
            } else {
              result[0] += -0.0964612;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34750)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)992)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56324)) {
              result[0] += -0.15267861;
            } else {
              result[0] += -0.13449119;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
              result[0] += -0.1512109;
            } else {
              result[0] += 0.08882935;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[0] += 0.008610903;
            } else {
              result[0] += -0.16023993;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
              result[0] += -0.15187928;
            } else {
              result[0] += 0.115157664;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2456591104)) {
          result[0] += -0.15075816;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[0] += 0.16380572;
          } else {
            result[0] += -0.10735213;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    result[1] += -0.15059212;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)486)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
              result[1] += 0.03622941;
            } else {
              result[1] += -0.07329075;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[1] += 0.04458159;
            } else {
              result[1] += 0.1830814;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[1] += -0.058097374;
            } else {
              result[1] += -0.15086728;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)9392)) {
              result[1] += 0.21834062;
            } else {
              result[1] += -0.15011062;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)647)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[1] += 0.16281739;
            } else {
              result[1] += -0.069183156;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
              result[1] += 0.18917497;
            } else {
              result[1] += -0.14939761;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
            result[1] += -0.15322122;
          } else {
            result[1] += 0.1959272;
          }
        }
      }
    } else {
      result[1] += -0.15059644;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1636)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
        result[2] += -0.15189198;
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1360)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)837)) {
            result[2] += -0.09060712;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
              result[2] += -0.013518817;
            } else {
              result[2] += -0.10824972;
            }
          }
        } else {
          result[2] += -0.121503346;
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)21308)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)20857)) {
              result[2] += -0.02079582;
            } else {
              result[2] += -0.1404035;
            }
          } else {
            result[2] += -0.14986528;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)23587)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += 0.05927972;
            } else {
              result[2] += 0.30192733;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)30864)) {
              result[2] += -0.053354084;
            } else {
              result[2] += -0.0108989775;
            }
          }
        }
      } else {
        result[2] += -0.14992517;
      }
    }
  } else {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)64201)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)32230)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)31693)) {
              result[2] += 0.07639154;
            } else {
              result[2] += -0.17591828;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)34019)) {
              result[2] += 0.21208616;
            } else {
              result[2] += 0.082280576;
            }
          }
        } else {
          result[2] += 0.026473366;
        }
      } else {
        result[2] += 0.16386525;
      }
    } else {
      result[2] += -0.14971146;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    result[3] += -0.15208115;
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[3] += -0.15128262;
            } else {
              result[3] += 0.16705579;
            }
          } else {
            result[3] += 0.16421843;
          }
        } else {
          result[3] += -0.15086903;
        }
      } else {
        result[3] += -0.15136161;
      }
    } else {
      result[3] += -0.15141049;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        result[4] += -0.14798291;
      } else {
        result[4] += -0.1520324;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)41059)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)40237)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)38841)) {
              result[4] += 0.07471776;
            } else {
              result[4] += 0.14317022;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)40780)) {
              result[4] += -0.008965942;
            } else {
              result[4] += -0.11562271;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)43113)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)42189)) {
              result[4] += 0.102325745;
            } else {
              result[4] += 0.24103601;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)45844)) {
              result[4] += 0.03255525;
            } else {
              result[4] += 0.08729609;
            }
          }
        }
      } else {
        result[4] += -0.15077904;
      }
    }
  } else {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
      result[4] += 0.16480586;
    } else {
      result[4] += -0.07670934;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2011381248)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)56324)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[5] += 0.027181894;
            } else {
              result[5] += -0.15203314;
            }
          } else {
            result[5] += -0.1538318;
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[5] += 0.20564204;
            } else {
              result[5] += -0.1534307;
            }
          } else {
            result[5] += -0.15557659;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)21308)) {
              result[5] += 0.1576828;
            } else {
              result[5] += 0.14966963;
            }
          } else {
            result[5] += 0.16681789;
          }
        } else {
          result[5] += -0.15103897;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2054161792)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)11064)) {
            result[5] += -0.1513675;
          } else {
            result[5] += -0.173953;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
            result[5] += -0.15318304;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[5] += -0.15011792;
            } else {
              result[5] += 0.20029998;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[5] += -0.15227944;
        } else {
          result[5] += -0.16025428;
        }
      }
    }
  } else {
    result[5] += -0.15150565;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
              result[6] += 0.044265565;
            } else {
              result[6] += -0.16723792;
            }
          } else {
            result[6] += -0.15223485;
          }
        } else {
          result[6] += -0.15076888;
        }
      } else {
        result[6] += -0.15091126;
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
        result[6] += 0.17430906;
      } else {
        result[6] += 0.16581993;
      }
    }
  } else {
    result[6] += -0.15203097;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
              result[7] += -0.11598724;
            } else {
              result[7] += -0.15083107;
            }
          } else {
            result[7] += -0.1508895;
          }
        } else {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)5)) {
            result[7] += -0.15021366;
          } else {
            result[7] += 0.16607709;
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
          result[7] += -0.06740208;
        } else {
          result[7] += -0.13355103;
        }
      }
    } else {
      result[7] += 0.18408993;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
          result[7] += 0.17800584;
        } else {
          result[7] += 0.16767111;
        }
      } else {
        result[7] += -0.14032237;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1377281)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)28873)) {
            result[7] += -0.15233588;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
              result[7] += -0.15024897;
            } else {
              result[7] += 0.10581962;
            }
          }
        } else {
          result[7] += 0.16632251;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)15)) {
              result[7] += -0.010147377;
            } else {
              result[7] += 0.16532545;
            }
          } else {
            result[7] += -0.15289669;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)15)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)343)) {
              result[7] += 0.18754967;
            } else {
              result[7] += -0.1646607;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)129921)) {
              result[7] += -0.15175554;
            } else {
              result[7] += 0.16812958;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          result[8] += -0.13825056;
        } else {
          result[8] += -0.15054113;
        }
      } else {
        result[8] += -0.15077224;
      }
    } else {
      result[8] += -0.15091498;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)221)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
              result[8] += 0.0768155;
            } else {
              result[8] += -0.1658256;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)224)) {
              result[8] += 0.55849147;
            } else {
              result[8] += 0.20359941;
            }
          }
        } else {
          result[8] += -0.16049767;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[8] += -0.15969321;
            } else {
              result[8] += -0.15188321;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
              result[8] += -0.11489366;
            } else {
              result[8] += 0.19844566;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
              result[8] += 0.124170214;
            } else {
              result[8] += -0.02929184;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
              result[8] += -0.21510461;
            } else {
              result[8] += -0.15424149;
            }
          }
        }
      }
    } else {
      result[8] += -0.15209922;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
              result[9] += 0.049233943;
            } else {
              result[9] += -0.1513446;
            }
          } else {
            result[9] += -0.15091126;
          }
        } else {
          result[9] += -0.15250115;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43562)) {
              result[9] += 0.106376864;
            } else {
              result[9] += 0.16432339;
            }
          } else {
            result[9] += -0.15246189;
          }
        } else {
          result[9] += -0.15164384;
        }
      }
    } else {
      result[9] += -0.15152618;
    }
  } else {
    result[9] += -0.15225229;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[10] += 0.038077194;
            } else {
              result[10] += -0.15062298;
            }
          } else {
            result[10] += -0.15083957;
          }
        } else {
          result[10] += -0.15091126;
        }
      } else {
        result[10] += -0.15197374;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5742)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1030112576)) {
              result[10] += 0.11725341;
            } else {
              result[10] += -0.056236908;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)477)) {
              result[10] += 0.1671986;
            } else {
              result[10] += -0.14018472;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
              result[10] += -0.15156236;
            } else {
              result[10] += 0.07250634;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[10] += -0.107065104;
            } else {
              result[10] += 0.07905131;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)20977)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)265957824)) {
              result[10] += 0.17397799;
            } else {
              result[10] += 0.28983077;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48401)) {
              result[10] += 0.18163587;
            } else {
              result[10] += 0.16372475;
            }
          }
        } else {
          result[10] += -0.15115038;
        }
      }
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
      result[10] += -0.15235227;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          result[10] += 0.18213704;
        } else {
          result[10] += -0.11802522;
        }
      } else {
        result[10] += -0.15107022;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          result[11] += -0.14080699;
        } else {
          result[11] += -0.15054493;
        }
      } else {
        result[11] += -0.15077193;
      }
    } else {
      result[11] += -0.15091465;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
              result[11] += 0.043219898;
            } else {
              result[11] += -0.15362342;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[11] += -0.15188383;
            } else {
              result[11] += 0.02521685;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[11] += -0.12750667;
            } else {
              result[11] += 0.08743602;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
              result[11] += 0.16531324;
            } else {
              result[11] += 0.08824749;
            }
          }
        }
      } else {
        result[11] += -0.15139216;
      }
    } else {
      result[11] += -0.15224454;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            result[12] += -0.13603918;
          } else {
            result[12] += -0.143019;
          }
        } else {
          result[12] += -0.15053815;
        }
      } else {
        result[12] += -0.15076968;
      }
    } else {
      result[12] += -0.15091217;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[12] += 0.031227872;
            } else {
              result[12] += -0.14487222;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[12] += -0.026413655;
            } else {
              result[12] += 0.25787705;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
              result[12] += -0.15516979;
            } else {
              result[12] += 0.3389833;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[12] += -0.16644917;
            } else {
              result[12] += -0.15108614;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
              result[12] += 0.20453107;
            } else {
              result[12] += 0.14648296;
            }
          } else {
            result[12] += -0.1541459;
          }
        } else {
          result[12] += -0.15326257;
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)39638)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[12] += -0.15130508;
          } else {
            result[12] += 0.17698878;
          }
        } else {
          result[12] += -0.15142348;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)1311)) {
            result[12] += 0.18235014;
          } else {
            result[12] += 0.16626097;
          }
        } else {
          result[12] += -0.15080562;
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[13] += -0.14074452;
            } else {
              result[13] += -0.1505473;
            }
          } else {
            result[13] += -0.15077747;
          }
        } else {
          result[13] += -0.15091465;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += -0.06011672;
            } else {
              result[13] += -0.15065525;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[13] += 0.08745242;
            } else {
              result[13] += -0.15179303;
            }
          }
        } else {
          result[13] += -0.15201423;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48838)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)229)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
              result[13] += -0.0039874585;
            } else {
              result[13] += 0.18174067;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)494)) {
              result[13] += -0.11944902;
            } else {
              result[13] += 0.19591366;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)440)) {
              result[13] += 0.18740924;
            } else {
              result[13] += 0.2724196;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)386)) {
              result[13] += 0.18301843;
            } else {
              result[13] += 0.04650338;
            }
          }
        }
      } else {
        result[13] += -0.15035586;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)862)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)50198)) {
              result[13] += 0.15520757;
            } else {
              result[13] += -0.034173157;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)40854)) {
              result[13] += -0.10656656;
            } else {
              result[13] += -0.013945455;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)940)) {
              result[13] += 0.12901989;
            } else {
              result[13] += 0.026453266;
            }
          } else {
            result[13] += -0.14658473;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
          result[13] += -0.15126164;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51042)) {
              result[13] += 0.2661337;
            } else {
              result[13] += -0.17231959;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
              result[13] += 0.23898229;
            } else {
              result[13] += -0.14669737;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.06186076;
            } else {
              result[13] += -0.14738098;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[13] += 0.18530712;
            } else {
              result[13] += 0.104952015;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)512)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)68027)) {
              result[13] += 0.16402712;
            } else {
              result[13] += 0.021539751;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
              result[13] += -0.078985184;
            } else {
              result[13] += 0.17359033;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
              result[13] += -0.058957998;
            } else {
              result[13] += -0.16427645;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
              result[13] += -0.1131042;
            } else {
              result[13] += 0.2027242;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
            result[13] += -0.16791043;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59886)) {
              result[13] += 0.21419099;
            } else {
              result[13] += -0.15081298;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[14] += 0.017382493;
            } else {
              result[14] += -0.15814157;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
              result[14] += 0.2481551;
            } else {
              result[14] += 0.03661661;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)512)) {
            result[14] += -0.1535548;
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)544)) {
              result[14] += 0.080828436;
            } else {
              result[14] += -0.14458522;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
              result[14] += -0.17974818;
            } else {
              result[14] += -0.22501394;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
              result[14] += -0.15455374;
            } else {
              result[14] += -0.17948668;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)56)) {
              result[14] += -0.16724414;
            } else {
              result[14] += 0.57918406;
            }
          } else {
            result[14] += -0.15272415;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)104)) {
              result[14] += 0.2196892;
            } else {
              result[14] += -0.059540585;
            }
          } else {
            result[14] += 0.1692215;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
            result[14] += 0.25682548;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)472)) {
              result[14] += 0.16662844;
            } else {
              result[14] += -0.11459842;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)441)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
              result[14] += -0.0127332015;
            } else {
              result[14] += -0.13932623;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
              result[14] += -0.16591518;
            } else {
              result[14] += 0.15129526;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[14] += -0.19854675;
            } else {
              result[14] += 0.17267147;
            }
          } else {
            result[14] += -0.15138343;
          }
        }
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)507)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)619)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51042)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
              result[14] += -0.15461183;
            } else {
              result[14] += -0.054611202;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
              result[14] += 0.31167242;
            } else {
              result[14] += -0.14976357;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
              result[14] += -0.14004448;
            } else {
              result[14] += -0.15221408;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[14] += -0.20109959;
            } else {
              result[14] += -0.15312628;
            }
          }
        }
      } else {
        result[14] += 0.23090373;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3101)) {
              result[14] += 0.33590636;
            } else {
              result[14] += -0.10764272;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[14] += 0.5404757;
            } else {
              result[14] += 0.012108984;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[14] += 1.872966;
            } else {
              result[14] += 0.37193018;
            }
          } else {
            result[14] += -0.1439103;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)9555)) {
              result[14] += 0.16713586;
            } else {
              result[14] += 0.5909375;
            }
          } else {
            result[14] += -0.15489975;
          }
        } else {
          result[14] += -0.15112135;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
              result[0] += -0.017993072;
            } else {
              result[0] += 0.008220757;
            }
          } else {
            result[0] += -0.15021583;
          }
        } else {
          result[0] += -0.15051785;
        }
      } else {
        result[0] += -0.15065777;
      }
    } else {
      result[0] += -0.15167941;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1453306624)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)264)) {
            result[0] += -0.16488174;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)50734)) {
              result[0] += 0.08405178;
            } else {
              result[0] += 0.046116333;
            }
          }
        } else {
          result[0] += -0.15251233;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)57306)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[0] += 0.06920268;
            } else {
              result[0] += 0.20752053;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)314)) {
              result[0] += 0.16497132;
            } else {
              result[0] += 0.17591146;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2119496576)) {
            result[0] += -0.15486197;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[0] += 0.16328412;
            } else {
              result[0] += -0.0893613;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34750)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)992)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56324)) {
              result[0] += -0.15231824;
            } else {
              result[0] += -0.13060927;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
              result[0] += -0.15091056;
            } else {
              result[0] += 0.07232437;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[0] += 0.013790286;
            } else {
              result[0] += -0.14466026;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
              result[0] += 0.13132772;
            } else {
              result[0] += -0.13147436;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2456591104)) {
          result[0] += -0.15045518;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[0] += 0.16005632;
          } else {
            result[0] += -0.09947809;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    result[1] += -0.15011251;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)331)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)10)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)151)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[1] += 0.04923857;
            } else {
              result[1] += -0.07582197;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[1] += 0.15001544;
            } else {
              result[1] += -0.040405504;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)68)) {
              result[1] += 0.18379977;
            } else {
              result[1] += 0.052287016;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[1] += -0.15163153;
            } else {
              result[1] += -0.21101843;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)280)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[1] += -0.1624355;
            } else {
              result[1] += -0.13256681;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[1] += 0.9296428;
            } else {
              result[1] += 0.1979269;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)419)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)299)) {
              result[1] += 0.679945;
            } else {
              result[1] += -0.14005078;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[1] += 0.2363268;
            } else {
              result[1] += -0.18848994;
            }
          }
        }
      }
    } else {
      result[1] += -0.15022667;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1469)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
        result[2] += -0.15157583;
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1360)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
              result[2] += -0.022215389;
            } else {
              result[2] += -0.10009333;
            }
          } else {
            result[2] += -0.10178462;
          }
        } else {
          result[2] += -0.13318242;
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)21308)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)5328)) {
              result[2] += 0.060177654;
            } else {
              result[2] += -0.01879018;
            }
          } else {
            result[2] += -0.14905965;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)24155)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += 0.028057804;
            } else {
              result[2] += 0.36258307;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)30864)) {
              result[2] += -0.041012462;
            } else {
              result[2] += 0.009402554;
            }
          }
        }
      } else {
        result[2] += -0.14929952;
      }
    }
  } else {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1675)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1060)) {
              result[2] += 0.10429122;
            } else {
              result[2] += 0.009228157;
            }
          } else {
            result[2] += -0.10786871;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2568)) {
            result[2] += 0.1530872;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)3453)) {
              result[2] += -0.028238175;
            } else {
              result[2] += 0.07315026;
            }
          }
        }
      } else {
        result[2] += 0.16025598;
      }
    } else {
      result[2] += -0.14909782;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    result[3] += -0.15175392;
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[3] += -0.15103725;
            } else {
              result[3] += 0.16299659;
            }
          } else {
            result[3] += 0.16045469;
          }
        } else {
          result[3] += -0.15045221;
        }
      } else {
        result[3] += -0.15112269;
      }
    } else {
      result[3] += -0.15116222;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            result[4] += -0.1444379;
          } else {
            result[4] += -0.15063468;
          }
        } else {
          result[4] += -0.15189475;
        }
      } else {
        result[4] += -0.15173191;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)59651)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56578)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)55440)) {
              result[4] += 0.077515215;
            } else {
              result[4] += -0.09661213;
            }
          } else {
            result[4] += 0.12978977;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)61243)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)60286)) {
              result[4] += 0.030874038;
            } else {
              result[4] += -0.09437506;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)65213)) {
              result[4] += 0.09622098;
            } else {
              result[4] += 0.010265404;
            }
          }
        }
      } else {
        result[4] += -0.15051559;
      }
    }
  } else {
    result[4] += 0.16113058;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[5] += 0.025958247;
            } else {
              result[5] += -0.15148523;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
              result[5] += 0.14653805;
            } else {
              result[5] += -0.15072247;
            }
          }
        } else {
          result[5] += -0.15325297;
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
              result[5] += 0.3950181;
            } else {
              result[5] += 0.16242832;
            }
          } else {
            result[5] += -0.15254295;
          }
        } else {
          result[5] += -0.1547735;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[5] += -0.15191527;
      } else {
        result[5] += -0.15834227;
      }
    }
  } else {
    result[5] += -0.15127325;
  }
}


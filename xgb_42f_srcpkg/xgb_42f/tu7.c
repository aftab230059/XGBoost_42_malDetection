
#include "header.h"

void predict_unit7(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)104)) {
              result[14] += 0.007823708;
            } else {
              result[14] += -0.15540275;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[14] += 0.2408709;
            } else {
              result[14] += 0.14793253;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6690)) {
              result[14] += -0.12264216;
            } else {
              result[14] += -0.14910449;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3911013376)) {
              result[14] += 0.17554104;
            } else {
              result[14] += -0.1475614;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
          result[14] += -0.16199224;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
            result[14] += -0.14421533;
          } else {
            result[14] += 0.12085495;
          }
        }
      }
    } else {
      result[14] += -0.15203008;
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)108)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)104)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
            result[14] += 1.1773124;
          } else {
            result[14] += 0.16247526;
          }
        } else {
          result[14] += 0.24322572;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
          result[14] += 0.15235877;
        } else {
          result[14] += -0.33769992;
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)441)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)440)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[14] += 0.028729785;
            } else {
              result[14] += -0.15298368;
            }
          } else {
            result[14] += -0.15123595;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
              result[14] += 0.13053654;
            } else {
              result[14] += -0.1166057;
            }
          } else {
            result[14] += -0.14927047;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
              result[14] += 0.14879273;
            } else {
              result[14] += -0.14992432;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
              result[14] += -0.055203967;
            } else {
              result[14] += 0.19835255;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)52948)) {
              result[14] += -0.15395233;
            } else {
              result[14] += -0.037761427;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3911013376)) {
              result[14] += 0.17798893;
            } else {
              result[14] += -0.13765801;
            }
          }
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
              result[0] += 0.0049462025;
            } else {
              result[0] += -0.12411097;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48703)) {
              result[0] += 0.23586844;
            } else {
              result[0] += -0.05033498;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)992)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)121)) {
              result[0] += -0.15408652;
            } else {
              result[0] += 0.007463781;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
              result[0] += -0.14364834;
            } else {
              result[0] += 0.14031051;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)514242560)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[0] += -0.14431831;
            } else {
              result[0] += 0.23854318;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)608804544)) {
              result[0] += -0.16629289;
            } else {
              result[0] += 0.075060844;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)713554112)) {
              result[0] += -0.14237201;
            } else {
              result[0] += 0.17376037;
            }
          } else {
            result[0] += -0.1512468;
          }
        }
      }
    } else {
      result[0] += -0.14986427;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1453306624)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)55789)) {
        result[0] += -0.14808872;
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)605089)) {
          result[0] += 0.6674913;
        } else {
          result[0] += -0.083243735;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
          result[0] += 0.15677778;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2209388032)) {
            result[0] += -0.14800072;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[0] += -0.1319219;
            } else {
              result[0] += 0.15084976;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
          result[0] += -0.15709339;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
            result[0] += -0.10951135;
          } else {
            result[0] += 0.13694575;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[1] += -0.141617;
    } else {
      result[1] += -0.10207819;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)34500)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)420)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)303)) {
              result[1] += 0.012807935;
            } else {
              result[1] += -0.11935755;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
              result[1] += 0.22578394;
            } else {
              result[1] += 0.024468781;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)278)) {
              result[1] += -0.07602657;
            } else {
              result[1] += 0.05746028;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
              result[1] += 0.10519402;
            } else {
              result[1] += -0.15641408;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[1] += -0.152007;
            } else {
              result[1] += -0.1211816;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)32643)) {
              result[1] += -0.02568194;
            } else {
              result[1] += -0.08373083;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
            result[1] += -0.14595632;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
              result[1] += 0.1671895;
            } else {
              result[1] += 0.3715354;
            }
          }
        }
      }
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
              result[1] += 0.05773552;
            } else {
              result[1] += -0.043717522;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)647)) {
              result[1] += -0.116966054;
            } else {
              result[1] += 0.0335511;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)486)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
              result[1] += -0.15209739;
            } else {
              result[1] += -0.17026988;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
              result[1] += 0.14398143;
            } else {
              result[1] += -0.12668909;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)298)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
            result[1] += -0.15309411;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3340514816)) {
              result[1] += -0.018585939;
            } else {
              result[1] += 0.4495194;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)307)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
              result[1] += 0.179512;
            } else {
              result[1] += 0.0869286;
            }
          } else {
            result[1] += -0.13968028;
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        result[2] += -0.1497964;
      } else {
        result[2] += -0.13012822;
      }
    } else {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
          result[2] += 0.003078242;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2568)) {
            result[2] += 0.09925751;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)3453)) {
              result[2] += -0.026451873;
            } else {
              result[2] += 0.032669444;
            }
          }
        }
      } else {
        result[2] += -0.105034046;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)64550)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)62881)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)61706)) {
              result[2] += 0.013723717;
            } else {
              result[2] += -0.06644931;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)63458)) {
              result[2] += 0.4021857;
            } else {
              result[2] += 0.05372246;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            result[2] += -0.04359255;
          } else {
            result[2] += -0.08038208;
          }
        }
      } else {
        result[2] += -0.13727202;
      }
    } else {
      result[2] += 0.1500788;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.15018609;
    } else {
      result[3] += -0.12700692;
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[3] += -0.14797445;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43562)) {
              result[3] += -0.13486478;
            } else {
              result[3] += 0.1497824;
            }
          }
        } else {
          result[3] += 0.15015456;
        }
      } else {
        result[3] += -0.1482446;
      }
    } else {
      result[3] += -0.14934838;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            result[4] += -0.10541034;
          } else {
            result[4] += -0.14810285;
          }
        } else {
          result[4] += -0.14876223;
        }
      } else {
        result[4] += -0.15017751;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)31100)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)28839)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)27847)) {
              result[4] += 0.02937549;
            } else {
              result[4] += 0.12241788;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)30238)) {
              result[4] += -0.042331368;
            } else {
              result[4] += 0.0068872436;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)32230)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)31693)) {
              result[4] += 0.046920452;
            } else {
              result[4] += 0.191496;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)34019)) {
              result[4] += -0.08543459;
            } else {
              result[4] += 0.040351354;
            }
          }
        }
      } else {
        result[4] += -0.14338171;
      }
    }
  } else {
    result[4] += 0.15001889;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[5] += 0.0029400468;
            } else {
              result[5] += 0.05841958;
            }
          } else {
            result[5] += -0.1512199;
          }
        } else {
          result[5] += -0.15067345;
        }
      } else {
        result[5] += -0.15006778;
      }
    } else {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            result[5] += 0.15221883;
          } else {
            result[5] += -0.08388694;
          }
        } else {
          result[5] += -0.104535356;
        }
      } else {
        result[5] += -0.120198704;
      }
    }
  } else {
    result[5] += -0.15026009;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
              result[6] += -0.0004952129;
            } else {
              result[6] += -0.12894706;
            }
          } else {
            result[6] += -0.14337283;
          }
        } else {
          result[6] += -0.14850822;
        }
      } else {
        result[6] += -0.14872268;
      }
    } else {
      result[6] += 0.14987773;
    }
  } else {
    result[6] += -0.15017724;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)5)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[7] += -0.028673911;
            } else {
              result[7] += -0.18467528;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
              result[7] += -0.08238318;
            } else {
              result[7] += 0.045618087;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[7] += -0.08163524;
            } else {
              result[7] += -0.18182802;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56)) {
              result[7] += 0.16268224;
            } else {
              result[7] += -0.14924964;
            }
          }
        }
      } else {
        result[7] += -0.15175909;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)87)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)44)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
            result[7] += 0.15215237;
          } else {
            result[7] += -0.1331571;
          }
        } else {
          result[7] += -0.121317;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48401)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)647)) {
              result[7] += -0.15020937;
            } else {
              result[7] += -0.11032898;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[7] += -0.12782313;
            } else {
              result[7] += 0.18603264;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            result[7] += -0.11867557;
          } else {
            result[7] += 0.15041183;
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)65535)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4217347584)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2456591104)) {
              result[7] += 0.11058959;
            } else {
              result[7] += 0.16661847;
            }
          } else {
            result[7] += -0.122540645;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)58919)) {
            result[7] += 0.16034585;
          } else {
            result[7] += -0.23500213;
          }
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            result[7] += 0.15559663;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[7] += 0.14518367;
            } else {
              result[7] += -0.11770131;
            }
          }
        } else {
          result[7] += 0.20490305;
        }
      }
    } else {
      result[7] += -0.14960425;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[8] += -0.09205044;
          } else {
            result[8] += -0.13135277;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
            result[8] += -0.06995274;
          } else {
            result[8] += -0.08467872;
          }
        }
      } else {
        result[8] += -0.14498502;
      }
    } else {
      result[8] += -0.14892444;
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)221)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
              result[8] += 0.0014206589;
            } else {
              result[8] += -0.15898047;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
              result[8] += 0.1779508;
            } else {
              result[8] += -0.025779262;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)46186)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[8] += 0.15780467;
            } else {
              result[8] += 0.11025881;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46946)) {
              result[8] += -0.09236991;
            } else {
              result[8] += 0.09403689;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
          result[8] += -0.16910805;
        } else {
          result[8] += -0.15040478;
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            result[8] += -0.31387046;
          } else {
            result[8] += 0.14225887;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
              result[8] += 0.16836783;
            } else {
              result[8] += 0.22345227;
            }
          } else {
            result[8] += -0.14251086;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[8] += -0.04340586;
            } else {
              result[8] += -0.15269445;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
              result[8] += 0.1498631;
            } else {
              result[8] += -0.14945714;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
              result[8] += 0.15916675;
            } else {
              result[8] += 0.03156605;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
              result[8] += 0.11505448;
            } else {
              result[8] += -0.15955582;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)7751)) {
              result[9] += 0.0035800852;
            } else {
              result[9] += 0.187983;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)311377)) {
              result[9] += -0.14998528;
            } else {
              result[9] += 0.1232857;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)21099)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
              result[9] += -0.010694606;
            } else {
              result[9] += 0.20410454;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)54812)) {
              result[9] += -0.23934615;
            } else {
              result[9] += 0.23297895;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)382589280)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)23617)) {
              result[9] += -0.15368554;
            } else {
              result[9] += 0.057249323;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[9] += 0.16200255;
            } else {
              result[9] += -0.12127442;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)398755392)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)11064)) {
              result[9] += 0.12420025;
            } else {
              result[9] += -0.77996176;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)28526)) {
              result[9] += 0.06276452;
            } else {
              result[9] += -0.0007948265;
            }
          }
        }
      }
    } else {
      result[9] += -0.14992763;
    }
  } else {
    result[9] += -0.1501033;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[10] += 0.005119538;
            } else {
              result[10] += -0.14880867;
            }
          } else {
            result[10] += -0.14894259;
          }
        } else {
          result[10] += -0.15017548;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)314)) {
              result[10] += -0.1206035;
            } else {
              result[10] += 0.046971723;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)442)) {
              result[10] += 0.02434081;
            } else {
              result[10] += 0.14294842;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)264)) {
            result[10] += 0.18280396;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
              result[10] += 0.040494796;
            } else {
              result[10] += -0.025321802;
            }
          }
        }
      }
    } else {
      result[10] += -0.15052606;
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
      result[10] += -0.14993066;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
        result[10] += 0.09229553;
      } else {
        result[10] += -0.13576658;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)16)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
              result[11] += -0.08650042;
            } else {
              result[11] += -0.14339197;
            }
          } else {
            result[11] += -0.14851335;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
              result[11] += -0.0007019812;
            } else {
              result[11] += -0.15777019;
            }
          } else {
            result[11] += -0.14816365;
          }
        }
      } else {
        result[11] += -0.15295024;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)331)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[11] += 0.018858472;
            } else {
              result[11] += -0.03612757;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[11] += 0.09791854;
            } else {
              result[11] += -0.21491578;
            }
          }
        } else {
          result[11] += -0.15024523;
        }
      } else {
        result[11] += -0.14996232;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)386)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)150343280)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)18064)) {
              result[11] += 0.10844094;
            } else {
              result[11] += 0.27816385;
            }
          } else {
            result[11] += -0.023166452;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)813467392)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1557)) {
              result[11] += 0.115833014;
            } else {
              result[11] += -0.17245501;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)901448896)) {
              result[11] += 0.2167242;
            } else {
              result[11] += -0.032023672;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)647)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)441)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)37732)) {
              result[11] += -0.14365532;
            } else {
              result[11] += 0.015712436;
            }
          } else {
            result[11] += -0.18032256;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1236219776)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)382589280)) {
              result[11] += -0.11748486;
            } else {
              result[11] += 0.28249094;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63732)) {
              result[11] += -0.10261815;
            } else {
              result[11] += 0.2146614;
            }
          }
        }
      }
    } else {
      result[11] += -0.14998977;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)44832)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)4)) {
              result[12] += -0.031239696;
            } else {
              result[12] += 0.023990184;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
              result[12] += 0.1633263;
            } else {
              result[12] += -0.060251985;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)108)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[12] += -0.15810733;
            } else {
              result[12] += -0.09168812;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[12] += -0.14793523;
            } else {
              result[12] += 0.1314066;
            }
          }
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
              result[12] += -0.15081225;
            } else {
              result[12] += -0.005213816;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
              result[12] += 0.10818604;
            } else {
              result[12] += -0.12714784;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[12] += 0.1358571;
            } else {
              result[12] += 0.061049208;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
              result[12] += -0.17550206;
            } else {
              result[12] += 0.084533654;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)113590144)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
              result[12] += -0.13054113;
            } else {
              result[12] += 0.44765237;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
              result[12] += 0.20909719;
            } else {
              result[12] += 0.021200141;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)34500)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
              result[12] += -0.19216432;
            } else {
              result[12] += 0.17197542;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56386)) {
              result[12] += 0.08739291;
            } else {
              result[12] += -0.08051208;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
            result[12] += -0.18065742;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
              result[12] += -0.16217777;
            } else {
              result[12] += -0.13876879;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)60176)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)59916)) {
              result[12] += 0.0408462;
            } else {
              result[12] += 0.5326925;
            }
          } else {
            result[12] += -0.17420754;
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[12] += -0.15276314;
            } else {
              result[12] += 0.09689669;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
              result[12] += 0.15576294;
            } else {
              result[12] += 0.066218555;
            }
          }
        } else {
          result[12] += -0.1509026;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)7.8308200836)) {
          result[12] += -0.16681921;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            result[12] += 0.15331799;
          } else {
            result[12] += -0.1455697;
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3832654848)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)7.8308200836)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)40854)) {
              result[12] += -0.14601567;
            } else {
              result[12] += -0.08720346;
            }
          } else {
            result[12] += 0.1004479;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3859072512)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)18837)) {
              result[12] += 0.6405089;
            } else {
              result[12] += 0.045668736;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4076412416)) {
              result[12] += 0.06868915;
            } else {
              result[12] += -0.14777379;
            }
          }
        }
      } else {
        result[12] += -0.15732697;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[13] += -0.08768389;
            } else {
              result[13] += -0.1320165;
            }
          } else {
            result[13] += -0.06868592;
          }
        } else {
          result[13] += -0.14342636;
        }
      } else {
        result[13] += -0.14851336;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
              result[13] += 0.011205833;
            } else {
              result[13] += 0.1612186;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[13] += -0.15110937;
            } else {
              result[13] += 0.024724975;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
              result[13] += -0.16484533;
            } else {
              result[13] += -0.07247441;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.15086468;
            } else {
              result[13] += -0.10562652;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)88881)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)408)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[13] += 0.16270427;
            } else {
              result[13] += -0.08533162;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
              result[13] += 0.3064003;
            } else {
              result[13] += 0.13553093;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
            result[13] += -0.14701562;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)129921)) {
              result[13] += 0.06003098;
            } else {
              result[13] += -0.10956227;
            }
          }
        }
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)4457)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
        result[13] += -0.14552565;
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)1440)) {
          result[13] += 0.091760695;
        } else {
          result[13] += -0.13222562;
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)6869)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3655086336)) {
          result[13] += 0.18620957;
        } else {
          result[13] += -0.08268025;
        }
      } else {
        result[13] += -0.14221705;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[14] += 0.014837732;
            } else {
              result[14] += -0.14952645;
            }
          } else {
            result[14] += -0.05787627;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)151)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[14] += -0.16038294;
            } else {
              result[14] += -0.11906559;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)486)) {
              result[14] += 0.11464095;
            } else {
              result[14] += -0.08932009;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
          result[14] += 0.16430894;
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)18064)) {
              result[14] += -0.10809046;
            } else {
              result[14] += -0.02573752;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)4)) {
              result[14] += -0.1454991;
            } else {
              result[14] += 0.15658957;
            }
          }
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
          result[14] += -0.15137446;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)647)) {
            result[14] += -0.13260895;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)705)) {
              result[14] += 0.44437936;
            } else {
              result[14] += -0.07935083;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)544)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)2078)) {
            result[14] += 0.42297232;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)316)) {
              result[14] += -0.09391429;
            } else {
              result[14] += 0.14471397;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)3101)) {
            result[14] += -0.14800303;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
              result[14] += 0.4752949;
            } else {
              result[14] += -0.14614347;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
      result[14] += -0.15165505;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[14] += 0.0749075;
            } else {
              result[14] += -0.08629417;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64250)) {
              result[14] += -0.13166988;
            } else {
              result[14] += 0.1522331;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[14] += 0.19746001;
            } else {
              result[14] += -0.12749885;
            }
          } else {
            result[14] += -0.15094824;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)35306)) {
              result[14] += -0.083196595;
            } else {
              result[14] += 0.23147085;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)992)) {
              result[14] += -0.14693953;
            } else {
              result[14] += -0.0513997;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)356)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
              result[14] += 0.0050323014;
            } else {
              result[14] += 0.14985354;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
              result[14] += 0.150668;
            } else {
              result[14] += -0.14180897;
            }
          }
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
              result[0] += -0.006827096;
            } else {
              result[0] += 0.015950097;
            }
          } else {
            result[0] += -0.14841273;
          }
        } else {
          result[0] += -0.15003788;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
              result[0] += 0.017170759;
            } else {
              result[0] += 0.11118071;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
              result[0] += -0.13597156;
            } else {
              result[0] += 0.04703284;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2567035392)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
              result[0] += 0.13081518;
            } else {
              result[0] += -0.14859514;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
              result[0] += 0.14994152;
            } else {
              result[0] += -0.1098727;
            }
          }
        }
      }
    } else {
      result[0] += -0.14966722;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1453306624)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
        result[0] += 0.74006456;
      } else {
        result[0] += -0.1480307;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
          result[0] += 0.15593931;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2209388032)) {
            result[0] += -0.14738604;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[0] += -0.12719105;
            } else {
              result[0] += 0.15054683;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
          result[0] += -0.15487486;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
            result[0] += -0.10214651;
          } else {
            result[0] += 0.13211362;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[1] += -0.14008297;
    } else {
      result[1] += -0.09697315;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)43594)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)35344664)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[1] += 0.010343665;
            } else {
              result[1] += -0.090323426;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)332)) {
              result[1] += -0.028304761;
            } else {
              result[1] += 0.013419269;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
              result[1] += 0.06275328;
            } else {
              result[1] += -0.001897274;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[1] += 0.12364337;
            } else {
              result[1] += -0.15000722;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)54077)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
              result[1] += -0.1566267;
            } else {
              result[1] += 0.08105673;
            }
          } else {
            result[1] += -0.15623222;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)15)) {
            result[1] += -0.15110447;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
              result[1] += 0.15937662;
            } else {
              result[1] += -0.030263739;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)55789)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)7.8308200836)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)10)) {
              result[1] += -0.15628958;
            } else {
              result[1] += 0.17509851;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)34135)) {
              result[1] += -0.11557548;
            } else {
              result[1] += 0.39145884;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[1] += 0.19357987;
            } else {
              result[1] += 0.0029905324;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
              result[1] += -0.21623613;
            } else {
              result[1] += 0.14111203;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[1] += 0.2177853;
            } else {
              result[1] += -0.0016999707;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
              result[1] += -0.15750796;
            } else {
              result[1] += 0.013259259;
            }
          }
        } else {
          result[1] += -0.15288725;
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        result[2] += -0.14966398;
      } else {
        result[2] += -0.1273362;
      }
    } else {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)64882)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)60286)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)56578)) {
              result[2] += 0.031406842;
            } else {
              result[2] += 0.00255888;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)61243)) {
              result[2] += 0.10636779;
            } else {
              result[2] += 0.02848274;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)65213)) {
            result[2] += -0.07052897;
          } else {
            result[2] += 0.055561505;
          }
        }
      } else {
        result[2] += -0.0966349;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)4269)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)3304)) {
              result[2] += 0.03961065;
            } else {
              result[2] += -0.0756745;
            }
          } else {
            result[2] += -0.13348742;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)5557)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)5328)) {
              result[2] += 0.15137774;
            } else {
              result[2] += 0.06940006;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)6211)) {
              result[2] += -0.07974229;
            } else {
              result[2] += 0.021319207;
            }
          }
        }
      } else {
        result[2] += -0.13479169;
      }
    } else {
      result[2] += 0.1499594;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.15012845;
    } else {
      result[3] += -0.12391404;
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[3] += -0.14755556;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43562)) {
              result[3] += -0.13211992;
            } else {
              result[3] += 0.14956677;
            }
          }
        } else {
          result[3] += 0.1499622;
        }
      } else {
        result[3] += -0.147803;
      }
    } else {
      result[3] += -0.14911728;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            result[4] += -0.10030941;
          } else {
            result[4] += -0.14764571;
          }
        } else {
          result[4] += -0.14848605;
        }
      } else {
        result[4] += -0.15011624;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)12366)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)8284)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5822)) {
              result[4] += 0.023121208;
            } else {
              result[4] += 0.07739254;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)8891)) {
              result[4] += -0.13645934;
            } else {
              result[4] += -0.002149071;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)12683)) {
            result[4] += 0.17261675;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)13257)) {
              result[4] += -0.06373655;
            } else {
              result[4] += 0.035944246;
            }
          }
        }
      } else {
        result[4] += -0.1412521;
      }
    }
  } else {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
      result[4] += 0.15024719;
    } else {
      result[4] += -0.08156489;
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)2011381248)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)4)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
              result[5] += 0.0077513237;
            } else {
              result[5] += -0.1497019;
            }
          } else {
            result[5] += -0.1499572;
          }
        } else {
          result[5] += 0.15103765;
        }
      } else {
        result[5] += -0.1549294;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)11064)) {
              result[5] += -0.16057767;
            } else {
              result[5] += -0.20262894;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
              result[5] += 0.17085987;
            } else {
              result[5] += -0.2766522;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)7751)) {
              result[5] += 0.22963172;
            } else {
              result[5] += 0.9245709;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17307)) {
              result[5] += -0.06394437;
            } else {
              result[5] += 0.06837772;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)50334)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)150343280)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)133638360)) {
              result[5] += -0.18144675;
            } else {
              result[5] += 0.68303406;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)44471)) {
              result[5] += -0.18304315;
            } else {
              result[5] += -0.027481403;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1112952576)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)608804544)) {
              result[5] += 0.04328895;
            } else {
              result[5] += -0.1704505;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1352913536)) {
              result[5] += 0.20882832;
            } else {
              result[5] += -0.007441141;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)59630)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)49720)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
          result[5] += -0.16490716;
        } else {
          result[5] += -0.15003602;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)49938)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33712)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[5] += -0.08889491;
            } else {
              result[5] += 0.1558426;
            }
          } else {
            result[5] += -0.12215827;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2069228800)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)54303)) {
              result[5] += 0.060849346;
            } else {
              result[5] += -0.15666085;
            }
          } else {
            result[5] += -0.1501881;
          }
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[5] += -0.14611515;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
          result[5] += 0.18741788;
        } else {
          result[5] += -0.08678043;
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
              result[6] += -0.00060105254;
            } else {
              result[6] += -0.12651786;
            }
          } else {
            result[6] += -0.14124449;
          }
        } else {
          result[6] += -0.14810863;
        }
      } else {
        result[6] += -0.1484422;
      }
    } else {
      result[6] += 0.14963232;
    }
  } else {
    result[6] += -0.150116;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[31].missing != -1) && (data[31].fvalue < (float)16)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
              result[7] += -0.029854273;
            } else {
              result[7] += -0.13094033;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
              result[7] += 0.03380396;
            } else {
              result[7] += -0.1306326;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[7] += -0.072729275;
            } else {
              result[7] += 0.056671023;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
              result[7] += 0.16074474;
            } else {
              result[7] += -0.07631902;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48401)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
              result[7] += -0.15019251;
            } else {
              result[7] += -0.07705689;
            }
          } else {
            result[7] += 0.10781753;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            result[7] += -0.077649996;
          } else {
            result[7] += 0.14203829;
          }
        }
      }
    } else {
      result[7] += 0.15258332;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)65535)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4217347584)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)28010)) {
              result[7] += 0.08542529;
            } else {
              result[7] += 0.14308311;
            }
          } else {
            result[7] += -0.11812077;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)58919)) {
            result[7] += 0.14796796;
          } else {
            result[7] += -0.20903663;
          }
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            result[7] += 0.15528126;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[7] += 0.14314412;
            } else {
              result[7] += -0.110438906;
            }
          }
        } else {
          result[7] += 0.19145899;
        }
      }
    } else {
      result[7] += -0.14906606;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[8] += -0.0864414;
          } else {
            result[8] += -0.12626211;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
            result[8] += -0.064175434;
          } else {
            result[8] += -0.07890432;
          }
        }
      } else {
        result[8] += -0.14333576;
      }
    } else {
      result[8] += -0.14861763;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
              result[8] += -0.012857095;
            } else {
              result[8] += 0.05245012;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
              result[8] += -0.16540311;
            } else {
              result[8] += -0.15018435;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[8] += 0.16638991;
            } else {
              result[8] += -0.14296485;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
              result[8] += -0.08881329;
            } else {
              result[8] += 0.054986697;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)221)) {
              result[8] += 0.033439267;
            } else {
              result[8] += 0.16768254;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
              result[8] += -0.15201753;
            } else {
              result[8] += 0.06342921;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
              result[8] += -0.048484735;
            } else {
              result[8] += 0.1355467;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4626)) {
              result[8] += -0.0985004;
            } else {
              result[8] += -0.16008806;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60670)) {
              result[8] += 0.17317045;
            } else {
              result[8] += 0.08538761;
            }
          } else {
            result[8] += -0.13243254;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)303)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[8] += -0.10011562;
            } else {
              result[8] += 0.15404016;
            }
          } else {
            result[8] += -0.14774811;
          }
        }
      } else {
        result[8] += -0.15082362;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)311377)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
              result[9] += 0.00837944;
            } else {
              result[9] += -0.1495911;
            }
          } else {
            result[9] += -0.149388;
          }
        } else {
          result[9] += -0.14987001;
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          result[9] += 0.14987199;
        } else {
          result[9] += -0.14108606;
        }
      }
    } else {
      result[9] += -0.14975595;
    }
  } else {
    result[9] += -0.15000923;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[10] += 0.0041765976;
            } else {
              result[10] += -0.14764276;
            }
          } else {
            result[10] += -0.1486397;
          }
        } else {
          result[10] += -0.15009773;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)9986)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[10] += 0.0069546;
            } else {
              result[10] += 0.03176679;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)919)) {
              result[10] += -0.13383065;
            } else {
              result[10] += 0.050243873;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[10] += 0.14957722;
          } else {
            result[10] += -0.1331445;
          }
        }
      }
    } else {
      result[10] += -0.15018186;
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
      result[10] += -0.14978838;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
        result[10] += 0.09170137;
      } else {
        result[10] += -0.13335387;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[11] += -0.08248213;
            } else {
              result[11] += -0.12871267;
            }
          } else {
            result[11] += -0.07096655;
          }
        } else {
          result[11] += -0.14126918;
        }
      } else {
        result[11] += -0.14811492;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)304)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
              result[11] += 0.0039544506;
            } else {
              result[11] += 0.048242874;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)283)) {
              result[11] += -0.15188096;
            } else {
              result[11] += 0.0025360775;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)309)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
              result[11] += -0.14857;
            } else {
              result[11] += 0.33598787;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)314)) {
              result[11] += -0.10696186;
            } else {
              result[11] += 0.060348056;
            }
          }
        }
      } else {
        result[11] += -0.15287356;
      }
    }
  } else {
    result[11] += -0.14986351;
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)208)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)10)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
              result[12] += -0.08182359;
            } else {
              result[12] += -0.1437353;
            }
          } else {
            result[12] += -0.14871582;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
              result[12] += -0.0017728162;
            } else {
              result[12] += 0.09428719;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)705)) {
              result[12] += -0.13711663;
            } else {
              result[12] += -0.0048796646;
            }
          }
        }
      } else {
        result[12] += -0.15545407;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1614904576)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)11088)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)10839)) {
              result[12] += 0.07427141;
            } else {
              result[12] += -0.78142965;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
              result[12] += 0.14131469;
            } else {
              result[12] += 0.050796647;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2020837248)) {
              result[12] += 0.041102838;
            } else {
              result[12] += -0.37895617;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
              result[12] += 0.08885369;
            } else {
              result[12] += 0.14677607;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)25742)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
            result[12] += -0.289366;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[12] += -0.14305137;
            } else {
              result[12] += -0.014713921;
            }
          }
        } else {
          result[12] += 0.13228226;
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)39287)) {
        result[12] += -0.15124418;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          result[12] += -0.09357597;
        } else {
          result[12] += 0.11771293;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3742177280)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)432921696)) {
              result[12] += 0.02817153;
            } else {
              result[12] += 0.14804809;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[12] += 0.11440384;
            } else {
              result[12] += -0.32253894;
            }
          }
        } else {
          result[12] += -0.13229147;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)39638)) {
          result[12] += -0.14803283;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)919)) {
            result[12] += 0.14174977;
          } else {
            result[12] += -0.128395;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[13] += -0.08197035;
            } else {
              result[13] += -0.127062;
            }
          } else {
            result[13] += -0.062949225;
          }
        } else {
          result[13] += -0.14131361;
        }
      } else {
        result[13] += -0.14811493;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
              result[13] += 0.013553936;
            } else {
              result[13] += -0.08652885;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)356)) {
              result[13] += -0.16591182;
            } else {
              result[13] += -0.016212298;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3467)) {
              result[13] += -0.1508693;
            } else {
              result[13] += 0.10229433;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)217)) {
              result[13] += 0.2837948;
            } else {
              result[13] += -0.074962914;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)298)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)104)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)37)) {
              result[13] += 0.14900216;
            } else {
              result[13] += 0.01981627;
            }
          } else {
            result[13] += 0.15086892;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)608804544)) {
              result[13] += 0.11257085;
            } else {
              result[13] += -0.060770977;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)615)) {
              result[13] += 0.13771312;
            } else {
              result[13] += 0.021787092;
            }
          }
        }
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)4457)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
          result[13] += -0.14961502;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)37732)) {
            result[13] += -0.12904637;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48703)) {
              result[13] += 0.38492763;
            } else {
              result[13] += -0.09659517;
            }
          }
        }
      } else {
        result[13] += -0.14935398;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)6869)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)21604)) {
          result[13] += 0.16607186;
        } else {
          result[13] += -0.04543825;
        }
      } else {
        result[13] += -0.13925779;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[14] += 0.0063995835;
            } else {
              result[14] += -0.14479037;
            }
          } else {
            result[14] += -0.15576012;
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
            result[14] += 0.16096745;
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
              result[14] += -0.040527318;
            } else {
              result[14] += 0.151025;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)512)) {
          result[14] += -0.15084648;
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)544)) {
            result[14] += 0.32286972;
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
              result[14] += 0.049297538;
            } else {
              result[14] += -0.14493231;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
          result[14] += -0.15835097;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[14] += -0.26061523;
            } else {
              result[14] += -0.1683667;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
              result[14] += -0.15390295;
            } else {
              result[14] += -0.19445464;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          result[14] += 0.16367741;
        } else {
          result[14] += -0.14696825;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)104)) {
        result[14] += 0.15601152;
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          result[14] += -0.12274506;
        } else {
          result[14] += 0.14604597;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
        result[14] += -0.15337893;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[14] += 0.20371427;
            } else {
              result[14] += 0.13591783;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
              result[14] += -0.11836806;
            } else {
              result[14] += 0.081076846;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
              result[14] += -0.14744863;
            } else {
              result[14] += -0.092178434;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)441)) {
              result[14] += -0.075137906;
            } else {
              result[14] += 0.08289232;
            }
          }
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
              result[0] += 0.0017785551;
            } else {
              result[0] += -0.14566582;
            }
          } else {
            result[0] += -0.1480768;
          }
        } else {
          result[0] += -0.14996547;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[0] += 0.028320635;
            } else {
              result[0] += -0.10105854;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[0] += 0.26204365;
            } else {
              result[0] += -0.14838772;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[0] += -0.0016757947;
            } else {
              result[0] += -0.15029755;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[0] += 0.013051677;
            } else {
              result[0] += 0.13468435;
            }
          }
        }
      }
    } else {
      result[0] += -0.149472;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1453306624)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
        result[0] += 0.46644542;
      } else {
        result[0] += -0.14706893;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
          result[0] += 0.15514007;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2209388032)) {
            result[0] += -0.14671983;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[0] += -0.121801645;
            } else {
              result[0] += 0.15049791;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
          result[0] += -0.15226065;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
            result[0] += -0.09589041;
          } else {
            result[0] += 0.12754121;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[1] += -0.13840072;
    } else {
      result[1] += -0.091325045;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)43594)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)42630)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
              result[1] += -0.0025608097;
            } else {
              result[1] += 0.03931234;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
              result[1] += -0.10661489;
            } else {
              result[1] += -0.0033452688;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)44832)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
              result[1] += 0.0820766;
            } else {
              result[1] += -0.051729348;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
              result[1] += -0.06713229;
            } else {
              result[1] += 0.048759915;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)54077)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)39295)) {
              result[1] += -0.15517642;
            } else {
              result[1] += 0.06949443;
            }
          } else {
            result[1] += -0.15540367;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)15)) {
            result[1] += -0.14981322;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
              result[1] += 0.13033232;
            } else {
              result[1] += -0.024353918;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)55789)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)7.8308200836)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)10)) {
              result[1] += -0.15488344;
            } else {
              result[1] += 0.15590015;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)432921696)) {
              result[1] += 0.45725954;
            } else {
              result[1] += 0.0038359843;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)487)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
              result[1] += 0.12285972;
            } else {
              result[1] += -0.14825971;
            }
          } else {
            result[1] += -0.15030086;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[1] += 0.043670826;
            } else {
              result[1] += -0.100515775;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)432)) {
              result[1] += -0.161086;
            } else {
              result[1] += 0.098379925;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[1] += -0.039486445;
            } else {
              result[1] += 0.069661744;
            }
          } else {
            result[1] += -0.15190546;
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        result[2] += -0.14953041;
      } else {
        result[2] += -0.12410311;
      }
    } else {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)19426)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)19183)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)16057)) {
              result[2] += 0.03427452;
            } else {
              result[2] += -0.015603171;
            }
          } else {
            result[2] += -0.16322757;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)20941)) {
            result[2] += 0.09317032;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)38841)) {
              result[2] += 0.035456162;
            } else {
              result[2] += 0.02483314;
            }
          }
        }
      } else {
        result[2] += -0.08789728;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)63988)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)61104)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)53284)) {
              result[2] += 0.021159995;
            } else {
              result[2] += -0.022967882;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)61706)) {
              result[2] += 0.8025367;
            } else {
              result[2] += 0.04491977;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)64550)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)64324)) {
              result[2] += -0.047187652;
            } else {
              result[2] += 0.026586005;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += -0.03439631;
            } else {
              result[2] += -0.07576939;
            }
          }
        }
      } else {
        result[2] += -0.13272874;
      }
    } else {
      result[2] += 0.1497831;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.1500782;
    } else {
      result[3] += -0.12036275;
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[3] += -0.14696856;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43562)) {
              result[3] += -0.12901822;
            } else {
              result[3] += 0.1493272;
            }
          }
        } else {
          result[3] += 0.14975764;
        }
      } else {
        result[3] += -0.1472786;
      }
    } else {
      result[3] += -0.14887398;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            result[4] += -0.09495089;
          } else {
            result[4] += -0.1472392;
          }
        } else {
          result[4] += -0.14816625;
        }
      } else {
        result[4] += -0.15006328;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)54906)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)54009)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)49564)) {
              result[4] += 0.033771034;
            } else {
              result[4] += 0.0045509436;
            }
          } else {
            result[4] += 0.1625971;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56578)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)55440)) {
              result[4] += 0.017317625;
            } else {
              result[4] += -0.08620346;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)56868)) {
              result[4] += 0.20404929;
            } else {
              result[4] += 0.025282571;
            }
          }
        }
      } else {
        result[4] += -0.13852096;
      }
    }
  } else {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
      result[4] += 0.15013383;
    } else {
      result[4] += -0.07961215;
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)2011381248)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51858)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
              result[5] += 0.0063173953;
            } else {
              result[5] += -0.076087825;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1250292736)) {
              result[5] += -0.06309642;
            } else {
              result[5] += 0.23796774;
            }
          }
        } else {
          result[5] += -0.14985353;
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          result[5] += -0.14619966;
        } else {
          result[5] += -0.19618239;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)21346)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)57256)) {
          result[5] += -0.19179694;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1145715328)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)63923)) {
              result[5] += -0.20744912;
            } else {
              result[5] += 0.14803495;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1159754368)) {
              result[5] += 0.3141626;
            } else {
              result[5] += -0.045646157;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)55789)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)44913)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)33361)) {
              result[5] += -0.18581247;
            } else {
              result[5] += 0.47231105;
            }
          } else {
            result[5] += -0.18594718;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56324)) {
            result[5] += -0.19369844;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)21604)) {
              result[5] += 0.30027464;
            } else {
              result[5] += 0.07138297;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)59630)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)49720)) {
        result[5] += -0.15439954;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)49938)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33712)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[5] += -0.084912136;
            } else {
              result[5] += 0.15255061;
            }
          } else {
            result[5] += -0.117279105;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2069228800)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)54303)) {
              result[5] += 0.05091441;
            } else {
              result[5] += -0.15469483;
            }
          } else {
            result[5] += -0.149864;
          }
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[5] += -0.14521594;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
          result[5] += 0.18016304;
        } else {
          result[5] += -0.07993638;
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
              result[6] += -0.0007321515;
            } else {
              result[6] += -0.124077864;
            }
          } else {
            result[6] += -0.13851148;
          }
        } else {
          result[6] += -0.14771707;
        }
      } else {
        result[6] += -0.14811699;
      }
    } else {
      result[6] += 0.1494036;
    }
  } else {
    result[6] += -0.15006304;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[31].missing != -1) && (data[31].fvalue < (float)16)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)5)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56)) {
              result[7] += 0.0044712564;
            } else {
              result[7] += -0.15090272;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[7] += -0.068141155;
            } else {
              result[7] += 0.017765434;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)87)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[7] += 0.15118761;
            } else {
              result[7] += -0.123908125;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
              result[7] += -0.14601403;
            } else {
              result[7] += 0.13027807;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48401)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)619)) {
            if ( (data[38].missing != -1) && (data[38].fvalue < (float)5)) {
              result[7] += -0.15026;
            } else {
              result[7] += 0.091259636;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)188)) {
              result[7] += 0.25838077;
            } else {
              result[7] += -0.112801984;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)35711)) {
            result[7] += 0.007492131;
          } else {
            result[7] += 0.13911451;
          }
        }
      }
    } else {
      result[7] += 0.15204088;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)65535)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1352913536)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46946)) {
              result[7] += 0.1840028;
            } else {
              result[7] += 0.11384248;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[7] += 0.08930879;
            } else {
              result[7] += -0.12405147;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1763358336)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1730588800)) {
              result[7] += 0.07955554;
            } else {
              result[7] += -0.35606974;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56386)) {
              result[7] += 0.118916154;
            } else {
              result[7] += -0.006716291;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            result[7] += 0.18134582;
          } else {
            result[7] += 0.15430334;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            result[7] += 0.1414534;
          } else {
            result[7] += -0.1025486;
          }
        }
      }
    } else {
      result[7] += -0.14845043;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[8] += -0.08070814;
          } else {
            result[8] += -0.12022467;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
            result[8] += -0.058010805;
          } else {
            result[8] += -0.07266034;
          }
        }
      } else {
        result[8] += -0.14119446;
      }
    } else {
      result[8] += -0.14831875;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[8] += 0.002847303;
            } else {
              result[8] += -0.1641602;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[8] += 0.19989945;
            } else {
              result[8] += 0.16025513;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
              result[8] += -0.19756968;
            } else {
              result[8] += -0.16089569;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)223)) {
              result[8] += 0.17317276;
            } else {
              result[8] += -0.05135935;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)303)) {
              result[8] += -0.0045025875;
            } else {
              result[8] += -0.14704695;
            }
          } else {
            result[8] += -0.1490848;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[8] += 0.15601185;
            } else {
              result[8] += -0.13716285;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)261)) {
              result[8] += -0.15217204;
            } else {
              result[8] += 0.1035473;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
        result[8] += -0.15432988;
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)261)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[8] += 0.15219086;
            } else {
              result[8] += -0.119974144;
            }
          } else {
            result[8] += -0.16146342;
          }
        } else {
          result[8] += -0.15779407;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)10134)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)311377)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[9] += 0.0051169894;
            } else {
              result[9] += -0.14921871;
            }
          } else {
            result[9] += -0.1497595;
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[9] += 0.14963788;
          } else {
            result[9] += -0.13830844;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)11064)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
              result[9] += 0.19439289;
            } else {
              result[9] += 0.15981951;
            }
          } else {
            result[9] += -0.0923618;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)44233)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4626)) {
              result[9] += -0.1351621;
            } else {
              result[9] += 0.17084688;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)44471)) {
              result[9] += -0.7678937;
            } else {
              result[9] += 0.00022106587;
            }
          }
        }
      }
    } else {
      result[9] += -0.14959079;
    }
  } else {
    result[9] += -0.14992501;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2020837248)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2013966080)) {
              result[10] += 0.0043011066;
            } else {
              result[10] += 0.14916518;
            }
          } else {
            result[10] += -0.15070581;
          }
        } else {
          result[10] += -0.15152669;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)43719)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
              result[10] += 0.006086995;
            } else {
              result[10] += -0.16603515;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
              result[10] += 0.026965853;
            } else {
              result[10] += 0.16600396;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)440)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)51238)) {
              result[10] += 0.09301049;
            } else {
              result[10] += 0.026094003;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
              result[10] += 0.8485353;
            } else {
              result[10] += 0.16855049;
            }
          }
        }
      }
    } else {
      result[10] += -0.14975567;
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
      result[10] += -0.14965141;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        result[10] += 0.09344926;
      } else {
        result[10] += -0.13086107;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)16)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
              result[11] += -0.074677594;
            } else {
              result[11] += -0.13854298;
            }
          } else {
            result[11] += -0.14772452;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
              result[11] += -0.0028132182;
            } else {
              result[11] += 0.06552529;
            }
          } else {
            result[11] += -0.15416479;
          }
        }
      } else {
        result[11] += -0.15254784;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[11] += 0.037851702;
            } else {
              result[11] += -0.15289533;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)334)) {
              result[11] += -0.13207027;
            } else {
              result[11] += 0.65653574;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)37360)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)283)) {
              result[11] += -0.120212235;
            } else {
              result[11] += 0.036277868;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[11] += -0.14737284;
            } else {
              result[11] += 0.021760363;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46186)) {
              result[11] += -0.079209045;
            } else {
              result[11] += 0.13550194;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)472)) {
              result[11] += -0.15485719;
            } else {
              result[11] += 0.018757194;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)37736)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
              result[11] += -0.09783662;
            } else {
              result[11] += 0.028373854;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)332)) {
              result[11] += 0.0949128;
            } else {
              result[11] += 0.011692228;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.14974672;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)4)) {
              result[12] += -0.024995757;
            } else {
              result[12] += 0.019158201;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
              result[12] += 0.15979241;
            } else {
              result[12] += -0.058996532;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)108)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)44832)) {
              result[12] += -0.15585005;
            } else {
              result[12] += 0.026103793;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[12] += -0.14578477;
            } else {
              result[12] += 0.11776481;
            }
          }
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)17502)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)1440)) {
              result[12] += -0.1468338;
            } else {
              result[12] += 0.03357374;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
              result[12] += 0.15218438;
            } else {
              result[12] += -0.11772038;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
              result[12] += 0.043764863;
            } else {
              result[12] += 0.11744246;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
              result[12] += -0.1712186;
            } else {
              result[12] += 0.0787379;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1386276096)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1309093120)) {
              result[12] += 0.08996557;
            } else {
              result[12] += 0.6712666;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
              result[12] += 0.0065560825;
            } else {
              result[12] += 0.44423485;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)34500)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
              result[12] += -0.18146928;
            } else {
              result[12] += 0.14062062;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
              result[12] += 0.02477187;
            } else {
              result[12] += 0.145878;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[12] += -0.17489153;
            } else {
              result[12] += -0.15868394;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
              result[12] += 0.048296962;
            } else {
              result[12] += -0.16196693;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)167486704)) {
              result[12] += -0.16515736;
            } else {
              result[12] += 0.32264483;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1013594304)) {
              result[12] += -0.13504426;
            } else {
              result[12] += 0.039393425;
            }
          }
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[12] += -0.1522504;
            } else {
              result[12] += 0.07249662;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
              result[12] += 0.15381083;
            } else {
              result[12] += 0.043404546;
            }
          }
        } else {
          result[12] += -0.1503788;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3832654848)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)40854)) {
              result[12] += -0.12993228;
            } else {
              result[12] += -0.057402566;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4076412416)) {
              result[12] += 0.23231243;
            } else {
              result[12] += -0.14518872;
            }
          }
        } else {
          result[12] += -0.15463762;
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)7.8308200836)) {
        result[12] += -0.16243748;
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
          result[12] += 0.15186754;
        } else {
          result[12] += -0.14377016;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[13] += -0.07612272;
            } else {
              result[13] += -0.121162556;
            }
          } else {
            result[13] += -0.056841645;
          }
        } else {
          result[13] += -0.13859962;
        }
      } else {
        result[13] += -0.14772454;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)940)) {
              result[13] += 0.01935249;
            } else {
              result[13] += -0.11701187;
            }
          } else {
            result[13] += 0.1509169;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)608)) {
              result[13] += -0.14900327;
            } else {
              result[13] += -0.041159425;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
              result[13] += 0.01594756;
            } else {
              result[13] += 0.1519416;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)298)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)104)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)37)) {
              result[13] += 0.14811827;
            } else {
              result[13] += 0.026809413;
            }
          } else {
            result[13] += 0.15078962;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)494)) {
              result[13] += -0.1385877;
            } else {
              result[13] += 0.11359946;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)31625)) {
              result[13] += 0.105348326;
            } else {
              result[13] += -0.033618473;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
      result[13] += -0.14557147;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
          result[13] += 0.43627134;
        } else {
          result[13] += -0.09056102;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)6428)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)6166)) {
            result[13] += -0.12287516;
          } else {
            result[13] += 0.13192514;
          }
        } else {
          result[13] += -0.14570318;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[14] += 0.007588066;
            } else {
              result[14] += -0.15559582;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[14] += 0.21077137;
            } else {
              result[14] += -0.1346573;
            }
          }
        } else {
          result[14] += -0.15204929;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
          result[14] += -0.15082969;
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[14] += -0.006881237;
            } else {
              result[14] += 0.1550584;
            }
          } else {
            result[14] += -0.15119821;
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
          result[14] += -0.15647608;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
            result[14] += -0.20913556;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
              result[14] += -0.1487392;
            } else {
              result[14] += -0.1853173;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          result[14] += 0.15277141;
        } else {
          result[14] += -0.14617436;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)472)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)104)) {
          result[14] += 0.15498452;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[14] += -0.1166408;
          } else {
            result[14] += 0.14863548;
          }
        }
      } else {
        result[14] += -0.07777026;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
        result[14] += -0.15246683;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)150)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)441)) {
              result[14] += 0.037604034;
            } else {
              result[14] += 0.12705801;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)441)) {
              result[14] += -0.11785292;
            } else {
              result[14] += 0.0918594;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
              result[14] += -0.08315313;
            } else {
              result[14] += -0.15023042;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
              result[14] += 0.15683676;
            } else {
              result[14] += -0.0046506384;
            }
          }
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
              result[0] += -0.0057046283;
            } else {
              result[0] += 0.014442389;
            }
          } else {
            result[0] += -0.14768805;
          }
        } else {
          result[0] += -0.14988983;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)14)) {
              result[0] += 0.017656617;
            } else {
              result[0] += 0.32484475;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
              result[0] += -0.12266303;
            } else {
              result[0] += 0.0427255;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2407267328)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56138)) {
              result[0] += -0.1293592;
            } else {
              result[0] += -0.004688347;
            }
          } else {
            result[0] += 0.14888677;
          }
        }
      }
    } else {
      result[0] += -0.14927198;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1453306624)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
        result[0] += 0.32340267;
      } else {
        result[0] += -0.1459702;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
          result[0] += 0.15438968;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2209388032)) {
            result[0] += -0.1452627;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[0] += -0.11514689;
            } else {
              result[0] += 0.14977598;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
          result[0] += -0.14951284;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
            result[0] += -0.08787346;
          } else {
            result[0] += 0.12237581;
          }
        }
      }
    }
  }
}


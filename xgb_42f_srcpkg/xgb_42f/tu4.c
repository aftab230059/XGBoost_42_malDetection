
#include "header.h"

void predict_unit4(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            result[8] += -0.12799853;
          } else {
            result[8] += -0.12037303;
          }
        } else {
          result[8] += -0.14918509;
        }
      } else {
        result[8] += -0.1499151;
      }
    } else {
      result[8] += -0.15016802;
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)311)) {
              result[8] += 0.015861975;
            } else {
              result[8] += -0.11753722;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[8] += -0.19096042;
            } else {
              result[8] += 0.19645615;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)12872)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)303)) {
              result[8] += -0.20951365;
            } else {
              result[8] += -0.15026928;
            }
          } else {
            result[8] += -0.15031442;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[8] += 0.20873581;
            } else {
              result[8] += -0.15015098;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)303)) {
              result[8] += -0.036809403;
            } else {
              result[8] += -0.15079118;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[8] += -0.15223177;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[8] += 0.062915996;
            } else {
              result[8] += -0.14998356;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[8] += 0.27930844;
            } else {
              result[8] += -0.12788343;
            }
          } else {
            result[8] += -0.14802289;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
              result[8] += 0.18238948;
            } else {
              result[8] += 0.2522571;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56)) {
              result[8] += -0.22305475;
            } else {
              result[8] += 0.070714675;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
            result[8] += -0.15407623;
          } else {
            result[8] += 0.16273382;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)304)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[8] += -0.15007925;
            } else {
              result[8] += 0.17032026;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
              result[8] += -0.17322652;
            } else {
              result[8] += 0.1464178;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)311377)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[9] += 0.022546275;
            } else {
              result[9] += -0.15026186;
            }
          } else {
            result[9] += -0.15125147;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1842962816)) {
              result[9] += 0.0111652175;
            } else {
              result[9] += -0.18410206;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)37225)) {
              result[9] += 0.10229728;
            } else {
              result[9] += 0.045401335;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          result[9] += -0.14161351;
        } else {
          result[9] += 0.15431437;
        }
      }
    } else {
      result[9] += -0.15066251;
    }
  } else {
    result[9] += -0.15127626;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[10] += 0.022747163;
            } else {
              result[10] += -0.14927182;
            }
          } else {
            result[10] += -0.14995582;
          }
        } else {
          result[10] += -0.15016614;
        }
      } else {
        result[10] += -0.15105902;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)26732)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
              result[10] += 0.03876032;
            } else {
              result[10] += 0.12832604;
            }
          } else {
            result[10] += -0.15470968;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)919)) {
              result[10] += -0.14942425;
            } else {
              result[10] += -0.055430815;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[10] += 0.18365633;
            } else {
              result[10] += -0.15111509;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          result[10] += 0.15424001;
        } else {
          result[10] += -0.14745131;
        }
      }
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
      result[10] += -0.15129231;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          result[10] += 0.15855834;
        } else {
          result[10] += -0.085518874;
        }
      } else {
        result[10] += -0.14945294;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[11] += -0.13058925;
          } else {
            result[11] += -0.14918923;
          }
        } else {
          result[11] += -0.1499149;
        }
      } else {
        result[11] += -0.15016785;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)328)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
              result[11] += 0.01834829;
            } else {
              result[11] += 0.11053201;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)283)) {
              result[11] += -0.15583992;
            } else {
              result[11] += 0.044652868;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
              result[11] += 0.15473329;
            } else {
              result[11] += -0.23209389;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
              result[11] += -0.19271557;
            } else {
              result[11] += -0.15023848;
            }
          }
        }
      } else {
        result[11] += -0.15079099;
      }
    }
  } else {
    result[11] += -0.15124297;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            result[12] += -0.12258972;
          } else {
            result[12] += -0.13427383;
          }
        } else {
          result[12] += -0.1491818;
        }
      } else {
        result[12] += -0.1499135;
      }
    } else {
      result[12] += -0.1501666;
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)208)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[12] += 0.021042721;
            } else {
              result[12] += -0.15572311;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[12] += 0.121851884;
            } else {
              result[12] += -0.15096158;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)705)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
              result[12] += -0.14915521;
            } else {
              result[12] += -0.100539885;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
              result[12] += -0.113708735;
            } else {
              result[12] += 0.06885743;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)18064)) {
              result[12] += 0.1973807;
            } else {
              result[12] += 0.17307568;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
              result[12] += -0.15198305;
            } else {
              result[12] += 0.16258025;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[12] += -0.1497765;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
              result[12] += 0.15659037;
            } else {
              result[12] += -0.124674;
            }
          }
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)39287)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
            result[12] += -0.15283468;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
              result[12] += 0.060106415;
            } else {
              result[12] += -0.15131135;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
            result[12] += 0.16296116;
          } else {
            result[12] += -0.14841051;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          result[12] += -0.15578213;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
            result[12] += -0.14063698;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)6)) {
              result[12] += 0.34247854;
            } else {
              result[12] += 0.1432496;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[13] += -0.13049115;
            } else {
              result[13] += -0.14919183;
            }
          } else {
            result[13] += -0.14991836;
          }
        } else {
          result[13] += -0.15016785;
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
              result[13] += -0.053060446;
            } else {
              result[13] += 0.07872194;
            }
          } else {
            result[13] += -0.14971048;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)487)) {
              result[13] += -0.14276314;
            } else {
              result[13] += 0.10662078;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
              result[13] += 0.25815177;
            } else {
              result[13] += -0.14673032;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
              result[13] += -0.04290981;
            } else {
              result[13] += 0.09035678;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
              result[13] += -0.15796287;
            } else {
              result[13] += 0.093402475;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.093905956;
            } else {
              result[13] += -0.14559901;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[13] += -0.15092805;
            } else {
              result[13] += -0.086703874;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)862)) {
              result[13] += 0.18786685;
            } else {
              result[13] += 0.08898759;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
              result[13] += -0.06252729;
            } else {
              result[13] += 0.18676354;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
              result[13] += 0.06981123;
            } else {
              result[13] += -0.1707345;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
              result[13] += 0.14860715;
            } else {
              result[13] += -0.13599683;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)298)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)104)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)229)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)37)) {
              result[13] += 0.17043225;
            } else {
              result[13] += -0.13483223;
            }
          } else {
            result[13] += 0.16756228;
          }
        } else {
          result[13] += -0.14702313;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
          result[13] += 0.18109055;
        } else {
          result[13] += 0.15418218;
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)487)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
          result[13] += -0.14978398;
        } else {
          result[13] += 0.12512931;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48838)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)419)) {
              result[13] += 0.11283209;
            } else {
              result[13] += -0.14790002;
            }
          } else {
            result[13] += 0.1616751;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
              result[13] += 0.17024761;
            } else {
              result[13] += -0.054041803;
            }
          } else {
            result[13] += 0.16750288;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)441)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
              result[14] += 0.014931034;
            } else {
              result[14] += -0.09618505;
            }
          } else {
            result[14] += -0.15041041;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61435)) {
              result[14] += -0.15185638;
            } else {
              result[14] += -0.14116602;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1811010176)) {
              result[14] += -0.14908583;
            } else {
              result[14] += -0.013367337;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[14] += 0.0581246;
            } else {
              result[14] += -0.15472302;
            }
          } else {
            result[14] += -0.15364724;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[14] += 0.16586307;
            } else {
              result[14] += 0.15711834;
            }
          } else {
            result[14] += -0.14797018;
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[14] += -0.280454;
          } else {
            result[14] += -0.14608483;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)486)) {
            result[14] += 0.16030522;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)109)) {
              result[14] += -0.7059611;
            } else {
              result[14] += 0.15323521;
            }
          }
        }
      } else {
        result[14] += -0.15087557;
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)619)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51042)) {
            result[14] += -0.1532003;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
              result[14] += 0.2012576;
            } else {
              result[14] += -0.14443538;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3911013376)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)54812)) {
              result[14] += 0.9183099;
            } else {
              result[14] += 0.12906057;
            }
          } else {
            result[14] += -0.1466315;
          }
        }
      } else {
        result[14] += -0.15132883;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)544)) {
            result[14] += -0.1516427;
          } else {
            result[14] += 0.15521723;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
              result[14] += 0.083733104;
            } else {
              result[14] += 0.6221296;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1878)) {
              result[14] += -0.15170428;
            } else {
              result[14] += 0.17298931;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
            result[14] += 0.21320121;
          } else {
            result[14] += -0.15444478;
          }
        } else {
          result[14] += -0.1501733;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[0] += -0.00010954726;
            } else {
              result[0] += -0.14602527;
            }
          } else {
            result[0] += -0.14876014;
          }
        } else {
          result[0] += -0.14972967;
        }
      } else {
        result[0] += -0.15006395;
      }
    } else {
      result[0] += -0.1509178;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1453306624)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)50734)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)50461)) {
              result[0] += 0.0555012;
            } else {
              result[0] += 0.45219508;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)52273)) {
              result[0] += -0.08469565;
            } else {
              result[0] += 0.046210725;
            }
          }
        } else {
          result[0] += -0.1505151;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
              result[0] += 0.1596097;
            } else {
              result[0] += 0.17200309;
            }
          } else {
            result[0] += -0.084380746;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2119496576)) {
            result[0] += -0.15264307;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
              result[0] += 0.032586332;
            } else {
              result[0] += 0.1548405;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
            result[0] += -0.151541;
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[0] += -0.15325692;
            } else {
              result[0] += 0.23403312;
            }
          }
        } else {
          result[0] += -0.15122533;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[0] += -0.14419632;
            } else {
              result[0] += 0.25919783;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
              result[0] += -0.1600707;
            } else {
              result[0] += 0.082488716;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2567035392)) {
            result[0] += -0.15463349;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[0] += 0.14864354;
            } else {
              result[0] += 0.3203103;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[1] += -0.14888455;
    } else {
      result[1] += -0.13547447;
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)486)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
              result[1] += 0.0047559515;
            } else {
              result[1] += 0.079253286;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[1] += 0.16328448;
            } else {
              result[1] += -0.12913321;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[1] += 0.11923238;
            } else {
              result[1] += -0.060893852;
            }
          } else {
            result[1] += -0.15247309;
          }
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[1] += 0.15328935;
            } else {
              result[1] += -0.14280564;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
              result[1] += 0.15339729;
            } else {
              result[1] += 0.03619435;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)68)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)38644)) {
              result[1] += 0.15782961;
            } else {
              result[1] += 0.25595438;
            }
          } else {
            result[1] += -0.16302113;
          }
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
        result[1] += -0.14873683;
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)9392)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
              result[1] += -0.13841638;
            } else {
              result[1] += 0.20960112;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3399763968)) {
              result[1] += 0.3091296;
            } else {
              result[1] += 0.6695455;
            }
          }
        } else {
          result[1] += -0.14647058;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
      result[2] += -0.15070537;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)60466)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)53284)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)30864)) {
              result[2] += 2.2653652e-05;
            } else {
              result[2] += 0.04538238;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += -0.01866059;
            } else {
              result[2] += -0.1455721;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)61706)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += 0.46799406;
            } else {
              result[2] += -0.11077236;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += 0.06215794;
            } else {
              result[2] += -0.13663545;
            }
          }
        }
      } else {
        result[2] += -0.14719133;
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)64882)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)60286)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)56578)) {
              result[2] += 0.053770777;
            } else {
              result[2] += 0.013496939;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)61243)) {
              result[2] += 0.14530522;
            } else {
              result[2] += 0.042055815;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)65213)) {
            result[2] += -0.08414814;
          } else {
            result[2] += 0.07402458;
          }
        }
      } else {
        result[2] += -0.14528097;
      }
    } else {
      result[2] += 0.15325184;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    result[3] += -0.15091339;
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[3] += -0.15023768;
            } else {
              result[3] += 0.15316969;
            }
          } else {
            result[3] += 0.1545131;
          }
        } else {
          result[3] += -0.14824818;
        }
      } else {
        result[3] += -0.15033296;
      }
    } else {
      result[3] += -0.1505285;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            result[4] += -0.13709426;
          } else {
            result[4] += -0.14993088;
          }
        } else {
          result[4] += -0.15072177;
        }
      } else {
        result[4] += -0.15098679;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)16057)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)8284)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5822)) {
              result[4] += 0.045560665;
            } else {
              result[4] += 0.10454955;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)8891)) {
              result[4] += -0.14176421;
            } else {
              result[4] += 0.032711744;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)17201)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)16637)) {
              result[4] += 0.1185553;
            } else {
              result[4] += 0.29930225;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)18628)) {
              result[4] += -0.095485196;
            } else {
              result[4] += 0.05811061;
            }
          }
        }
      } else {
        result[4] += -0.14972457;
      }
    }
  } else {
    result[4] += 0.15384878;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[5] += 0.017350696;
            } else {
              result[5] += 0.09366863;
            }
          } else {
            result[5] += -0.15547618;
          }
        } else {
          result[5] += -0.15138654;
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)35344664)) {
              result[5] += 0.16136892;
            } else {
              result[5] += 0.18498889;
            }
          } else {
            result[5] += -0.14191392;
          }
        } else {
          result[5] += -0.1490024;
        }
      }
    } else {
      result[5] += -0.15213023;
    }
  } else {
    result[5] += -0.15163857;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[6] += 0.009837593;
            } else {
              result[6] += -0.14108616;
            }
          } else {
            result[6] += -0.149721;
          }
        } else {
          result[6] += -0.15068841;
        }
      } else {
        result[6] += -0.1500573;
      }
    } else {
      result[6] += 0.15395603;
    }
  } else {
    result[6] += -0.15098597;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[7] += -0.073255785;
            } else {
              result[7] += -0.14899439;
            }
          } else {
            result[7] += 0.15679765;
          }
        } else {
          if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
            result[7] += -0.14976144;
          } else {
            result[7] += 0.122266985;
          }
        }
      } else {
        result[7] += -0.14997414;
      }
    } else {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)5)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          result[7] += -0.14843903;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)56)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[7] += 0.27131802;
            } else {
              result[7] += -0.1196542;
            }
          } else {
            result[7] += -0.15027066;
          }
        }
      } else {
        result[7] += 0.12947653;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[7] += 0.1581259;
      } else {
        result[7] += -0.12174347;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1377281)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)26732)) {
            result[7] += -0.15050846;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
              result[7] += -0.14914817;
            } else {
              result[7] += 0.054792173;
            }
          }
        } else {
          result[7] += 0.15316382;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56)) {
              result[7] += 0.039434135;
            } else {
              result[7] += -0.1524949;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[7] += -0.17643943;
            } else {
              result[7] += -0.1546935;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)15)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)343)) {
              result[7] += 0.16156983;
            } else {
              result[7] += -0.13533437;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
              result[7] += -0.15199648;
            } else {
              result[7] += 0.14845864;
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
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            result[8] += -0.124561645;
          } else {
            result[8] += -0.11619892;
          }
        } else {
          result[8] += -0.14874458;
        }
      } else {
        result[8] += -0.14972329;
      }
    } else {
      result[8] += -0.15005912;
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
              result[8] += 0.02793472;
            } else {
              result[8] += -0.15771213;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
              result[8] += -0.14771949;
            } else {
              result[8] += -0.04366287;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
              result[8] += 0.048592694;
            } else {
              result[8] += 0.17090695;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
              result[8] += -0.20020013;
            } else {
              result[8] += -0.15185645;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[8] += -0.016185176;
            } else {
              result[8] += -0.17741202;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
              result[8] += 0.2332535;
            } else {
              result[8] += 0.40835997;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)261)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56179)) {
              result[8] += -0.26182953;
            } else {
              result[8] += -0.08551568;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
              result[8] += 0.16928501;
            } else {
              result[8] += -0.00025230664;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[8] += 0.2403669;
            } else {
              result[8] += 0.18892942;
            }
          } else {
            result[8] += -0.14406435;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
            result[8] += -0.19995666;
          } else {
            result[8] += 0.06284805;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
            result[8] += -0.15314023;
          } else {
            result[8] += 0.15918177;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)304)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[8] += -0.14786258;
            } else {
              result[8] += 0.16377859;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
              result[8] += -0.17398073;
            } else {
              result[8] += 0.13965344;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)311377)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1557)) {
              result[9] += 0.0129588945;
            } else {
              result[9] += -0.09934545;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
              result[9] += -0.004462472;
            } else {
              result[9] += 0.078640915;
            }
          }
        } else {
          result[9] += -0.15095493;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          result[9] += -0.138901;
        } else {
          result[9] += 0.1532015;
        }
      }
    } else {
      result[9] += -0.15054733;
    }
  } else {
    result[9] += -0.15111274;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[10] += 0.019293603;
            } else {
              result[10] += -0.14884958;
            }
          } else {
            result[10] += -0.14976697;
          }
        } else {
          result[10] += -0.1500573;
        }
      } else {
        result[10] += -0.15091775;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)26732)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2020837248)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2011381248)) {
              result[10] += 0.047539756;
            } else {
              result[10] += 0.15698771;
            }
          } else {
            result[10] += -0.15055299;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
              result[10] += -0.15045506;
            } else {
              result[10] += 0.08136479;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[10] += -0.04645543;
            } else {
              result[10] += 0.065646745;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          result[10] += 0.1531302;
        } else {
          result[10] += -0.14632866;
        }
      }
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
      result[10] += -0.15114522;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          result[10] += 0.15301529;
        } else {
          result[10] += -0.076933555;
        }
      } else {
        result[10] += -0.14873335;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[11] += -0.12746853;
          } else {
            result[11] += -0.14874962;
          }
        } else {
          result[11] += -0.14972308;
        }
      } else {
        result[11] += -0.15005895;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)37736)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
              result[11] += 0.025510376;
            } else {
              result[11] += 0.15558599;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
              result[11] += -0.16919929;
            } else {
              result[11] += -0.1503106;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[11] += -0.1566173;
            } else {
              result[11] += -0.15093032;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[11] += -0.051152054;
            } else {
              result[11] += 0.04913194;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
              result[11] += 0.03657136;
            } else {
              result[11] += 0.11556023;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
              result[11] += 0.18628764;
            } else {
              result[11] += 0.15677123;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
              result[11] += -0.58286804;
            } else {
              result[11] += -0.14901768;
            }
          } else {
            result[11] += -0.1512658;
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
              result[11] += -0.15353747;
            } else {
              result[11] += -0.066699095;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)10064)) {
              result[11] += 0.09829503;
            } else {
              result[11] += -0.019764466;
            }
          }
        } else {
          result[11] += 0.15937683;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)408)) {
            result[11] += -0.13166663;
          } else {
            result[11] += -0.3333323;
          }
        } else {
          result[11] += -0.17479469;
        }
      }
    } else {
      result[11] += -0.1511005;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            result[12] += -0.118557274;
          } else {
            result[12] += -0.13162337;
          }
        } else {
          result[12] += -0.14874057;
        }
      } else {
        result[12] += -0.14972156;
      }
    } else {
      result[12] += -0.15005775;
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)108)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[12] += 0.019738484;
            } else {
              result[12] += -0.15505257;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
              result[12] += 0.16887121;
            } else {
              result[12] += -0.18412994;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
              result[12] += -0.14854853;
            } else {
              result[12] += 0.14810807;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
              result[12] += -0.17348954;
            } else {
              result[12] += -0.15063165;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[12] += 0.17825505;
            } else {
              result[12] += 0.16000302;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
              result[12] += -0.11229914;
            } else {
              result[12] += -0.3445655;
            }
          }
        } else {
          result[12] += -0.14924195;
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)39287)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1879)) {
            result[12] += -0.15249497;
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)188)) {
              result[12] += 0.039596677;
            } else {
              result[12] += -0.14165117;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
            result[12] += 0.15765539;
          } else {
            result[12] += -0.14888082;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
          result[12] += -0.13771681;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)919)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)9392)) {
              result[12] += 0.07640489;
            } else {
              result[12] += 0.15468678;
            }
          } else {
            result[12] += -0.11980153;
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)122)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[13] += -0.12735958;
            } else {
              result[13] += -0.1487528;
            }
          } else {
            result[13] += -0.14972681;
          }
        } else {
          result[13] += -0.15005895;
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)408)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
              result[13] += -0.0043337704;
            } else {
              result[13] += -0.14992912;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48838)) {
              result[13] += -0.1471589;
            } else {
              result[13] += -0.0063822814;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)464)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
              result[13] += -0.1518338;
            } else {
              result[13] += -0.10632171;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
              result[13] += -0.037286427;
            } else {
              result[13] += 0.22845122;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)356)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
              result[13] += -0.02969875;
            } else {
              result[13] += -0.1294769;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)403)) {
              result[13] += 0.36778304;
            } else {
              result[13] += 0.008681745;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)442)) {
              result[13] += -0.14897645;
            } else {
              result[13] += -0.068383284;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
              result[13] += 0.08981504;
            } else {
              result[13] += -0.15125403;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)150)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            result[13] += 1.7315747;
          } else {
            result[13] += -0.10666775;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
              result[13] += 0.28124532;
            } else {
              result[13] += 0.6771508;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[13] += 0.08221726;
            } else {
              result[13] += -0.033512946;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)298)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)104)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)229)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)37)) {
              result[13] += 0.16431516;
            } else {
              result[13] += -0.13211368;
            }
          } else {
            result[13] += 0.16351157;
          }
        } else {
          result[13] += -0.14614113;
        }
      } else {
        result[13] += 0.1534173;
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)487)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
          result[13] += -0.1493693;
        } else {
          result[13] += 0.11762408;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48838)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)419)) {
              result[13] += 0.095036864;
            } else {
              result[13] += -0.14242283;
            }
          } else {
            result[13] += 0.15786368;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)42428)) {
              result[13] += 0.16703168;
            } else {
              result[13] += -0.0669165;
            }
          } else {
            result[13] += 0.16445163;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)441)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
              result[14] += 0.0049858815;
            } else {
              result[14] += 0.09093806;
            }
          } else {
            result[14] += -0.15028507;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61435)) {
              result[14] += -0.15140289;
            } else {
              result[14] += -0.13893032;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1811010176)) {
              result[14] += -0.14812239;
            } else {
              result[14] += -0.008509294;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
              result[14] += 0.033107083;
            } else {
              result[14] += 0.13997938;
            }
          } else {
            result[14] += -0.15278497;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
            result[14] += 0.15770715;
          } else {
            result[14] += -0.14671987;
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[14] += -0.25605834;
          } else {
            result[14] += -0.14525712;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)486)) {
            result[14] += 0.1580739;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)109)) {
              result[14] += -0.46196756;
            } else {
              result[14] += 0.14779781;
            }
          }
        }
      } else {
        result[14] += -0.15063104;
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)619)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51042)) {
            result[14] += -0.15290019;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
              result[14] += 0.19116914;
            } else {
              result[14] += -0.14324132;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)54551)) {
            result[14] += -0.14631213;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)54812)) {
              result[14] += 1.1323907;
            } else {
              result[14] += 0.02264012;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)5141)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
              result[14] += -0.12426627;
            } else {
              result[14] += 0.13671744;
            }
          } else {
            result[14] += -0.14810514;
          }
        } else {
          result[14] += -0.15183583;
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)544)) {
            result[14] += -0.1509195;
          } else {
            result[14] += 0.13662145;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
              result[14] += -0.14664909;
            } else {
              result[14] += 0.4469112;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
              result[14] += -0.061826754;
            } else {
              result[14] += 0.21545583;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
            result[14] += 0.19183855;
          } else {
            result[14] += -0.15502834;
          }
        } else {
          result[14] += -0.14997417;
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)47553)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[0] += -0.005780727;
            } else {
              result[0] += -0.14993139;
            }
          } else {
            result[0] += -0.15082741;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)264)) {
              result[0] += -0.15593787;
            } else {
              result[0] += 0.04621881;
            }
          } else {
            result[0] += -0.15210715;
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)940)) {
              result[0] += -0.15027979;
            } else {
              result[0] += -0.12678507;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[0] += 0.095340535;
            } else {
              result[0] += -0.1310727;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
              result[0] += -0.12684815;
            } else {
              result[0] += 0.26367947;
            }
          } else {
            result[0] += -0.15157565;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)487)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
              result[0] += -0.047818683;
            } else {
              result[0] += -0.14522667;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[0] += 1.901917;
            } else {
              result[0] += -0.1477717;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59130)) {
              result[0] += 0.040163144;
            } else {
              result[0] += -0.11756357;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
              result[0] += 0.25201333;
            } else {
              result[0] += -0.11416909;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2567035392)) {
          result[0] += -0.15549985;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2718478592)) {
              result[0] += 0.15413001;
            } else {
              result[0] += -0.15011367;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)919)) {
              result[0] += 1.4039102;
            } else {
              result[0] += 0.17719445;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1030112576)) {
        result[0] += -0.14884524;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
            result[0] += 0.15676464;
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)477)) {
              result[0] += 0.2862013;
            } else {
              result[0] += 0.1540741;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2020837248)) {
            result[0] += -0.15172197;
          } else {
            result[0] += 0.15323937;
          }
        }
      }
    } else {
      result[0] += -0.1510556;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[1] += -0.14840749;
    } else {
      result[1] += -0.13301352;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)442)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60425)) {
              result[1] += 0.041945536;
            } else {
              result[1] += 0.06420742;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)420)) {
              result[1] += -0.113314144;
            } else {
              result[1] += 0.062430646;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)472)) {
              result[1] += 0.19568107;
            } else {
              result[1] += 0.31609273;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)647)) {
              result[1] += -0.11078025;
            } else {
              result[1] += 0.104518406;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[1] += -0.15557979;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
              result[1] += 0.22527272;
            } else {
              result[1] += 0.27477074;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
              result[1] += -0.14351894;
            } else {
              result[1] += 0.012737834;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[1] += -0.10463808;
            } else {
              result[1] += 0.028892202;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
              result[1] += -0.045562815;
            } else {
              result[1] += 0.05946923;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)54077)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)440)) {
              result[1] += -0.15892124;
            } else {
              result[1] += -0.20477636;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)15)) {
              result[1] += -0.15835589;
            } else {
              result[1] += 0.18366224;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)56179)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)389)) {
              result[1] += -0.1395302;
            } else {
              result[1] += 0.16213788;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[1] += 0.42487812;
            } else {
              result[1] += 0.13158211;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[1] += -0.15308127;
            } else {
              result[1] += -0.017025221;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
              result[1] += 0.13616568;
            } else {
              result[1] += -0.14930668;
            }
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
      result[2] += -0.15053125;
    } else {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
          result[2] += 0.00820662;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2568)) {
            result[2] += 0.12579465;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)3453)) {
              result[2] += -0.033266947;
            } else {
              result[2] += 0.048700307;
            }
          }
        }
      } else {
        result[2] += -0.1436255;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)4269)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)3304)) {
              result[2] += 0.06102093;
            } else {
              result[2] += -0.094543055;
            }
          } else {
            result[2] += -0.13932312;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)5328)) {
            result[2] += 0.54313195;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)18755)) {
              result[2] += -0.0057053966;
            } else {
              result[2] += 0.0351615;
            }
          }
        }
      } else {
        result[2] += -0.14630365;
      }
    } else {
      result[2] += 0.15250915;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    result[3] += -0.15076105;
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[3] += -0.15007599;
            } else {
              result[3] += 0.15238155;
            }
          } else {
            result[3] += 0.15361887;
          }
        } else {
          result[3] += -0.1475787;
        }
      } else {
        result[3] += -0.1501936;
      }
    } else {
      result[3] += -0.15040155;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            result[4] += -0.13476391;
          } else {
            result[4] += -0.14973728;
          }
        } else {
          result[4] += -0.15049937;
        }
      } else {
        result[4] += -0.1508629;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)58776)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)57165)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)55440)) {
              result[4] += 0.055206466;
            } else {
              result[4] += -0.03529588;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)57490)) {
              result[4] += 0.17439504;
            } else {
              result[4] += 0.08912574;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)61863)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)60286)) {
              result[4] += 0.027927302;
            } else {
              result[4] += -0.059774645;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)62419)) {
              result[4] += 0.12952751;
            } else {
              result[4] += 0.040086795;
            }
          }
        }
      } else {
        result[4] += -0.14950763;
      }
    }
  } else {
    result[4] += 0.1530165;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[5] += 0.010290551;
            } else {
              result[5] += 0.109864436;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
              result[5] += 0.16823989;
            } else {
              result[5] += -0.09540418;
            }
          }
        } else {
          result[5] += -0.15118556;
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
              result[5] += 0.22164692;
            } else {
              result[5] += 0.12326948;
            }
          } else {
            result[5] += -0.1494787;
          }
        } else {
          result[5] += -0.15214954;
        }
      }
    } else {
      result[5] += -0.15189151;
    }
  } else {
    result[5] += -0.15146735;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[6] += 0.0063015996;
            } else {
              result[6] += -0.13907601;
            }
          } else {
            result[6] += -0.14950447;
          }
        } else {
          result[6] += -0.15046823;
        }
      } else {
        result[6] += -0.14992467;
      }
    } else {
      result[6] += 0.1530284;
    }
  } else {
    result[6] += -0.15086217;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[7] += -0.06697345;
            } else {
              result[7] += -0.14850941;
            }
          } else {
            result[7] += 0.15340036;
          }
        } else {
          if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
            result[7] += -0.1495512;
          } else {
            result[7] += 0.11823036;
          }
        }
      } else {
        result[7] += -0.14981611;
      }
    } else {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)5)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          result[7] += -0.14780486;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)56)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[7] += 0.22411923;
            } else {
              result[7] += -0.1125628;
            }
          } else {
            result[7] += -0.15006652;
          }
        }
      } else {
        result[7] += 0.1238739;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[7] += 0.15636747;
      } else {
        result[7] += -0.1169294;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1377281)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)26732)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
              result[7] += -0.1508551;
            } else {
              result[7] += -0.13608062;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
              result[7] += 0.05842775;
            } else {
              result[7] += -0.14875689;
            }
          }
        } else {
          result[7] += 0.15208918;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
              result[7] += 0.10648549;
            } else {
              result[7] += -0.013201818;
            }
          } else {
            result[7] += -0.155093;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)15)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)343)) {
              result[7] += 0.15905097;
            } else {
              result[7] += -0.13126248;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)129921)) {
              result[7] += -0.1449904;
            } else {
              result[7] += 0.15324564;
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
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            result[8] += -0.12085735;
          } else {
            result[8] += -0.1116257;
          }
        } else {
          result[8] += -0.14819682;
        }
      } else {
        result[8] += -0.14950712;
      }
    } else {
      result[8] += -0.1499265;
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
              result[8] += 0.010669641;
            } else {
              result[8] += 0.15274863;
            }
          } else {
            result[8] += -0.1521455;
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[8] += -0.1499555;
            } else {
              result[8] += -0.17949481;
            }
          } else {
            result[8] += 0.1467465;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[8] += 0.20162597;
            } else {
              result[8] += -0.14993973;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[8] += -0.14261858;
            } else {
              result[8] += -0.017024778;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[8] += -0.15216573;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[8] += 0.046105452;
            } else {
              result[8] += -0.14936116;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[8] += 0.21547644;
            } else {
              result[8] += 0.1723345;
            }
          } else {
            result[8] += -0.14082444;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
            result[8] += -0.18678918;
          } else {
            result[8] += 0.055199385;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
            result[8] += -0.15235911;
          } else {
            result[8] += 0.15646966;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)304)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[8] += -0.14203343;
            } else {
              result[8] += 0.15794799;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
              result[8] += -0.17336024;
            } else {
              result[8] += 0.12732351;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)311377)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1842962816)) {
              result[9] += 0.008426773;
            } else {
              result[9] += -0.14392123;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)37225)) {
              result[9] += 0.088182785;
            } else {
              result[9] += 0.03031317;
            }
          }
        } else {
          result[9] += -0.15078588;
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          result[9] += 0.15239814;
        } else {
          result[9] += -0.14908308;
        }
      }
    } else {
      result[9] += -0.1505021;
    }
  } else {
    result[9] += -0.1509715;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[10] += 0.016369795;
            } else {
              result[10] += -0.14832883;
            }
          } else {
            result[10] += -0.14955764;
          }
        } else {
          result[10] += -0.14992467;
        }
      } else {
        result[10] += -0.15079135;
      }
    } else {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
              result[10] += 0.03148627;
            } else {
              result[10] += 0.11686476;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)919)) {
              result[10] += -0.14761838;
            } else {
              result[10] += 0.017084116;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)20977)) {
              result[10] += 0.17458963;
            } else {
              result[10] += 0.15242523;
            }
          } else {
            result[10] += -0.14923948;
          }
        }
      } else {
        result[10] += -0.1539854;
      }
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
      result[10] += -0.15100509;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
        result[10] += 0.11635811;
      } else {
        result[10] += -0.14789347;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[11] += -0.12406671;
          } else {
            result[11] += -0.14820318;
          }
        } else {
          result[11] += -0.14950685;
        }
      } else {
        result[11] += -0.14992635;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)331)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[11] += 0.043256134;
            } else {
              result[11] += -0.0856913;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
              result[11] += 0.14126326;
            } else {
              result[11] += -0.2151528;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            result[11] += -0.16869316;
          } else {
            result[11] += -0.15142721;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1557)) {
              result[11] += -0.032239616;
            } else {
              result[11] += 0.00076172577;
            }
          } else {
            result[11] += -0.1497729;
          }
        } else {
          result[11] += -0.15465622;
        }
      }
    }
  } else {
    result[11] += -0.15096438;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            result[12] += -0.114257306;
          } else {
            result[12] += -0.1286589;
          }
        } else {
          result[12] += -0.14819178;
        }
      } else {
        result[12] += -0.14950511;
      }
    } else {
      result[12] += -0.14992511;
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)208)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[12] += -0.021069042;
            } else {
              result[12] += -0.15817794;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
              result[12] += 0.15751423;
            } else {
              result[12] += -0.15041263;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[12] += 0.19144335;
            } else {
              result[12] += -0.16256706;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
              result[12] += -0.15420909;
            } else {
              result[12] += 0.025017664;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1614904576)) {
              result[12] += 0.17863293;
            } else {
              result[12] += 0.15349928;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
              result[12] += -0.15146846;
            } else {
              result[12] += 0.15666334;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[12] += -0.14925258;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
              result[12] += 0.14985755;
            } else {
              result[12] += -0.113436885;
            }
          }
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)39287)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
            result[12] += -0.15276739;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
              result[12] += 0.07098705;
            } else {
              result[12] += -0.15114613;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
            result[12] += 0.15457292;
          } else {
            result[12] += -0.14675535;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          result[12] += -0.15359665;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
            result[12] += -0.13394032;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)6)) {
              result[12] += 0.26226252;
            } else {
              result[12] += 0.13156274;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)334)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[13] += -0.123946376;
            } else {
              result[13] += -0.14820716;
            }
          } else {
            result[13] += -0.14951122;
          }
        } else {
          result[13] += -0.14992635;
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
              result[13] += -0.042189535;
            } else {
              result[13] += 0.060887232;
            }
          } else {
            result[13] += -0.14876989;
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
              result[13] += -0.15158154;
            } else {
              result[13] += -0.38205442;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)217)) {
              result[13] += 0.4718674;
            } else {
              result[13] += -0.10551164;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)88881)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.05925424;
            } else {
              result[13] += -0.09534146;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
              result[13] += 0.09033472;
            } else {
              result[13] += 0.16357137;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)321)) {
              result[13] += -0.1545906;
            } else {
              result[13] += 0.08658121;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59130)) {
              result[13] += -0.12405539;
            } else {
              result[13] += 0.15405911;
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)662398464)) {
            result[13] += -0.007955157;
          } else {
            result[13] += -0.14892593;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
            result[13] += -0.0825472;
          } else {
            result[13] += 0.1126582;
          }
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)298)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)104)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)37)) {
          result[13] += 0.15813254;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)39)) {
            result[13] += -0.14768851;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)229)) {
              result[13] += 0.171902;
            } else {
              result[13] += -0.14490937;
            }
          }
        }
      } else {
        result[13] += 0.15271425;
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)487)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
          result[13] += -0.14866929;
        } else {
          result[13] += 0.10973094;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)386)) {
            result[13] += 0.16597834;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[13] += -0.10446478;
            } else {
              result[13] += 0.1514047;
            }
          }
        } else {
          result[13] += 0.16261566;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)441)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
              result[14] += 0.011459383;
            } else {
              result[14] += -0.14154427;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[14] += -0.17022763;
            } else {
              result[14] += -0.14644372;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[14] += -0.15101606;
            } else {
              result[14] += 0.8933718;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[14] += 0.11010795;
            } else {
              result[14] += -0.15072954;
            }
          }
        }
      } else {
        result[14] += -0.15216294;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[14] += -0.2416359;
          } else {
            result[14] += -0.14392444;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)486)) {
            result[14] += 0.15628383;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)109)) {
              result[14] += -0.3721897;
            } else {
              result[14] += 0.14188798;
            }
          }
        }
      } else {
        result[14] += -0.15043731;
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)619)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)35306)) {
          result[14] += -0.1533771;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)54812)) {
              result[14] += 0.521216;
            } else {
              result[14] += 0.13053197;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1295143936)) {
              result[14] += -0.017601486;
            } else {
              result[14] += -0.147844;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)5141)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
              result[14] += -0.119342424;
            } else {
              result[14] += 0.12520877;
            }
          } else {
            result[14] += -0.14730239;
          }
        } else {
          result[14] += -0.15133044;
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)544)) {
            result[14] += -0.14990501;
          } else {
            result[14] += 0.11876503;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
              result[14] += 0.07900554;
            } else {
              result[14] += 0.4072654;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1878)) {
              result[14] += -0.15130612;
            } else {
              result[14] += 0.10982811;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
            result[14] += 0.18317789;
          } else {
            result[14] += -0.15505975;
          }
        } else {
          result[14] += -0.14976634;
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)47553)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[0] += -0.0039813435;
            } else {
              result[0] += -0.14982243;
            }
          } else {
            result[0] += -0.15064678;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2315)) {
              result[0] += -0.025068985;
            } else {
              result[0] += 0.039353203;
            }
          } else {
            result[0] += -0.15134345;
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)940)) {
              result[0] += -0.14990552;
            } else {
              result[0] += -0.12095472;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[0] += 0.08911912;
            } else {
              result[0] += -0.12533484;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
              result[0] += -0.15095153;
            } else {
              result[0] += 0.18851556;
            }
          } else {
            result[0] += -0.15132101;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)419)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)487)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
              result[0] += 0.016299643;
            } else {
              result[0] += -0.14410192;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)54038)) {
              result[0] += -0.15052009;
            } else {
              result[0] += 0.52859366;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[0] += 0.14599739;
            } else {
              result[0] += -0.16599613;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
              result[0] += 0.10034722;
            } else {
              result[0] += -0.15737253;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2567035392)) {
          result[0] += -0.15640281;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
              result[0] += 0.14610071;
            } else {
              result[0] += 0.3229374;
            }
          } else {
            result[0] += -0.15384604;
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1450752896)) {
      result[0] += -0.14923947;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
            result[0] += 0.15561324;
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)477)) {
              result[0] += 0.26099637;
            } else {
              result[0] += 0.15346685;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2020837248)) {
            result[0] += -0.15116292;
          } else {
            result[0] += 0.15247083;
          }
        }
      } else {
        result[0] += -0.14957821;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[1] += -0.14789718;
    } else {
      result[1] += -0.13034412;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)223)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)442)) {
              result[1] += 0.03212607;
            } else {
              result[1] += 0.083464235;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[1] += 0.05590825;
            } else {
              result[1] += -0.15414459;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)151)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)278)) {
              result[1] += -0.061724167;
            } else {
              result[1] += 0.07901908;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[1] += 0.15798974;
            } else {
              result[1] += -0.090804294;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
              result[1] += -0.13406444;
            } else {
              result[1] += 0.7280339;
            }
          } else {
            result[1] += -0.14676167;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
              result[1] += 0.09362945;
            } else {
              result[1] += 0.0040789214;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)486)) {
              result[1] += -0.12123995;
            } else {
              result[1] += 0.08055379;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1957388416)) {
            result[1] += -0.08683923;
          } else {
            result[1] += 0.3233048;
          }
        } else {
          result[1] += -0.13765877;
        }
      } else {
        result[1] += -0.1488694;
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
      result[2] += -0.15035722;
    } else {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)52507)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)49564)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)48082)) {
              result[2] += 0.045427665;
            } else {
              result[2] += -0.019399967;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)50483)) {
              result[2] += 0.1473715;
            } else {
              result[2] += 0.061493773;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)52818)) {
            result[2] += -0.20182206;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)53109)) {
              result[2] += 0.15149146;
            } else {
              result[2] += 0.039049402;
            }
          }
        }
      } else {
        result[2] += -0.14149988;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)60804)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)53284)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)30864)) {
              result[2] += 0.010905817;
            } else {
              result[2] += 0.04796608;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)55824)) {
              result[2] += -0.10596539;
            } else {
              result[2] += 0.009413385;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)61706)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += 0.515267;
            } else {
              result[2] += -0.10557517;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += 0.061431132;
            } else {
              result[2] += -0.13385105;
            }
          }
        }
      } else {
        result[2] += -0.14562418;
      }
    } else {
      result[2] += 0.15194553;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    result[3] += -0.15061763;
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[3] += -0.14985314;
            } else {
              result[3] += 0.15176107;
            }
          } else {
            result[3] += 0.15284523;
          }
        } else {
          result[3] += -0.14677276;
        }
      } else {
        result[3] += -0.14999883;
      }
    } else {
      result[3] += -0.15029544;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            result[4] += -0.13219535;
          } else {
            result[4] += -0.14960116;
          }
        } else {
          result[4] += -0.15029372;
        }
      } else {
        result[4] += -0.15074761;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)38841)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)36088)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)27511)) {
              result[4] += 0.041008443;
            } else {
              result[4] += 0.066341035;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)37226)) {
              result[4] += -0.11751332;
            } else {
              result[4] += -0.0052789776;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)39125)) {
            result[4] += 0.18934914;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)41059)) {
              result[4] += 0.009719876;
            } else {
              result[4] += 0.05741946;
            }
          }
        }
      } else {
        result[4] += -0.14924727;
      }
    }
  } else {
    result[4] += 0.15238205;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[5] += 0.022706317;
            } else {
              result[5] += -0.15194777;
            }
          } else {
            result[5] += -0.1545541;
          }
        } else {
          result[5] += -0.15166439;
        }
      } else {
        result[5] += -0.15097287;
      }
    } else {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)63923)) {
              result[5] += 0.19838239;
            } else {
              result[5] += 0.15921053;
            }
          } else {
            result[5] += -0.13166845;
          }
        } else {
          result[5] += -0.13832127;
        }
      } else {
        result[5] += -0.1429785;
      }
    }
  } else {
    result[5] += -0.15129587;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[6] += 0.003396041;
            } else {
              result[6] += -0.1368316;
            }
          } else {
            result[6] += -0.14924417;
          }
        } else {
          result[6] += -0.150264;
        }
      } else {
        result[6] += -0.14981523;
      }
    } else {
      result[6] += 0.152333;
    }
  } else {
    result[6] += -0.15074697;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)6065)) {
          if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
              result[7] += -0.058653757;
            } else {
              result[7] += -0.11298963;
            }
          } else {
            result[7] += 0.1502727;
          }
        } else {
          if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
            result[7] += -0.149295;
          } else {
            result[7] += 0.11182127;
          }
        }
      } else {
        result[7] += -0.1496799;
      }
    } else {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            result[7] += -0.14694738;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[7] += -0.14922193;
            } else {
              result[7] += 0.23136845;
            }
          }
        } else {
          result[7] += -0.15021142;
        }
      } else {
        result[7] += 0.11808904;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[7] += 0.15521723;
      } else {
        result[7] += -0.11201199;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1377281)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)26732)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
              result[7] += -0.15061933;
            } else {
              result[7] += -0.13262655;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
              result[7] += -0.14820494;
            } else {
              result[7] += 0.05864792;
            }
          }
        } else {
          result[7] += 0.1511189;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
              result[7] += 0.036792703;
            } else {
              result[7] += -0.0999815;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)65535)) {
              result[7] += 0.27463552;
            } else {
              result[7] += -0.15286043;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)15)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)343)) {
              result[7] += 0.1573432;
            } else {
              result[7] += -0.12265824;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
              result[7] += -0.15135612;
            } else {
              result[7] += 0.14434782;
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
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            result[8] += -0.11688422;
          } else {
            result[8] += -0.10684159;
          }
        } else {
          result[8] += -0.14749622;
        }
      } else {
        result[8] += -0.14924744;
      }
    } else {
      result[8] += -0.14981721;
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[8] += 0.010846456;
            } else {
              result[8] += -0.16608433;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
              result[8] += 0.22542955;
            } else {
              result[8] += 0.0069344426;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
            result[8] += -0.15310311;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
              result[8] += 0.106899604;
            } else {
              result[8] += -0.15241799;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[8] += 0.18641852;
            } else {
              result[8] += -0.1493822;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[8] += -0.13377677;
            } else {
              result[8] += -0.014104;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[8] += -0.15188777;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[8] += 0.03344775;
            } else {
              result[8] += -0.14894208;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46186)) {
              result[8] += 0.19260544;
            } else {
              result[8] += 0.14974794;
            }
          } else {
            result[8] += -0.13643798;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
            result[8] += -0.17221515;
          } else {
            result[8] += 0.04991628;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
            result[8] += -0.15180846;
          } else {
            result[8] += 0.15457593;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)304)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[8] += -0.13955815;
            } else {
              result[8] += 0.15226398;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
              result[8] += -0.17236392;
            } else {
              result[8] += 0.1167171;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)311377)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
              result[9] += 0.024879463;
            } else {
              result[9] += -0.15017362;
            }
          } else {
            result[9] += -0.1500816;
          }
        } else {
          result[9] += -0.15061027;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          result[9] += -0.13114925;
        } else {
          result[9] += 0.15176243;
        }
      }
    } else {
      result[9] += -0.15039974;
    }
  } else {
    result[9] += -0.15083325;
  }
}


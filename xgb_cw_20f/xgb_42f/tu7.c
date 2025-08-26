
#include "header.h"

void predict_unit7(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[14] += -0.0029743945;
            } else {
              result[14] += 0.061597403;
            }
          } else {
            result[14] += -0.14705354;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            result[14] += -0.15229574;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += -0.059960768;
            } else {
              result[14] += 0.17512709;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
              result[14] += 0.047612913;
            } else {
              result[14] += -0.0728532;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[14] += 0.13608651;
            } else {
              result[14] += -0.07680607;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.15170223;
            } else {
              result[14] += 0.0108774435;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[14] += 0.08226511;
            } else {
              result[14] += -0.13865173;
            }
          }
        }
      }
    } else {
      result[14] += -0.14832042;
    }
  } else {
    result[14] += -0.14857545;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[0] += 0.008661127;
            } else {
              result[0] += -0.14406936;
            }
          } else {
            result[0] += -0.14417708;
          }
        } else {
          result[0] += -0.1498294;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1072968960)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1001994624)) {
              result[0] += 0.020624438;
            } else {
              result[0] += -0.13294901;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[0] += 0.09592314;
            } else {
              result[0] += 0.22479579;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[0] += -0.14940147;
            } else {
              result[0] += -0.07452386;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += 0.8009469;
            } else {
              result[0] += 0.055822816;
            }
          }
        }
      }
    } else {
      result[0] += -0.14852127;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
        result[0] += -0.14599928;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
            result[0] += -0.12486142;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23807)) {
              result[0] += 0.09105481;
            } else {
              result[0] += 0.031408474;
            }
          }
        } else {
          result[0] += -0.14269061;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          result[0] += -0.07799282;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            result[0] += 0.40475568;
          } else {
            result[0] += 0.16055647;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
            result[0] += -0.14775063;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2692863232)) {
              result[0] += 0.13793804;
            } else {
              result[0] += -0.14812286;
            }
          }
        } else {
          result[0] += 0.121072434;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[1] += -0.12608568;
            } else {
              result[1] += -0.0038846012;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
              result[1] += 0.014862697;
            } else {
              result[1] += 0.11298064;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += 0.09982259;
            } else {
              result[1] += 0.038489357;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[1] += -0.0063259723;
            } else {
              result[1] += -0.15803248;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            result[1] += -0.15886933;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[1] += -0.24339814;
            } else {
              result[1] += -0.14614864;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)31487)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5394)) {
              result[1] += 0.093456164;
            } else {
              result[1] += -0.13645762;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[1] += 0.14827862;
            } else {
              result[1] += -0.12534493;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
              result[1] += -0.14446796;
            } else {
              result[1] += 0.5160693;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += 1.1772728;
            } else {
              result[1] += -0.09703384;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
              result[1] += -0.07776925;
            } else {
              result[1] += 0.1032913;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[1] += -0.17699458;
            } else {
              result[1] += 0.11704809;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.09666247;
            } else {
              result[1] += -0.14079632;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[1] += -0.065872766;
            } else {
              result[1] += 0.0663171;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.16121301;
            } else {
              result[1] += -0.037713513;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.13091007;
            } else {
              result[1] += -0.1349322;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)702701760)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 0.21496932;
            } else {
              result[1] += 0.04856455;
            }
          } else {
            result[1] += -0.12915698;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59171)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2742782464)) {
              result[1] += -0.01520308;
            } else {
              result[1] += -0.09739944;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[1] += 0.16440319;
            } else {
              result[1] += -0.11919304;
            }
          }
        }
      } else {
        result[1] += -0.14386073;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        result[1] += -0.15240344;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46835)) {
              result[1] += 0.12365318;
            } else {
              result[1] += -0.03423529;
            }
          } else {
            result[1] += -0.109391876;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[1] += -0.14458768;
            } else {
              result[1] += -0.35646904;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.00786173;
            } else {
              result[1] += -0.14610954;
            }
          }
        }
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        result[2] += -0.14917172;
      } else {
        result[2] += -0.08418021;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
              result[2] += -0.026009446;
            } else {
              result[2] += 0.04974544;
            }
          } else {
            result[2] += -0.05718353;
          }
        } else {
          result[2] += 0.09366899;
        }
      } else {
        result[2] += -0.102021895;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)786)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += 0.024354236;
        } else {
          result[2] += -0.048712123;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1280)) {
          result[2] += 0.06734583;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1556)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.05330864;
            } else {
              result[2] += 0.019657575;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1805)) {
              result[2] += 0.065894686;
            } else {
              result[2] += 0.010140889;
            }
          }
        }
      }
    } else {
      result[2] += 0.1497455;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.14992031;
    } else {
      result[3] += -0.08189877;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[3] += -0.12703456;
            } else {
              result[3] += 0.14764048;
            }
          } else {
            result[3] += 0.14850238;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.14362577;
          } else {
            result[3] += 0.14850724;
          }
        }
      } else {
        result[3] += -0.14447828;
      }
    } else {
      result[3] += -0.14886744;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[4] += -0.1495753;
      } else {
        result[4] += -0.04440048;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
              result[4] += 0.10174264;
            } else {
              result[4] += -0.05888006;
            }
          } else {
            result[4] += 0.123763934;
          }
        } else {
          result[4] += 0.022319395;
        }
      } else {
        result[4] += -0.1411001;
      }
    }
  } else {
    result[4] += 0.14896858;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[5] += -0.02942549;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[5] += -0.011289058;
            } else {
              result[5] += -0.0025933685;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)53560)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)50669)) {
              result[5] += 0.01149095;
            } else {
              result[5] += -0.025705982;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)54081)) {
              result[5] += 0.14981715;
            } else {
              result[5] += 0.012207126;
            }
          }
        }
      } else {
        result[5] += -0.14181997;
      }
    } else {
      result[5] += -0.14262001;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.14992218;
      } else {
        result[5] += 0.11168858;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
        result[5] += -0.14608783;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[5] += 0.07282128;
            } else {
              result[5] += 0.49224636;
            }
          } else {
            result[5] += -0.1359491;
          }
        } else {
          result[5] += -0.14311327;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[6] += 0.0018599713;
          } else {
            result[6] += 0.13841462;
          }
        } else {
          result[6] += -0.14152166;
        }
      } else {
        result[6] += -0.14252199;
      }
    } else {
      result[6] += -0.14324547;
    }
  } else {
    result[6] += -0.14994082;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[7] += -0.0011698331;
            } else {
              result[7] += 0.15044028;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[7] += -0.16711071;
            } else {
              result[7] += -0.00020841944;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[7] += -0.0968358;
          } else {
            result[7] += 0.14962932;
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[7] += -0.15416345;
            } else {
              result[7] += -0.026815152;
            }
          } else {
            result[7] += -0.5449093;
          }
        } else {
          result[7] += 0.13942535;
        }
      }
    } else {
      result[7] += 0.15006046;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          result[7] += 0.14989191;
        } else {
          result[7] += -0.071029246;
        }
      } else {
        result[7] += -0.120522894;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[7] += -0.12341436;
            } else {
              result[7] += 0.25033358;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[7] += -0.13032103;
            } else {
              result[7] += -0.1639227;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            result[7] += -0.14750597;
          } else {
            result[7] += 0.16317841;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[7] += -0.14455853;
        } else {
          result[7] += 0.15017964;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2809073152)) {
              result[8] += -0.08165211;
            } else {
              result[8] += 0.10071465;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += 0.01441208;
            } else {
              result[8] += -0.013496372;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)29160)) {
              result[8] += 0.11502476;
            } else {
              result[8] += 0.08053556;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[8] += -0.040342465;
            } else {
              result[8] += -0.14200811;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
              result[8] += -0.0016111329;
            } else {
              result[8] += -0.15251544;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[8] += -0.1551479;
            } else {
              result[8] += -0.026993891;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[8] += -0.15426604;
            } else {
              result[8] += 0.0762157;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += -0.03944213;
            } else {
              result[8] += 0.09298889;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46333)) {
              result[8] += 0.15925807;
            } else {
              result[8] += 0.09843064;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
              result[8] += -0.1412642;
            } else {
              result[8] += 0.14924222;
            }
          }
        } else {
          result[8] += -0.13287218;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[8] += -0.034255043;
            } else {
              result[8] += 0.15149973;
            }
          } else {
            result[8] += -0.16167253;
          }
        } else {
          result[8] += 0.150424;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.15602766;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.14411673;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[8] += 0.1445457;
          } else {
            result[8] += -0.0804528;
          }
        }
      } else {
        result[8] += -0.15365702;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[9] += 0.023619274;
          } else {
            result[9] += -0.08080541;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[9] += 0.0014898373;
          } else {
            result[9] += -0.0023992052;
          }
        }
      } else {
        result[9] += -0.14445017;
      }
    } else {
      result[9] += -0.14487943;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
          result[9] += -0.14942318;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.1391859;
            } else {
              result[9] += -0.08567846;
            }
          } else {
            result[9] += -0.14329572;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)351236864)) {
            result[9] += 0.06750095;
          } else {
            result[9] += 0.14571685;
          }
        } else {
          result[9] += -0.1309068;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.13321418;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
              result[9] += 0.07318242;
            } else {
              result[9] += -0.1260208;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[9] += 0.10134236;
            } else {
              result[9] += -0.07878434;
            }
          }
        }
      } else {
        result[9] += -0.14680584;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.005272836;
            } else {
              result[10] += -0.14283778;
            }
          } else {
            result[10] += -0.14459744;
          }
        } else {
          result[10] += -0.14966592;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
              result[10] += 0.01099097;
            } else {
              result[10] += -0.14600772;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
              result[10] += 0.13836248;
            } else {
              result[10] += 0.022946283;
            }
          }
        } else {
          result[10] += -0.14297648;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
        result[10] += -0.148784;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
          result[10] += 0.22118366;
        } else {
          result[10] += -0.086889975;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[10] += -0.14832011;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[10] += -0.1335097;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2371643392)) {
              result[10] += 0.014265902;
            } else {
              result[10] += 0.18493463;
            }
          } else {
            result[10] += -0.118490584;
          }
        }
      } else {
        result[10] += -0.14806779;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[11] += -0.002785574;
            } else {
              result[11] += 0.016531043;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[11] += 0.085246496;
            } else {
              result[11] += -0.053598933;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
            result[11] += -0.15163864;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[11] += 0.017982848;
            } else {
              result[11] += -0.1427767;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.14352736;
            } else {
              result[11] += -0.16225852;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[11] += -0.1662034;
            } else {
              result[11] += -0.018443484;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[11] += -0.79082584;
            } else {
              result[11] += -0.14434588;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[11] += 0.12791799;
            } else {
              result[11] += -0.15754168;
            }
          }
        }
      }
    } else {
      result[11] += -0.14835294;
    }
  } else {
    result[11] += -0.1495039;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += 0.001218823;
            } else {
              result[12] += 0.063386776;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[12] += -0.13456021;
            } else {
              result[12] += 0.057419896;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 0.05699253;
            } else {
              result[12] += -0.14886604;
            }
          } else {
            result[12] += -0.14806807;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          result[12] += -0.15705815;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
              result[12] += 0.077548504;
            } else {
              result[12] += 0.22729988;
            }
          } else {
            result[12] += -0.14630784;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
              result[12] += 0.048034888;
            } else {
              result[12] += -0.071752355;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44297)) {
              result[12] += 0.14895728;
            } else {
              result[12] += 0.010324484;
            }
          }
        } else {
          result[12] += -0.14418411;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
              result[12] += -0.09069207;
            } else {
              result[12] += 0.13747175;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
              result[12] += 0.16979691;
            } else {
              result[12] += 0.101561256;
            }
          }
        } else {
          result[12] += -0.006692752;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[12] += -0.15011817;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[12] += 0.13086921;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[12] += -0.14531207;
            } else {
              result[12] += 0.019676102;
            }
          } else {
            result[12] += -0.14656846;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)215123600)) {
              result[12] += 0.10994771;
            } else {
              result[12] += -0.056274597;
            }
          } else {
            result[12] += 0.14389336;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[12] += 0.079521075;
          } else {
            result[12] += -0.06583501;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
          result[12] += -0.14920649;
        } else {
          result[12] += 0.10738955;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.0054482142;
            } else {
              result[13] += 0.06774615;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += -0.113705195;
            } else {
              result[13] += -0.14207332;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += 0.011120729;
            } else {
              result[13] += 0.15687051;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[13] += 0.10167035;
            } else {
              result[13] += -0.031745315;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[13] += -0.14816108;
            } else {
              result[13] += -0.20720613;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.08397012;
            } else {
              result[13] += -0.14015141;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += 1.996515;
            } else {
              result[13] += 0.17337245;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[13] += -0.14135443;
            } else {
              result[13] += 0.14537433;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[13] += 0.14599045;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
              result[13] += 0.03937418;
            } else {
              result[13] += -0.11475902;
            }
          }
        } else {
          result[13] += 0.15457922;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)307)) {
            result[13] += -0.13562512;
          } else {
            result[13] += 0.015705783;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3217214720)) {
              result[13] += 0.14327905;
            } else {
              result[13] += 0.04243909;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36818)) {
              result[13] += 0.069201365;
            } else {
              result[13] += -0.117531866;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        result[13] += -0.13221431;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
          result[13] += 0.15006843;
        } else {
          result[13] += -0.025299381;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
        result[13] += -0.15206613;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2398340864)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
            result[13] += 0.19916947;
          } else {
            result[13] += -0.07880099;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            result[13] += -0.1482315;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[13] += -0.11216784;
            } else {
              result[13] += 0.1591003;
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
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[14] += 0.0007824631;
            } else {
              result[14] += -0.14576405;
            }
          } else {
            result[14] += -0.14611311;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            result[14] += -0.15170072;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[14] += 0.14380974;
            } else {
              result[14] += -0.06222938;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
              result[14] += 0.041809663;
            } else {
              result[14] += 0.111608125;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17686)) {
              result[14] += 0.07589123;
            } else {
              result[14] += 0.13267165;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.1514178;
            } else {
              result[14] += 0.0038724802;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[14] += 0.07485551;
            } else {
              result[14] += -0.13618635;
            }
          }
        }
      }
    } else {
      result[14] += -0.14780751;
    }
  } else {
    result[14] += -0.14812772;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[0] += 0.0071135596;
            } else {
              result[0] += -0.1423192;
            }
          } else {
            result[0] += -0.14234895;
          }
        } else {
          result[0] += -0.1496927;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1072968960)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[0] += 0.012408773;
            } else {
              result[0] += 0.09197472;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[0] += 0.088421315;
            } else {
              result[0] += 0.20255484;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[0] += -0.14887601;
            } else {
              result[0] += -0.06360404;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[0] += -0.14162444;
            } else {
              result[0] += 0.13261189;
            }
          }
        }
      }
    } else {
      result[0] += -0.14823982;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
        result[0] += -0.14488187;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[0] += -0.11876521;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23807)) {
              result[0] += 0.08211234;
            } else {
              result[0] += 0.024708403;
            }
          }
        } else {
          result[0] += -0.14079076;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
          result[0] += -0.079100646;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
            result[0] += 0.13563694;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[0] += 0.38673118;
            } else {
              result[0] += 0.16570504;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
            result[0] += -0.14703329;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2692863232)) {
              result[0] += 0.123122536;
            } else {
              result[0] += -0.14627653;
            }
          }
        } else {
          result[0] += 0.11410338;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)17)) {
              result[1] += -0.00037851793;
            } else {
              result[1] += 0.1403738;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[1] += -0.15532829;
            } else {
              result[1] += 0.10430308;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[1] += 0.15622953;
            } else {
              result[1] += -0.13619474;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
              result[1] += -0.07118233;
            } else {
              result[1] += 0.031939413;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)428962464)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
            result[1] += -0.13710643;
          } else {
            result[1] += 0.09114984;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            result[1] += -0.16075045;
          } else {
            result[1] += -0.022467652;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 0.2804386;
            } else {
              result[1] += 0.12718867;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[1] += 0.85096496;
            } else {
              result[1] += -0.09646901;
            }
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[1] += -0.080187716;
            } else {
              result[1] += 0.086528406;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[1] += -0.07086968;
            } else {
              result[1] += 0.25699207;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.004509694;
            } else {
              result[1] += -0.19619441;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[1] += -0.05464957;
            } else {
              result[1] += 0.08458342;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[1] += 0.14813006;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[1] += -0.15607712;
            } else {
              result[1] += 0.12572141;
            }
          }
        }
      }
    }
  } else {
    result[1] += -0.14942634;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        result[2] += -0.14892568;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[2] += -0.08638602;
        } else {
          result[2] += -0.051772956;
        }
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
          result[2] += -0.024652878;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
            result[2] += 0.10447346;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
              result[2] += -0.05508991;
            } else {
              result[2] += 0.044612397;
            }
          }
        }
      } else {
        result[2] += -0.09357414;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)47877)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)44766)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)44284)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)43510)) {
              result[2] += 0.009086778;
            } else {
              result[2] += 0.07599743;
            }
          } else {
            result[2] += -0.083291195;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)46100)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)45299)) {
              result[2] += 0.04477547;
            } else {
              result[2] += 0.10999106;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += 0.013193879;
            } else {
              result[2] += -0.014017199;
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)51430)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)48906)) {
            result[2] += -0.08989431;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)50397)) {
              result[2] += 0.017260553;
            } else {
              result[2] += -0.06513044;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)51984)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)51715)) {
              result[2] += 0.14592595;
            } else {
              result[2] += 0.0500617;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)55885)) {
              result[2] += -0.031069448;
            } else {
              result[2] += 0.017154038;
            }
          }
        }
      }
    } else {
      result[2] += 0.14956002;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.14984798;
    } else {
      result[3] += -0.077099495;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[3] += -0.12241488;
            } else {
              result[3] += 0.14687596;
            }
          } else {
            result[3] += 0.14796801;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.14245394;
          } else {
            result[3] += 0.14768524;
          }
        }
      } else {
        result[3] += -0.14339508;
      }
    } else {
      result[3] += -0.14852181;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[4] += -0.14942288;
      } else {
        result[4] += -0.042499326;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)46494)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
              result[4] += 0.12251546;
            } else {
              result[4] += -0.07622418;
            }
          } else {
            result[4] += 0.123367965;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
            result[4] += -0.080672026;
          } else {
            result[4] += 0.09339679;
          }
        }
      } else {
        result[4] += -0.13832632;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.14967316;
    } else {
      result[4] += -0.08057404;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[5] += -0.025812527;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[5] += -0.0099079795;
            } else {
              result[5] += -0.0024549393;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)10262)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)9760)) {
              result[5] += 0.00770064;
            } else {
              result[5] += -0.12442693;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)13573)) {
              result[5] += 0.041605525;
            } else {
              result[5] += 0.009414586;
            }
          }
        }
      } else {
        result[5] += -0.13934106;
      }
    } else {
      result[5] += -0.140297;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.14985363;
      } else {
        result[5] += 0.11133944;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
        result[5] += -0.14496207;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[5] += 0.1234407;
            } else {
              result[5] += -0.11413256;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[5] += -0.047707412;
            } else {
              result[5] += 0.14375205;
            }
          }
        } else {
          result[5] += -0.14129269;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[6] += 0.001514831;
          } else {
            result[6] += 0.13608828;
          }
        } else {
          result[6] += -0.14026512;
        }
      } else {
        result[6] += -0.14022952;
      }
    } else {
      result[6] += -0.14129229;
    }
  } else {
    result[6] += -0.14987549;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[7] += 0.0004485161;
            } else {
              result[7] += 0.14256525;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[7] += -0.029649202;
            } else {
              result[7] += 0.0692934;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[7] += -0.1490557;
            } else {
              result[7] += -0.47097245;
            }
          } else {
            result[7] += 0.13607678;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
          result[7] += -0.14790599;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1496744960)) {
            result[7] += 0.053310808;
          } else {
            result[7] += -0.10416802;
          }
        }
      }
    } else {
      result[7] += 0.14988421;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          result[7] += 0.14964214;
        } else {
          result[7] += -0.059875526;
        }
      } else {
        result[7] += -0.114069216;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[7] += -0.11800263;
            } else {
              result[7] += 0.23821631;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[7] += -0.12655161;
            } else {
              result[7] += -0.16363275;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            result[7] += -0.14108615;
          } else {
            result[7] += 0.15936479;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[7] += -0.14231893;
        } else {
          result[7] += 0.14998661;
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
              result[8] += 0.001446343;
            } else {
              result[8] += 0.10498766;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[8] += -0.14875732;
            } else {
              result[8] += -0.09658209;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += 0.039304554;
            } else {
              result[8] += -0.15444566;
            }
          } else {
            result[8] += 0.15109423;
          }
        }
      } else {
        result[8] += -0.16681229;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[8] += -0.09517842;
          } else {
            result[8] += 0.15193355;
          }
        } else {
          result[8] += -0.12373001;
        }
      } else {
        result[8] += -0.14593421;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.15510781;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.14254116;
        } else {
          result[8] += 0.1406234;
        }
      } else {
        result[8] += -0.15305954;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[9] += 0.007116422;
            } else {
              result[9] += -0.14277555;
            }
          } else {
            result[9] += -0.14325404;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            result[9] += -0.1495855;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.14942989;
            } else {
              result[9] += -0.1279735;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[9] += -0.11156864;
            } else {
              result[9] += 0.09846105;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
              result[9] += 0.079658404;
            } else {
              result[9] += -0.15819052;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)4620)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[9] += 0.10773895;
            } else {
              result[9] += -0.2763461;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
              result[9] += 0.13522549;
            } else {
              result[9] += 0.08926288;
            }
          }
        }
      }
    } else {
      result[9] += -0.1487571;
    }
  } else {
    result[9] += -0.14953752;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.0023115855;
            } else {
              result[10] += -0.1406314;
            }
          } else {
            result[10] += -0.14307515;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[10] += -0.15026197;
            } else {
              result[10] += -0.010266091;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
              result[10] += 0.15680154;
            } else {
              result[10] += 0.0030541637;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)43798)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33010)) {
              result[10] += 0.02005371;
            } else {
              result[10] += -0.029206313;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3994002688)) {
              result[10] += 0.24508706;
            } else {
              result[10] += 0.079616874;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)51204)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)330195200)) {
              result[10] += -0.04685817;
            } else {
              result[10] += 0.12526798;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)52745)) {
              result[10] += -0.08625981;
            } else {
              result[10] += 0.04176037;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
        result[10] += -0.14856026;
      } else {
        result[10] += 0.08277741;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[10] += -0.14784679;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
              result[10] += -0.11821507;
            } else {
              result[10] += 0.19348754;
            }
          } else {
            result[10] += -0.13921246;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
              result[10] += 0.30228117;
            } else {
              result[10] += 0.13552633;
            }
          } else {
            result[10] += -0.11328021;
          }
        }
      } else {
        result[10] += -0.14743319;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.0036874556;
            } else {
              result[11] += -0.10057664;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += 0.06612149;
            } else {
              result[11] += -0.008046504;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
            result[11] += -0.15129396;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
              result[11] += 0.050159324;
            } else {
              result[11] += -0.0066301306;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.14090852;
            } else {
              result[11] += -0.15307982;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[11] += -0.15894881;
            } else {
              result[11] += -0.01905343;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[11] += -0.7720305;
            } else {
              result[11] += -0.14113621;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[11] += 0.12285719;
            } else {
              result[11] += -0.15157413;
            }
          }
        }
      }
    } else {
      result[11] += -0.14777412;
    }
  } else {
    result[11] += -0.14935014;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[12] += 0.004254335;
            } else {
              result[12] += -0.14902233;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[12] += 0.14121677;
            } else {
              result[12] += -0.06070473;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
              result[12] += -0.1409038;
            } else {
              result[12] += 0.013274544;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[12] += 0.20619674;
            } else {
              result[12] += -0.1457345;
            }
          }
        }
      } else {
        result[12] += -0.15694425;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
              result[12] += 0.070126265;
            } else {
              result[12] += -0.03442333;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
              result[12] += 0.095975175;
            } else {
              result[12] += 0.04191163;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[12] += -0.14076737;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
              result[12] += -0.084260434;
            } else {
              result[12] += 0.13130325;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1885973376)) {
              result[12] += 0.30131763;
            } else {
              result[12] += 0.10678273;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
              result[12] += 0.15762696;
            } else {
              result[12] += 0.097297944;
            }
          }
        } else {
          result[12] += -0.0038596608;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[12] += -0.14972746;
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[12] += -0.02360589;
            } else {
              result[12] += 0.18321228;
            }
          } else {
            result[12] += -0.14487271;
          }
        } else {
          result[12] += -0.14589141;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
          result[12] += 0.13387083;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
            result[12] += -0.14992762;
          } else {
            result[12] += 0.12473587;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
          result[12] += -0.1456436;
        } else {
          result[12] += 0.09825786;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3338)) {
              result[13] += -0.047816347;
            } else {
              result[13] += 0.018113941;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.14450954;
            } else {
              result[13] += 0.017045321;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[13] += 0.022153653;
            } else {
              result[13] += 0.05824787;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[13] += 0.10053266;
            } else {
              result[13] += 0.18011144;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
              result[13] += -0.15126626;
            } else {
              result[13] += -0.06830071;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.06858761;
            } else {
              result[13] += -0.13620417;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.3054418;
            } else {
              result[13] += -0.102050036;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[13] += -0.1380744;
            } else {
              result[13] += 0.12776135;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[13] += 0.14374349;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
              result[13] += 0.03412133;
            } else {
              result[13] += -0.11157322;
            }
          }
        } else {
          result[13] += 0.15399267;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)307)) {
            result[13] += -0.1305056;
          } else {
            result[13] += 0.014613035;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3217214720)) {
              result[13] += 0.13705435;
            } else {
              result[13] += 0.037362598;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31487)) {
              result[13] += 0.08508103;
            } else {
              result[13] += -0.07774136;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        result[13] += -0.12889987;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
          result[13] += 0.13512596;
        } else {
          result[13] += -0.03016546;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
        result[13] += -0.15207204;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2398340864)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
            result[13] += -0.080882095;
          } else {
            result[13] += 0.20090565;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            result[13] += -0.14772792;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[13] += -0.1085949;
            } else {
              result[13] += 0.13622817;
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += 0.0010255864;
            } else {
              result[14] += -0.075205654;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[14] += 0.021370986;
            } else {
              result[14] += -0.14433411;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            result[14] += -0.15118016;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[14] += 0.033333093;
            } else {
              result[14] += 0.3671988;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
              result[14] += 0.042140804;
            } else {
              result[14] += 0.13035479;
            }
          } else {
            result[14] += -0.12270724;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.15052314;
            } else {
              result[14] += 0.0032996784;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[14] += 0.087869585;
            } else {
              result[14] += -0.12952307;
            }
          }
        }
      }
    } else {
      result[14] += -0.14704894;
    }
  } else {
    result[14] += -0.1478614;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[0] += 0.0061210264;
            } else {
              result[0] += -0.1400126;
            }
          } else {
            result[0] += -0.14014;
          }
        } else {
          result[0] += -0.14954863;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[0] += 0.02962195;
            } else {
              result[0] += -0.14428173;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += 0.80861014;
            } else {
              result[0] += 0.09544129;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[0] += -0.13065459;
          } else {
            result[0] += -0.26342565;
          }
        }
      }
    } else {
      result[0] += -0.14792214;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
        result[0] += -0.14341559;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
            result[0] += -0.11197469;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23807)) {
              result[0] += 0.07288119;
            } else {
              result[0] += 0.024312763;
            }
          }
        } else {
          result[0] += -0.13843149;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
        result[0] += -0.14620103;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          result[0] += -0.13794163;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3800402176)) {
              result[0] += 0.18309523;
            } else {
              result[0] += -0.09332587;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[0] += 0.09295091;
            } else {
              result[0] += -0.14087188;
            }
          }
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
              result[1] += -0.00287454;
            } else {
              result[1] += 0.15381974;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[1] += -0.15415303;
            } else {
              result[1] += 0.06206306;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[1] += 0.15459408;
            } else {
              result[1] += -0.1245086;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[1] += 0.01919911;
            } else {
              result[1] += -0.15499035;
            }
          }
        }
      } else {
        result[1] += -0.15101478;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[1] += 0.024208477;
            } else {
              result[1] += -0.13023189;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.12434169;
            } else {
              result[1] += 0.010624028;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += -0.03526569;
            } else {
              result[1] += 0.2002386;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[1] += -0.14779557;
            } else {
              result[1] += -0.05195426;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
          result[1] += -0.15247872;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
              result[1] += 0.16473274;
            } else {
              result[1] += -0.042147752;
            }
          } else {
            result[1] += 0.14887638;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)428962464)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[1] += 0.094887026;
        } else {
          result[1] += -0.13927037;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[1] += 0.019063326;
            } else {
              result[1] += -0.14587498;
            }
          } else {
            result[1] += 0.063788936;
          }
        } else {
          result[1] += -0.1642164;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)19991)) {
            result[1] += -0.05374145;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)55060)) {
              result[1] += 0.18053837;
            } else {
              result[1] += 0.007921646;
            }
          }
        } else {
          result[1] += -0.099151224;
        }
      } else {
        result[1] += -0.14379138;
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        result[2] += -0.14863564;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[2] += -0.080888554;
        } else {
          result[2] += -0.046957467;
        }
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
              result[2] += 0.027102912;
            } else {
              result[2] += 0.10455217;
            }
          } else {
            result[2] += -0.04940087;
          }
        } else {
          result[2] += 0.089797944;
        }
      } else {
        result[2] += -0.084858686;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)37885)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)36088)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)35330)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)27439)) {
              result[2] += 0.012825984;
            } else {
              result[2] += 0.00037707368;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)35553)) {
              result[2] += -0.15566516;
            } else {
              result[2] += -0.017488806;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)36349)) {
            result[2] += 0.17770958;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)37341)) {
              result[2] += -0.0069327815;
            } else {
              result[2] += 0.0886684;
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)41406)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)41154)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)40628)) {
              result[2] += -0.030684657;
            } else {
              result[2] += 0.06694304;
            }
          } else {
            result[2] += -0.18378672;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)41951)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)41676)) {
              result[2] += 0.011922572;
            } else {
              result[2] += 0.14497131;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)42212)) {
              result[2] += -0.07743102;
            } else {
              result[2] += 0.009546605;
            }
          }
        }
      }
    } else {
      result[2] += 0.1493786;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.1497661;
    } else {
      result[3] += -0.072029255;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          result[3] += 0.13728914;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.14125301;
          } else {
            result[3] += 0.1469885;
          }
        }
      } else {
        result[3] += -0.14227928;
      }
    } else {
      result[3] += -0.14807318;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[4] += -0.1492451;
      } else {
        result[4] += -0.040339492;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
            result[4] += 0.023395818;
          } else {
            result[4] += 0.1465006;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)21042)) {
            result[4] += -0.0812704;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46494)) {
              result[4] += 0.11716842;
            } else {
              result[4] += 0.038625143;
            }
          }
        }
      } else {
        result[4] += -0.13482423;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.14951092;
    } else {
      result[4] += -0.077551864;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[5] += -0.02250411;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[5] += -0.0083090495;
            } else {
              result[5] += -0.0016003754;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)59216)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)58434)) {
              result[5] += 0.009503485;
            } else {
              result[5] += -0.13760193;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)60490)) {
              result[5] += 0.07080557;
            } else {
              result[5] += 0.005733192;
            }
          }
        }
      } else {
        result[5] += -0.13621597;
      }
    } else {
      result[5] += -0.13735011;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.14977463;
      } else {
        result[5] += 0.1089452;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
        result[5] += -0.14357479;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[5] += 0.111544974;
            } else {
              result[5] += -0.10656928;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[5] += -0.042515796;
            } else {
              result[5] += 0.1349346;
            }
          }
        } else {
          result[5] += -0.13947077;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[6] += 0.0013013626;
          } else {
            result[6] += 0.13364714;
          }
        } else {
          result[6] += -0.13733143;
        }
      } else {
        result[6] += -0.1388317;
      }
    } else {
      result[6] += -0.13887797;
    }
  } else {
    result[6] += -0.14980073;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.015761089;
            } else {
              result[7] += -0.0088719;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.090485066;
            } else {
              result[7] += 0.14910558;
            }
          }
        } else {
          result[7] += -0.15158999;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
          result[7] += -0.14719856;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            result[7] += -0.101445824;
          } else {
            result[7] += 0.050278563;
          }
        }
      }
    } else {
      result[7] += 0.14972024;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
          result[7] += 0.14931826;
        } else {
          result[7] += -0.07901778;
        }
      } else {
        result[7] += -0.10731034;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[7] += -0.11153673;
            } else {
              result[7] += 0.22544698;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
              result[7] += -0.15307505;
            } else {
              result[7] += -0.047482245;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            result[7] += -0.13512929;
          } else {
            result[7] += 0.15639251;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[7] += -0.14040093;
        } else {
          result[7] += 0.1497826;
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
              result[8] += -0.0012268825;
            } else {
              result[8] += 0.14005601;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[8] += -0.15109885;
            } else {
              result[8] += -0.011557613;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += 0.076685295;
            } else {
              result[8] += -0.004399672;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[8] += 0.07187209;
            } else {
              result[8] += -0.03464523;
            }
          }
        }
      } else {
        result[8] += -0.15309133;
      }
    } else {
      result[8] += 0.19013073;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
        result[8] += -0.16343299;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[8] += -0.27380306;
          } else {
            result[8] += -0.09692615;
          }
        } else {
          result[8] += -0.121493004;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
            result[8] += 0.1604625;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[8] += -0.17785776;
            } else {
              result[8] += 0.14702287;
            }
          }
        } else {
          result[8] += -0.10275892;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[8] += -1.2544718;
          } else {
            result[8] += -0.15187006;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[8] += 0.15689336;
            } else {
              result[8] += 0.039269123;
            }
          } else {
            result[8] += -0.15394974;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[9] += 0.0059906193;
            } else {
              result[9] += -0.14067344;
            }
          } else {
            result[9] += -0.14116707;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            result[9] += -0.14942634;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.14821713;
            } else {
              result[9] += -0.122268885;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
            result[9] += -0.13994981;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
              result[9] += 0.086117566;
            } else {
              result[9] += -0.08123595;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)4620)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[9] += 0.103742875;
            } else {
              result[9] += -0.20748286;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
              result[9] += 0.13299607;
            } else {
              result[9] += 0.08428195;
            }
          }
        }
      }
    } else {
      result[9] += -0.14837052;
    }
  } else {
    result[9] += -0.149395;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.0040850043;
            } else {
              result[10] += -0.1378359;
            }
          } else {
            result[10] += -0.14122072;
          }
        } else {
          result[10] += -0.14942184;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1307060480)) {
              result[10] += 0.01801161;
            } else {
              result[10] += -0.0392324;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
              result[10] += 0.13454697;
            } else {
              result[10] += 0.024211291;
            }
          }
        } else {
          result[10] += -0.1408397;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
            result[10] += -0.136268;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33551)) {
              result[10] += 0.082891725;
            } else {
              result[10] += 0.22622952;
            }
          }
        } else {
          result[10] += -0.14883435;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[10] += -0.12397968;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[10] += 0.4563311;
            } else {
              result[10] += 0.13443786;
            }
          } else {
            result[10] += -0.08899912;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.14909951;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        result[10] += 0.19869433;
      } else {
        result[10] += -0.14114091;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.002723534;
            } else {
              result[11] += -0.09131442;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += 0.057720616;
            } else {
              result[11] += -0.0050297175;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
            result[11] += -0.15095057;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[11] += 0.014872348;
            } else {
              result[11] += -0.065056376;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.13848476;
            } else {
              result[11] += -0.14446038;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[11] += -0.15098763;
            } else {
              result[11] += -0.016682873;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[11] += -0.61244583;
            } else {
              result[11] += -0.13831905;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[11] += 0.11736156;
            } else {
              result[11] += -0.1456663;
            }
          }
        }
      }
    } else {
      result[11] += -0.15356232;
    }
  } else {
    result[11] += -0.14916204;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[12] += 0.011701921;
            } else {
              result[12] += -0.15393947;
            }
          } else {
            result[12] += -0.14954026;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[12] += 0.15277302;
            } else {
              result[12] += 0.23779391;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[12] += -0.14971338;
            } else {
              result[12] += 0.06061179;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5394)) {
              result[12] += -0.11656226;
            } else {
              result[12] += -0.1638515;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[12] += -0.161293;
            } else {
              result[12] += 0.12658927;
            }
          }
        } else {
          result[12] += 0.18246433;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[12] += -0.14487362;
            } else {
              result[12] += -0.03035332;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += -0.29860228;
            } else {
              result[12] += -0.15208796;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)17050)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1670813696)) {
              result[12] += -0.03839183;
            } else {
              result[12] += 0.066734076;
            }
          } else {
            result[12] += 0.1807271;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[12] += -0.14731213;
            } else {
              result[12] += 0.14270768;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
              result[12] += -0.0014384727;
            } else {
              result[12] += -0.03762586;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += 0.14577582;
            } else {
              result[12] += -0.010868566;
            }
          } else {
            result[12] += -0.17306368;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += 0.04924912;
            } else {
              result[12] += -0.14539556;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
              result[12] += 0.101723395;
            } else {
              result[12] += -0.024797397;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
            result[12] += -0.1490983;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[12] += 0.12958217;
            } else {
              result[12] += -0.10959513;
            }
          }
        }
      } else {
        result[12] += -0.14660712;
      }
    } else {
      result[12] += -0.14863883;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += -0.00028253035;
            } else {
              result[13] += 0.17217678;
            }
          } else {
            result[13] += -0.15605524;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.088103116;
            } else {
              result[13] += -0.11697257;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.15016021;
            } else {
              result[13] += -0.00853038;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1613070592)) {
            result[13] += -0.14527462;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1670813696)) {
              result[13] += 0.074906476;
            } else {
              result[13] += -0.122211434;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.7292185;
            } else {
              result[13] += -0.00075623806;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[13] += 0.06395421;
            } else {
              result[13] += -0.12797113;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
              result[13] += 0.18325137;
            } else {
              result[13] += 0.01672322;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.14496692;
            } else {
              result[13] += 0.1067564;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
              result[13] += 0.15066107;
            } else {
              result[13] += 0.23256956;
            }
          } else {
            result[13] += -0.11322447;
          }
        }
      } else {
        result[13] += -0.1394499;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        result[13] += -0.12541972;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
          result[13] += 0.12644736;
        } else {
          result[13] += -0.031634904;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
        result[13] += -0.15192613;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2398340864)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
            result[13] += 0.19202062;
          } else {
            result[13] += -0.079123326;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            result[13] += -0.14715295;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[13] += -0.09835849;
            } else {
              result[13] += 0.11915485;
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
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[14] += 0.0046964446;
            } else {
              result[14] += -0.13767834;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.14950012;
            } else {
              result[14] += 0.029806787;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += 0.25351316;
            } else {
              result[14] += 0.16793038;
            }
          } else {
            result[14] += -0.120020345;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
          result[14] += -0.15226685;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[14] += 0.18080796;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += 0.44113776;
            } else {
              result[14] += -0.14599456;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[14] += -0.10254808;
        } else {
          result[14] += 0.15481223;
        }
      } else {
        result[14] += -0.13857755;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[14] += -0.14497603;
            } else {
              result[14] += -0.07561856;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
              result[14] += 0.23952858;
            } else {
              result[14] += -0.12883529;
            }
          }
        } else {
          result[14] += -1.2553611;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)742410688)) {
          result[14] += 0.14793812;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1269061760)) {
              result[14] += 0.07881914;
            } else {
              result[14] += -0.025175184;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3544269056)) {
              result[14] += 0.09674681;
            } else {
              result[14] += 0.13797502;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          result[14] += -0.2355404;
        } else {
          result[14] += -0.14856447;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
              result[14] += -0.076126695;
            } else {
              result[14] += 0.17227112;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
              result[14] += 1.1728121;
            } else {
              result[14] += -0.10986146;
            }
          }
        } else {
          result[14] += -0.14639343;
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
              result[0] += 0.006729226;
            } else {
              result[0] += -0.13706332;
            }
          } else {
            result[0] += -0.1374713;
          }
        } else {
          result[0] += -0.14937967;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[0] += 0.007889523;
            } else {
              result[0] += 0.116727084;
            }
          } else {
            result[0] += -0.18329129;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
              result[0] += -0.11637955;
            } else {
              result[0] += 0.092343844;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
              result[0] += -0.08028417;
            } else {
              result[0] += 0.7516563;
            }
          }
        }
      }
    } else {
      result[0] += -0.14757313;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)62732)) {
          result[0] += -0.14383791;
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            result[0] += -0.122029945;
          } else {
            result[0] += 0.061912753;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[0] += -0.104933195;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23807)) {
              result[0] += 0.0696921;
            } else {
              result[0] += 0.02301486;
            }
          }
        } else {
          result[0] += -0.13548015;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[0] += -0.07548882;
          } else {
            result[0] += 0.15034245;
          }
        } else {
          result[0] += 0.19210885;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
            result[0] += -0.14498441;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2692863232)) {
              result[0] += 0.13285401;
            } else {
              result[0] += -0.14178263;
            }
          }
        } else {
          result[0] += 0.10389534;
        }
      }
    }
  }
}



#include "header.h"

void predict_unit1(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1636)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
        result[2] += -0.15470593;
      } else {
        result[2] += -0.13580664;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)21308)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)11198)) {
              result[2] += -0.08819309;
            } else {
              result[2] += -0.11182412;
            }
          } else {
            result[2] += -0.15316714;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)23838)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += -0.047929917;
            } else {
              result[2] += 0.24094157;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)47007)) {
              result[2] += -0.08026458;
            } else {
              result[2] += -0.105467476;
            }
          }
        }
      } else {
        result[2] += -0.15335287;
      }
    }
  } else {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)64201)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
            result[2] += 0.08677364;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)52507)) {
              result[2] += 0.2028631;
            } else {
              result[2] += 0.17770508;
            }
          }
        } else {
          result[2] += 0.09293648;
        }
      } else {
        result[2] += 0.2256101;
      }
    } else {
      result[2] += -0.1533586;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    result[3] += -0.15491052;
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[3] += -0.15411916;
            } else {
              result[3] += 0.22946201;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)967153)) {
              result[3] += 0.44232574;
            } else {
              result[3] += 0.22583766;
            }
          }
        } else {
          result[3] += -0.15428366;
        }
      } else {
        result[3] += -0.15408821;
      }
    } else {
      result[3] += -0.15412095;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        result[4] += -0.15330331;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)104)) {
          result[4] += -0.1553825;
        } else {
          result[4] += -0.15406273;
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1060)) {
            result[4] += 0.046954315;
          } else {
            result[4] += 0.31752503;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2568)) {
            result[4] += -0.02148394;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)13257)) {
              result[4] += 0.14729166;
            } else {
              result[4] += 0.18523791;
            }
          }
        }
      } else {
        result[4] += -0.1536457;
      }
    }
  } else {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
      result[4] += 0.22610523;
    } else {
      result[4] += -0.11888206;
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)113590144)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)65535)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
              result[5] += -0.025567437;
            } else {
              result[5] += -0.15613449;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[5] += -0.1538459;
            } else {
              result[5] += 0.35317817;
            }
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
            result[5] += 0.14571404;
          } else {
            result[5] += 0.14943632;
          }
        }
      } else {
        result[5] += 0.24648298;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)21308)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[5] += 0.2221761;
            } else {
              result[5] += 0.22749403;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)21683)) {
              result[5] += -0.23156343;
            } else {
              result[5] += 0.22040911;
            }
          }
        } else {
          result[5] += 0.22671178;
        }
      } else {
        result[5] += -0.15364581;
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      result[5] += -0.15452032;
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)11064)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)36442)) {
              result[5] += 0.6319772;
            } else {
              result[5] += -0.15782474;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
              result[5] += -0.16022648;
            } else {
              result[5] += -0.03385151;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)43994)) {
              result[5] += 0.8117157;
            } else {
              result[5] += 0.1477499;
            }
          } else {
            result[5] += -0.15349297;
          }
        }
      } else {
        result[5] += -0.16591738;
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[6] += 0.16167831;
            } else {
              result[6] += -0.15201423;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
              result[6] += 0.2872196;
            } else {
              result[6] += 0.23096693;
            }
          }
        } else {
          result[6] += -0.15568611;
        }
      } else {
        result[6] += -0.15362945;
      }
    } else {
      result[6] += -0.15367551;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
      result[6] += -0.15539354;
    } else {
      result[6] += -0.15408207;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)5)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[7] += -0.1453405;
            } else {
              result[7] += -0.15367411;
            }
          } else {
            result[7] += -0.1541856;
          }
        } else {
          result[7] += 0.3098468;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
          result[7] += -0.10481147;
        } else {
          result[7] += -0.14703788;
        }
      }
    } else {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        result[7] += 0.2937883;
      } else {
        result[7] += 0.22281337;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[7] += 0.25305286;
            } else {
              result[7] += 0.23373745;
            }
          } else {
            result[7] += -0.15017086;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
              result[7] += -0.15660113;
            } else {
              result[7] += -0.035692263;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)6)) {
              result[7] += 0.028250618;
            } else {
              result[7] += 0.29257676;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56179)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
              result[7] += 0.24847415;
            } else {
              result[7] += 0.12421181;
            }
          } else {
            if ( (data[31].missing != -1) && (data[31].fvalue < (float)16)) {
              result[7] += 0.3397362;
            } else {
              result[7] += 0.2367936;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[7] += -0.16774629;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)15)) {
              result[7] += 0.30535534;
            } else {
              result[7] += -0.15404329;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)57306)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)107601)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)5900)) {
              result[7] += -0.15416288;
            } else {
              result[7] += 0.031416062;
            }
          } else {
            result[7] += 0.27487946;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
            result[7] += -0.15530846;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)408)) {
              result[7] += -0.15518479;
            } else {
              result[7] += 0.39615998;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4457)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
              result[7] += -0.15528944;
            } else {
              result[7] += -0.1832712;
            }
          } else {
            result[7] += 0.31366012;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)107601)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
              result[7] += -0.17834866;
            } else {
              result[7] += 0.31595123;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1159754368)) {
              result[7] += 0.5057088;
            } else {
              result[7] += 0.22666603;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
      result[8] += -0.15247317;
    } else {
      result[8] += -0.14762896;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)1440)) {
              result[8] += 0.10709585;
            } else {
              result[8] += 0.43246192;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
              result[8] += -0.09067965;
            } else {
              result[8] += 0.2692844;
            }
          }
        } else {
          result[8] += -0.15424237;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[8] += 0.3238788;
            } else {
              result[8] += -0.11679913;
            }
          } else {
            result[8] += -0.15729532;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[8] += -0.15541577;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[8] += 0.31916568;
            } else {
              result[8] += -0.15520956;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)68027)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[8] += -0.18997473;
            } else {
              result[8] += -0.15504928;
            }
          } else {
            result[8] += -0.1537672;
          }
        } else {
          result[8] += -0.15368533;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          result[8] += -0.18280041;
        } else {
          result[8] += -0.15042588;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18365288)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
              result[9] += -0.036947954;
            } else {
              result[9] += -0.15378343;
            }
          } else {
            result[9] += -0.15367551;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2182849)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1577985)) {
              result[9] += -0.15466848;
            } else {
              result[9] += -0.14397101;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)35344664)) {
              result[9] += 0.15679401;
            } else {
              result[9] += -0.15316808;
            }
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
          result[9] += 0.14820556;
        } else {
          result[9] += 0.13695697;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            result[9] += -0.15675382;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
              result[9] += 0.15268245;
            } else {
              result[9] += 0.22723506;
            }
          }
        } else {
          result[9] += -0.15321416;
        }
      } else {
        result[9] += -0.15612616;
      }
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
        result[9] += -0.1526479;
      } else {
        result[9] += 0.22577141;
      }
    } else {
      result[9] += -0.1536223;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[10] += 0.048175905;
            } else {
              result[10] += -0.15382914;
            }
          } else {
            result[10] += -0.15390377;
          }
        } else {
          result[10] += -0.15367551;
        }
      } else {
        result[10] += -0.15479724;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
        result[10] += 0.11306849;
      } else {
        result[10] += 0.12490281;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)26732)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2020837248)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2011381248)) {
              result[10] += 0.14727557;
            } else {
              result[10] += 0.23907357;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)57306)) {
              result[10] += -0.17406788;
            } else {
              result[10] += -0.1539048;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
              result[10] += -0.15447402;
            } else {
              result[10] += 0.32473034;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[10] += 0.2069869;
            } else {
              result[10] += -0.15528578;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48401)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34750)) {
              result[10] += 0.38913676;
            } else {
              result[10] += 0.32816094;
            }
          } else {
            result[10] += 0.22640118;
          }
        } else {
          result[10] += -0.1558685;
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
        result[10] += -0.15512192;
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            result[10] += 0.315534;
          } else {
            result[10] += -0.14300188;
          }
        } else {
          result[10] += -0.15431431;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    result[11] += -0.1525183;
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
              result[11] += 0.07910319;
            } else {
              result[11] += 0.22733398;
            }
          } else {
            result[11] += -0.15389164;
          }
        } else {
          result[11] += -0.15460604;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[11] += -0.14683747;
            } else {
              result[11] += 0.07685433;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
              result[11] += 0.18088716;
            } else {
              result[11] += 0.09779432;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
              result[11] += 0.22785608;
            } else {
              result[11] += -0.2535103;
            }
          } else {
            result[11] += -0.15524738;
          }
        }
      }
    } else {
      result[11] += -0.1548771;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          result[12] += -0.149046;
        } else {
          result[12] += -0.1535559;
        }
      } else {
        result[12] += -0.15363258;
      }
    } else {
      result[12] += -0.15367886;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)188)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)24)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
              result[12] += 0.11982212;
            } else {
              result[12] += -0.15345971;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
              result[12] += -0.15979685;
            } else {
              result[12] += -0.13256612;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
            result[12] += 1.3597512;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
              result[12] += -0.15818425;
            } else {
              result[12] += 0.30278358;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[12] += -0.16060281;
            } else {
              result[12] += -0.15398051;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
              result[12] += -0.15463626;
            } else {
              result[12] += 1.5824342;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
              result[12] += -0.15197632;
            } else {
              result[12] += 0.24785091;
            }
          } else {
            result[12] += -0.171234;
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)39638)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          result[12] += -0.15407793;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)940)) {
              result[12] += 0.29385585;
            } else {
              result[12] += 0.42178726;
            }
          } else {
            result[12] += -0.15419307;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)1311)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)43115)) {
              result[12] += 0.3473968;
            } else {
              result[12] += 0.38025913;
            }
          } else {
            result[12] += 0.2406814;
          }
        } else {
          result[12] += -0.15444727;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
            result[13] += -0.15251522;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += -0.11778364;
            } else {
              result[13] += -0.15441188;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)223)) {
              result[13] += -0.021005977;
            } else {
              result[13] += 1.8169351;
            }
          } else {
            result[13] += -0.15515706;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)441)) {
              result[13] += 0.07291947;
            } else {
              result[13] += -0.1399167;
            }
          } else {
            result[13] += -0.1538185;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)478)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)12872)) {
              result[13] += 0.25902486;
            } else {
              result[13] += -0.22227418;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.3279782;
            } else {
              result[13] += -0.15518177;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)37736)) {
              result[13] += -0.014598322;
            } else {
              result[13] += 0.26549748;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.47552153;
            } else {
              result[13] += -0.09490392;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
            result[13] += -0.15412799;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
              result[13] += 0.2930203;
            } else {
              result[13] += -0.12974694;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.20773202;
            } else {
              result[13] += -0.16944529;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)57306)) {
              result[13] += 0.26758936;
            } else {
              result[13] += 0.4888271;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)321)) {
              result[13] += -0.19305874;
            } else {
              result[13] += 0.28327698;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
              result[13] += -0.072031364;
            } else {
              result[13] += -0.15651153;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1415)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
              result[13] += -0.050599273;
            } else {
              result[13] += 0.2154679;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)280)) {
              result[13] += 0.19715767;
            } else {
              result[13] += -0.15940529;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
            result[13] += 0.23478398;
          } else {
            result[13] += 0.22643586;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)223)) {
          result[13] += -0.15253575;
        } else {
          result[13] += 0.22223313;
        }
      }
    } else {
      result[13] += -0.15360151;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)4)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
              result[14] += -0.040113524;
            } else {
              result[14] += -0.15362945;
            }
          } else {
            result[14] += -0.15367551;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
              result[14] += 0.078917384;
            } else {
              result[14] += -0.09724177;
            }
          } else {
            result[14] += -0.15365493;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
              result[14] += 0.13177012;
            } else {
              result[14] += 0.29237804;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
              result[14] += -0.08216687;
            } else {
              result[14] += -0.15886228;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
              result[14] += -0.11715096;
            } else {
              result[14] += -0.14821023;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
              result[14] += 0.28609234;
            } else {
              result[14] += -0.14682823;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
          result[14] += -0.15429652;
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
              result[14] += 0.24691698;
            } else {
              result[14] += -0.17959261;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[14] += -0.16428222;
            } else {
              result[14] += 0.30000198;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
            result[14] += -0.15527669;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
              result[14] += -0.1214541;
            } else {
              result[14] += -0.15377827;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1811010176)) {
            result[14] += -0.15504381;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1826348032)) {
              result[14] += 0.32287753;
            } else {
              result[14] += -0.08853653;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[14] += 0.20323803;
            } else {
              result[14] += -0.17034885;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)104)) {
              result[14] += 0.32842603;
            } else {
              result[14] += 0.19362931;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)432)) {
            result[14] += -0.16784117;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
              result[14] += 0.35076672;
            } else {
              result[14] += 0.23185983;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[14] += -0.15422146;
            } else {
              result[14] += -0.060228303;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[14] += 1.4777654;
            } else {
              result[14] += -0.09924403;
            }
          }
        } else {
          result[14] += 0.223311;
        }
      }
    } else {
      result[14] += -0.15376654;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[0] += -0.05710754;
            } else {
              result[0] += -0.1526759;
            }
          } else {
            result[0] += -0.15277745;
          }
        } else {
          result[0] += -0.15282948;
        }
      } else {
        result[0] += -0.1539612;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
        result[0] += -0.008425154;
      } else {
        result[0] += 0.013828804;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1453306624)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)2315)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)264)) {
              result[0] += -0.18496522;
            } else {
              result[0] += 0.012068537;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3365)) {
              result[0] += 0.5162759;
            } else {
              result[0] += 0.14402106;
            }
          }
        } else {
          result[0] += -0.15715691;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)57306)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
              result[0] += 0.46438786;
            } else {
              result[0] += 0.2603816;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)314)) {
              result[0] += 0.20760947;
            } else {
              result[0] += 0.23116577;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2119496576)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
              result[0] += -0.17260881;
            } else {
              result[0] += -0.15530758;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)57306)) {
              result[0] += 0.28307185;
            } else {
              result[0] += 0.20872085;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34750)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
              result[0] += -0.14567225;
            } else {
              result[0] += 0.033727802;
            }
          } else {
            result[0] += -0.15456414;
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
              result[0] += -0.14696845;
            } else {
              result[0] += 0.1355082;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[0] += 0.1465125;
            } else {
              result[0] += -0.10235965;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2456591104)) {
          result[0] += -0.15284933;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[0] += 0.20292322;
          } else {
            result[0] += -0.13249485;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    result[1] += -0.15303949;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)486)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[1] += 0.078007035;
            } else {
              result[1] += -0.1243749;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
              result[1] += 0.48048526;
            } else {
              result[1] += 0.17826287;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[1] += -0.07232024;
            } else {
              result[1] += -0.15376939;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)9392)) {
              result[1] += 0.3509338;
            } else {
              result[1] += -0.15467444;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[1] += 1.3700581;
            } else {
              result[1] += -0.11939313;
            }
          } else {
            result[1] += -0.15496117;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
              result[1] += 0.6179881;
            } else {
              result[1] += 0.1413361;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
              result[1] += 0.5690395;
            } else {
              result[1] += -0.15305373;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
              result[1] += -0.08741455;
            } else {
              result[1] += 0.20216441;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60176)) {
              result[1] += -0.14107239;
            } else {
              result[1] += -0.08374889;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)33361)) {
            result[1] += 0.23370397;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60160)) {
              result[1] += 0.21876201;
            } else {
              result[1] += -0.14188321;
            }
          }
        }
      } else {
        result[1] += -0.15280837;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1636)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
        result[2] += -0.1538589;
      } else {
        result[2] += -0.13013333;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)21308)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)11198)) {
              result[2] += -0.07339851;
            } else {
              result[2] += -0.10085161;
            }
          } else {
            result[2] += -0.15210968;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)23838)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)23202)) {
              result[2] += -0.03603122;
            } else {
              result[2] += 0.2649181;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)47007)) {
              result[2] += -0.064548366;
            } else {
              result[2] += -0.09339487;
            }
          }
        }
      } else {
        result[2] += -0.15236215;
      }
    }
  } else {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)7019)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5822)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5213)) {
              result[2] += 0.11551593;
            } else {
              result[2] += 0.26946956;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)6405)) {
              result[2] += -0.0054267473;
            } else {
              result[2] += 0.027492443;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)12366)) {
            result[2] += 0.23040941;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)17201)) {
              result[2] += 0.09735052;
            } else {
              result[2] += 0.16035461;
            }
          }
        }
      } else {
        result[2] += 0.20174964;
      }
    } else {
      result[2] += -0.15238947;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    result[3] += -0.15405646;
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[3] += -0.15320575;
            } else {
              result[3] += 0.20626791;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)967153)) {
              result[3] += 0.30946022;
            } else {
              result[3] += 0.20203036;
            }
          }
        } else {
          result[3] += -0.15329458;
        }
      } else {
        result[3] += -0.15319708;
      }
    } else {
      result[3] += -0.15333953;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        result[4] += -0.15209481;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
          result[4] += -0.15462013;
        } else {
          result[4] += -0.15332294;
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)59651)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56578)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)55440)) {
              result[4] += 0.1509024;
            } else {
              result[4] += -0.09213044;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)58776)) {
              result[4] += 0.26033306;
            } else {
              result[4] += 0.110136315;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)61243)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)60286)) {
              result[4] += 0.05397599;
            } else {
              result[4] += -0.08861553;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)65213)) {
              result[4] += 0.18019481;
            } else {
              result[4] += 0.04903384;
            }
          }
        }
      } else {
        result[4] += -0.15275912;
      }
    }
  } else {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
      result[4] += 0.20259283;
    } else {
      result[4] += -0.11182622;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[5] += 0.07147866;
            } else {
              result[5] += 0.19714369;
            }
          } else {
            result[5] += -0.15283924;
          }
        } else {
          result[5] += -0.15313143;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[5] += -0.15504347;
        } else {
          result[5] += -0.16489357;
        }
      }
    } else {
      result[5] += -0.15396206;
    }
  } else {
    result[5] += -0.15338907;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
              result[6] += 0.12311263;
            } else {
              result[6] += -0.19083965;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
              result[6] += 0.24139781;
            } else {
              result[6] += 0.20707579;
            }
          }
        } else {
          result[6] += -0.15469548;
        }
      } else {
        result[6] += -0.15273996;
      }
    } else {
      result[6] += -0.15279163;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
      result[6] += -0.15453713;
    } else {
      result[6] += -0.15324521;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)5)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[7] += -0.14230472;
            } else {
              result[7] += -0.1527872;
            }
          } else {
            result[7] += -0.15318778;
          }
        } else {
          result[7] += 0.25977328;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
          result[7] += -0.09724269;
        } else {
          result[7] += -0.14448115;
        }
      }
    } else {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        result[7] += 0.26067966;
      } else {
        result[7] += 0.19814709;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[7] += 0.22484301;
            } else {
              result[7] += 0.20813985;
            }
          } else {
            result[7] += -0.14837734;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
              result[7] += -0.15571922;
            } else {
              result[7] += -0.032784723;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[7] += 0.15784225;
            } else {
              result[7] += -0.16283956;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56179)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
              result[7] += 0.22127138;
            } else {
              result[7] += 0.09663353;
            }
          } else {
            if ( (data[31].missing != -1) && (data[31].fvalue < (float)16)) {
              result[7] += 0.2732646;
            } else {
              result[7] += 0.20970589;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[7] += -0.16543283;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)15)) {
              result[7] += 0.25550568;
            } else {
              result[7] += -0.15253337;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)57306)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)5900)) {
            result[7] += -0.15301877;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
              result[7] += -0.14252952;
            } else {
              result[7] += 0.23983465;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
            result[7] += -0.15425968;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
              result[7] += -0.15246664;
            } else {
              result[7] += 1.0696002;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4457)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
            result[7] += -0.15894267;
          } else {
            result[7] += 0.2558895;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)107601)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
              result[7] += -0.16981573;
            } else {
              result[7] += 0.26109552;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1159754368)) {
              result[7] += 0.3793091;
            } else {
              result[7] += 0.20235145;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[8] += -0.14778033;
          } else {
            result[8] += -0.15264763;
          }
        } else {
          result[8] += -0.15274975;
        }
      } else {
        result[8] += -0.15280196;
      }
    } else {
      result[8] += -0.14520441;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
              result[8] += 0.081914775;
            } else {
              result[8] += -0.15917689;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
              result[8] += 0.24057414;
            } else {
              result[8] += -0.15451816;
            }
          }
        } else {
          result[8] += -0.1533045;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)303)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[8] += 0.21520914;
            } else {
              result[8] += -0.15519892;
            }
          } else {
            result[8] += -0.1568014;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[8] += -0.15463935;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[8] += 0.23950799;
            } else {
              result[8] += -0.15404727;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
        result[8] += -0.15367402;
      } else {
        result[8] += -0.17172302;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)311377)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[9] += -0.06372577;
            } else {
              result[9] += -0.15279163;
            }
          } else {
            result[9] += -0.1540286;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
            result[9] += 0.11257722;
          } else {
            result[9] += 0.10546104;
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            result[9] += -0.15198508;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2182849)) {
              result[9] += 1.8631247;
            } else {
              result[9] += 0.20208661;
            }
          }
        } else {
          result[9] += -0.15285216;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
        result[9] += -0.15587153;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
              result[9] += 0.19084558;
            } else {
              result[9] += -0.07092849;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17307)) {
              result[9] += 0.2233153;
            } else {
              result[9] += 0.18775216;
            }
          }
        } else {
          result[9] += -0.15222573;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
      result[9] += -0.15530631;
    } else {
      result[9] += -0.15328471;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[10] += 0.04525005;
            } else {
              result[10] += -0.15284798;
            }
          } else {
            result[10] += -0.15294704;
          }
        } else {
          result[10] += -0.15279163;
        }
      } else {
        result[10] += -0.15396115;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
        result[10] += 0.090007484;
      } else {
        result[10] += 0.097716264;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)20977)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2020837248)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
              result[10] += 0.10562105;
            } else {
              result[10] += 0.19981481;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)57306)) {
              result[10] += -0.16746315;
            } else {
              result[10] += -0.15293127;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
              result[10] += -0.1533593;
            } else {
              result[10] += 0.25747204;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[10] += -0.069678135;
            } else {
              result[10] += 0.1756889;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48401)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)26732)) {
              result[10] += 0.35041207;
            } else {
              result[10] += 0.2744169;
            }
          } else {
            result[10] += 0.20221;
          }
        } else {
          result[10] += -0.15413587;
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
        result[10] += -0.15429243;
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            result[10] += 0.25423422;
          } else {
            result[10] += -0.13931125;
          }
        } else {
          result[10] += -0.15335758;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        result[11] += -0.14922492;
      } else {
        result[11] += -0.15274884;
      }
    } else {
      result[11] += -0.15280107;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[11] += 0.092608124;
            } else {
              result[11] += -0.15382835;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[11] += 0.41855797;
            } else {
              result[11] += -0.13256752;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[11] += -0.13609971;
            } else {
              result[11] += 0.18245289;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
              result[11] += 0.20369999;
            } else {
              result[11] += -0.15933232;
            }
          }
        }
      } else {
        result[11] += -0.15308091;
      }
    } else {
      result[11] += -0.15407649;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          result[12] += -0.14692742;
        } else {
          result[12] += -0.15264039;
        }
      } else {
        result[12] += -0.1527423;
      }
    } else {
      result[12] += -0.15279417;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)188)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[12] += 0.07877147;
            } else {
              result[12] += -0.15954092;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[12] += 0.22042194;
            } else {
              result[12] += -0.1551932;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
              result[12] += 0.4534134;
            } else {
              result[12] += 0.49068406;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
              result[12] += -0.1560097;
            } else {
              result[12] += 0.25113195;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[12] += -0.15883628;
            } else {
              result[12] += -0.15307884;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[12] += 0.42849794;
            } else {
              result[12] += -0.1561261;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
              result[12] += -0.150627;
            } else {
              result[12] += 0.22340792;
            }
          } else {
            result[12] += -0.1677489;
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)39638)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          result[12] += -0.15325834;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)403)) {
              result[12] += 0.27422523;
            } else {
              result[12] += 0.2345132;
            }
          } else {
            result[12] += -0.15331559;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)1311)) {
            result[12] += 0.28249732;
          } else {
            result[12] += 0.2110575;
          }
        } else {
          result[12] += -0.15336365;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)151)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[13] += -0.1503586;
            } else {
              result[13] += -0.1528011;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[13] += -0.116936594;
            } else {
              result[13] += -0.14825673;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[13] += -0.15346737;
            } else {
              result[13] += 0.14080586;
            }
          } else {
            result[13] += -0.15461156;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)356)) {
              result[13] += -0.12377597;
            } else {
              result[13] += 0.059078466;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
              result[13] += -0.15228291;
            } else {
              result[13] += 0.18850069;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)478)) {
              result[13] += 0.23728432;
            } else {
              result[13] += -0.13438214;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)403)) {
              result[13] += -0.15251547;
            } else {
              result[13] += 0.5129803;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)862)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)37736)) {
              result[13] += -0.10339589;
            } else {
              result[13] += 0.22942643;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.12510774;
            } else {
              result[13] += -0.15759505;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
            result[13] += -0.15325077;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1878)) {
              result[13] += -0.115680486;
            } else {
              result[13] += 0.42189598;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.16699058;
            } else {
              result[13] += -0.18105388;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[13] += 0.24023776;
            } else {
              result[13] += 0.17320085;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)321)) {
              result[13] += -0.18889661;
            } else {
              result[13] += 0.20520487;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
              result[13] += -0.060124356;
            } else {
              result[13] += -0.15457587;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1415)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
              result[13] += -0.045855913;
            } else {
              result[13] += 0.18871221;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)280)) {
              result[13] += 0.16691363;
            } else {
              result[13] += -0.1565203;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
            result[13] += 0.20936643;
          } else {
            result[13] += 0.20227411;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)223)) {
          result[13] += -0.15176491;
        } else {
          result[13] += 0.1979839;
        }
      }
    } else {
      result[13] += -0.15273139;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[14] += -0.0075398604;
            } else {
              result[14] += -0.15400013;
            }
          } else {
            result[14] += -0.15273996;
          }
        } else {
          result[14] += -0.15279163;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)386)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)108)) {
              result[14] += 0.06999495;
            } else {
              result[14] += -0.14788857;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[14] += 0.2228377;
            } else {
              result[14] += -0.15301067;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2182849)) {
              result[14] += -0.15947458;
            } else {
              result[14] += -0.15275966;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
              result[14] += 0.13381952;
            } else {
              result[14] += -0.15294488;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
          result[14] += -0.15343162;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[14] += 0.19552384;
            } else {
              result[14] += -0.025469145;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[14] += -0.15668988;
            } else {
              result[14] += -0.22562517;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
            result[14] += -0.15439537;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
              result[14] += -0.1463941;
            } else {
              result[14] += -0.06856902;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)56899)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1811010176)) {
              result[14] += -0.15384379;
            } else {
              result[14] += -0.08615034;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)57416)) {
              result[14] += 0.5222817;
            } else {
              result[14] += -0.14980772;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)104)) {
              result[14] += 0.18976091;
            } else {
              result[14] += 0.06475636;
            }
          } else {
            result[14] += -0.16277593;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)442)) {
              result[14] += 0.19972628;
            } else {
              result[14] += 0.21301131;
            }
          } else {
            result[14] += -0.15759951;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1730588800)) {
              result[14] += -0.14046536;
            } else {
              result[14] += 0.055557672;
            }
          } else {
            result[14] += -0.15328649;
          }
        } else {
          result[14] += 0.19893147;
        }
      }
    } else {
      result[14] += -0.15288529;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[0] += -0.04744281;
            } else {
              result[0] += -0.15196626;
            }
          } else {
            result[0] += -0.15207833;
          }
        } else {
          result[0] += -0.15213168;
        }
      } else {
        result[0] += -0.15329365;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
        result[0] += -0.0051593063;
      } else {
        result[0] += 0.013254543;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1453306624)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)2315)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)264)) {
              result[0] += -0.17609935;
            } else {
              result[0] += 0.015909547;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
              result[0] += 0.3296785;
            } else {
              result[0] += 0.11915823;
            }
          }
        } else {
          result[0] += -0.15596867;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)57306)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
              result[0] += 0.34561327;
            } else {
              result[0] += 0.23914342;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)314)) {
              result[0] += 0.19227749;
            } else {
              result[0] += 0.2111981;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2119496576)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
              result[0] += -0.16835126;
            } else {
              result[0] += -0.15426497;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)57306)) {
              result[0] += 0.23600192;
            } else {
              result[0] += 0.19146693;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34750)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
              result[0] += -0.15262163;
            } else {
              result[0] += 0.024279539;
            }
          } else {
            result[0] += -0.15399513;
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)992)) {
              result[0] += -0.14590736;
            } else {
              result[0] += 0.10773556;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[0] += 0.10669524;
            } else {
              result[0] += -0.09165159;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2456591104)) {
          result[0] += -0.1521301;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[0] += 0.187158;
          } else {
            result[0] += -0.12729853;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    result[1] += -0.15227076;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)486)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[1] += 0.06439556;
            } else {
              result[1] += -0.117278315;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
              result[1] += 0.32828242;
            } else {
              result[1] += 0.1556552;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[1] += -0.06234756;
            } else {
              result[1] += -0.15275726;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)9392)) {
              result[1] += 0.2471995;
            } else {
              result[1] += -0.15324208;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)442)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[1] += 0.35990182;
            } else {
              result[1] += -0.13894011;
            }
          } else {
            result[1] += -0.15443498;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
              result[1] += 0.46982598;
            } else {
              result[1] += 0.23010086;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[1] += -0.13004613;
            } else {
              result[1] += 0.32482064;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)62460)) {
              result[1] += -0.0019325638;
            } else {
              result[1] += 0.38455588;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60176)) {
              result[1] += -0.13752195;
            } else {
              result[1] += -0.07295831;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60160)) {
            result[1] += 0.22329947;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1977933952)) {
              result[1] += 0.18000531;
            } else {
              result[1] += -0.14933427;
            }
          }
        }
      } else {
        result[1] += -0.15209827;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1636)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
        result[2] += -0.15320644;
      } else {
        result[2] += -0.123329796;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)30864)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)27655)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)21308)) {
              result[2] += -0.09255071;
            } else {
              result[2] += -0.04073427;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)30467)) {
              result[2] += -0.10042828;
            } else {
              result[2] += -0.1485751;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)47007)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += -0.038920593;
            } else {
              result[2] += 0.035399713;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += -0.035962474;
            } else {
              result[2] += -0.14998943;
            }
          }
        }
      } else {
        result[2] += -0.15154555;
      }
    }
  } else {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)64201)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)4355)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)3172)) {
              result[2] += 0.11043735;
            } else {
              result[2] += 0.028395517;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)13257)) {
              result[2] += 0.16025788;
            } else {
              result[2] += 0.1316097;
            }
          }
        } else {
          result[2] += 0.05492318;
        }
      } else {
        result[2] += 0.1862961;
      }
    } else {
      result[2] += -0.15159243;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    result[3] += -0.15340006;
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[3] += -0.15254554;
            } else {
              result[3] += 0.18951793;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)967153)) {
              result[3] += 0.24692075;
            } else {
              result[3] += 0.18657163;
            }
          }
        } else {
          result[3] += -0.15263985;
        }
      } else {
        result[3] += -0.15257673;
      }
    } else {
      result[3] += -0.1526891;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        result[4] += -0.15099713;
      } else {
        result[4] += -0.15329793;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)4355)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1060)) {
            result[4] += 0.02772513;
          } else {
            result[4] += 0.17307745;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)13257)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)8284)) {
              result[4] += 0.118834265;
            } else {
              result[4] += 0.014232506;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)17201)) {
              result[4] += 0.21159568;
            } else {
              result[4] += 0.120788194;
            }
          }
        }
      } else {
        result[4] += -0.1520668;
      }
    }
  } else {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
      result[4] += 0.18713784;
    } else {
      result[4] += -0.10426613;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[5] += 0.060544863;
            } else {
              result[5] += 0.18011181;
            }
          } else {
            result[5] += -0.15213647;
          }
        } else {
          result[5] += -0.15234561;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[5] += -0.1542503;
        } else {
          result[5] += -0.16394384;
        }
      }
    } else {
      result[5] += -0.15314643;
    }
  } else {
    result[5] += -0.15274543;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[6] += 0.09588493;
            } else {
              result[6] += -0.15079975;
            }
          } else {
            result[6] += -0.1539242;
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
            result[6] += 0.21212499;
          } else {
            result[6] += 0.1901837;
          }
        }
      } else {
        result[6] += -0.15204994;
      }
    } else {
      result[6] += -0.15210305;
    }
  } else {
    result[6] += -0.15329608;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)5)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[7] += -0.13893189;
            } else {
              result[7] += -0.15209524;
            }
          } else {
            result[7] += -0.15233341;
          }
        } else {
          result[7] += 0.22927287;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
          result[7] += -0.090087175;
        } else {
          result[7] += -0.14203891;
        }
      }
    } else {
      result[7] += 0.21208;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[31].missing != -1) && (data[31].fvalue < (float)16)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[7] += 0.20212762;
            } else {
              result[7] += 0.21406814;
            }
          } else {
            result[7] += 0.20376801;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            result[7] += 0.19456314;
          } else {
            result[7] += 0.18874396;
          }
        }
      } else {
        result[7] += -0.14697473;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1377281)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)28873)) {
              result[7] += -0.15406743;
            } else {
              result[7] += -0.14443266;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
              result[7] += 0.4860212;
            } else {
              result[7] += -0.07869987;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18365288)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)57306)) {
              result[7] += 0.20359462;
            } else {
              result[7] += 0.33076838;
            }
          } else {
            result[7] += 0.18742156;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[7] += 0.19274786;
            } else {
              result[7] += 0.0036806108;
            }
          } else {
            result[7] += -0.16103941;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)129921)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
              result[7] += -0.15411809;
            } else {
              result[7] += -0.12884772;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)18851070)) {
              result[7] += 0.23853917;
            } else {
              result[7] += 0.18596895;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[8] += -0.14577171;
          } else {
            result[8] += -0.15194443;
          }
        } else {
          result[8] += -0.15205736;
        }
      } else {
        result[8] += -0.15211087;
      }
    } else {
      result[8] += -0.14287633;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
              result[8] += 0.04294262;
            } else {
              result[8] += 0.18189995;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
              result[8] += -0.15552983;
            } else {
              result[8] += 0.018216845;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)261)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[8] += 0.22393055;
            } else {
              result[8] += -0.13926391;
            }
          } else {
            result[8] += -0.16136903;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)303)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[8] += 0.20161672;
            } else {
              result[8] += -0.15381743;
            }
          } else {
            result[8] += -0.15541157;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[8] += -0.15419607;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[8] += 0.20064509;
            } else {
              result[8] += -0.15324174;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
        result[8] += -0.15299164;
      } else {
        result[8] += -0.16675934;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)311377)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[9] += -0.050386205;
            } else {
              result[9] += -0.15210305;
            }
          } else {
            result[9] += -0.15335402;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
            result[9] += 0.08607298;
          } else {
            result[9] += 0.08112524;
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            result[9] += -0.1509851;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2182849)) {
              result[9] += 0.4065035;
            } else {
              result[9] += 0.18660884;
            }
          }
        } else {
          result[9] += -0.15212637;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
        result[9] += -0.15471084;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)215557952)) {
              result[9] += -0.07743932;
            } else {
              result[9] += 0.13974221;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)37225)) {
              result[9] += 0.18787874;
            } else {
              result[9] += 0.15654291;
            }
          }
        } else {
          result[9] += -0.15144032;
        }
      }
    }
  } else {
    result[9] += -0.15350077;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
              result[10] += 0.043224018;
            } else {
              result[10] += 0.07372094;
            }
          } else {
            result[10] += -0.15209892;
          }
        } else {
          result[10] += -0.15220651;
        }
      } else {
        result[10] += -0.15210305;
      }
    } else {
      result[10] += -0.1532936;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)20977)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2020837248)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2011381248)) {
              result[10] += 0.10302865;
            } else {
              result[10] += 0.1943004;
            }
          } else {
            result[10] += -0.15374976;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
              result[10] += -0.15246467;
            } else {
              result[10] += 0.2208898;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[10] += 0.119345136;
            } else {
              result[10] += -0.15391056;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48401)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)26732)) {
              result[10] += 0.28008252;
            } else {
              result[10] += 0.23318774;
            }
          } else {
            result[10] += 0.18670088;
          }
        } else {
          result[10] += -0.15300912;
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
        result[10] += -0.15367508;
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            result[10] += 0.22722663;
          } else {
            result[10] += -0.13509583;
          }
        } else {
          result[10] += -0.15268031;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          result[11] += -0.14675082;
        } else {
          result[11] += -0.15195146;
        }
      } else {
        result[11] += -0.1520567;
      }
    } else {
      result[11] += -0.15211019;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[11] += 0.07408436;
            } else {
              result[11] += -0.15318435;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[11] += 0.24587084;
            } else {
              result[11] += -0.12676315;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[11] += -0.15495247;
            } else {
              result[11] += 0.15089424;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
              result[11] += 0.18668655;
            } else {
              result[11] += -0.1586815;
            }
          }
        }
      } else {
        result[11] += -0.15241873;
      }
    } else {
      result[11] += -0.15349047;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            result[12] += -0.14378493;
          } else {
            result[12] += -0.1482094;
          }
        } else {
          result[12] += -0.15193883;
        }
      } else {
        result[12] += -0.15205173;
      }
    } else {
      result[12] += -0.15210499;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)188)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)24)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
              result[12] += 0.054048885;
            } else {
              result[12] += 0.15262616;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
              result[12] += -0.15912035;
            } else {
              result[12] += -0.11279594;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)18064)) {
              result[12] += 0.3513794;
            } else {
              result[12] += 0.32809734;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
              result[12] += -0.15486;
            } else {
              result[12] += 0.22508644;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[12] += -0.15749261;
            } else {
              result[12] += -0.1523601;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[12] += 0.2963257;
            } else {
              result[12] += -0.15500537;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
              result[12] += -0.14928252;
            } else {
              result[12] += 0.20612521;
            }
          } else {
            result[12] += -0.16518347;
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)39638)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          result[12] += -0.15260534;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)940)) {
              result[12] += 0.2147931;
            } else {
              result[12] += 0.25287256;
            }
          } else {
            result[12] += -0.15266408;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)1311)) {
            result[12] += 0.2366829;
          } else {
            result[12] += 0.19230515;
          }
        } else {
          result[12] += -0.1525057;
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[13] += -0.14887771;
            } else {
              result[13] += -0.15211022;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += -0.1020419;
            } else {
              result[13] += -0.1526791;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
              result[13] += -0.025856666;
            } else {
              result[13] += 0.34953725;
            }
          } else {
            result[13] += -0.15368354;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)441)) {
              result[13] += 0.05443165;
            } else {
              result[13] += -0.13513286;
            }
          } else {
            result[13] += -0.1523711;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)478)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[13] += 0.23134515;
            } else {
              result[13] += 0.06331357;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.2743161;
            } else {
              result[13] += -0.15356597;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)37)) {
              result[13] += 0.22196275;
            } else {
              result[13] += -0.13834994;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)301)) {
              result[13] += 0.19279785;
            } else {
              result[13] += 0.08077333;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)280)) {
            result[13] += 0.18532275;
          } else {
            result[13] += -0.15481867;
          }
        }
      } else {
        result[13] += -0.15214719;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)862)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)14490)) {
              result[13] += 0.0031982774;
            } else {
              result[13] += 0.20962337;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46443)) {
              result[13] += -0.09209834;
            } else {
              result[13] += -0.15287161;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
              result[13] += 0.11200989;
            } else {
              result[13] += 0.3221752;
            }
          } else {
            result[13] += -0.15505311;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
            result[13] += -0.1571613;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51042)) {
              result[13] += 0.45730546;
            } else {
              result[13] += -0.17515688;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
            result[13] += -0.15187979;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[13] += -0.15049316;
            } else {
              result[13] += 0.25870016;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.093941785;
            } else {
              result[13] += -0.16193026;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[13] += 0.22184546;
            } else {
              result[13] += 0.16040158;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
              result[13] += -0.24024114;
            } else {
              result[13] += 0.19606437;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)68027)) {
              result[13] += 0.18771622;
            } else {
              result[13] += 0.013390024;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)321)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)4457)) {
              result[13] += -0.18433782;
            } else {
              result[13] += -0.15235104;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)3467)) {
              result[13] += 0.17516771;
            } else {
              result[13] += -0.15599579;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59886)) {
            result[13] += 0.2674293;
          } else {
            result[13] += -0.15254506;
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
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
              result[14] += -0.0684662;
            } else {
              result[14] += 0.033164047;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)86)) {
              result[14] += -0.1564178;
            } else {
              result[14] += -0.1865256;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[14] += 0.5463163;
            } else {
              result[14] += -0.08057584;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
              result[14] += -0.13190192;
            } else {
              result[14] += 0.24303617;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3101)) {
              result[14] += -0.15326929;
            } else {
              result[14] += -0.08077708;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
              result[14] += 1.6874014;
            } else {
              result[14] += -0.15728606;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
              result[14] += -0.15832677;
            } else {
              result[14] += -0.15236194;
            }
          } else {
            result[14] += -0.1896417;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[14] += 0.42315274;
            } else {
              result[14] += 0.29152745;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[14] += 0.20768377;
            } else {
              result[14] += 0.18938698;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
            result[14] += 0.47580054;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)472)) {
              result[14] += 0.1875525;
            } else {
              result[14] += -0.12225623;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)441)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)301)) {
              result[14] += -0.12049478;
            } else {
              result[14] += 0.12846845;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
              result[14] += -0.17124213;
            } else {
              result[14] += 0.19173166;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[14] += -0.188362;
            } else {
              result[14] += 0.20267491;
            }
          } else {
            result[14] += -0.15236498;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5742)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)507)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51042)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
              result[14] += -0.1553411;
            } else {
              result[14] += -0.17460361;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
              result[14] += 2.6004078;
            } else {
              result[14] += -0.15332016;
            }
          }
        } else {
          result[14] += 1.1771969;
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)31)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
              result[14] += -0.04613992;
            } else {
              result[14] += 0.7755846;
            }
          } else {
            result[14] += 3.233646;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)862)) {
              result[14] += -0.009233095;
            } else {
              result[14] += -0.15211582;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)512)) {
              result[14] += -0.14959516;
            } else {
              result[14] += 1.4195848;
            }
          }
        }
      }
    } else {
      result[14] += -0.1522634;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[0] += -0.03882999;
            } else {
              result[0] += -0.1513991;
            }
          } else {
            result[0] += -0.1515345;
          }
        } else {
          result[0] += -0.1515904;
        }
      } else {
        result[0] += -0.15275376;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
        result[0] += -0.0029055155;
      } else {
        result[0] += 0.01211127;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1453306624)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)2315)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)264)) {
              result[0] += -0.1687411;
            } else {
              result[0] += 0.020204484;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
              result[0] += 0.25716767;
            } else {
              result[0] += 0.10336921;
            }
          }
        } else {
          result[0] += -0.1549665;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)57306)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[0] += 0.27447847;
            } else {
              result[0] += -0.09962208;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)314)) {
              result[0] += 0.18226326;
            } else {
              result[0] += 0.19804642;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2119496576)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
              result[0] += -0.1636214;
            } else {
              result[0] += -0.1533095;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[0] += 0.1816343;
            } else {
              result[0] += -0.11262972;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34750)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)992)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56324)) {
              result[0] += -0.15367962;
            } else {
              result[0] += -0.1412972;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
              result[0] += -0.15194122;
            } else {
              result[0] += 0.12597537;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[0] += -0.013495081;
            } else {
              result[0] += -0.16267595;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
              result[0] += 0.16025904;
            } else {
              result[0] += -0.1567506;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2456591104)) {
          result[0] += -0.15156509;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[0] += 0.17643495;
          } else {
            result[0] += -0.121338986;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    result[1] += -0.15163322;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
              result[1] += 0.052935578;
            } else {
              result[1] += 0.20650358;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[1] += -0.13722037;
            } else {
              result[1] += 0.19169924;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[1] += -0.055094145;
            } else {
              result[1] += -0.15190965;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)9392)) {
              result[1] += 0.19686577;
            } else {
              result[1] += -0.15204115;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)442)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[1] += 0.25668427;
            } else {
              result[1] += -0.13109595;
            }
          } else {
            result[1] += -0.1540377;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)647)) {
              result[1] += 0.13230191;
            } else {
              result[1] += 0.2778619;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[1] += -0.12611568;
            } else {
              result[1] += 0.25735945;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
              result[1] += 0.12829532;
            } else {
              result[1] += -0.0917385;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60176)) {
              result[1] += -0.13364004;
            } else {
              result[1] += -0.063049965;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60160)) {
            result[1] += 0.20441468;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1977933952)) {
              result[1] += 0.16054064;
            } else {
              result[1] += -0.14373565;
            }
          }
        }
      } else {
        result[1] += -0.15149425;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1636)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
        result[2] += -0.15268251;
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1360)) {
          result[2] += -0.09194785;
        } else {
          result[2] += -0.13044588;
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)30864)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)30467)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)21308)) {
              result[2] += -0.07788024;
            } else {
              result[2] += -0.045414165;
            }
          } else {
            result[2] += -0.14660032;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)47007)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)32611)) {
              result[2] += 0.13869573;
            } else {
              result[2] += -0.006033464;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += -0.015802843;
            } else {
              result[2] += -0.14856718;
            }
          }
        }
      } else {
        result[2] += -0.15083843;
      }
    }
  } else {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)64201)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)7019)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5822)) {
              result[2] += 0.09970024;
            } else {
              result[2] += -0.007797127;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)10755)) {
              result[2] += 0.16616845;
            } else {
              result[2] += 0.11081437;
            }
          }
        } else {
          result[2] += 0.045691274;
        }
      } else {
        result[2] += 0.1760318;
      }
    } else {
      result[2] += -0.15091069;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    result[3] += -0.15288347;
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[3] += -0.15201584;
            } else {
              result[3] += 0.17963177;
            }
          } else {
            result[3] += 0.17619127;
          }
        } else {
          result[3] += -0.1520062;
        }
      } else {
        result[3] += -0.15206979;
      }
    } else {
      result[3] += -0.1521263;
    }
  }
}


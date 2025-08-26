
#include "header.h"

void predict_unit11(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += -0.0012935139;
            } else {
              result[7] += 0.017594008;
            }
          } else {
            result[7] += -0.14341347;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12831)) {
              result[7] += -0.07678397;
            } else {
              result[7] += -0.14301173;
            }
          } else {
            result[7] += 0.03668303;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[7] += -0.1518491;
        } else {
          result[7] += 0.12543294;
        }
      }
    } else {
      result[7] += 0.1438324;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[7] += 0.12296177;
          } else {
            result[7] += -0.07545297;
          }
        } else {
          result[7] += -0.08144796;
        }
      } else {
        result[7] += 0.14473702;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
            result[7] += -0.14461012;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1177192448)) {
              result[7] += -0.0029088547;
            } else {
              result[7] += -0.08156969;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[7] += 0.009956396;
            } else {
              result[7] += 0.3734602;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[7] += -0.14790554;
            } else {
              result[7] += 0.12959377;
            }
          }
        }
      } else {
        result[7] += 0.1444144;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
              result[8] += -0.044797894;
            } else {
              result[8] += 0.003222309;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
              result[8] += 0.12255337;
            } else {
              result[8] += 0.024164818;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
              result[8] += -0.06294748;
            } else {
              result[8] += 0.03402067;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45055)) {
              result[8] += -0.035129018;
            } else {
              result[8] += 0.02026448;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += 0.17838226;
            } else {
              result[8] += 0.009445425;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[8] += -0.15764046;
            } else {
              result[8] += -0.01858019;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[8] += -0.007248679;
            } else {
              result[8] += -0.06670406;
            }
          } else {
            result[8] += -0.14625147;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        result[8] += 0.15355447;
      } else {
        result[8] += -0.09314479;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      result[8] += -0.15265632;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
          result[8] += 0.1183562;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
            result[8] += 0.08703935;
          } else {
            result[8] += -0.06144936;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
            result[8] += -0.14612147;
          } else {
            result[8] += -0.3318983;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.14227791;
            } else {
              result[8] += -0.028016103;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += 0.054296825;
            } else {
              result[8] += -0.17345576;
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
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1214180096)) {
              result[9] += 0.0035550494;
            } else {
              result[9] += -0.098543294;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51717)) {
              result[9] += 0.017555855;
            } else {
              result[9] += 0.10443129;
            }
          }
        } else {
          result[9] += -0.12831798;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
          result[9] += -0.14322211;
        } else {
          result[9] += 0.08917084;
        }
      }
    } else {
      result[9] += -0.13865304;
    }
  } else {
    result[9] += -0.14562047;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[10] += 0.007359661;
            } else {
              result[10] += -0.003391917;
            }
          } else {
            result[10] += -0.14666195;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
              result[10] += 0.07325531;
            } else {
              result[10] += 0.012530212;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += -0.14752746;
            } else {
              result[10] += 0.008826126;
            }
          }
        }
      } else {
        result[10] += -0.11911058;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)60690)) {
          result[10] += -0.13994;
        } else {
          result[10] += 0.053181227;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)33551)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[10] += -0.08486692;
            } else {
              result[10] += 0.07700488;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38365)) {
              result[10] += 0.16610382;
            } else {
              result[10] += 0.05715439;
            }
          }
        } else {
          result[10] += -0.10710462;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.1436745;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
        result[10] += 0.116205044;
      } else {
        result[10] += -0.09080254;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += -0.00025074003;
            } else {
              result[11] += 0.15425682;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[11] += -0.16523236;
            } else {
              result[11] += -0.01877958;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += 0.018537566;
            } else {
              result[11] += 0.1556126;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[11] += 0.20228994;
            } else {
              result[11] += -0.19963314;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.17387357;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)861303040)) {
              result[11] += 0.061720505;
            } else {
              result[11] += 0.013645047;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.029133769;
            } else {
              result[11] += -0.1858495;
            }
          }
        }
      }
    } else {
      result[11] += -0.14828101;
    }
  } else {
    result[11] += -0.14397006;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[12] += -0.005531079;
            } else {
              result[12] += 0.009221746;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[12] += -0.1452098;
            } else {
              result[12] += 0.05095523;
            }
          }
        } else {
          result[12] += -0.14646384;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1788612096)) {
              result[12] += 0.008710241;
            } else {
              result[12] += 0.10243506;
            }
          } else {
            result[12] += -0.08245253;
          }
        } else {
          result[12] += -0.15065873;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
          result[12] += 0.037668243;
        } else {
          result[12] += -0.1401358;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          result[12] += 0.1445738;
        } else {
          result[12] += -0.08215174;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      result[12] += -0.15977633;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[12] += 0.13946417;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          result[12] += 0.12923688;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[12] += -0.14292401;
            } else {
              result[12] += -0.05210268;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[12] += -0.12870817;
            } else {
              result[12] += 0.10067303;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)254)) {
              result[13] += 0.0041462937;
            } else {
              result[13] += -0.11305077;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[13] += 0.3804064;
            } else {
              result[13] += 0.08239705;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1263)) {
              result[13] += -0.13696851;
            } else {
              result[13] += 0.09098825;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[13] += -0.14547147;
            } else {
              result[13] += -0.41140842;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += 0.010863513;
            } else {
              result[13] += 0.096471645;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += -0.06319621;
            } else {
              result[13] += 0.1486148;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
            result[13] += 0.16103747;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
              result[13] += -0.09413051;
            } else {
              result[13] += 0.15819487;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        result[13] += 0.12776124;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)307)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1885973376)) {
              result[13] += 0.0027497662;
            } else {
              result[13] += -0.10579514;
            }
          } else {
            result[13] += 0.04211553;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)31487)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1632386176)) {
              result[13] += 0.16360866;
            } else {
              result[13] += 0.042731386;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43031)) {
              result[13] += -0.08236467;
            } else {
              result[13] += 0.035078578;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
      result[13] += -0.12906119;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
          result[13] += 0.02698493;
        } else {
          result[13] += -0.13238753;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[13] += -0.082467414;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)40452)) {
            result[13] += 0.0017193555;
          } else {
            result[13] += 0.119284354;
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
              result[14] += 0.0014851427;
            } else {
              result[14] += -0.1283749;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += 0.20396768;
            } else {
              result[14] += 0.114271834;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[14] += -0.14921065;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[14] += 0.015267236;
            } else {
              result[14] += -0.13340431;
            }
          }
        }
      } else {
        result[14] += -0.14876027;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[14] += 0.23167501;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
              result[14] += -0.11828168;
            } else {
              result[14] += 0.1444007;
            }
          }
        } else {
          result[14] += -0.1748662;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          result[14] += -0.14642924;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)978331136)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)28120)) {
              result[14] += 0.045787364;
            } else {
              result[14] += 0.126268;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1054373056)) {
              result[14] += -0.20237143;
            } else {
              result[14] += 0.025892263;
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
              result[14] += -0.038883414;
            } else {
              result[14] += -0.14458738;
            }
          } else {
            result[14] += 0.120662235;
          }
        } else {
          result[14] += -0.15630881;
        }
      } else {
        result[14] += 0.07739782;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          result[14] += -0.10296442;
        } else {
          result[14] += 0.1405345;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += 0.033242054;
            } else {
              result[14] += -0.070223406;
            }
          } else {
            result[14] += -0.14053865;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1296776704)) {
              result[14] += 0.06146079;
            } else {
              result[14] += -0.13977687;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
              result[14] += 0.32489622;
            } else {
              result[14] += -0.004477424;
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
              result[0] += 0.0032701513;
            } else {
              result[0] += -0.089622654;
            }
          } else {
            result[0] += -0.09768537;
          }
        } else {
          result[0] += -0.14711562;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1269061760)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[0] += 0.010370688;
            } else {
              result[0] += -0.12453122;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
              result[0] += 0.13111074;
            } else {
              result[0] += 0.018675864;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
            result[0] += -0.14011341;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[0] += 0.04610703;
            } else {
              result[0] += -0.110561125;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[0] += -0.13052884;
          } else {
            result[0] += 0.1620053;
          }
        } else {
          result[0] += -0.13812518;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
            result[0] += -0.116449706;
          } else {
            result[0] += 0.0012114608;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36564)) {
              result[0] += 0.15499002;
            } else {
              result[0] += 0.008206336;
            }
          } else {
            result[0] += -0.07935471;
          }
        }
      }
    }
  } else {
    result[0] += -0.13998769;
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[1] += -0.09150654;
      } else {
        result[1] += -0.012183564;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57010)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2497760512)) {
              result[1] += -0.0048552076;
            } else {
              result[1] += -0.07649422;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2764642816)) {
              result[1] += 0.054344177;
            } else {
              result[1] += 0.0006139282;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1223297280)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
              result[1] += -0.03046308;
            } else {
              result[1] += 0.06103408;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1730353280)) {
              result[1] += -0.12788641;
            } else {
              result[1] += -0.034371655;
            }
          }
        }
      } else {
        result[1] += -0.13353348;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)138283152)) {
              result[1] += 0.002488928;
            } else {
              result[1] += -0.01267962;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)42257)) {
              result[1] += 0.06889219;
            } else {
              result[1] += 0.008326053;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
            result[1] += -0.14319351;
          } else {
            result[1] += 0.1355622;
          }
        }
      } else {
        result[1] += -0.14676534;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[1] += 0.14356418;
            } else {
              result[1] += 3.0169914;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[1] += -0.17289327;
            } else {
              result[1] += 0.08318008;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[1] += -0.009161439;
            } else {
              result[1] += 0.042597447;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += -0.053685896;
            } else {
              result[1] += 0.005227099;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            result[1] += -0.15483461;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.040955752;
            } else {
              result[1] += -0.15586457;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[1] += 0.08460217;
            } else {
              result[1] += -0.05572342;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += 0.15175268;
            } else {
              result[1] += -0.0003800993;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)786)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[2] += -0.07571803;
            } else {
              result[2] += 0.011716707;
            }
          } else {
            result[2] += -0.009562666;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[2] += -0.026392175;
          } else {
            result[2] += -0.0124088945;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1051)) {
          result[2] += 0.045636967;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)4409)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)3123)) {
              result[2] += 0.0072006644;
            } else {
              result[2] += -0.03290106;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)5162)) {
              result[2] += 0.09910614;
            } else {
              result[2] += 0.002414052;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
              result[2] += 0.041111432;
            } else {
              result[2] += -0.021465752;
            }
          } else {
            result[2] += 0.0976801;
          }
        } else {
          result[2] += -0.019771049;
        }
      } else {
        result[2] += 0.14414966;
      }
    }
  } else {
    result[2] += -0.14764245;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[3] += -0.14744875;
      } else {
        result[3] += -0.02755768;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.11576359;
      } else {
        result[3] += 0.11852641;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
      result[3] += 0.0031748053;
    } else {
      result[3] += 0.10568398;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.14377066;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
              result[4] += 0.038121477;
            } else {
              result[4] += -0.081846535;
            }
          } else {
            result[4] += 0.074415304;
          }
        } else {
          result[4] += -0.08619385;
        }
      } else {
        result[4] += 0.070351146;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.14564265;
    } else {
      result[4] += -0.08813947;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[5] += 0.0030231983;
            } else {
              result[5] += -0.13825361;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
              result[5] += 0.11358108;
            } else {
              result[5] += 0.02638902;
            }
          }
        } else {
          result[5] += -0.13073024;
        }
      } else {
        result[5] += -0.13548191;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        result[5] += -0.13936244;
      } else {
        result[5] += 0.07684249;
      }
    }
  } else {
    result[5] += -0.14435141;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          result[6] += 0.0014633618;
        } else {
          result[6] += -0.08407214;
        }
      } else {
        result[6] += 0.09905216;
      }
    } else {
      result[6] += -0.11119444;
    }
  } else {
    result[6] += -0.14762095;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[7] += 0.00014647559;
            } else {
              result[7] += 0.12958193;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
              result[7] += -0.12996918;
            } else {
              result[7] += 0.038018458;
            }
          }
        } else {
          result[7] += -0.14217278;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[7] += -0.15032986;
        } else {
          result[7] += 0.12163717;
        }
      }
    } else {
      result[7] += 0.14249346;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)683239424)) {
              result[7] += 0.00375526;
            } else {
              result[7] += 0.073347345;
            }
          } else {
            result[7] += 0.14344269;
          }
        } else {
          result[7] += -0.112703934;
        }
      } else {
        result[7] += 0.27261436;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          result[7] += -0.13726147;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[7] += 0.0782701;
            } else {
              result[7] += -0.122657165;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[7] += -0.14427249;
            } else {
              result[7] += 0.11705775;
            }
          }
        }
      } else {
        result[7] += 0.14291987;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += -0.00026860725;
            } else {
              result[8] += -0.03924612;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
              result[8] += 0.09738783;
            } else {
              result[8] += 0.01722805;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += -0.024009578;
            } else {
              result[8] += -0.14846303;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
              result[8] += -0.057491757;
            } else {
              result[8] += 0.07711266;
            }
          }
        }
      } else {
        result[8] += -0.14468953;
      }
    } else {
      result[8] += 0.14654617;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      result[8] += -0.15183632;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
          result[8] += 0.12306626;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[8] += -0.16026402;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
              result[8] += 0.02510182;
            } else {
              result[8] += 0.12882406;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
            result[8] += -0.14506105;
          } else {
            result[8] += -0.34199512;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
              result[8] += 0.11716017;
            } else {
              result[8] += 0.044952676;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[8] += -0.17547485;
            } else {
              result[8] += 0.06869882;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[9] += 0.009471868;
            } else {
              result[9] += -0.11825374;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[9] += 0.0005130119;
            } else {
              result[9] += -0.0037278968;
            }
          }
        } else {
          result[9] += -0.12470848;
        }
      } else {
        result[9] += -0.13680004;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
        result[9] += -0.14221874;
      } else {
        result[9] += 0.08445885;
      }
    }
  } else {
    result[9] += -0.14485496;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3994002688)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
              result[10] += 0.0017684703;
            } else {
              result[10] += 0.08705197;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[10] += -0.19022079;
            } else {
              result[10] += -0.03892184;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46333)) {
              result[10] += 0.026571268;
            } else {
              result[10] += -0.075932905;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
              result[10] += 0.15913883;
            } else {
              result[10] += -0.053828243;
            }
          }
        }
      } else {
        result[10] += -0.11607332;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
            result[10] += -0.094750226;
          } else {
            result[10] += 0.08849849;
          }
        } else {
          result[10] += -0.13885365;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
          result[10] += -0.08424919;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
            result[10] += 0.21027528;
          } else {
            result[10] += -0.082576126;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.14258863;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
        result[10] += 0.09718748;
      } else {
        result[10] += -0.0801308;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[11] += 0.00045048838;
            } else {
              result[11] += -0.017963162;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += 0.07224561;
            } else {
              result[11] += 0.0015370277;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
              result[11] += 0.054731965;
            } else {
              result[11] += -0.0620683;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.14944983;
            } else {
              result[11] += -0.08570738;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
            result[11] += 0.22547613;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
              result[11] += -0.13634013;
            } else {
              result[11] += -0.020939715;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[11] += -0.0016246443;
            } else {
              result[11] += 0.098298565;
            }
          } else {
            result[11] += 0.25381857;
          }
        }
      }
    } else {
      result[11] += -0.1361994;
    }
  } else {
    result[11] += -0.1429087;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.00415519;
            } else {
              result[12] += -0.010228645;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[12] += -0.14400065;
            } else {
              result[12] += 0.050425522;
            }
          }
        } else {
          result[12] += -0.1453697;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
              result[12] += 0.007318001;
            } else {
              result[12] += 0.09421968;
            }
          } else {
            result[12] += -0.08131036;
          }
        } else {
          result[12] += -0.14918943;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
          result[12] += 0.030977242;
        } else {
          result[12] += -0.13703199;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          result[12] += 0.14231738;
        } else {
          result[12] += -0.07671173;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      result[12] += -0.1594538;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[12] += 0.13463697;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          result[12] += 0.1247282;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[12] += -0.14135833;
            } else {
              result[12] += -0.030840857;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[12] += -0.12456643;
            } else {
              result[12] += 0.09282203;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.00044397687;
            } else {
              result[13] += 0.027712783;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[13] += -0.10369476;
            } else {
              result[13] += 0.16034645;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[13] += -0.14054765;
            } else {
              result[13] += 0.06043354;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3338)) {
              result[13] += 0.00358013;
            } else {
              result[13] += -0.11803171;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1288050432)) {
            result[13] += -0.14657575;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[13] += -0.12722313;
            } else {
              result[13] += 0.017424094;
            }
          }
        } else {
          result[13] += -0.12026;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
              result[13] += 0.027036559;
            } else {
              result[13] += 0.14105135;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[13] += -0.10908871;
            } else {
              result[13] += 0.102933735;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
              result[13] += 0.04343958;
            } else {
              result[13] += 0.44764796;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[13] += 0.14008056;
            } else {
              result[13] += -0.058694724;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += -0.11744511;
            } else {
              result[13] += 0.015483553;
            }
          } else {
            result[13] += 0.23704946;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += -0.029792814;
            } else {
              result[13] += -0.13946083;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += 0.011450143;
            } else {
              result[13] += 0.13969563;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          result[13] += -0.010018754;
        } else {
          result[13] += -0.12818027;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2938224384)) {
          result[13] += 0.1857558;
        } else {
          result[13] += -0.1041603;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        result[13] += -0.14013134;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
          result[13] += -0.083548956;
        } else {
          result[13] += 0.028287746;
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += 0.0016200984;
            } else {
              result[14] += -0.14680623;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += 0.18672287;
            } else {
              result[14] += 0.100841954;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[14] += -0.14799824;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[14] += 0.009813027;
            } else {
              result[14] += -0.1309945;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[14] += 0.20347883;
            } else {
              result[14] += 0.10674317;
            }
          } else {
            result[14] += -0.16560152;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[14] += -0.1415921;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)41235)) {
              result[14] += -0.006662382;
            } else {
              result[14] += 0.06846579;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52901)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[14] += -0.10056209;
            } else {
              result[14] += 0.11696316;
            }
          } else {
            result[14] += -0.15451455;
          }
        } else {
          result[14] += 0.06869809;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[14] += -0.09905123;
          } else {
            result[14] += 0.13590485;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[14] += -0.012210296;
            } else {
              result[14] += -0.13762517;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[14] += 0.08826094;
            } else {
              result[14] += -0.04871439;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[14] += -0.04787291;
    } else {
      result[14] += -0.017143259;
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2256408064)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2130028928)) {
              result[0] += 0.0014596521;
            } else {
              result[0] += 0.1310797;
            }
          } else {
            result[0] += -0.13383597;
          }
        } else {
          result[0] += -0.13480459;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)45315)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            result[0] += -0.10468466;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
              result[0] += -0.030694762;
            } else {
              result[0] += 0.1374825;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1516537088)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)900580480)) {
              result[0] += -0.020250116;
            } else {
              result[0] += -0.13719052;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[0] += 0.13155153;
            } else {
              result[0] += -0.021613484;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
        result[0] += -0.1431732;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[0] += 0.03664825;
            } else {
              result[0] += -0.2634793;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
              result[0] += 0.13163637;
            } else {
              result[0] += -0.07278589;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += -0.14267254;
            } else {
              result[0] += 0.07316982;
            }
          } else {
            result[0] += -0.1340239;
          }
        }
      }
    }
  } else {
    result[0] += -0.1385831;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
              result[1] += 0.00016499416;
            } else {
              result[1] += -0.04756564;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2084)) {
              result[1] += -0.12848447;
            } else {
              result[1] += 0.024536936;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1651364224)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31234)) {
              result[1] += -0.10547033;
            } else {
              result[1] += 0.021911947;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1983854080)) {
              result[1] += 0.58569986;
            } else {
              result[1] += 0.06988856;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)53779)) {
          result[1] += -0.12723166;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
            result[1] += -0.09311016;
          } else {
            result[1] += 0.07615982;
          }
        }
      }
    } else {
      result[1] += -0.13680936;
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[1] += -0.15041077;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[1] += 0.099170364;
            } else {
              result[1] += -0.11962817;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)428962464)) {
              result[1] += 0.20875503;
            } else {
              result[1] += -0.12986022;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3325106688)) {
              result[1] += 0.07910553;
            } else {
              result[1] += 0.22206175;
            }
          }
        }
      } else {
        result[1] += 0.1327295;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
          result[1] += 0.10994564;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2299286272)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)880668160)) {
              result[1] += 0.02100337;
            } else {
              result[1] += -0.13043262;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31487)) {
              result[1] += -0.053397246;
            } else {
              result[1] += 0.08176555;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[1] += 0.13761395;
        } else {
          result[1] += -0.085275374;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)786)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[2] += -0.06985432;
            } else {
              result[2] += 0.010931711;
            }
          } else {
            result[2] += -0.008243464;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[2] += -0.023503724;
          } else {
            result[2] += -0.011159996;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1280)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1051)) {
            result[2] += 0.041990176;
          } else {
            result[2] += 0.013230486;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1556)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.05104592;
            } else {
              result[2] += 0.010162661;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1805)) {
              result[2] += 0.044741716;
            } else {
              result[2] += 0.0026648138;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
              result[2] += 0.024308074;
            } else {
              result[2] += 0.0965218;
            }
          } else {
            result[2] += -0.056608744;
          }
        } else {
          result[2] += 0.081925906;
        }
      } else {
        result[2] += 0.14321685;
      }
    }
  } else {
    result[2] += -0.14722505;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[3] += -0.14725028;
      } else {
        result[3] += -0.02520526;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.111778945;
      } else {
        result[3] += 0.1133137;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
      result[3] += 0.005519658;
    } else {
      result[3] += 0.09915512;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.14271988;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
            result[4] += 0.0552002;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
              result[4] += -0.0831633;
            } else {
              result[4] += 0.042016037;
            }
          }
        } else {
          result[4] += -0.08346153;
        }
      } else {
        result[4] += 0.06493615;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.14488861;
    } else {
      result[4] += -0.084906444;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44297)) {
              result[5] += 0.0014803061;
            } else {
              result[5] += 0.04357015;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1149980416)) {
              result[5] += -0.009959066;
            } else {
              result[5] += 0.18403958;
            }
          }
        } else {
          result[5] += -0.12840548;
        }
      } else {
        result[5] += -0.1330085;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        result[5] += -0.13787596;
      } else {
        result[5] += 0.07730594;
      }
    }
  } else {
    result[5] += -0.14340062;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          result[6] += 0.0014306263;
        } else {
          result[6] += -0.07876928;
        }
      } else {
        result[6] += 0.09569537;
      }
    } else {
      result[6] += -0.10792249;
    }
  } else {
    result[6] += -0.14720006;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += -0.00072000746;
            } else {
              result[7] += 0.01770098;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[7] += -0.12595236;
            } else {
              result[7] += 0.04053734;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43798)) {
              result[7] += -0.15514854;
            } else {
              result[7] += -0.04918473;
            }
          } else {
            result[7] += 0.10453406;
          }
        }
      } else {
        result[7] += 0.14085232;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[7] += -0.1487625;
      } else {
        result[7] += 0.11819059;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)683239424)) {
            result[7] += 0.00043459664;
          } else {
            result[7] += 0.073740736;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19463)) {
              result[7] += 0.06786478;
            } else {
              result[7] += 0.12793265;
            }
          } else {
            result[7] += 0.14774576;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
          result[7] += -0.097253405;
        } else {
          result[7] += 0.20487711;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        result[7] += -0.13397664;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)495)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1496744960)) {
              result[7] += 0.03269237;
            } else {
              result[7] += -0.08616075;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[7] += 0.26771915;
            } else {
              result[7] += 0.012499587;
            }
          }
        } else {
          result[7] += 0.14119276;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[8] += -0.0005944149;
            } else {
              result[8] += 0.089112006;
            }
          } else {
            result[8] += -0.1515347;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += -0.028999873;
            } else {
              result[8] += 0.1479113;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[8] += -0.15398774;
            } else {
              result[8] += 0.12503289;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[8] += -0.15234101;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += -0.12710206;
            } else {
              result[8] += 0.12288448;
            }
          } else {
            result[8] += -0.14407189;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        result[8] += 0.15104172;
      } else {
        result[8] += -0.097433284;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      result[8] += -0.15102461;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
          result[8] += 0.10643143;
        } else {
          result[8] += 0.008013341;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
            result[8] += -0.14419536;
          } else {
            result[8] += -0.35640514;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[8] += 0.137947;
            } else {
              result[8] += 0.05451441;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[8] += 0.11354352;
            } else {
              result[8] += -0.08132249;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[9] += 0.002674761;
            } else {
              result[9] += -0.09321595;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[9] += 0.05872126;
            } else {
              result[9] += 0.0054640817;
            }
          }
        } else {
          result[9] += -0.120926194;
        }
      } else {
        result[9] += -0.13482451;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
        result[9] += -0.14108424;
      } else {
        result[9] += 0.07814933;
      }
    }
  } else {
    result[9] += -0.14397791;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)61197)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60429)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
              result[10] += 0.002412035;
            } else {
              result[10] += -0.019706525;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3282277376)) {
              result[10] += -0.11778785;
            } else {
              result[10] += -0.034592975;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[10] += 0.03938569;
            } else {
              result[10] += 0.18624702;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2631808512)) {
              result[10] += -0.047548894;
            } else {
              result[10] += 0.079586655;
            }
          }
        }
      } else {
        result[10] += -0.112930715;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[10] += -0.091580085;
          } else {
            result[10] += 0.08028199;
          }
        } else {
          result[10] += -0.13696687;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
          result[10] += -0.080562934;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
            result[10] += 0.20799667;
          } else {
            result[10] += -0.07945073;
          }
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
      result[10] += -0.14136016;
    } else {
      result[10] += 0.016243111;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
              result[11] += -0.032219753;
            } else {
              result[11] += 0.0014593835;
            }
          } else {
            result[11] += -0.17332548;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[11] += -0.1506179;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)157615712)) {
              result[11] += 0.065656245;
            } else {
              result[11] += -0.0024695988;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3565603328)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61197)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)350722368)) {
              result[11] += 0.024395807;
            } else {
              result[11] += -0.0043613557;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[11] += 0.02778099;
            } else {
              result[11] += 0.1155035;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
              result[11] += 0.064400084;
            } else {
              result[11] += -0.0068084416;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
              result[11] += 0.042947732;
            } else {
              result[11] += -0.077618524;
            }
          }
        }
      }
    } else {
      result[11] += -0.14563145;
    }
  } else {
    result[11] += -0.14170459;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[12] += -0.02432006;
        } else {
          result[12] += -0.12154082;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[12] += -0.092705674;
        } else {
          result[12] += -0.05543631;
        }
      }
    } else {
      result[12] += -0.13114499;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[12] += 0.002888568;
            } else {
              result[12] += -0.1565777;
            }
          } else {
            result[12] += -0.14864609;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[12] += 0.14932881;
            } else {
              result[12] += 0.2130359;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)40946396)) {
              result[12] += -0.15969574;
            } else {
              result[12] += 0.033667233;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5394)) {
              result[12] += -0.07768517;
            } else {
              result[12] += -0.14960355;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[12] += -0.13476437;
            } else {
              result[12] += 0.08692453;
            }
          }
        } else {
          result[12] += 0.11415813;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[12] += -0.13752066;
            } else {
              result[12] += 0.019382488;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1535688832)) {
              result[12] += -0.11652112;
            } else {
              result[12] += 0.12396132;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[12] += -0.11443666;
            } else {
              result[12] += 0.122336745;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[12] += 0.007601001;
            } else {
              result[12] += -0.16063663;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[12] += 0.011259883;
            } else {
              result[12] += 0.044208378;
            }
          } else {
            result[12] += -0.11937121;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
            result[12] += -0.13312401;
          } else {
            result[12] += -0.012941004;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)5394)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[13] += -0.02163293;
            } else {
              result[13] += 0.017135;
            }
          } else {
            result[13] += 0.15948126;
          }
        } else {
          result[13] += -0.12493245;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
            result[13] += 0.27069896;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += 0.14155374;
            } else {
              result[13] += -0.0696959;
            }
          }
        } else {
          result[13] += -0.108986445;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)5640)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2830898688)) {
              result[13] += -0.016077923;
            } else {
              result[13] += 0.27039713;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)723390400)) {
              result[13] += 0.0019986727;
            } else {
              result[13] += -0.12104409;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2722185728)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += 0.094994806;
            } else {
              result[13] += 0.4264672;
            }
          } else {
            result[13] += -0.07639239;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.004331851;
            } else {
              result[13] += -0.08478416;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[13] += -0.10877474;
            } else {
              result[13] += 0.109303184;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[13] += 0.1337533;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.110634536;
            } else {
              result[13] += 0.027980786;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      result[13] += -0.13854314;
    } else {
      result[13] += -0.035508946;
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3865091840)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3565603328)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[14] += -0.00035840718;
            } else {
              result[14] += 0.111485645;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[14] += -0.056008913;
            } else {
              result[14] += 0.049074028;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3649703168)) {
              result[14] += 0.013969035;
            } else {
              result[14] += 0.116578154;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56328)) {
              result[14] += 0.0076082707;
            } else {
              result[14] += -0.11210517;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)21524)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
            result[14] += 0.21136148;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += -0.07091832;
            } else {
              result[14] += -0.14064014;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)50704)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
              result[14] += -0.016750734;
            } else {
              result[14] += 0.09628845;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[14] += -0.12044094;
            } else {
              result[14] += -0.035254773;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
              result[14] += 0.09428267;
            } else {
              result[14] += 0.023043063;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57357)) {
              result[14] += -0.032951705;
            } else {
              result[14] += -0.14650486;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[14] += -0.013191296;
            } else {
              result[14] += -0.13996123;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15370)) {
              result[14] += -0.13432975;
            } else {
              result[14] += 0.016522713;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10006)) {
              result[14] += 0.22165379;
            } else {
              result[14] += 0.009863834;
            }
          } else {
            result[14] += 0.55716527;
          }
        } else {
          result[14] += -0.090117194;
        }
      }
    }
  } else {
    result[14] += -0.13364205;
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2700765696)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2130028928)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[0] += 0.0015174946;
            } else {
              result[0] += 0.1050672;
            }
          } else {
            result[0] += -0.13298847;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1943717504)) {
            result[0] += -0.24413021;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += -0.13496335;
            } else {
              result[0] += -0.015614183;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[0] += -0.10517485;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[0] += 0.14762159;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[0] += -0.119830824;
            } else {
              result[0] += 0.12049077;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[0] += -0.13563444;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[0] += 0.07787739;
          } else {
            result[0] += -0.114874996;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[0] += 0.095291324;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
            result[0] += -0.11541101;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[0] += 0.1403203;
            } else {
              result[0] += 0.024094589;
            }
          }
        }
      }
    }
  } else {
    result[0] += -0.13702714;
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[1] += -0.08466129;
        } else {
          result[1] += -0.01077869;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.0037154125;
            } else {
              result[1] += 0.021416843;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[1] += 0.0428465;
            } else {
              result[1] += -0.07056977;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[1] += -0.02767013;
            } else {
              result[1] += -0.15361936;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[1] += -0.009639066;
            } else {
              result[1] += 0.07364369;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[1] += -0.06356994;
        } else {
          result[1] += -0.14419827;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2742782464)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.00809348;
            } else {
              result[1] += 0.12417965;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2476456192)) {
              result[1] += -0.14594375;
            } else {
              result[1] += -0.026521986;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[1] += 0.22984631;
            } else {
              result[1] += -0.081120834;
            }
          } else {
            result[1] += -0.078209706;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[1] += 0.00033941798;
            } else {
              result[1] += -0.09804447;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50449)) {
              result[1] += 0.09353196;
            } else {
              result[1] += -0.017503697;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
            result[1] += -0.13950208;
          } else {
            result[1] += 0.1241083;
          }
        }
      } else {
        result[1] += -0.14583434;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[1] += 0.12275405;
            } else {
              result[1] += 1.1537397;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[1] += -0.15293357;
            } else {
              result[1] += 0.06963132;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)28120)) {
              result[1] += 0.066053465;
            } else {
              result[1] += 0.008316983;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += -0.047722094;
            } else {
              result[1] += 0.004356983;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            result[1] += -0.15377924;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.03760334;
            } else {
              result[1] += -0.15373;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += 0.066692784;
            } else {
              result[1] += 0.0027505886;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
              result[1] += -0.15666145;
            } else {
              result[1] += -0.0025034333;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)786)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[2] += -0.06422952;
            } else {
              result[2] += 0.009958617;
            }
          } else {
            result[2] += -0.0073719965;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[2] += -0.020878399;
          } else {
            result[2] += -0.009778439;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)65281)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)64484)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)47877)) {
              result[2] += 0.003911563;
            } else {
              result[2] += -0.004998618;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.00044667357;
            } else {
              result[2] += 0.11771944;
            }
          }
        } else {
          result[2] += -0.029322242;
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
          result[2] += -0.023943797;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
              result[2] += 0.01385216;
            } else {
              result[2] += 0.105219185;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46494)) {
              result[2] += -0.015752919;
            } else {
              result[2] += 0.039528564;
            }
          }
        }
      } else {
        result[2] += 0.14186199;
      }
    }
  } else {
    result[2] += -0.14673865;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[3] += -0.1467522;
      } else {
        result[3] += -0.022827035;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.1075575;
      } else {
        result[3] += 0.108058214;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
      result[3] += 0.008975375;
    } else {
      result[3] += 0.09312933;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)796)) {
        result[4] += -0.0822286;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
              result[4] += 0.038711876;
            } else {
              result[4] += -0.07124571;
            }
          } else {
            result[4] += 0.06301262;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
            result[4] += -0.07775642;
          } else {
            result[4] += 0.05651339;
          }
        }
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[4] += 0.009419297;
        } else {
          result[4] += 0.10369504;
        }
      } else {
        result[4] += 0.14295454;
      }
    }
  } else {
    result[4] += -0.14681078;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)59329708)) {
              result[5] += 0.003040692;
            } else {
              result[5] += -0.05922162;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
              result[5] += 0.03978335;
            } else {
              result[5] += -0.09887296;
            }
          }
        } else {
          result[5] += -0.1259191;
        }
      } else {
        result[5] += -0.13023777;
      }
    } else {
      result[5] += -0.11280755;
    }
  } else {
    result[5] += -0.14228846;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        result[6] += 0.0010145253;
      } else {
        result[6] += 0.09240502;
      }
    } else {
      result[6] += -0.1045687;
    }
  } else {
    result[6] += -0.1467096;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.0040334784;
            } else {
              result[7] += -0.004382356;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
              result[7] += 0.05044286;
            } else {
              result[7] += 0.13847151;
            }
          }
        } else {
          result[7] += -0.13986263;
        }
      } else {
        result[7] += 0.13900445;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[7] += -0.14720538;
      } else {
        result[7] += 0.114368804;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)272)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[7] += 0.097401;
            } else {
              result[7] += -0.076116875;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[7] += 0.14634508;
            } else {
              result[7] += 0.09614282;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            result[7] += -0.103895396;
          } else {
            result[7] += 0.20450895;
          }
        }
      } else {
        result[7] += -0.06651834;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[7] += -0.13586167;
        } else {
          result[7] += -0.040832628;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[7] += 0.06481984;
            } else {
              result[7] += -0.1179633;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[7] += -0.1385648;
            } else {
              result[7] += 0.1089297;
            }
          }
        } else {
          result[7] += 0.13926287;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
              result[8] += -0.037014145;
            } else {
              result[8] += 0.003618661;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
              result[8] += 0.015383172;
            } else {
              result[8] += 0.035691388;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46835)) {
              result[8] += -0.038049243;
            } else {
              result[8] += -0.083257265;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1559)) {
              result[8] += 0.13535948;
            } else {
              result[8] += -0.016860893;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += 0.13970375;
            } else {
              result[8] += 0.00072801573;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57357)) {
              result[8] += -0.10669183;
            } else {
              result[8] += 0.07687215;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[8] += -0.003566343;
            } else {
              result[8] += -0.02242942;
            }
          } else {
            result[8] += -0.14362259;
          }
        }
      }
    } else {
      result[8] += 0.14248574;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      result[8] += -0.15020521;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
          result[8] += 0.11321923;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[8] += -0.15550391;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
              result[8] += 0.0135578895;
            } else {
              result[8] += 0.12291287;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)428962464)) {
            result[8] += -0.2736337;
          } else {
            result[8] += -0.14302734;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[8] += 0.13478394;
            } else {
              result[8] += 0.051882356;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[8] += 0.10899476;
            } else {
              result[8] += -0.07018656;
            }
          }
        }
      }
    }
  }
}


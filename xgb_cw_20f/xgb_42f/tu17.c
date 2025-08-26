
#include "header.h"

void predict_unit17(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
        result[4] += -0.02671259;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            result[4] += 0.0070616226;
          } else {
            result[4] += 0.05520902;
          }
        } else {
          result[4] += 0.0021673955;
        }
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
        result[4] += 0.04208391;
      } else {
        result[4] += 0.10663851;
      }
    }
  } else {
    result[4] += -0.122227356;
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)53522)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36306)) {
              result[5] += 0.0004541572;
            } else {
              result[5] += -0.123092525;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1259780736)) {
              result[5] += 0.16231143;
            } else {
              result[5] += -0.08246217;
            }
          }
        } else {
          result[5] += -0.1105245;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)59674)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51717)) {
              result[5] += 0.065947354;
            } else {
              result[5] += -0.028817384;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)41745)) {
              result[5] += -0.018369747;
            } else {
              result[5] += 0.03944947;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1034955072)) {
              result[5] += -0.067830406;
            } else {
              result[5] += 0.03498213;
            }
          } else {
            result[5] += -0.10988897;
          }
        }
      }
    } else {
      result[5] += -0.1020212;
    }
  } else {
    result[5] += -0.10401366;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += -0.00024450492;
  } else {
    result[6] += -0.12161982;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[7] += -0.001943353;
            } else {
              result[7] += 0.00216465;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)841263296)) {
              result[7] += -0.08353871;
            } else {
              result[7] += -0.009938025;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[7] += 0.041343447;
            } else {
              result[7] += -0.07280545;
            }
          } else {
            result[7] += 0.13686316;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[7] += 0.026731929;
        } else {
          result[7] += 0.11208398;
        }
      }
    } else {
      result[7] += -0.11664177;
    }
  } else {
    result[7] += 0.11736281;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[8] += -0.00075083144;
            } else {
              result[8] += 0.05396278;
            }
          } else {
            result[8] += -0.15811484;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[8] += 0.12609428;
            } else {
              result[8] += 0.0063188956;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += -0.0070735742;
            } else {
              result[8] += 0.1005602;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[8] += 0.055610504;
            } else {
              result[8] += 0.20801069;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
              result[8] += -0.1197712;
            } else {
              result[8] += 0.04288443;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            result[8] += -0.13556312;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.07100386;
            } else {
              result[8] += -0.0540224;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)46333)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24813)) {
              result[8] += 0.031594362;
            } else {
              result[8] += 0.1247869;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50954)) {
              result[8] += -0.08151762;
            } else {
              result[8] += 0.026517019;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)742410688)) {
              result[8] += -0.13076426;
            } else {
              result[8] += -0.02642524;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += 0.10548454;
            } else {
              result[8] += 0.030230615;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)50704)) {
            result[8] += 0.15926765;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1535688832)) {
              result[8] += 0.13480683;
            } else {
              result[8] += 0.050820883;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
              result[8] += -0.08083658;
            } else {
              result[8] += 0.015760206;
            }
          } else {
            result[8] += 0.074436925;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.14459503;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            result[8] += 0.13772455;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[8] += 0.107525475;
            } else {
              result[8] += -0.042026877;
            }
          }
        } else {
          result[8] += -0.09995039;
        }
      } else {
        result[8] += -0.112353496;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
              result[9] += 0.00079780974;
            } else {
              result[9] += -0.10516895;
            }
          } else {
            result[9] += 0.08247598;
          }
        } else {
          result[9] += -0.07572039;
        }
      } else {
        result[9] += -0.07745458;
      }
    } else {
      result[9] += -0.0810373;
    }
  } else {
    result[9] += -0.10455864;
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)51204)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49678)) {
              result[10] += -0.00045118798;
            } else {
              result[10] += 0.10660579;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)52745)) {
              result[10] += -0.09468409;
            } else {
              result[10] += -0.0070077437;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2631808512)) {
            result[10] += -0.038685605;
          } else {
            result[10] += 0.16235727;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[10] += -0.1333257;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
            result[10] += 0.112529114;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
              result[10] += 0.008500665;
            } else {
              result[10] += -0.03699538;
            }
          }
        }
      }
    } else {
      result[10] += -0.08770217;
    }
  } else {
    result[10] += -0.09807428;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)486985984)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[11] += -0.0014666895;
            } else {
              result[11] += 0.059496474;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[11] += -0.015684579;
            } else {
              result[11] += 0.11625416;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)40946396)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57357)) {
              result[11] += -0.19785388;
            } else {
              result[11] += 0.097123034;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56583)) {
              result[11] += -0.00192671;
            } else {
              result[11] += -0.16413738;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)40946396)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[11] += -0.01567659;
            } else {
              result[11] += 0.12121557;
            }
          } else {
            result[11] += 0.25562802;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37600)) {
              result[11] += -0.21934432;
            } else {
              result[11] += 0.015107536;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50193)) {
              result[11] += 0.011405036;
            } else {
              result[11] += 0.08082543;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[11] += 0.04406725;
            } else {
              result[11] += -0.1826733;
            }
          } else {
            result[11] += -0.24990399;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
            result[11] += -0.35592663;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[11] += 0.054494727;
            } else {
              result[11] += -0.24574693;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)17940)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)16150)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
              result[11] += -0.12707806;
            } else {
              result[11] += 0.012694568;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)526637856)) {
              result[11] += 0.18406703;
            } else {
              result[11] += 0.057578515;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)19463)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[11] += -0.19222075;
            } else {
              result[11] += -0.043365903;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[11] += -0.039335556;
            } else {
              result[11] += 0.06854714;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)920192512)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)762532352)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[11] += 0.034451436;
            } else {
              result[11] += -0.076756306;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
              result[11] += 0.29931176;
            } else {
              result[11] += -0.13241139;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[11] += 0.004878977;
            } else {
              result[11] += -0.26556048;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
              result[11] += 0.111771815;
            } else {
              result[11] += -0.013434027;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)821483008)) {
              result[11] += 0.052458942;
            } else {
              result[11] += 0.016599458;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)900580480)) {
              result[11] += -0.031973906;
            } else {
              result[11] += -0.29520205;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[11] += -0.09169094;
            } else {
              result[11] += 0.069989614;
            }
          } else {
            result[11] += -0.22499944;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)958688384)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)16917)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)2835)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
              result[11] += -0.055418592;
            } else {
              result[11] += 0.102864206;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[11] += -0.11839183;
            } else {
              result[11] += -0.25406462;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53779)) {
              result[11] += -0.031576734;
            } else {
              result[11] += -0.14469954;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += 0.13785258;
            } else {
              result[11] += -0.037210625;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)9237)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1001994624)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[11] += 0.14248157;
            } else {
              result[11] += -0.032881703;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1091894528)) {
              result[11] += -0.06262757;
            } else {
              result[11] += 0.010215226;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)13341)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
              result[11] += 0.03877182;
            } else {
              result[11] += -0.022996768;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13844)) {
              result[11] += 0.08008055;
            } else {
              result[11] += -4.3326723e-05;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
              result[12] += 0.0012544718;
            } else {
              result[12] += -0.13285197;
            }
          } else {
            result[12] += -0.14856842;
          }
        } else {
          result[12] += -0.14528891;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[12] += 0.1541217;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)40946396)) {
            result[12] += -0.14280663;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
              result[12] += 0.11864967;
            } else {
              result[12] += 0.01120293;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
            result[12] += 0.00060449267;
          } else {
            result[12] += -0.0834464;
          }
        } else {
          result[12] += -0.14298578;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
            result[12] += 0.02694198;
          } else {
            result[12] += -0.13652161;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[12] += 0.12382595;
          } else {
            result[12] += 0.02434857;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
      result[12] += -0.14406905;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[12] += -0.117728435;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1496744960)) {
              result[12] += -0.085943386;
            } else {
              result[12] += 0.100798026;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)44552)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
              result[12] += 0.14938821;
            } else {
              result[12] += -0.028352007;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
              result[12] += -0.0886339;
            } else {
              result[12] += 0.073715106;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[12] += -0.116201624;
            } else {
              result[12] += 0.043780815;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[12] += 0.002913233;
            } else {
              result[12] += -0.14076343;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59926)) {
              result[12] += 0.0004773441;
            } else {
              result[12] += 0.03281535;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2256408064)) {
              result[12] += 0.014431847;
            } else {
              result[12] += -0.094661824;
            }
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60184)) {
              result[13] += 0.001779;
            } else {
              result[13] += -0.010265026;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2256408064)) {
              result[13] += -0.10500098;
            } else {
              result[13] += 0.037793472;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
            result[13] += 0.0917572;
          } else {
            result[13] += 0.03034726;
          }
        }
      } else {
        result[13] += -0.102742076;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[13] += -0.14203705;
          } else {
            result[13] += -0.03561982;
          }
        } else {
          result[13] += 0.023429845;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2398340864)) {
              result[13] += 0.16010292;
            } else {
              result[13] += 0.070488326;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)35300)) {
              result[13] += 0.023724513;
            } else {
              result[13] += -0.01515556;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)254)) {
              result[13] += 0.014740356;
            } else {
              result[13] += -0.10036977;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += 0.1173344;
            } else {
              result[13] += -0.09983977;
            }
          }
        }
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)39)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
          result[13] += 0.11914755;
        } else {
          result[13] += -0.09050658;
        }
      } else {
        result[13] += 0.13137963;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)43031)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2275607552)) {
            result[13] += 0.05218419;
          } else {
            result[13] += -0.024693765;
          }
        } else {
          result[13] += 0.10817141;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
          result[13] += 0.066510014;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)880668160)) {
            result[13] += -0.15695514;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[13] += 0.06776231;
            } else {
              result[13] += -0.043974336;
            }
          }
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2835)) {
              result[14] += 0.0058338773;
            } else {
              result[14] += -0.0017128679;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[14] += -0.028831227;
            } else {
              result[14] += -0.009325554;
            }
          }
        } else {
          result[14] += -0.1107229;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          result[14] += -0.12257656;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            result[14] += -0.023411231;
          } else {
            result[14] += 0.07732028;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)29679)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)26591)) {
              result[14] += 0.010098061;
            } else {
              result[14] += 0.07272119;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31487)) {
              result[14] += -0.07208385;
            } else {
              result[14] += 0.0014969104;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4016157440)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)802443328)) {
              result[14] += 0.13415717;
            } else {
              result[14] += 0.04634404;
            }
          } else {
            result[14] += -0.08880269;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
            result[14] += -0.10401148;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)428962464)) {
              result[14] += 0.0025055064;
            } else {
              result[14] += 0.19116177;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3800402176)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3500444928)) {
              result[14] += -0.11374862;
            } else {
              result[14] += -0.019945582;
            }
          } else {
            result[14] += 0.075079925;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)52901)) {
        result[14] += -0.13807723;
      } else {
        result[14] += -0.038598567;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
          result[14] += -0.066129796;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1177192448)) {
            result[14] += 0.20677947;
          } else {
            result[14] += 0.073286854;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          result[14] += -0.12270618;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)280)) {
              result[14] += 0.09469264;
            } else {
              result[14] += 0.0038038548;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[14] += -0.066175215;
            } else {
              result[14] += -0.003706712;
            }
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58700)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[0] += 0.0012438161;
            } else {
              result[0] += -0.096498124;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
              result[0] += 0.1449706;
            } else {
              result[0] += -0.006580732;
            }
          }
        } else {
          result[0] += -0.10670808;
        }
      } else {
        result[0] += -0.14201553;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1452252288)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)31746)) {
          result[0] += -0.08036774;
        } else {
          result[0] += 0.027169323;
        }
      } else {
        result[0] += 0.11643571;
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)21274)) {
          result[0] += -0.013211709;
        } else {
          result[0] += -0.119887225;
        }
      } else {
        result[0] += -0.024793977;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2275607552)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
          result[0] += 0.013733806;
        } else {
          result[0] += 0.090769015;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[0] += -0.116200924;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2938224384)) {
              result[0] += 0.013573728;
            } else {
              result[0] += -0.044716693;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23300)) {
              result[0] += 0.14088196;
            } else {
              result[0] += 0.019698795;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += -0.06824728;
            } else {
              result[0] += 0.071863085;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)6)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[1] += -0.018902533;
            } else {
              result[1] += -0.1464935;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
              result[1] += 0.13945949;
            } else {
              result[1] += -0.0010885416;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
              result[1] += 0.12305666;
            } else {
              result[1] += 0.035934;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44552)) {
              result[1] += 0.0128075965;
            } else {
              result[1] += -0.019153137;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64261)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
              result[1] += 0.00029551703;
            } else {
              result[1] += 0.012985595;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
              result[1] += -0.020405157;
            } else {
              result[1] += -0.00833646;
            }
          }
        } else {
          result[1] += 0.028692612;
        }
      }
    } else {
      result[1] += -0.14283274;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
          result[1] += 0.2097144;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[1] += 0.13560493;
            } else {
              result[1] += -0.0050474675;
            }
          } else {
            result[1] += -0.083613165;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)20245)) {
              result[1] += -0.05125891;
            } else {
              result[1] += 0.09212086;
            }
          } else {
            result[1] += -0.24596553;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
              result[1] += -0.025664749;
            } else {
              result[1] += 0.13025798;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
              result[1] += -0.1064804;
            } else {
              result[1] += 0.017301403;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)138283152)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)40946396)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[1] += 0.022660762;
            } else {
              result[1] += -0.15145752;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
              result[1] += -0.07615337;
            } else {
              result[1] += -0.16075788;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)49419)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[1] += 0.04742879;
            } else {
              result[1] += -0.067982785;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[1] += -0.14172974;
            } else {
              result[1] += 0.11087944;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)235509136)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)37849)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33269)) {
              result[1] += 0.06628631;
            } else {
              result[1] += 0.24037579;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62732)) {
              result[1] += -0.025424113;
            } else {
              result[1] += 0.12949793;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)350722368)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[1] += 0.074618325;
            } else {
              result[1] += -0.061653115;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)428962464)) {
              result[1] += 0.04662037;
            } else {
              result[1] += 0.0020721534;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)41676)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)41154)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)40628)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)39115)) {
              result[2] += 0.0023045586;
            } else {
              result[2] += -0.04635306;
            }
          } else {
            result[2] += 0.055774737;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)41406)) {
            result[2] += -0.15925641;
          } else {
            result[2] += -0.00086227525;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)41951)) {
          result[2] += 0.12898631;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)42448)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.09187707;
            } else {
              result[2] += 0.040790357;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)42720)) {
              result[2] += 0.0938494;
            } else {
              result[2] += 0.0027676325;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[2] += 0.07816486;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
            result[2] += -0.01945052;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21042)) {
              result[2] += 0.08036424;
            } else {
              result[2] += 0.015436898;
            }
          }
        }
      } else {
        result[2] += 0.091158286;
      }
    }
  } else {
    result[2] += -0.11880574;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[3] += -0.12249835;
      } else {
        result[3] += -0.0037190511;
      }
    } else {
      result[3] += 0.016716994;
    }
  } else {
    result[3] += 0.040294793;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
        result[4] += -0.024375767;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          result[4] += 0.044103112;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
              result[4] += 0.011580211;
            } else {
              result[4] += -0.08140249;
            }
          } else {
            result[4] += 0.048425306;
          }
        }
      }
    } else {
      result[4] += 0.08782941;
    }
  } else {
    result[4] += -0.11926363;
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2002613632)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1112714368)) {
              result[5] += 0.0005631452;
            } else {
              result[5] += 0.024939673;
            }
          } else {
            result[5] += -0.09803386;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)49678)) {
            result[5] += -0.11547714;
          } else {
            result[5] += 0.017687853;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)21524)) {
            result[5] += 0.040173635;
          } else {
            result[5] += 0.14437437;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            result[5] += -0.10208819;
          } else {
            result[5] += 0.10349794;
          }
        }
      }
    } else {
      result[5] += -0.09919141;
    }
  } else {
    result[5] += -0.1005729;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += -0.00032963086;
  } else {
    result[6] += -0.118622996;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
              result[7] += -0.0019305608;
            } else {
              result[7] += -0.02393255;
            }
          } else {
            result[7] += 0.1487429;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += -0.14732061;
            } else {
              result[7] += -0.21302114;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1496744960)) {
              result[7] += 0.11146911;
            } else {
              result[7] += -0.12384485;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[7] += 0.0014546518;
            } else {
              result[7] += 0.12413179;
            }
          } else {
            result[7] += -0.1879839;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            result[7] += -0.13618256;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
              result[7] += 0.00057748985;
            } else {
              result[7] += 0.07574869;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[7] += 0.0051446855;
      } else {
        result[7] += 0.0025873813;
      }
    }
  } else {
    result[7] += 0.114454344;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[8] += -0.000110123336;
            } else {
              result[8] += 0.04428427;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.07843116;
            } else {
              result[8] += -0.010975134;
            }
          }
        } else {
          result[8] += -0.1296926;
        }
      } else {
        result[8] += 0.12839647;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
        result[8] += -0.1416723;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
              result[8] += 0.07447318;
            } else {
              result[8] += -0.15040836;
            }
          } else {
            result[8] += 0.12691584;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
            result[8] += -0.17156312;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += -0.17890285;
            } else {
              result[8] += 0.08505973;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      result[8] += -0.14022878;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
            result[8] += -0.0008549657;
          } else {
            result[8] += 0.117496826;
          }
        } else {
          result[8] += -0.006332712;
        }
      } else {
        result[8] += -0.095205575;
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2002613632)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1943717504)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1846921344)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1807130496)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1730353280)) {
              result[9] += 0.0002877799;
            } else {
              result[9] += 0.08167883;
            }
          } else {
            result[9] += -0.17399839;
          }
        } else {
          result[9] += 0.08637203;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          result[9] += -0.18123382;
        } else {
          result[9] += 0.07161686;
        }
      }
    } else {
      result[9] += 0.07017675;
    }
  } else {
    result[9] += -0.1013084;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62221)) {
              result[10] += 0.0011142682;
            } else {
              result[10] += 0.029405868;
            }
          } else {
            result[10] += -0.10208429;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[10] += -0.14393736;
            } else {
              result[10] += 0.007525861;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
              result[10] += 0.11669776;
            } else {
              result[10] += -0.02775122;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)9742)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
              result[10] += 0.11781718;
            } else {
              result[10] += -0.023258546;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2540421888)) {
              result[10] += -0.123658635;
            } else {
              result[10] += 0.022019036;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)12579)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2192098560)) {
              result[10] += 0.15305261;
            } else {
              result[10] += 0.03203356;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)20497)) {
              result[10] += -0.031327922;
            } else {
              result[10] += 0.010208737;
            }
          }
        }
      }
    } else {
      result[10] += -0.08188185;
    }
  } else {
    result[10] += -0.09527817;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
              result[11] += 0.00021932731;
            } else {
              result[11] += -0.009572393;
            }
          } else {
            result[11] += -0.10845885;
          }
        } else {
          result[11] += -0.10941624;
        }
      } else {
        result[11] += -0.11064561;
      }
    } else {
      result[11] += -0.116343044;
    }
  } else {
    result[11] += -0.1126356;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2896713728)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2610506496)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)58915)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)29160)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2275607552)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
              result[12] += -0.0031783346;
            } else {
              result[12] += 0.02075079;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2317237248)) {
              result[12] += 0.1077302;
            } else {
              result[12] += 0.019538367;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)32530)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31746)) {
              result[12] += -0.01745561;
            } else {
              result[12] += -0.06306357;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[12] += -0.0039692093;
            } else {
              result[12] += 0.03314539;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2051944064)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
              result[12] += 0.0059221825;
            } else {
              result[12] += -0.063322745;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[12] += -0.19877756;
            } else {
              result[12] += -0.050911617;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2109833344)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
              result[12] += 0.48887023;
            } else {
              result[12] += 0.04778886;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[12] += 0.013856456;
            } else {
              result[12] += 0.14318144;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[12] += -0.056395438;
            } else {
              result[12] += 0.08048022;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
              result[12] += 0.02021469;
            } else {
              result[12] += -0.13969368;
            }
          }
        } else {
          result[12] += 0.1090755;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2700765696)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47601)) {
              result[12] += -0.004495644;
            } else {
              result[12] += 0.09688159;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[12] += -0.18682864;
            } else {
              result[12] += 0.020624775;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)17173)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)16666)) {
              result[12] += -0.012105453;
            } else {
              result[12] += 0.44752964;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)28902)) {
              result[12] += -0.09495493;
            } else {
              result[12] += -0.015947012;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3478112512)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3435244800)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)11810)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10780)) {
              result[12] += -0.0062535936;
            } else {
              result[12] += -0.12007764;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.028167691;
            } else {
              result[12] += -0.0017848861;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)52484)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4358)) {
              result[12] += -0.049622998;
            } else {
              result[12] += 0.08123145;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[12] += -0.12660226;
            } else {
              result[12] += 0.16613081;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4016157440)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3757889792)) {
              result[12] += -0.007680165;
            } else {
              result[12] += 0.015356908;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
              result[12] += -0.0598116;
            } else {
              result[12] += 0.101582825;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[12] += 0.02591498;
            } else {
              result[12] += 0.09882846;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
              result[12] += -0.05548711;
            } else {
              result[12] += 0.02027356;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)3083)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[12] += 0.24870424;
        } else {
          result[12] += -0.027644228;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3109958656)) {
              result[12] += 0.01323249;
            } else {
              result[12] += -0.12032419;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31234)) {
              result[12] += 0.088142395;
            } else {
              result[12] += -0.03325263;
            }
          }
        } else {
          result[12] += -0.16635573;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)39)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.00027475954;
            } else {
              result[13] += -0.056164257;
            }
          } else {
            result[13] += 0.11517237;
          }
        } else {
          result[13] += 0.14362836;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1516537088)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1054373056)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += 0.08013233;
            } else {
              result[13] += -0.09121175;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
              result[13] += 0.3862521;
            } else {
              result[13] += 0.12906073;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3544269056)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[13] += -0.15782061;
            } else {
              result[13] += -0.030253889;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += 0.022770898;
            } else {
              result[13] += 0.08353858;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1263)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            result[13] += -0.1468981;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)723390400)) {
              result[13] += 0.006473642;
            } else {
              result[13] += -0.10490044;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            result[13] += -0.09081124;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1072968960)) {
              result[13] += 0.09958277;
            } else {
              result[13] += -0.015501158;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
          result[13] += 0.07932049;
        } else {
          result[13] += -0.031349573;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50613)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48125)) {
              result[13] += 0.021387529;
            } else {
              result[13] += 0.15860982;
            }
          } else {
            result[13] += 0.27912685;
          }
        } else {
          result[13] += -0.066711515;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)330195200)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += -0.11358765;
            } else {
              result[13] += -0.032897815;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17686)) {
              result[13] += -0.08369534;
            } else {
              result[13] += 0.10747326;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3671485440)) {
              result[13] += 0.015416741;
            } else {
              result[13] += -0.017971756;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50899)) {
              result[13] += -0.0057092113;
            } else {
              result[13] += -0.13449618;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        result[13] += 0.14322011;
      } else {
        result[13] += -0.05310807;
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)526637856)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)350722368)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)330195200)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += -0.0006486274;
            } else {
              result[14] += 0.06010017;
            }
          } else {
            result[14] += -0.13644883;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            result[14] += -0.13568932;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
              result[14] += 0.038136967;
            } else {
              result[14] += -0.029915132;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)26334)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[14] += -0.061698217;
            } else {
              result[14] += 0.11442476;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)34288)) {
              result[14] += 0.40970445;
            } else {
              result[14] += 0.1190808;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            result[14] += -0.12793215;
          } else {
            result[14] += 0.038845666;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)3338)) {
          result[14] += -0.14214818;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)13590)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7194)) {
              result[14] += -0.060493175;
            } else {
              result[14] += 0.057343427;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
              result[14] += -0.1250371;
            } else {
              result[14] += -0.038218275;
            }
          }
        }
      } else {
        result[14] += 0.15785949;
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1232591872)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)14362)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)604431232)) {
              result[14] += 0.20715752;
            } else {
              result[14] += 0.016838053;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)20497)) {
              result[14] += -0.07170951;
            } else {
              result[14] += 0.016973713;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)13590)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[14] += 0.07013512;
            } else {
              result[14] += -0.059498467;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24306)) {
              result[14] += 0.23303503;
            } else {
              result[14] += 0.0436565;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)841263296)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)821483008)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)663824320)) {
              result[14] += 0.07632485;
            } else {
              result[14] += -0.02625784;
            }
          } else {
            result[14] += 0.2101751;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1205016832)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
              result[14] += -0.06458694;
            } else {
              result[14] += -0.12818718;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[14] += 0.49384397;
            } else {
              result[14] += -0.102822825;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)2582)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1259780736)) {
            result[14] += 0.34110707;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
              result[14] += -0.07934043;
            } else {
              result[14] += 0.20524018;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)12579)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.08167045;
            } else {
              result[14] += 0.17982417;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13080)) {
              result[14] += 0.19716439;
            } else {
              result[14] += -0.024455227;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1651364224)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)32760)) {
              result[14] += -0.009531696;
            } else {
              result[14] += 0.08204631;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1690263552)) {
              result[14] += -0.10462294;
            } else {
              result[14] += 0.00078188634;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1963317504)) {
              result[14] += 0.17247239;
            } else {
              result[14] += -0.048072234;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[14] += 0.28059524;
            } else {
              result[14] += 0.043292746;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          result[0] += 0.0003341097;
        } else {
          result[0] += -0.0030684357;
        }
      } else {
        result[0] += 0.0040999455;
      }
    } else {
      result[0] += -0.14310254;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1269061760)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)841263296)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
              result[0] += 0.0061052255;
            } else {
              result[0] += -0.13854288;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9742)) {
              result[0] += -0.03517577;
            } else {
              result[0] += 0.14710969;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1072968960)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
              result[0] += -0.017471684;
            } else {
              result[0] += -0.18009116;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37600)) {
              result[0] += -0.053059965;
            } else {
              result[0] += 0.05824441;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[0] += 0.044824243;
            } else {
              result[0] += 0.15037191;
            }
          } else {
            result[0] += -0.008660235;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2130028928)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21274)) {
              result[0] += -0.0072097634;
            } else {
              result[0] += -0.10456367;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2339238656)) {
              result[0] += 0.108245164;
            } else {
              result[0] += 0.029541137;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
        result[0] += -0.1340885;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1149980416)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[0] += 0.09563355;
            } else {
              result[0] += -0.057276666;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)18948)) {
              result[0] += 0.2047307;
            } else {
              result[0] += 0.08760048;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1613070592)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[0] += -0.15877405;
            } else {
              result[0] += 0.006000455;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[0] += 0.0736569;
            } else {
              result[0] += -0.008921825;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[1] += -0.0001740805;
            } else {
              result[1] += -0.124848954;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.13319156;
            } else {
              result[1] += -0.08080508;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
              result[1] += -0.14569677;
            } else {
              result[1] += 0.0072372914;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
              result[1] += 0.13671228;
            } else {
              result[1] += -0.024975363;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)2084)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1177192448)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
              result[1] += -0.09010259;
            } else {
              result[1] += 0.027663942;
            }
          } else {
            result[1] += -0.14149724;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)3338)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1342937856)) {
              result[1] += -0.105109446;
            } else {
              result[1] += 0.20334262;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)27608)) {
              result[1] += -0.00943514;
            } else {
              result[1] += 0.02354116;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          result[1] += -0.14110796;
        } else {
          result[1] += 0.027043443;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)880668160)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)215123600)) {
            result[1] += -0.09530433;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.19465539;
            } else {
              result[1] += 0.0384169;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3109958656)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
              result[1] += -0.124360956;
            } else {
              result[1] += -0.012460578;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3392075008)) {
              result[1] += 0.10178155;
            } else {
              result[1] += -0.022248905;
            }
          }
        }
      }
    }
  } else {
    result[1] += 0.10246932;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)55885)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)55338)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)47877)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)47115)) {
              result[2] += 0.0014979256;
            } else {
              result[2] += 0.06652495;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += 0.0020259626;
            } else {
              result[2] += -0.10800436;
            }
          }
        } else {
          result[2] += -0.11937497;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)56134)) {
          result[2] += 0.08776549;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)56394)) {
            result[2] += -0.056393765;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)59216)) {
              result[2] += 0.04133097;
            } else {
              result[2] += -0.0038319433;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
            result[2] += 0.0152490875;
          } else {
            result[2] += 0.0897171;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
              result[2] += 0.014082308;
            } else {
              result[2] += -0.020276882;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
              result[2] += 0.09647167;
            } else {
              result[2] += -0.019345555;
            }
          }
        }
      } else {
        result[2] += 0.08750358;
      }
    }
  } else {
    result[2] += -0.11555535;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.11673321;
    } else {
      result[3] += -0.0032540166;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[3] += -0.08054285;
      } else {
        result[3] += 0.04641844;
      }
    } else {
      result[3] += 0.05013283;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
        result[4] += -0.022158192;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            result[4] += 0.0128210345;
          } else {
            result[4] += 0.04667099;
          }
        } else {
          result[4] += -0.0112149045;
        }
      }
    } else {
      result[4] += 0.084699884;
    }
  } else {
    result[4] += -0.116035275;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
              result[5] += 0.0020910508;
            } else {
              result[5] += -0.041892853;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
              result[5] += 0.1421722;
            } else {
              result[5] += 0.034811072;
            }
          }
        } else {
          result[5] += -0.09905878;
        }
      } else {
        result[5] += 0.09444602;
      }
    } else {
      result[5] += -0.10220034;
    }
  } else {
    result[5] += -0.09734849;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += -0.00045366652;
  } else {
    result[6] += -0.115364015;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[7] += 9.189593e-06;
            } else {
              result[7] += -0.12139614;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
              result[7] += 0.11747246;
            } else {
              result[7] += -0.044820406;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            result[7] += -0.12711067;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1496744960)) {
              result[7] += 0.038476273;
            } else {
              result[7] += -0.081530705;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2361869312)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[7] += -0.10371705;
            } else {
              result[7] += -0.021927377;
            }
          } else {
            result[7] += 0.07029766;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)38365)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
              result[7] += 0.039350063;
            } else {
              result[7] += 0.22176017;
            }
          } else {
            result[7] += -0.0010296736;
          }
        }
      }
    } else {
      result[7] += 0.1116958;
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)48661)) {
      result[7] += -0.1263909;
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)57396)) {
        result[7] += 0.08671582;
      } else {
        result[7] += -0.08261785;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)22786)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
              result[8] += 0.0047795568;
            } else {
              result[8] += -0.050664615;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
              result[8] += 0.016124459;
            } else {
              result[8] += 0.10014092;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)26842)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
              result[8] += -0.019915905;
            } else {
              result[8] += 0.15976976;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3927323392)) {
              result[8] += -0.0004912969;
            } else {
              result[8] += 0.01882058;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += -0.0021517687;
            } else {
              result[8] += -0.07540923;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.10435454;
            } else {
              result[8] += 0.00037874185;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[8] += -2.5290663;
            } else {
              result[8] += 0.05451019;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[8] += -0.14401807;
            } else {
              result[8] += 0.0026137282;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)46078)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)27608)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
              result[8] += 0.08499208;
            } else {
              result[8] += -0.0098354835;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.13473533;
            } else {
              result[8] += 0.016764168;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)46583)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
              result[8] += -0.17354746;
            } else {
              result[8] += -0.044341136;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[8] += 0.0064081172;
            } else {
              result[8] += -0.06528877;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)53824)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50704)) {
              result[8] += 0.154215;
            } else {
              result[8] += 0.08433168;
            }
          } else {
            result[8] += 0.016819084;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
              result[8] += -0.10756575;
            } else {
              result[8] += 0.0071094674;
            }
          } else {
            result[8] += 0.07057711;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.14354816;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            result[8] += 0.13534917;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[8] += 0.10380137;
            } else {
              result[8] += -0.044906322;
            }
          }
        } else {
          result[8] += -0.096380696;
        }
      } else {
        result[8] += -0.10819707;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[9] += 0.0017491255;
          } else {
            result[9] += 0.0010455104;
          }
        } else {
          result[9] += -0.002529208;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            result[9] += -0.13446869;
          } else {
            result[9] += 0.05242874;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)59329708)) {
            result[9] += -0.13937543;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36306)) {
              result[9] += -0.052399743;
            } else {
              result[9] += 0.12213861;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)390465472)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
              result[9] += -0.076579124;
            } else {
              result[9] += 0.08197375;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
              result[9] += 0.083876275;
            } else {
              result[9] += -0.1574054;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)19463)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7966)) {
              result[9] += 0.09175233;
            } else {
              result[9] += -0.042310383;
            }
          } else {
            result[9] += 0.12825443;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)45055)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)449359968)) {
              result[9] += 0.09007832;
            } else {
              result[9] += -0.09840853;
            }
          } else {
            result[9] += -0.2648497;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
            result[9] += 0.10945993;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
              result[9] += -0.16049495;
            } else {
              result[9] += 0.022991098;
            }
          }
        }
      }
    }
  } else {
    result[9] += -0.09942611;
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[10] += 0.0018263051;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[10] += -0.0022673411;
            } else {
              result[10] += -0.0017998604;
            }
          }
        } else {
          result[10] += -0.14022802;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)880668160)) {
            result[10] += 0.13012995;
          } else {
            result[10] += -0.016603313;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1296)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3544269056)) {
              result[10] += -0.058590766;
            } else {
              result[10] += 0.07112397;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
              result[10] += 0.11446736;
            } else {
              result[10] += 0.0028832403;
            }
          }
        }
      }
    } else {
      result[10] += -0.07917326;
    }
  } else {
    result[10] += -0.09172687;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)1559)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2809073152)) {
              result[11] += 0.0030316298;
            } else {
              result[11] += -0.07155691;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3587199488)) {
              result[11] += -0.055363003;
            } else {
              result[11] += 0.08609481;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)4105)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3597)) {
              result[11] += 0.005147563;
            } else {
              result[11] += 0.04180855;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)41999)) {
              result[11] += -0.003929155;
            } else {
              result[11] += 0.0021692545;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2299286272)) {
              result[11] += 0.0037047556;
            } else {
              result[11] += -0.0032520588;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)39148)) {
              result[11] += 0.021533817;
            } else {
              result[11] += -0.006257826;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
              result[11] += 0.06482736;
            } else {
              result[11] += -0.12406501;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[11] += -0.0040046577;
            } else {
              result[11] += -0.11789022;
            }
          }
        }
      }
    } else {
      result[11] += -0.108008966;
    }
  } else {
    result[11] += -0.10922044;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
              result[12] += 0.0013181423;
            } else {
              result[12] += 0.3026883;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
              result[12] += -0.11732967;
            } else {
              result[12] += -0.04655261;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8737)) {
              result[12] += 0.059888728;
            } else {
              result[12] += 0.0049416316;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[12] += 0.14048874;
            } else {
              result[12] += -0.049470905;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)11301)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2631808512)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
              result[12] += -0.015702892;
            } else {
              result[12] += 0.10720323;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3087300608)) {
              result[12] += -0.1359629;
            } else {
              result[12] += -0.03037828;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)11556)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[12] += 0.20023006;
            } else {
              result[12] += -0.004059583;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2896713728)) {
              result[12] += -0.0023427773;
            } else {
              result[12] += 0.005512388;
            }
          }
        }
      }
    } else {
      result[12] += -0.110962264;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[12] += -0.062164024;
    } else {
      result[12] += -0.019385092;
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += 0.00019958336;
            } else {
              result[13] += 0.062077373;
            }
          } else {
            result[13] += -0.1477938;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)59329708)) {
              result[13] += -0.099875234;
            } else {
              result[13] += 0.013171456;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.111159295;
            } else {
              result[13] += 0.014368658;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)802443328)) {
              result[13] += -0.13049959;
            } else {
              result[13] += -0.036276486;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48385)) {
              result[13] += -0.00483612;
            } else {
              result[13] += 0.03260454;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[13] += -0.08914553;
            } else {
              result[13] += 0.1402095;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.1455446;
            } else {
              result[13] += 0.06593965;
            }
          }
        }
      }
    } else {
      result[13] += -0.10678676;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[13] += -0.072170265;
    } else {
      result[13] += 0.03237156;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += 0.00015037178;
            } else {
              result[14] += -0.13183738;
            }
          } else {
            result[14] += -0.14269768;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[14] += 0.11729457;
            } else {
              result[14] += -0.01910705;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)52230)) {
              result[14] += 0.16195033;
            } else {
              result[14] += 0.013140529;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[14] += -0.13745;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
              result[14] += 0.0645797;
            } else {
              result[14] += -0.08828895;
            }
          } else {
            result[14] += -0.11354186;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)30720)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23807)) {
              result[14] += 0.13212366;
            } else {
              result[14] += -0.057948183;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[14] += 0.18608826;
            } else {
              result[14] += 0.08540028;
            }
          }
        } else {
          result[14] += -0.119152404;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)18948)) {
            result[14] += -0.047513776;
          } else {
            result[14] += -0.15048808;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7452)) {
              result[14] += 0.009127434;
            } else {
              result[14] += 0.10252834;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)29424)) {
              result[14] += -0.09024888;
            } else {
              result[14] += 0.04154796;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)486985984)) {
              result[14] += -0.053613007;
            } else {
              result[14] += 0.18300833;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[14] += -0.03586406;
            } else {
              result[14] += -0.14249566;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)29932)) {
            result[14] += 0.017090745;
          } else {
            result[14] += 0.1753297;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          result[14] += -0.029793402;
        } else {
          result[14] += -0.13780595;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17173)) {
              result[14] += 0.012323964;
            } else {
              result[14] += 0.10635074;
            }
          } else {
            result[14] += -0.045289513;
          }
        } else {
          result[14] += 0.11312621;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52901)) {
          result[14] += -0.13626139;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
            result[14] += 0.1270744;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[14] += -0.1292047;
            } else {
              result[14] += 0.03930528;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.000639552;
            } else {
              result[0] += -0.1380308;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45315)) {
              result[0] += 0.07320717;
            } else {
              result[0] += -0.023248311;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
            result[0] += -0.13200954;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += -0.04632023;
            } else {
              result[0] += 0.06528516;
            }
          }
        }
      } else {
        result[0] += -0.13154553;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)24306)) {
            result[0] += -0.08849591;
          } else {
            result[0] += 0.040772963;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
            result[0] += 0.20458753;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += -0.0878123;
            } else {
              result[0] += 0.098735124;
            }
          }
        }
      } else {
        result[0] += -0.06794017;
      }
    }
  } else {
    result[0] += -0.07802178;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += -5.865395e-05;
            } else {
              result[1] += -0.026389549;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[1] += -0.11690316;
            } else {
              result[1] += 0.11490571;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23553)) {
              result[1] += 0.11387544;
            } else {
              result[1] += 0.02241751;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
              result[1] += 0.0004591814;
            } else {
              result[1] += 0.10390756;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[1] += 0.12021199;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3456480256)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)138283152)) {
              result[1] += -0.12742977;
            } else {
              result[1] += -0.024488268;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19991)) {
              result[1] += -0.14097199;
            } else {
              result[1] += -0.042433597;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += 0.14235581;
            } else {
              result[1] += 0.044575535;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62985)) {
              result[1] += 0.0089068785;
            } else {
              result[1] += 0.07219774;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[1] += -0.13981585;
            } else {
              result[1] += -0.04587882;
            }
          } else {
            result[1] += 0.12315454;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[1] += -0.14852674;
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[1] += -0.03400852;
            } else {
              result[1] += 0.10336797;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)46078)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
              result[1] += 0.0015304341;
            } else {
              result[1] += 0.05114704;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49419)) {
              result[1] += -0.061894465;
            } else {
              result[1] += -0.0046402295;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3370453760)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
        result[1] += -0.12248758;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[1] += 0.052129697;
        } else {
          result[1] += -0.06464252;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)46835)) {
        result[1] += -0.05731117;
      } else {
        result[1] += 0.12028303;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)51430)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)50927)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)50669)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)50397)) {
              result[2] += 0.0014225275;
            } else {
              result[2] += -0.14609525;
            }
          } else {
            result[2] += 0.06326715;
          }
        } else {
          result[2] += -0.09785456;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)51984)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)51715)) {
            result[2] += 0.13409892;
          } else {
            result[2] += 0.04273179;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)54320)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)53560)) {
              result[2] += 0.0129899895;
            } else {
              result[2] += -0.09874859;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)55338)) {
              result[2] += 0.07636551;
            } else {
              result[2] += 0.0023775;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[2] += 0.07670483;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
            result[2] += -0.018066827;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
              result[2] += 0.03625404;
            } else {
              result[2] += -0.018120496;
            }
          }
        }
      } else {
        result[2] += 0.08325245;
      }
    }
  } else {
    result[2] += -0.11227054;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[3] += -0.11614906;
      } else {
        result[3] += -0.003007173;
      }
    } else {
      result[3] += 0.012133888;
    }
  } else {
    result[3] += 0.038847562;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
              result[4] += 0.02782531;
            } else {
              result[4] += -0.03904599;
            }
          } else {
            result[4] += 0.046651833;
          }
        } else {
          result[4] += -0.04324312;
        }
      } else {
        result[4] += 0.047475513;
      }
    } else {
      result[4] += 0.081649974;
    }
  } else {
    result[4] += -0.11276804;
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[5] += 0.0018581741;
            } else {
              result[5] += -0.059483107;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1250727680)) {
              result[5] += -0.009947058;
            } else {
              result[5] += 0.3786263;
            }
          }
        } else {
          result[5] += -0.12866253;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)45573)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)42509)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
              result[5] += 0.1053868;
            } else {
              result[5] += -0.012532015;
            }
          } else {
            result[5] += 0.24595039;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
            result[5] += -0.09470957;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1316757248)) {
              result[5] += -0.023153946;
            } else {
              result[5] += 0.10092462;
            }
          }
        }
      }
    } else {
      result[5] += -0.095001936;
    }
  } else {
    result[5] += -0.095858455;
  }
}


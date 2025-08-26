
#include "header.h"

void predict_unit18(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          result[6] += 0.0003617567;
        } else {
          result[6] += -0.076601006;
        }
      } else {
        result[6] += -0.08264693;
      }
    } else {
      result[6] += 0.08566576;
    }
  } else {
    result[6] += -0.1308285;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
              result[7] += -0.0022500104;
            } else {
              result[7] += -0.101679474;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49348)) {
              result[7] += 0.07147015;
            } else {
              result[7] += 0.0002244579;
            }
          }
        } else {
          result[7] += 0.022110652;
        }
      } else {
        result[7] += -0.041518986;
      }
    } else {
      result[7] += 0.13101666;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)38506)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)8771)) {
          result[7] += -0.0764445;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)10064)) {
            result[7] += 0.029721921;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)16531)) {
              result[7] += -0.07047302;
            } else {
              result[7] += -0.044260487;
            }
          }
        }
      } else {
        result[7] += -0.08603547;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
        result[7] += 0.13621782;
      } else {
        result[7] += -0.12871557;
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)527)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48838)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
              result[8] += -0.020570247;
            } else {
              result[8] += -0.21952543;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)331876768)) {
              result[8] += 0.21404168;
            } else {
              result[8] += 0.009208939;
            }
          }
        } else {
          result[8] += -0.1402552;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)42196)) {
          result[8] += 0.046811488;
        } else {
          result[8] += 0.1792706;
        }
      }
    } else {
      result[8] += -0.14061227;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1307)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59506)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
              result[8] += 0.08528886;
            } else {
              result[8] += 0.03179808;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
              result[8] += -0.21741636;
            } else {
              result[8] += 0.0031907551;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60824)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
              result[8] += 0.17899825;
            } else {
              result[8] += 0.5932204;
            }
          } else {
            result[8] += -0.13512589;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2744264704)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2221068800)) {
              result[8] += -0.008010987;
            } else {
              result[8] += -0.13052492;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2772094208)) {
              result[8] += 0.3752234;
            } else {
              result[8] += 0.08289384;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4191465472)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4024162560)) {
              result[8] += -0.1669016;
            } else {
              result[8] += -0.29880118;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
              result[8] += 0.33717594;
            } else {
              result[8] += -0.13362215;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)60933)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)39508)) {
              result[8] += -0.00060886686;
            } else {
              result[8] += 0.0072387615;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2487559424)) {
              result[8] += -0.024331909;
            } else {
              result[8] += 0.0058178147;
            }
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1910466432)) {
              result[8] += 0.025564041;
            } else {
              result[8] += -0.015402795;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1565489664)) {
              result[8] += 0.1121859;
            } else {
              result[8] += 0.020154184;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3714831616)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)61194)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2956528384)) {
              result[8] += -0.014146936;
            } else {
              result[8] += -0.05520496;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3008718848)) {
              result[8] += -0.0064246133;
            } else {
              result[8] += 0.17011294;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
              result[8] += 0.07992918;
            } else {
              result[8] += -0.020904655;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3859072512)) {
              result[8] += 0.50550914;
            } else {
              result[8] += -0.013954436;
            }
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)53520)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)51748)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)51507)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)49938)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)49720)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48198)) {
              result[9] += 0.00015983742;
            } else {
              result[9] += 0.14612594;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)51103944)) {
              result[9] += -0.17470393;
            } else {
              result[9] += 0.12836315;
            }
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            result[9] += -0.098362;
          } else {
            result[9] += 0.16355765;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)11064)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
            result[9] += 0.010687793;
          } else {
            result[9] += 0.13814296;
          }
        } else {
          result[9] += -0.20097937;
        }
      }
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
        result[9] += -0.10350438;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)7095)) {
            result[9] += 0.14310192;
          } else {
            result[9] += 0.258168;
          }
        } else {
          result[9] += 0.15405361;
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1264832000)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1250292736)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)53768)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
            result[9] += -0.18844143;
          } else {
            result[9] += 0.11713513;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)57669)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)9329)) {
              result[9] += 0.1522993;
            } else {
              result[9] += -0.045296133;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)57897)) {
              result[9] += -0.18081458;
            } else {
              result[9] += 0.008590995;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
          result[9] += -0.22096615;
        } else {
          result[9] += 0.11740142;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[9] += -0.10898567;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2011381248)) {
          result[9] += 0.15129624;
        } else {
          result[9] += 0.047474064;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4051475456)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3999892736)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
              result[10] += -4.4838478e-05;
            } else {
              result[10] += 0.059157096;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)14735)) {
              result[10] += -0.33180204;
            } else {
              result[10] += -0.02550167;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20861)) {
              result[10] += -0.08718355;
            } else {
              result[10] += 0.04622551;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)29570)) {
              result[10] += 0.15952387;
            } else {
              result[10] += 0.05468297;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)37473)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
            result[10] += -0.18062729;
          } else {
            result[10] += 0.1378831;
          }
        } else {
          result[10] += -0.22949626;
        }
      }
    } else {
      result[10] += -0.1255105;
    }
  } else {
    result[10] += -0.1270519;
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)647)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)478)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)442)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
              result[11] += -0.00010333802;
            } else {
              result[11] += 0.024170756;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)36967)) {
              result[11] += -0.12952103;
            } else {
              result[11] += -0.027985327;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[11] += -0.18538067;
          } else {
            result[11] += 0.14919256;
          }
        }
      } else {
        result[11] += -0.16617727;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)615)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)57897)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20366)) {
              result[11] += 0.2173614;
            } else {
              result[11] += 0.10764989;
            }
          } else {
            result[11] += -0.24897967;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)19858)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)13475)) {
              result[11] += 0.059258763;
            } else {
              result[11] += -0.18606885;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)62460)) {
              result[11] += 0.10644363;
            } else {
              result[11] += -0.10273098;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)350)) {
          result[11] += -0.20174186;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
            result[11] += 0.13718699;
          } else {
            result[11] += -0.12466918;
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)52537)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)46946)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)705)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)11356)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)5405)) {
              result[11] += -0.042813037;
            } else {
              result[11] += -0.16604407;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)11619)) {
              result[11] += 0.20213939;
            } else {
              result[11] += -0.045069467;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)32643)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15995)) {
              result[11] += 0.008090981;
            } else {
              result[11] += -0.06665888;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)43719)) {
              result[11] += 0.15645252;
            } else {
              result[11] += -0.05770569;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)50461)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)150343280)) {
            result[11] += -0.21930674;
          } else {
            result[11] += -0.015493186;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)705)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)51238)) {
              result[11] += 0.227569;
            } else {
              result[11] += -0.13744536;
            }
          } else {
            result[11] += -0.18606332;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)53768)) {
        result[11] += 0.20987223;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)54303)) {
          result[11] += -0.191273;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)56138)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)705)) {
              result[11] += 0.019056939;
            } else {
              result[11] += 0.23294322;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)59669)) {
              result[11] += -0.11616336;
            } else {
              result[11] += 0.00015805938;
            }
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)1822)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)3742177280)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3427947776)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)50334)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
              result[12] += -0.014766443;
            } else {
              result[12] += 0.058444336;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)52390)) {
              result[12] += -0.12441298;
            } else {
              result[12] += -0.017370598;
            }
          }
        } else {
          result[12] += 0.1349051;
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          result[12] += -0.1767548;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
            result[12] += 0.16235512;
          } else {
            result[12] += -0.15123135;
          }
        }
      }
    } else {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)264)) {
          result[12] += -0.117506206;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
            result[12] += 0.49141693;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3859072512)) {
              result[12] += 0.0375587;
            } else {
              result[12] += 0.22117813;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)264)) {
            result[12] += 0.07569952;
          } else {
            result[12] += -0.19283298;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4191465472)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59886)) {
              result[12] += 0.05400665;
            } else {
              result[12] += 0.297736;
            }
          } else {
            result[12] += -0.18981723;
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)9301)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)8251)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2515185920)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1499005440)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6929)) {
              result[12] += 0.011550679;
            } else {
              result[12] += -0.023780355;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[12] += 0.042119686;
            } else {
              result[12] += 0.12838805;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3172840704)) {
              result[12] += -0.03479183;
            } else {
              result[12] += -0.15216345;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
              result[12] += 0.037945278;
            } else {
              result[12] += -0.02697765;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48516)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
              result[12] += 0.018197749;
            } else {
              result[12] += -0.1686282;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2272993536)) {
              result[12] += 0.3064133;
            } else {
              result[12] += -0.059519596;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)8771)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3570386688)) {
              result[12] += -0.01435294;
            } else {
              result[12] += 0.23921876;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3427947776)) {
              result[12] += 0.23886465;
            } else {
              result[12] += -0.13700585;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[12] += 0.0014589085;
            } else {
              result[12] += -0.14586589;
            }
          } else {
            result[12] += 0.14860807;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
            result[12] += -0.14931192;
          } else {
            result[12] += 0.05809499;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
          result[12] += -0.15001038;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)7.8308200836)) {
              result[12] += -0.12227361;
            } else {
              result[12] += 0.058777686;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)133638360)) {
              result[12] += 0.055356633;
            } else {
              result[12] += -0.0032382472;
            }
          }
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1062497984)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)832030464)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)627447552)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)36967)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)31625)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)31122)) {
              result[13] += -0.007216705;
            } else {
              result[13] += 0.1546558;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)201685632)) {
              result[13] += -0.028511262;
            } else {
              result[13] += -0.10992263;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)37732)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)414614720)) {
              result[13] += 0.14688294;
            } else {
              result[13] += -0.13065812;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)151)) {
              result[13] += -0.002017308;
            } else {
              result[13] += 0.060296677;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)42674)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)39295)) {
              result[13] += 0.08291712;
            } else {
              result[13] += 0.38626218;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61935)) {
              result[13] += -0.049395587;
            } else {
              result[13] += 0.21597438;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49568)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)662398464)) {
              result[13] += 0.07349539;
            } else {
              result[13] += -0.112905696;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)662398464)) {
              result[13] += -0.14103185;
            } else {
              result[13] += 0.10506969;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)54812)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)30343)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)13727)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48516)) {
              result[13] += -0.08983973;
            } else {
              result[13] += 0.03009458;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
              result[13] += -0.074738316;
            } else {
              result[13] += -0.18490161;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)50702)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)849185600)) {
              result[13] += -0.17218563;
            } else {
              result[13] += 0.080037266;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)151)) {
              result[13] += -0.18388148;
            } else {
              result[13] += -0.040539164;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)58670)) {
              result[13] += -0.17788479;
            } else {
              result[13] += -0.068779595;
            }
          } else {
            result[13] += 0.08353141;
          }
        } else {
          result[13] += -0.44691423;
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)3088273664)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3008718848)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[13] += 0.0018951925;
            } else {
              result[13] += 0.021136362;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[13] += 0.118649565;
            } else {
              result[13] += -0.018842101;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)22594)) {
              result[13] += -0.059375424;
            } else {
              result[13] += 0.06258758;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
              result[13] += -0.17337549;
            } else {
              result[13] += 0.11331482;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)14245)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)10568)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)50476)) {
              result[13] += -0.10534106;
            } else {
              result[13] += 0.22000018;
            }
          } else {
            result[13] += 0.7410077;
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)224)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)50981)) {
              result[13] += 0.10588102;
            } else {
              result[13] += -0.11942106;
            }
          } else {
            result[13] += 0.3025632;
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3427947776)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)13961)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49952)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
              result[13] += -0.14351545;
            } else {
              result[13] += 0.062246125;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)50828)) {
              result[13] += 0.160772;
            } else {
              result[13] += -0.075965874;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3399763968)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20366)) {
              result[13] += 0.0927643;
            } else {
              result[13] += -0.022856854;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)18837)) {
              result[13] += 0.0031359412;
            } else {
              result[13] += -0.16324727;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)20105)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)50108)) {
              result[13] += 0.030988328;
            } else {
              result[13] += -0.115291074;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3742177280)) {
              result[13] += -0.017031144;
            } else {
              result[13] += 0.33754915;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)25904)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3832654848)) {
              result[13] += -0.1386933;
            } else {
              result[13] += -0.0007353889;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)321)) {
              result[13] += -0.00597984;
            } else {
              result[13] += 0.05237412;
            }
          }
        }
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)10315)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)10064)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
              result[14] += 0.0018448564;
            } else {
              result[14] += 0.022156712;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8527)) {
              result[14] += -0.016185317;
            } else {
              result[14] += -0.11347243;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3714831616)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[14] += 0.06936253;
            } else {
              result[14] += -0.050218288;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
              result[14] += 0.34241882;
            } else {
              result[14] += -0.12913516;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)11356)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60440)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60210)) {
              result[14] += -0.03778449;
            } else {
              result[14] += 0.19686978;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60824)) {
              result[14] += -0.2864629;
            } else {
              result[14] += 0.013021075;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)31625)) {
              result[14] += -0.0050763674;
            } else {
              result[14] += 0.0021613534;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
              result[14] += -0.13142724;
            } else {
              result[14] += 0.028754694;
            }
          }
        }
      }
    } else {
      result[14] += -0.13415167;
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
        result[14] += -0.14594446;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          result[14] += 0.17809436;
        } else {
          result[14] += -0.10539172;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)486)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)441)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)441)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)104)) {
              result[14] += 0.08725548;
            } else {
              result[14] += -0.13252078;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)486)) {
              result[14] += 0.08452119;
            } else {
              result[14] += -0.09804571;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            result[14] += 0.1405147;
          } else {
            result[14] += -0.11740043;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)52948)) {
          result[14] += -0.1382996;
        } else {
          result[14] += 0.049244266;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
              result[0] += 0.00031530292;
            } else {
              result[0] += 0.036093507;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
              result[0] += -0.10113995;
            } else {
              result[0] += 0.022657542;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)48703)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[0] += -0.13692851;
            } else {
              result[0] += 0.19227372;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)51238)) {
              result[0] += -0.17073509;
            } else {
              result[0] += 0.054038722;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)16021)) {
          result[0] += -0.14884903;
        } else {
          result[0] += 0.07617064;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)3615)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
            result[0] += 0.15373053;
          } else {
            result[0] += 0.009816703;
          }
        } else {
          result[0] += -0.16151892;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)20861)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1957388416)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
              result[0] += -0.086151056;
            } else {
              result[0] += 0.17272393;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2100655232)) {
              result[0] += -0.13053116;
            } else {
              result[0] += 0.04926121;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)21604)) {
            result[0] += -0.15941805;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1324402432)) {
              result[0] += 0.087862924;
            } else {
              result[0] += -0.030084688;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2119496576)) {
      result[0] += -0.1431164;
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2694456320)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
            result[0] += 0.048976146;
          } else {
            result[0] += -0.118347;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2677389824)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56324)) {
              result[0] += 0.101134665;
            } else {
              result[0] += -0.12279717;
            }
          } else {
            result[0] += 0.15719682;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)122)) {
          result[0] += -0.14106023;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
            result[0] += -0.122238025;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
              result[0] += 0.12830396;
            } else {
              result[0] += -0.09537726;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1879)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            result[1] += -0.061848696;
          } else {
            result[1] += -0.12428538;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
            result[1] += -0.03378246;
          } else {
            result[1] += -0.012473327;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)332)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[1] += -0.0006765703;
            } else {
              result[1] += 0.046374828;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)323)) {
              result[1] += -0.07912217;
            } else {
              result[1] += -0.013979186;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)348961088)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)215557952)) {
              result[1] += -0.00037020445;
            } else {
              result[1] += -0.08604042;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)408)) {
              result[1] += 0.023878172;
            } else {
              result[1] += 0.0018541109;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)21836)) {
        result[1] += 0.44106376;
      } else {
        result[1] += -0.09046492;
      }
    }
  } else {
    result[1] += -0.13653764;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1636)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
              result[2] += -0.06380014;
            } else {
              result[2] += -0.016907215;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
              result[2] += -0.007679137;
            } else {
              result[2] += -0.015444649;
            }
          }
        } else {
          result[2] += -0.0002491838;
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)48039)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)46279)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += -0.0045991656;
            } else {
              result[2] += 0.012775154;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += 0.1855704;
            } else {
              result[2] += -0.058369305;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)49575)) {
              result[2] += -0.08597247;
            } else {
              result[2] += 0.010887546;
            }
          } else {
            result[2] += -0.13851741;
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)41059)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)40780)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)38841)) {
              result[2] += 0.012250789;
            } else {
              result[2] += -0.010405225;
            }
          } else {
            result[2] += 0.11708332;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)41591)) {
            result[2] += -0.078815535;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)43981)) {
              result[2] += -0.012756409;
            } else {
              result[2] += 0.011992364;
            }
          }
        }
      } else {
        result[2] += 0.10104511;
      }
    }
  } else {
    result[2] += -0.12858371;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.1327846;
    } else {
      result[3] += -0.005284532;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
        result[3] += -0.0959329;
      } else {
        result[3] += 0.06548243;
      }
    } else {
      result[3] += 0.095198445;
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)16057)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)14390)) {
              result[4] += 0.0023152262;
            } else {
              result[4] += -0.038561232;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)17201)) {
              result[4] += 0.10136503;
            } else {
              result[4] += 0.0069332463;
            }
          }
        } else {
          result[4] += -0.0760631;
        }
      } else {
        result[4] += -0.080023095;
      }
    } else {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)62964)) {
        result[4] += 0.042834427;
      } else {
        result[4] += 0.12015828;
      }
    }
  } else {
    result[4] += -0.1284681;
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)64759)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)61678)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)61194)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)59669)) {
              result[5] += -0.00012486351;
            } else {
              result[5] += -0.15491532;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1220404864)) {
              result[5] += -0.09150342;
            } else {
              result[5] += 0.12436191;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
            result[5] += -0.008179813;
          } else {
            result[5] += -0.15367465;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)2904)) {
          result[5] += -0.110400654;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
            result[5] += -0.09625132;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)514242560)) {
              result[5] += 0.17049505;
            } else {
              result[5] += 0.08096393;
            }
          }
        }
      }
    } else {
      result[5] += -0.14842615;
    }
  } else {
    result[5] += -0.14233048;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        result[6] += 0.0002945556;
      } else {
        result[6] += -0.07956956;
      }
    } else {
      result[6] += 0.08241024;
    }
  } else {
    result[6] += -0.12845804;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[7] += 0.0003131195;
            } else {
              result[7] += -0.13728528;
            }
          } else {
            result[7] += -0.13699003;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)87)) {
            result[7] += 0.13581224;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
              result[7] += -0.12612258;
            } else {
              result[7] += 0.053211838;
            }
          }
        }
      } else {
        result[7] += -0.13581921;
      }
    } else {
      result[7] += -0.123883225;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        result[7] += 0.036644835;
      } else {
        result[7] += -0.14125445;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)17.536195755)) {
        result[7] += 0.13526519;
      } else {
        result[7] += -0.08407066;
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)3626729728)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)42171)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)40113)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3570386688)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3314336000)) {
              result[8] += 0.003275123;
            } else {
              result[8] += -0.019026404;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56179)) {
              result[8] += 0.05441568;
            } else {
              result[8] += -0.10053627;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)10839)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60440)) {
              result[8] += -0.024986269;
            } else {
              result[8] += 0.10045471;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2956528384)) {
              result[8] += -0.034915194;
            } else {
              result[8] += -0.08565453;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2718478592)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2209388032)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)732651392)) {
              result[8] += 0.0136480415;
            } else {
              result[8] += 0.065803766;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59506)) {
              result[8] += -0.07908875;
            } else {
              result[8] += 0.2588199;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)40361)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)43994)) {
              result[8] += 0.34710285;
            } else {
              result[8] += -0.0946426;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)41390)) {
              result[8] += 0.063209645;
            } else {
              result[8] += -0.018729009;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3284568832)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2580181248)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64250)) {
              result[8] += -0.00821522;
            } else {
              result[8] += 0.018613227;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)44684)) {
              result[8] += -0.047745015;
            } else {
              result[8] += 0.03126081;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)44471)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)42926)) {
              result[8] += -0.039170217;
            } else {
              result[8] += -0.1934072;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)39508)) {
              result[8] += -0.050463244;
            } else {
              result[8] += 0.021725543;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3314336000)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56642)) {
              result[8] += 0.3244451;
            } else {
              result[8] += 0.08739901;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)34500)) {
              result[8] += -0.14697605;
            } else {
              result[8] += 0.09215909;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)65016)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56386)) {
              result[8] += -0.0021461113;
            } else {
              result[8] += 0.05567677;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3598538240)) {
              result[8] += -0.2378041;
            } else {
              result[8] += 0.00587531;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)3742177280)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)42630)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53290)) {
              result[8] += -0.05286083;
            } else {
              result[8] += -0.11398581;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
              result[8] += 0.14593437;
            } else {
              result[8] += -0.00079051766;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)64759)) {
            result[8] += 0.40247488;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3714831616)) {
              result[8] += -0.14419502;
            } else {
              result[8] += 0.40127763;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)10568)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2845)) {
              result[8] += 0.068361476;
            } else {
              result[8] += 0.4258729;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53520)) {
              result[8] += -0.0019691123;
            } else {
              result[8] += 0.17316729;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[8] += -0.15957327;
            } else {
              result[8] += -0.53700715;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3714831616)) {
              result[8] += -0.029926274;
            } else {
              result[8] += 0.058808;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)44913)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)34923)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)27491)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3832654848)) {
              result[8] += 0.035022274;
            } else {
              result[8] += -0.020049652;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)42196)) {
              result[8] += 0.053493805;
            } else {
              result[8] += -0.02792024;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3911013376)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)36967)) {
              result[8] += -0.18249023;
            } else {
              result[8] += -0.064511836;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4217347584)) {
              result[8] += -0.02884886;
            } else {
              result[8] += 0.04167775;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)56899)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)54038)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4024162560)) {
              result[8] += 0.048765082;
            } else {
              result[8] += -0.024008792;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60440)) {
              result[8] += 0.106386185;
            } else {
              result[8] += 0.5292783;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3999892736)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60694)) {
              result[8] += -0.036899738;
            } else {
              result[8] += 0.22311436;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
              result[8] += 0.012240854;
            } else {
              result[8] += 0.17544138;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)33651)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)23617)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[9] += 0.0003779157;
            } else {
              result[9] += -0.1348065;
            }
          } else {
            result[9] += -0.13807184;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)266309232)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
              result[9] += -0.08506986;
            } else {
              result[9] += -0.17382902;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[9] += -0.13763545;
            } else {
              result[9] += 0.05344189;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)386)) {
            result[9] += -0.1428102;
          } else {
            result[9] += 0.027866885;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
            result[9] += 0.035567407;
          } else {
            result[9] += 0.17293076;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)33879)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)201685632)) {
          result[9] += 0.11057046;
        } else {
          result[9] += -0.22307815;
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)159697)) {
            result[9] += -0.14747886;
          } else {
            result[9] += 0.09379455;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46946)) {
              result[9] += 0.22351667;
            } else {
              result[9] += -0.16435494;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1942640640)) {
              result[9] += 0.15670273;
            } else {
              result[9] += -0.123039894;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)2904)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[9] += -0.08272281;
      } else {
        result[9] += 0.15417475;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
        result[9] += 0.14321116;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)7751)) {
            result[9] += 0.13021284;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1145715328)) {
              result[9] += -0.15524039;
            } else {
              result[9] += 0.082752846;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)28526)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
              result[9] += -0.04301605;
            } else {
              result[9] += 0.08270237;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)31372)) {
              result[9] += -0.10186906;
            } else {
              result[9] += 0.00763941;
            }
          }
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1309093120)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1280068736)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1250292736)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)868466368)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)592172608)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)544740288)) {
              result[10] += 0.00030141705;
            } else {
              result[10] += 0.077390075;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)27491)) {
              result[10] += 0.0071360697;
            } else {
              result[10] += -0.14323115;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)22857)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1236219776)) {
              result[10] += 0.09325843;
            } else {
              result[10] += -0.24336034;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)25655)) {
              result[10] += -0.25682384;
            } else {
              result[10] += 0.024812106;
            }
          }
        }
      } else {
        result[10] += -0.33142686;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)52006)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            result[10] += -0.088973254;
          } else {
            result[10] += -0.42508394;
          }
        } else {
          result[10] += 0.15322046;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
          result[10] += 0.17899588;
        } else {
          result[10] += -0.12879421;
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1352913536)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)49210)) {
        result[10] += -0.42172098;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)49720)) {
          result[10] += 0.15785228;
        } else {
          result[10] += -0.19086705;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)464)) {
            result[10] += -0.14941628;
          } else {
            result[10] += -0.009647489;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2013966080)) {
            result[10] += -0.13758948;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2020837248)) {
              result[10] += 0.1417192;
            } else {
              result[10] += -0.11579438;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)20105)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)15721)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
              result[10] += -0.19571003;
            } else {
              result[10] += 0.007622129;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17067)) {
              result[10] += -0.36898234;
            } else {
              result[10] += -0.07338713;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)21099)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
              result[10] += 0.16784048;
            } else {
              result[10] += 0.05296271;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)21604)) {
              result[10] += -0.40993035;
            } else {
              result[10] += 0.0074855634;
            }
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)44832)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)44448)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1112952576)) {
              result[11] += -0.0017177898;
            } else {
              result[11] += 0.0032474475;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)765019264)) {
              result[11] += 0.05718294;
            } else {
              result[11] += -0.049010534;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)33113)) {
              result[11] += -0.011182089;
            } else {
              result[11] += 0.027526097;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)50198)) {
              result[11] += 0.18022545;
            } else {
              result[11] += -0.0037446574;
            }
          }
        }
      } else {
        result[11] += -0.13411689;
      }
    } else {
      result[11] += -0.13456216;
    }
  } else {
    result[11] += -0.13445847;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)34500)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2272993536)) {
              result[12] += -0.0018256927;
            } else {
              result[12] += 0.020292863;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
              result[12] += -0.07333211;
            } else {
              result[12] += 0.0035937629;
            }
          }
        } else {
          result[12] += -0.1388424;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)53290)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)55789)) {
              result[12] += 0.00039175167;
            } else {
              result[12] += 0.13901928;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4191465472)) {
              result[12] += 0.015876994;
            } else {
              result[12] += -0.083749846;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[12] += -0.14830211;
            } else {
              result[12] += 0.029547216;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
              result[12] += 0.13445295;
            } else {
              result[12] += -0.09980833;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        result[12] += -0.14433502;
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)4457)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)39295)) {
              result[12] += 0.1127458;
            } else {
              result[12] += 0.029032635;
            }
          } else {
            result[12] += -0.04157542;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)7973)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3742177280)) {
              result[12] += -0.053314645;
            } else {
              result[12] += -0.14429201;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
              result[12] += -0.024330212;
            } else {
              result[12] += 0.08208162;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
      result[12] += -0.14628665;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)151)) {
        result[12] += 0.12380528;
      } else {
        result[12] += -0.09151366;
      }
    }
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)487)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)278)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
              result[13] += 0.0011333667;
            } else {
              result[13] += -0.05473618;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)39638)) {
              result[13] += 0.121401414;
            } else {
              result[13] += -0.016494915;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3467)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
              result[13] += -0.143337;
            } else {
              result[13] += -0.019655043;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
              result[13] += 0.10065185;
            } else {
              result[13] += -0.060202677;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)221)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[13] += 0.15602925;
            } else {
              result[13] += 0.009644095;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)224)) {
              result[13] += -0.11143691;
            } else {
              result[13] += 0.15058199;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            result[13] += -0.1098919;
          } else {
            result[13] += 0.10215806;
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)328)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)695816320)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)31625)) {
              result[13] += 0.089912474;
            } else {
              result[13] += -0.11625672;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[13] += -0.1444108;
            } else {
              result[13] += -0.020372182;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)365)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2800293632)) {
              result[13] += 0.22460012;
            } else {
              result[13] += -0.11447918;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
              result[13] += -0.1290917;
            } else {
              result[13] += 0.04550271;
            }
          }
        }
      } else {
        result[13] += 0.102500655;
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1747430528)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
          result[13] += -0.13512959;
        } else {
          result[13] += 0.08988282;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)58919)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)419)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
              result[13] += -0.0021517784;
            } else {
              result[13] += 0.13498932;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)813467392)) {
              result[13] += 0.087031156;
            } else {
              result[13] += -0.07901553;
            }
          }
        } else {
          result[13] += -0.09968812;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1877709568)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)32132)) {
            result[13] += 0.041611288;
          } else {
            result[13] += 0.0027996541;
          }
        } else {
          result[13] += 0.615864;
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)544)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)386)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
              result[13] += -0.072547235;
            } else {
              result[13] += 0.22057517;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)29299)) {
              result[13] += 0.048954356;
            } else {
              result[13] += -0.07875024;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
            result[13] += -0.12957445;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
              result[13] += 0.13071238;
            } else {
              result[13] += -0.058497515;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)486)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)441)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
              result[14] += 3.1554577e-05;
            } else {
              result[14] += -0.14105311;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[14] += -0.15095647;
            } else {
              result[14] += 0.011493986;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[14] += 0.05448949;
            } else {
              result[14] += -0.14540754;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
              result[14] += 0.207852;
            } else {
              result[14] += 0.11140427;
            }
          }
        }
      } else {
        result[14] += -0.14555323;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          result[14] += 0.14733319;
        } else {
          result[14] += -0.08871983;
        }
      } else {
        result[14] += -0.13786119;
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)43719)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1309093120)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)109)) {
            result[14] += -0.15685967;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)150)) {
              result[14] += 0.098796904;
            } else {
              result[14] += -0.1318093;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)627447552)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1557)) {
              result[14] += -0.09562731;
            } else {
              result[14] += 0.13341375;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1145715328)) {
              result[14] += -0.14195941;
            } else {
              result[14] += 0.0925861;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1582615552)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)121)) {
            result[14] += -0.4665412;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)321)) {
              result[14] += 0.020560035;
            } else {
              result[14] += -0.108845346;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)40597)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
              result[14] += 0.013921024;
            } else {
              result[14] += -0.102531;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
              result[14] += -0.4008787;
            } else {
              result[14] += -0.11180496;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2984166400)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2621401856)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)109)) {
            result[14] += -0.17610395;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
              result[14] += 0.10858895;
            } else {
              result[14] += -0.04698176;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
            result[14] += -0.5570241;
          } else {
            result[14] += -0.13044775;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)54812)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)50981)) {
              result[14] += 0.055100758;
            } else {
              result[14] += 0.20663391;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)705)) {
              result[14] += 0.060574103;
            } else {
              result[14] += -0.098792724;
            }
          }
        } else {
          result[14] += -0.1048675;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[0] += 0.0005854448;
            } else {
              result[0] += -0.068460375;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48703)) {
              result[0] += 0.13111156;
            } else {
              result[0] += -0.050412092;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
            result[0] += -0.14677235;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)43961)) {
              result[0] += 0.028599262;
            } else {
              result[0] += -0.09298729;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)42674)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)42171)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)25655)) {
              result[0] += -0.012717764;
            } else {
              result[0] += 0.12617554;
            }
          } else {
            result[0] += -0.17113708;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59130)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[0] += 0.1920076;
            } else {
              result[0] += -0.08101541;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)57147)) {
              result[0] += 0.100659534;
            } else {
              result[0] += -0.12268247;
            }
          }
        }
      }
    } else {
      result[0] += -0.13012485;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1062497984)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)39016)) {
        result[0] += -0.14716473;
      } else {
        result[0] += 0.058482055;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
        result[0] += 0.1074842;
      } else {
        result[0] += -0.10883285;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1879)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)25)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)331)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)310)) {
              result[1] += -0.0004167873;
            } else {
              result[1] += 0.014724835;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)43594)) {
              result[1] += -0.11213443;
            } else {
              result[1] += 0.004335846;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            result[1] += 0.14641301;
          } else {
            result[1] += -0.0819597;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)21836)) {
          result[1] += 0.30003825;
        } else {
          result[1] += -0.08768359;
        }
      }
    } else {
      result[1] += -0.13415085;
    }
  } else {
    result[1] += -0.13557862;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)4355)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)63665)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)61104)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)60220)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)59581)) {
              result[2] += -0.0015993115;
            } else {
              result[2] += 0.21265249;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)60466)) {
              result[2] += -0.13830474;
            } else {
              result[2] += -0.026597027;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)61706)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += 0.6527032;
            } else {
              result[2] += -0.08425909;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)62581)) {
              result[2] += -0.088987;
            } else {
              result[2] += 0.063894734;
            }
          }
        }
      } else {
        result[2] += -0.025917614;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5822)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5213)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)4898)) {
              result[2] += 0.035336427;
            } else {
              result[2] += -0.027362159;
            }
          } else {
            result[2] += 0.11525223;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)7343)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)6405)) {
              result[2] += -0.035185333;
            } else {
              result[2] += -0.0123271495;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)7636)) {
              result[2] += 0.059168424;
            } else {
              result[2] += 0.008606532;
            }
          }
        }
      } else {
        result[2] += 0.095062286;
      }
    }
  } else {
    result[2] += -0.12602276;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.13061747;
    } else {
      result[3] += -0.0046089594;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
      result[3] += 0.09211744;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
        result[3] += -0.093003385;
      } else {
        result[3] += 0.0630691;
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)62964)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1675)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1368)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1060)) {
              result[4] += -0.0027067272;
            } else {
              result[4] += 0.02914997;
            }
          } else {
            result[4] += -0.042205773;
          }
        } else {
          result[4] += -0.077023506;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)23764)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)23499)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)22390)) {
              result[4] += 0.013385733;
            } else {
              result[4] += -0.10265971;
            }
          } else {
            result[4] += 0.16848657;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)24050)) {
            result[4] += -0.12923414;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)25201)) {
              result[4] += 0.06191791;
            } else {
              result[4] += 0.0070809326;
            }
          }
        }
      }
    } else {
      result[4] += 0.11722074;
    }
  } else {
    result[4] += -0.12589815;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)43994)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
              result[5] += 0.0010873341;
            } else {
              result[5] += -0.010606167;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[5] += -0.14377788;
            } else {
              result[5] += 0.0656806;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51858)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)47457)) {
              result[5] += -0.020459313;
            } else {
              result[5] += -0.16327515;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)331876768)) {
              result[5] += -0.10970222;
            } else {
              result[5] += 0.018363895;
            }
          }
        }
      } else {
        result[5] += -0.14636387;
      }
    } else {
      result[5] += -0.14475618;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)749577344)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)38752)) {
        result[5] += 0.14882812;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          result[5] += -0.100367196;
        } else {
          result[5] += 0.12246731;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
        result[5] += -0.1325691;
      } else {
        result[5] += 0.109628804;
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        result[6] += 0.0002640654;
      } else {
        result[6] += -0.07658543;
      }
    } else {
      result[6] += 0.07865915;
    }
  } else {
    result[6] += -0.12588729;
  }
  if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
    if ( (data[31].missing != -1) && (data[31].fvalue < (float)16)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)50828)) {
              result[7] += -0.004601571;
            } else {
              result[7] += 0.010671542;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
              result[7] += 0.007383933;
            } else {
              result[7] += -0.010365038;
            }
          }
        } else {
          result[7] += 0.12820497;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)38506)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)16531)) {
              result[7] += -0.06398333;
            } else {
              result[7] += -0.03976604;
            }
          } else {
            result[7] += -0.08069388;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
            result[7] += 0.13333586;
          } else {
            result[7] += -0.12564284;
          }
        }
      }
    } else {
      result[7] += 0.12832153;
    }
  } else {
    result[7] += 0.13107361;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)86)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[8] += -0.0003837627;
            } else {
              result[8] += 0.028063374;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[8] += 0.13668734;
            } else {
              result[8] += -0.013803288;
            }
          }
        } else {
          result[8] += -0.14896609;
        }
      } else {
        result[8] += 0.14310057;
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)221)) {
        result[8] += -0.14711572;
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)224)) {
          result[8] += 0.13693;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)37)) {
              result[8] += -0.15296012;
            } else {
              result[8] += 0.09590326;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)432)) {
              result[8] += 0.1210085;
            } else {
              result[8] += -0.021759845;
            }
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)4626)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)4385)) {
        result[8] += -0.08469364;
      } else {
        result[8] += 0.27363867;
      }
    } else {
      result[8] += -0.1453435;
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1206383360)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1130557440)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1112952576)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)883932608)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)799135808)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)592172608)) {
              result[9] += -5.1919345e-05;
            } else {
              result[9] += 0.13416311;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)31372)) {
              result[9] += -0.19551073;
            } else {
              result[9] += 0.15149745;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            result[9] += -0.12832892;
          } else {
            result[9] += 0.15122057;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)31122)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)28238)) {
            result[9] += 0.10953906;
          } else {
            result[9] += -0.21861519;
          }
        } else {
          result[9] += 0.137164;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[9] += -0.11086367;
      } else {
        result[9] += 0.1576362;
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1309093120)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)7751)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)33651)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            result[9] += -0.100447245;
          } else {
            result[9] += 0.15008318;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)33879)) {
            result[9] += -0.2081188;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46946)) {
              result[9] += 0.14393331;
            } else {
              result[9] += -0.13654788;
            }
          }
        }
      } else {
        result[9] += 0.15686846;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)44471)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)38506)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)5900)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)37473)) {
              result[9] += -0.037934706;
            } else {
              result[9] += 0.17126611;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
              result[9] += 0.15635288;
            } else {
              result[9] += -0.11501879;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[9] += -0.09114623;
            } else {
              result[9] += 0.16232754;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)39016)) {
              result[9] += -0.16681202;
            } else {
              result[9] += -0.017132845;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)408)) {
            result[9] += -0.13356051;
          } else {
            result[9] += 0.024243206;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
            result[9] += 0.1526319;
          } else {
            result[9] += -0.08507228;
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)61194)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)60425)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)60176)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)59916)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)59669)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)58400)) {
              result[10] += 0.00010131172;
            } else {
              result[10] += -0.052121017;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1220404864)) {
              result[10] += 0.12416376;
            } else {
              result[10] += -0.10237074;
            }
          }
        } else {
          result[10] += -0.14471811;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2020837248)) {
          result[10] += 0.14615873;
        } else {
          result[10] += -0.34295177;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)442)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48516)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60933)) {
              result[10] += -0.15377295;
            } else {
              result[10] += -0.054026745;
            }
          } else {
            result[10] += -0.33939198;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60670)) {
              result[10] += -0.3592277;
            } else {
              result[10] += 0.17727095;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2692215808)) {
              result[10] += -0.33169124;
            } else {
              result[10] += -0.07434394;
            }
          }
        }
      } else {
        result[10] += 0.20205055;
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3224507648)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)62713)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)62186)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48838)) {
              result[10] += 0.012274981;
            } else {
              result[10] += -0.40708983;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
              result[10] += 0.116098806;
            } else {
              result[10] += -0.01229995;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2621401856)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)365605792)) {
              result[10] += 0.007291788;
            } else {
              result[10] += -0.14889072;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3008718848)) {
              result[10] += 0.12594949;
            } else {
              result[10] += -0.21025638;
            }
          }
        }
      } else {
        result[10] += -0.31317237;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3541748992)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3454892544)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3314336000)) {
            result[10] += 0.16429085;
          } else {
            result[10] += -0.39892185;
          }
        } else {
          result[10] += 0.17209575;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)63476)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3687526656)) {
            result[10] += -0.33768618;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
              result[10] += 0.16018921;
            } else {
              result[10] += -0.19938363;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
              result[10] += 0.13538386;
            } else {
              result[10] += -0.2620986;
            }
          } else {
            result[10] += -0.26249135;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)44832)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)44448)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)43994)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)43594)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)42630)) {
              result[11] += -2.4227867e-05;
            } else {
              result[11] += 0.01631112;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)749577344)) {
              result[11] += -0.11405092;
            } else {
              result[11] += 0.0007167896;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)883932608)) {
              result[11] += 0.0036240716;
            } else {
              result[11] += 0.08212238;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2515185920)) {
              result[11] += -0.11571221;
            } else {
              result[11] += 0.011607112;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1062497984)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)368)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)528995584)) {
              result[11] += 0.057706293;
            } else {
              result[11] += -0.06231728;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
              result[11] += 0.12308536;
            } else {
              result[11] += -0.1681729;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1777797376)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1698013184)) {
              result[11] += -0.11091197;
            } else {
              result[11] += -0.34003192;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)419)) {
              result[11] += 0.0077288696;
            } else {
              result[11] += -0.07887968;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)4243005184)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3714831616)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)35427)) {
              result[11] += -0.037829872;
            } else {
              result[11] += 0.03568401;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46946)) {
              result[11] += 0.12806849;
            } else {
              result[11] += -0.14468949;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)398755392)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)368)) {
              result[11] += 0.09078173;
            } else {
              result[11] += 0.20804918;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)576729216)) {
              result[11] += -0.20155445;
            } else {
              result[11] += 0.047340482;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
          result[11] += -0.2595834;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)41390)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15468)) {
              result[11] += 0.13986741;
            } else {
              result[11] += -0.2384141;
            }
          } else {
            result[11] += 0.16859928;
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)5141)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1307)) {
        result[11] += -0.16095775;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1418493568)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)1557)) {
            result[11] += 0.19640277;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
              result[11] += -0.17706493;
            } else {
              result[11] += 0.082560174;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3088273664)) {
              result[11] += -0.13808954;
            } else {
              result[11] += 0.16509283;
            }
          } else {
            result[11] += 0.29762203;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)6166)) {
        result[11] += -0.19130273;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)6690)) {
          result[11] += 0.24180835;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)33651)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17307)) {
              result[11] += 0.006816072;
            } else {
              result[11] += -0.0992791;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
              result[11] += 0.011739406;
            } else {
              result[11] += -0.104704134;
            }
          }
        }
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)152)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)108)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
              result[12] += -0.00026909367;
            } else {
              result[12] += 0.09103697;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
              result[12] += -0.014284326;
            } else {
              result[12] += -0.14541256;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)121)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)264)) {
              result[12] += -0.08035563;
            } else {
              result[12] += 0.12778987;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
              result[12] += -0.18597713;
            } else {
              result[12] += 0.10386297;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)39638)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)39287)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1879)) {
              result[12] += -0.14290199;
            } else {
              result[12] += -0.043703992;
            }
          } else {
            result[12] += 0.07293019;
          }
        } else {
          result[12] += 0.086390935;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)378)) {
          result[12] += -0.14153145;
        } else {
          result[12] += -0.0474039;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
          result[12] += 0.101078704;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)23106)) {
            result[12] += 0.05198185;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46946)) {
              result[12] += -0.112576954;
            } else {
              result[12] += 0.023222748;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
      result[12] += -0.14540596;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)151)) {
        result[12] += 0.118579395;
      } else {
        result[12] += -0.08634297;
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)1)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)4162893824)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)40597)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)39566)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3687526656)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2854760192)) {
              result[13] += -0.0037699542;
            } else {
              result[13] += 0.0376845;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
              result[13] += 0.0048374697;
            } else {
              result[13] += -0.10518669;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49952)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)40361)) {
              result[13] += 0.19912152;
            } else {
              result[13] += 0.075052716;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1250292736)) {
              result[13] += 0.07546312;
            } else {
              result[13] += -0.193316;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)41648)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)41390)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)41134)) {
              result[13] += -0.13648129;
            } else {
              result[13] += -0.009586823;
            }
          } else {
            result[13] += -0.17177048;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2039111168)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1145715328)) {
              result[13] += -0.008294905;
            } else {
              result[13] += 0.06071655;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49952)) {
              result[13] += -0.071090765;
            } else {
              result[13] += 0.00043770636;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)46699)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
          result[13] += -0.14044589;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)43175)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)38752)) {
              result[13] += 0.11239744;
            } else {
              result[13] += -0.18423793;
            }
          } else {
            result[13] += 0.2926228;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)62970)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
            result[13] += -0.183925;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)52771)) {
              result[13] += -0.14172229;
            } else {
              result[13] += 0.16344957;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63241)) {
            result[13] += 0.26661897;
          } else {
            result[13] += -0.10399386;
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)4076412416)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3832654848)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3118221568)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2272993536)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2182743296)) {
              result[13] += 0.0063127372;
            } else {
              result[13] += -0.08562968;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2398005248)) {
              result[13] += 0.07563009;
            } else {
              result[13] += 0.009506618;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)65016)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)58919)) {
              result[13] += -0.008054166;
            } else {
              result[13] += -0.11995647;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
              result[13] += 0.37405348;
            } else {
              result[13] += 0.017454358;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)47693)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)11088)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)7708)) {
              result[13] += -0.0040636295;
            } else {
              result[13] += -0.13799308;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)22857)) {
              result[13] += 0.2155265;
            } else {
              result[13] += 0.05102224;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)57897)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)49210)) {
              result[13] += -0.00084099296;
            } else {
              result[13] += -0.1297143;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3859072512)) {
              result[13] += 0.31483495;
            } else {
              result[13] += -0.030617116;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)4103136768)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)16270)) {
            result[13] += 0.11600474;
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[13] += -0.15950087;
            } else {
              result[13] += 0.023105871;
            }
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
            result[13] += -0.73574877;
          } else {
            result[13] += -0.1503687;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48838)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)13219)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)9027)) {
              result[13] += -0.028102798;
            } else {
              result[13] += 0.2768304;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += -0.023383643;
            } else {
              result[13] += -0.154606;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)262)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4217347584)) {
              result[13] += 0.049870618;
            } else {
              result[13] += -0.08020291;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
              result[13] += 0.2913005;
            } else {
              result[13] += 0.09757189;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)62460)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)56138)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2579351040)) {
              result[14] += -0.0012703568;
            } else {
              result[14] += 0.005330018;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59378)) {
              result[14] += -0.091901354;
            } else {
              result[14] += 0.08048849;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)56386)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[14] += -0.004204375;
            } else {
              result[14] += 0.22004679;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
              result[14] += 0.005905429;
            } else {
              result[14] += 0.24765298;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
              result[14] += -0.019813396;
            } else {
              result[14] += -0.21592422;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3284568832)) {
              result[14] += -0.0041655377;
            } else {
              result[14] += 0.060284287;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
            result[14] += -0.15226251;
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
              result[14] += 0.10065837;
            } else {
              result[14] += -0.028647203;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
          result[14] += -0.14503434;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            result[14] += 0.1654976;
          } else {
            result[14] += -0.097933315;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)486)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)486)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)441)) {
              result[14] += 0.0033486336;
            } else {
              result[14] += 0.10013861;
            }
          } else {
            result[14] += -0.10839576;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
            result[14] += -0.13518108;
          } else {
            result[14] += 0.051512443;
          }
        }
      }
    }
  } else {
    result[14] += -0.13411081;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1159754368)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1145715328)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)365605792)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)232647088)) {
              result[0] += 0.00031922085;
            } else {
              result[0] += 0.17897454;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)44913)) {
              result[0] += 0.024008358;
            } else {
              result[0] += -0.10754477;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[0] += -0.08489061;
            } else {
              result[0] += 0.17393263;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)560492160)) {
              result[0] += -0.09155351;
            } else {
              result[0] += 0.04872269;
            }
          }
        }
      } else {
        result[0] += -0.15377362;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1324402432)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
          result[0] += -0.122678705;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
              result[0] += 0.09200898;
            } else {
              result[0] += 0.20950763;
            }
          } else {
            result[0] += -0.09161491;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)18524)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)262)) {
              result[0] += -0.13629822;
            } else {
              result[0] += 0.044427663;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1826348032)) {
              result[0] += 0.24075855;
            } else {
              result[0] += 0.081982374;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
            result[0] += -0.14595257;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1614904576)) {
              result[0] += -0.06913855;
            } else {
              result[0] += 0.070519984;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2119496576)) {
      result[0] += -0.14180948;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2248229888)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
              result[0] += 0.0011190905;
            } else {
              result[0] += 0.111858286;
            }
          } else {
            result[0] += -0.1368791;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)403)) {
            result[0] += 0.12528025;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
              result[0] += -0.11518763;
            } else {
              result[0] += 0.11364215;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60210)) {
          result[0] += -0.1371067;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[0] += -0.07954028;
            } else {
              result[0] += 0.15900257;
            }
          } else {
            result[0] += -0.1144541;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)44832)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)44448)) {
              result[1] += -0.000354997;
            } else {
              result[1] += 0.038639445;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)232647088)) {
              result[1] += -0.17689085;
            } else {
              result[1] += -0.024960058;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)33361)) {
              result[1] += 0.037550006;
            } else {
              result[1] += -0.00353084;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
              result[1] += -0.16284467;
            } else {
              result[1] += 0.10485538;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)54077)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
              result[1] += -0.15149389;
            } else {
              result[1] += 0.086370274;
            }
          } else {
            result[1] += -0.15148498;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            result[1] += -0.14938767;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
              result[1] += 0.03968302;
            } else {
              result[1] += -0.10435106;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)950050240)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)40597)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
              result[1] += 0.0070904708;
            } else {
              result[1] += 0.14616698;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[1] += -0.15387899;
            } else {
              result[1] += 0.06496783;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)265767216)) {
              result[1] += 0.0866786;
            } else {
              result[1] += -0.15412723;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)49475)) {
              result[1] += 0.20647919;
            } else {
              result[1] += 0.09465577;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1000793920)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)7708)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)7446)) {
              result[1] += -0.10535083;
            } else {
              result[1] += 0.27931845;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
              result[1] += -0.022497816;
            } else {
              result[1] += -0.18734837;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)55789)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[1] += -0.13385658;
            } else {
              result[1] += 0.04218282;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3118221568)) {
              result[1] += -0.017355902;
            } else {
              result[1] += 0.027299337;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)59506)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3598538240)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3570386688)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)31122)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)30078)) {
              result[1] += -0.041548688;
            } else {
              result[1] += 0.34057736;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2677389824)) {
              result[1] += -0.041719526;
            } else {
              result[1] += -0.14024237;
            }
          }
        } else {
          result[1] += 0.28330445;
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          result[1] += -0.05683286;
        } else {
          result[1] += -0.14962855;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1307)) {
        result[1] += -0.14080666;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)6428)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)6166)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59886)) {
              result[1] += 0.16127059;
            } else {
              result[1] += -0.003596471;
            }
          } else {
            result[1] += 0.5601518;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)8527)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59630)) {
              result[1] += 0.16700949;
            } else {
              result[1] += -0.14491118;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3714831616)) {
              result[1] += -0.006016021;
            } else {
              result[1] += 0.061038833;
            }
          }
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1636)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
            result[2] += -0.05850996;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1360)) {
              result[2] += 0.011470331;
            } else {
              result[2] += -0.050690133;
            }
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
            result[2] += -0.0064380514;
          } else {
            result[2] += -0.013411729;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)47007)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)36307)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)35431)) {
              result[2] += 0.0016921661;
            } else {
              result[2] += -0.06456884;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)36659)) {
              result[2] += 0.43448183;
            } else {
              result[2] += 0.007837051;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)49575)) {
              result[2] += -0.052711673;
            } else {
              result[2] += 0.009066601;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)47487)) {
              result[2] += 0.015610002;
            } else {
              result[2] += -0.140094;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)64201)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)55440)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)54009)) {
              result[2] += 0.009088984;
            } else {
              result[2] += -0.031278726;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)55730)) {
              result[2] += 0.11571828;
            } else {
              result[2] += 0.009410771;
            }
          }
        } else {
          result[2] += -0.010678144;
        }
      } else {
        result[2] += 0.097709775;
      }
    }
  } else {
    result[2] += -0.12329754;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.12825844;
    } else {
      result[3] += -0.003977166;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
        result[3] += -0.08986328;
      } else {
        result[3] += 0.058251046;
      }
    } else {
      result[3] += 0.09132676;
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1675)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1368)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1060)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[4] += -0.0032431635;
            } else {
              result[4] += -0.014086646;
            }
          } else {
            result[4] += 0.025890099;
          }
        } else {
          result[4] += -0.03930797;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)64201)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)55440)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)52507)) {
              result[4] += 0.006795791;
            } else {
              result[4] += 0.033632517;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)55730)) {
              result[4] += -0.10775246;
            } else {
              result[4] += 0.00615269;
            }
          }
        } else {
          result[4] += 0.027217144;
        }
      }
    } else {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)62964)) {
        result[4] += 0.04293045;
      } else {
        result[4] += 0.11407849;
      }
    }
  } else {
    result[4] += -0.12316451;
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)44233)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)42674)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)150343280)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)7187)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
              result[5] += 0.00030119577;
            } else {
              result[5] += 0.101284154;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)65535)) {
              result[5] += -0.1589281;
            } else {
              result[5] += 0.12656276;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)20366)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
              result[5] += 0.12145459;
            } else {
              result[5] += -0.1566863;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)24100)) {
              result[5] += 0.15348932;
            } else {
              result[5] += 0.01983324;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[5] += -0.14964789;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)782316608)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
              result[5] += -0.0787788;
            } else {
              result[5] += 0.07785136;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)813467392)) {
              result[5] += 0.15301113;
            } else {
              result[5] += -0.0017504486;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1923645952)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
          result[5] += -0.036642987;
        } else {
          result[5] += -0.17009787;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)18524)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
            result[5] += -0.07715568;
          } else {
            result[5] += 0.09669433;
          }
        } else {
          result[5] += -0.1261399;
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)45411)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
            result[5] += -0.1443765;
          } else {
            result[5] += -0.34746101;
          }
        } else {
          result[5] += -0.14660785;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
          result[5] += 0.26078448;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)11064)) {
            result[5] += -0.15030728;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)44913)) {
              result[5] += 0.13178113;
            } else {
              result[5] += -0.09407255;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)47199)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
          result[5] += -0.024854934;
        } else {
          result[5] += -0.16588198;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1664345728)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1647413248)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1386276096)) {
              result[5] += 0.018600374;
            } else {
              result[5] += -0.15113583;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)52948)) {
              result[5] += -0.11109655;
            } else {
              result[5] += 0.19756214;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2054161792)) {
            result[5] += -0.1572292;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)37736)) {
              result[5] += 0.07052678;
            } else {
              result[5] += -0.11517825;
            }
          }
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      result[6] += 0.00023255715;
    } else {
      result[6] += 0.07565002;
    }
  } else {
    result[6] += -0.123152934;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56)) {
              result[7] += 6.4925525e-06;
            } else {
              result[7] += -0.13497491;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)87)) {
              result[7] += 0.13252491;
            } else {
              result[7] += -0.016254926;
            }
          }
        } else {
          result[7] += -0.13200219;
        }
      } else {
        result[7] += 0.1282261;
      }
    } else {
      result[7] += -0.120773114;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        result[7] += 0.034305453;
      } else {
        result[7] += -0.13971184;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)17.536195755)) {
        result[7] += 0.13021274;
      } else {
        result[7] += -0.08032645;
      }
    }
  }
}


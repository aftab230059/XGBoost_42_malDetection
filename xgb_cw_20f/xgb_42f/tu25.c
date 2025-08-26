
#include "header.h"

void predict_unit25(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)11305)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[5] += -0.005199047;
            } else {
              result[5] += 0.00795022;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)11816)) {
              result[5] += 0.06620844;
            } else {
              result[5] += 0.0030300966;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
            result[5] += 0.05779813;
          } else {
            result[5] += -0.1144212;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1730353280)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1250727680)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40706)) {
              result[5] += -0.09137622;
            } else {
              result[5] += 0.06290227;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)41999)) {
              result[5] += 0.25257355;
            } else {
              result[5] += 0.051710248;
            }
          }
        } else {
          result[5] += -0.07683988;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
        result[5] += -0.114423275;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)467500480)) {
          result[5] += -0.080808096;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1159214080)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58700)) {
              result[5] += 0.17894432;
            } else {
              result[5] += -0.0077649574;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58700)) {
              result[5] += -0.0841355;
            } else {
              result[5] += 0.016025199;
            }
          }
        }
      }
    }
  } else {
    result[5] += 0.07070421;
  }
  result[6] += -0.00026641708;
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)50927)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)48661)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
              result[7] += -9.165176e-06;
            } else {
              result[7] += 0.08121617;
            }
          } else {
            result[7] += -0.0881719;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[7] += -0.08235936;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[7] += -0.05023637;
            } else {
              result[7] += 0.0323134;
            }
          }
        }
      } else {
        result[7] += -0.108012125;
      }
    } else {
      result[7] += 0.122981414;
    }
  } else {
    result[7] += -0.08843933;
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
              result[8] += -0.0075741806;
            } else {
              result[8] += -0.034148797;
            }
          } else {
            result[8] += -0.11335658;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)350722368)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
              result[8] += -0.078237616;
            } else {
              result[8] += 0.2956847;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3927323392)) {
              result[8] += -0.03824894;
            } else {
              result[8] += 0.142401;
            }
          }
        }
      } else {
        result[8] += -0.11817029;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1054373056)) {
        result[8] += 0.19119266;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1195706368)) {
            result[8] += -0.14309695;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[8] += 0.048149373;
            } else {
              result[8] += -0.008899942;
            }
          }
        } else {
          result[8] += 0.12956968;
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2109833344)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54003)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53207)) {
              result[8] += 0.01449845;
            } else {
              result[8] += 0.34409064;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[8] += -0.10979445;
            } else {
              result[8] += 0.073831275;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2809073152)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57338)) {
              result[8] += 0.10309056;
            } else {
              result[8] += 0.25619918;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3001000192)) {
              result[8] += -0.08408662;
            } else {
              result[8] += 0.031017786;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)1559)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2722185728)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2317237248)) {
              result[8] += -0.03802972;
            } else {
              result[8] += -0.13930003;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3694567680)) {
              result[8] += 0.0660209;
            } else {
              result[8] += -0.089287065;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)290972000)) {
            result[8] += 0.27828208;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
              result[8] += -0.056946307;
            } else {
              result[8] += 0.093886495;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2853225984)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49786)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)40946396)) {
              result[8] += -0.032658342;
            } else {
              result[8] += 0.044849806;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[8] += -0.11811071;
            } else {
              result[8] += -0.017643044;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += -0.16600096;
            } else {
              result[8] += -0.065945394;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2084)) {
              result[8] += -0.006979631;
            } else {
              result[8] += 0.1260791;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += 3.7336926e-05;
            } else {
              result[8] += -0.1388239;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += 0.036736798;
            } else {
              result[8] += 0.001238172;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[8] += -0.13067198;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.03676199;
            } else {
              result[8] += -0.08629331;
            }
          }
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)61450)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)53522)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)51717)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)48125)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45315)) {
              result[9] += -0.00011630487;
            } else {
              result[9] += 0.09169712;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[9] += 0.0731852;
            } else {
              result[9] += -0.0891429;
            }
          }
        } else {
          result[9] += 0.08876237;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[9] += -0.08871718;
            } else {
              result[9] += 0.0939139;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
              result[9] += -0.025544887;
            } else {
              result[9] += -0.13188021;
            }
          }
        } else {
          result[9] += 0.029246408;
        }
      }
    } else {
      result[9] += 0.052018434;
    }
  } else {
    result[9] += -0.048197027;
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)51204)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)49678)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)46078)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3927323392)) {
              result[10] += -0.0012118785;
            } else {
              result[10] += 0.036228932;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1452252288)) {
              result[10] += -0.0039315843;
            } else {
              result[10] += 0.089305796;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48385)) {
              result[10] += -0.0836395;
            } else {
              result[10] += 0.056975096;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3348316160)) {
              result[10] += -0.1441525;
            } else {
              result[10] += 0.016714174;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
            result[10] += -0.0715798;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3022144256)) {
              result[10] += 0.15543003;
            } else {
              result[10] += 0.02024458;
            }
          }
        } else {
          result[10] += -0.09509149;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2979963136)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2317237248)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
              result[10] += -0.11278071;
            } else {
              result[10] += 0.00180369;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
              result[10] += 0.03378148;
            } else {
              result[10] += 0.19855358;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)62732)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
              result[10] += 0.060937054;
            } else {
              result[10] += -0.17533015;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
              result[10] += -0.007710227;
            } else {
              result[10] += 0.07680275;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)58915)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56836)) {
              result[10] += 0.02671225;
            } else {
              result[10] += 0.18764324;
            }
          } else {
            result[10] += -0.12591743;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60690)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3714417664)) {
              result[10] += -0.17994389;
            } else {
              result[10] += -0.06338647;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3260428288)) {
              result[10] += -0.05519178;
            } else {
              result[10] += 0.053704094;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[10] += -0.09947195;
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)50704)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)50449)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)48646)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
              result[10] += 0.0028761667;
            } else {
              result[10] += 0.073327444;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49930)) {
              result[10] += -0.069957845;
            } else {
              result[10] += 0.03625616;
            }
          }
        } else {
          result[10] += -0.15089245;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)51972)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)51717)) {
            result[10] += 0.069790445;
          } else {
            result[10] += 0.14307505;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)57357)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
              result[10] += 0.016326444;
            } else {
              result[10] += -0.044107374;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
              result[10] += 0.15175685;
            } else {
              result[10] += 0.0060340934;
            }
          }
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)55824)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)51717)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51204)) {
              result[11] += 5.3057183e-06;
            } else {
              result[11] += -0.023475578;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.003638424;
            } else {
              result[11] += 0.03982053;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60184)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += -0.009042643;
            } else {
              result[11] += 0.060551662;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[11] += 0.002997213;
            } else {
              result[11] += -0.040412;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
          result[11] += -0.14323919;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)40946396)) {
            result[11] += -0.21866669;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)723390400)) {
              result[11] += 0.04585645;
            } else {
              result[11] += -0.007940261;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3757889792)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3694567680)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2051944064)) {
              result[11] += 0.06685431;
            } else {
              result[11] += -0.010738824;
            }
          } else {
            result[11] += -0.3201666;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
            result[11] += -0.0030863965;
          } else {
            result[11] += 0.14774099;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)12579)) {
          result[11] += -0.3002084;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
            result[11] += -0.090466395;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)32760)) {
              result[11] += -0.035474006;
            } else {
              result[11] += 0.121176384;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)215123600)) {
      result[11] += 0.122619405;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4016157440)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3022144256)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2742782464)) {
              result[11] += -0.021167558;
            } else {
              result[11] += -0.12202738;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[11] += 0.049538486;
            } else {
              result[11] += -0.072102875;
            }
          }
        } else {
          result[11] += -0.28686333;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
          result[11] += 0.14451434;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48646)) {
              result[11] += -0.19814669;
            } else {
              result[11] += -0.044853024;
            }
          } else {
            result[11] += 0.13823816;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[12] += 0.00028622142;
            } else {
              result[12] += 0.07894705;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[12] += -0.11745325;
            } else {
              result[12] += -0.020951584;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[12] += -0.15647286;
            } else {
              result[12] += 0.012585699;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 0.13483103;
            } else {
              result[12] += -0.08392895;
            }
          }
        }
      } else {
        result[12] += -0.1042228;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
            result[12] += 0.029316084;
          } else {
            result[12] += -0.11230626;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            result[12] += 0.07115398;
          } else {
            result[12] += 0.021733634;
          }
        }
      } else {
        result[12] += -0.12962301;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)19991)) {
          result[12] += -0.12226954;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            result[12] += -0.07782034;
          } else {
            result[12] += 0.09090172;
          }
        }
      } else {
        result[12] += -0.13745208;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)34542)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)28902)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12063)) {
              result[12] += 0.1690861;
            } else {
              result[12] += -0.015684802;
            }
          } else {
            result[12] += 0.24768119;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1374947328)) {
            result[12] += 0.065979056;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1885973376)) {
              result[12] += -0.19525054;
            } else {
              result[12] += 0.044761546;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)59329708)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)21524)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[12] += 0.015550624;
            } else {
              result[12] += -0.16596824;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)34288)) {
              result[12] += 0.20813583;
            } else {
              result[12] += 0.020517072;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)176928576)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
              result[12] += -0.1445518;
            } else {
              result[12] += -0.01675297;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)235509136)) {
              result[12] += 0.045763634;
            } else {
              result[12] += -0.0026377905;
            }
          }
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
              result[13] += -0.0025169689;
            } else {
              result[13] += 0.0042340728;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)39)) {
              result[13] += 0.03847823;
            } else {
              result[13] += 0.11482067;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1263)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[13] += -0.12414753;
            } else {
              result[13] += -0.0063538477;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)14103)) {
              result[13] += 0.040879644;
            } else {
              result[13] += -0.034324065;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3714417664)) {
              result[13] += 0.024523726;
            } else {
              result[13] += 0.09410234;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2398340864)) {
              result[13] += 0.011368375;
            } else {
              result[13] += -0.035890106;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)62221)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49638)) {
              result[13] += -0.034048602;
            } else {
              result[13] += 0.0027790323;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)958688384)) {
              result[13] += -0.061871707;
            } else {
              result[13] += 0.11207591;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2256408064)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          result[13] += -0.031186828;
        } else {
          result[13] += -0.1313053;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2540421888)) {
          result[13] += 0.16174051;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
            result[13] += -0.10202029;
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[13] += -0.024304843;
            } else {
              result[13] += 0.046298563;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3303400704)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2071591168)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
              result[13] += 0.019473976;
            } else {
              result[13] += 0.123727344;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += -0.0062633427;
            } else {
              result[13] += -0.11294964;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
            result[13] += -0.15984575;
          } else {
            result[13] += -0.016096495;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3714417664)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3565603328)) {
            result[13] += 0.046586785;
          } else {
            result[13] += 0.23149651;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
            result[13] += 0.2264837;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.12880518;
            } else {
              result[13] += 0.0017286272;
            }
          }
        }
      }
    } else {
      result[13] += -0.1143008;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
              result[14] += -0.00016681457;
            } else {
              result[14] += 0.07988918;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
              result[14] += -0.00674522;
            } else {
              result[14] += -0.11350321;
            }
          }
        } else {
          result[14] += -0.13052703;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)12063)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)5640)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2958984960)) {
              result[14] += 0.11898879;
            } else {
              result[14] += -0.035114598;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8983)) {
              result[14] += -0.15179764;
            } else {
              result[14] += -0.026542902;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)15634)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
              result[14] += -0.06146594;
            } else {
              result[14] += 0.20110822;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)18193)) {
              result[14] += -0.16322845;
            } else {
              result[14] += 0.023304403;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61450)) {
            result[14] += -0.14758827;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
              result[14] += 0.024305189;
            } else {
              result[14] += -0.11035621;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
            result[14] += -0.10770944;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11043)) {
              result[14] += 0.18692634;
            } else {
              result[14] += 0.066635676;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2830898688)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1288050432)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)18193)) {
              result[14] += 0.14100662;
            } else {
              result[14] += -0.040918294;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1574747392)) {
              result[14] += -0.14408208;
            } else {
              result[14] += -0.06768438;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31746)) {
              result[14] += 0.0030020887;
            } else {
              result[14] += 0.2327999;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
              result[14] += -0.03140416;
            } else {
              result[14] += 0.112790495;
            }
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)15634)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)2582)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3587199488)) {
              result[14] += 0.108796954;
            } else {
              result[14] += -0.091205925;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3844556032)) {
              result[14] += -0.026835764;
            } else {
              result[14] += 0.15830164;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
              result[14] += -0.042885322;
            } else {
              result[14] += 0.0047492716;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
              result[14] += 0.041078813;
            } else {
              result[14] += -0.11958013;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            result[14] += 0.27841392;
          } else {
            result[14] += -0.09362022;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)11301)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
              result[14] += -0.13528745;
            } else {
              result[14] += -0.0113339415;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[14] += 0.032456513;
            } else {
              result[14] += 0.19679548;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2896713728)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)16408)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1195706368)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[14] += 0.34479755;
            } else {
              result[14] += -0.08797288;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2497760512)) {
              result[14] += -0.07489307;
            } else {
              result[14] += 0.15103614;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)310338752)) {
              result[14] += 0.042860772;
            } else {
              result[14] += -0.10746124;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24306)) {
              result[14] += 0.051459648;
            } else {
              result[14] += 0.00834563;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)34542)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)33269)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
              result[14] += -0.019537266;
            } else {
              result[14] += 0.0908504;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[14] += 0.36623165;
            } else {
              result[14] += -0.07480215;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)49678)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.056634814;
            } else {
              result[14] += 0.080490306;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50193)) {
              result[14] += 0.20898195;
            } else {
              result[14] += -0.011615796;
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2979963136)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)38365)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)35802)) {
              result[0] += 0.00024464785;
            } else {
              result[0] += -0.03683438;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)41485)) {
              result[0] += 0.054820135;
            } else {
              result[0] += 0.0011175587;
            }
          }
        } else {
          result[0] += 0.06767632;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[0] += -0.08546282;
        } else {
          result[0] += 0.015852645;
        }
      }
    } else {
      result[0] += -0.08563759;
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)723390400)) {
        result[0] += -0.027629688;
      } else {
        result[0] += 0.12581895;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
        result[0] += -0.07858219;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          result[0] += 0.055825673;
        } else {
          result[0] += -0.01929463;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[1] += 2.2471751e-05;
            } else {
              result[1] += -0.037640955;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)702701760)) {
              result[1] += 0.1682972;
            } else {
              result[1] += -0.02567538;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)52484)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.117750816;
            } else {
              result[1] += -0.01500618;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[1] += -0.11267469;
            } else {
              result[1] += 0.1035961;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
              result[1] += 0.017492859;
            } else {
              result[1] += 0.4276824;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13341)) {
              result[1] += 0.023029312;
            } else {
              result[1] += -0.12831001;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
              result[1] += 0.050690606;
            } else {
              result[1] += 0.29796067;
            }
          } else {
            result[1] += -0.105610274;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)26334)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)22786)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)11301)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6165)) {
              result[1] += -0.11357351;
            } else {
              result[1] += 0.1281853;
            }
          } else {
            result[1] += -0.1035514;
          }
        } else {
          result[1] += 0.23950042;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)59926)) {
          result[1] += -0.13470034;
        } else {
          result[1] += 0.06585475;
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2398340864)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)33010)) {
            result[1] += -0.0627447;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
              result[1] += 0.3310392;
            } else {
              result[1] += -0.0020890431;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
            result[1] += 0.08561752;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1574747392)) {
              result[1] += -0.13151424;
            } else {
              result[1] += 0.06015034;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)16666)) {
          result[1] += 0.035574988;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
            result[1] += 0.116911575;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48125)) {
              result[1] += 0.38628986;
            } else {
              result[1] += 0.09179394;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)22786)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3325106688)) {
            result[1] += -0.081615984;
          } else {
            result[1] += 0.070978254;
          }
        } else {
          result[1] += -0.11601132;
        }
      } else {
        result[1] += 0.09688355;
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)59216)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)58434)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)53560)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)52770)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)51984)) {
              result[2] += 0.0011763818;
            } else {
              result[2] += -0.0564714;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)53285)) {
              result[2] += 0.07540029;
            } else {
              result[2] += 0.00023312311;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)54081)) {
            result[2] += -0.1169905;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += 0.02441969;
            } else {
              result[2] += -0.11000822;
            }
          }
        }
      } else {
        result[2] += 0.12391513;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)60490)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)60225)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)59459)) {
              result[2] += -0.06695698;
            } else {
              result[2] += 0.07007087;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)59459)) {
              result[2] += 0.01953552;
            } else {
              result[2] += -0.09514319;
            }
          }
        } else {
          result[2] += -0.07920513;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)61488)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[2] += -0.0011553525;
          } else {
            result[2] += 0.11473542;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)63714)) {
              result[2] += 0.035666782;
            } else {
              result[2] += -0.024352515;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)63714)) {
              result[2] += -0.08499866;
            } else {
              result[2] += 0.06420347;
            }
          }
        }
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
      result[2] += 0.0388277;
    } else {
      result[2] += 0.0013507374;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.023843467;
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1168160128)) {
      result[3] += 0.018937306;
    } else {
      result[3] += 0.000104464954;
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    result[4] += -0.008620285;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
        result[4] += 0.013980246;
      } else {
        result[4] += 0.045206353;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
        result[4] += -0.015446619;
      } else {
        result[4] += 0.026518406;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1374947328)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1269061760)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1250727680)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33779)) {
              result[5] += 0.0014172624;
            } else {
              result[5] += -0.023487711;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)41999)) {
              result[5] += 0.23670529;
            } else {
              result[5] += 0.023249263;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)48125)) {
            result[5] += -0.12301539;
          } else {
            result[5] += 0.06540521;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)38627)) {
          result[5] += 0.030415734;
        } else {
          result[5] += 0.16406563;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
          result[5] += -0.12000569;
        } else {
          result[5] += 0.0010885295;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1574747392)) {
            result[5] += 0.19822755;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[5] += 0.049963888;
            } else {
              result[5] += -0.029899817;
            }
          }
        } else {
          result[5] += -0.10555703;
        }
      }
    }
  } else {
    result[5] += 0.06770042;
  }
  result[6] += -0.00026545653;
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)17173)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10780)) {
              result[7] += -0.0001531405;
            } else {
              result[7] += 0.0103315385;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[7] += -0.013852551;
            } else {
              result[7] += -0.00026613055;
            }
          }
        } else {
          result[7] += -0.08610004;
        }
      } else {
        result[7] += 0.08603606;
      }
    } else {
      result[7] += 0.07353455;
    }
  } else {
    result[7] += 0.08708001;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3196177408)) {
              result[8] += 0.00093918864;
            } else {
              result[8] += -0.0038692784;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)39407)) {
              result[8] += 0.024115412;
            } else {
              result[8] += -0.08347939;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1353621248)) {
              result[8] += 0.046005726;
            } else {
              result[8] += -0.0045316503;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
              result[8] += 0.14845435;
            } else {
              result[8] += 0.00018379599;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1091894528)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)215123600)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45315)) {
              result[8] += 0.12488368;
            } else {
              result[8] += -0.11941233;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8477)) {
              result[8] += -0.041614372;
            } else {
              result[8] += -0.12047707;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1177192448)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)29160)) {
              result[8] += 0.40259787;
            } else {
              result[8] += 0.05824933;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2084)) {
              result[8] += 0.11126734;
            } else {
              result[8] += -0.019585008;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)36818)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4079296768)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3714417664)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
              result[8] += 0.016538203;
            } else {
              result[8] += -0.05833367;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[8] += 0.27251166;
            } else {
              result[8] += -0.007090675;
            }
          }
        } else {
          result[8] += -0.12668887;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)37849)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57338)) {
            result[8] += 0.2894291;
          } else {
            result[8] += 0.05235416;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2979963136)) {
              result[8] += 0.023201287;
            } else {
              result[8] += 0.08893248;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1670813696)) {
              result[8] += 0.029521277;
            } else {
              result[8] += -0.11970991;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)486985984)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)1296)) {
          result[8] += 0.17188334;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)138283152)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)32004)) {
              result[8] += -0.10657988;
            } else {
              result[8] += -0.014588732;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51717)) {
              result[8] += -0.0021164115;
            } else {
              result[8] += 0.18090048;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[8] += -0.0895674;
            } else {
              result[8] += -0.025325088;
            }
          } else {
            result[8] += -0.14004692;
          }
        } else {
          result[8] += 0.07657425;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)723390400)) {
              result[8] += -0.021167932;
            } else {
              result[8] += 0.07084275;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1432541440)) {
              result[8] += -0.047424633;
            } else {
              result[8] += 0.0003177252;
            }
          }
        } else {
          result[8] += -0.13113703;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57868)) {
          result[8] += 0.19126295;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[8] += 0.1263182;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)762532352)) {
              result[8] += 0.17683837;
            } else {
              result[8] += 0.0040963544;
            }
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1846921344)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1392936448)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1307060480)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)51470)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)49930)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48125)) {
              result[9] += 1.7396029e-05;
            } else {
              result[9] += -0.06785946;
            }
          } else {
            result[9] += 0.08580167;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)390465472)) {
              result[9] += 0.0025403618;
            } else {
              result[9] += -0.13299876;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1223297280)) {
              result[9] += 0.08972985;
            } else {
              result[9] += -0.06564375;
            }
          }
        }
      } else {
        result[9] += 0.0864817;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
        result[9] += -0.15727435;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
          result[9] += 0.08380144;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
            result[9] += 0.06956505;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44802)) {
              result[9] += -0.08350694;
            } else {
              result[9] += 0.059720628;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1943717504)) {
      result[9] += 0.09031105;
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
        result[9] += 0.052609388;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)36306)) {
          result[9] += -0.098628566;
        } else {
          result[9] += 0.038597565;
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)55824)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)55060)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)54286)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51204)) {
              result[10] += -0.00036724098;
            } else {
              result[10] += -0.031901054;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1690263552)) {
              result[10] += 0.16411565;
            } else {
              result[10] += 0.010903269;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1807130496)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54797)) {
              result[10] += -0.18626538;
            } else {
              result[10] += -0.0072806743;
            }
          } else {
            result[10] += 0.005995308;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)55573)) {
            result[10] += -0.1359273;
          } else {
            result[10] += 0.008210015;
          }
        } else {
          result[10] += 0.20849992;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)56836)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56328)) {
              result[10] += -0.0018388347;
            } else {
              result[10] += 0.036342874;
            }
          } else {
            result[10] += -0.14350796;
          }
        } else {
          result[10] += -0.16435678;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2875370496)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)920192512)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)467500480)) {
              result[10] += -0.018005617;
            } else {
              result[10] += 0.11614513;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58402)) {
              result[10] += -0.20120148;
            } else {
              result[10] += -0.020146985;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)58915)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57887)) {
              result[10] += 0.17494383;
            } else {
              result[10] += 0.07318033;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60690)) {
              result[10] += -0.13546611;
            } else {
              result[10] += 0.034950532;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[10] += -0.096087895;
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)50704)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)50449)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)44802)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43031)) {
              result[10] += 0.0031283759;
            } else {
              result[10] += 0.049209822;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47082)) {
              result[10] += -0.050805658;
            } else {
              result[10] += 0.013646039;
            }
          }
        } else {
          result[10] += -0.14121619;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)51972)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)51717)) {
            result[10] += 0.061660394;
          } else {
            result[10] += 0.1338162;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)56085)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)55312)) {
              result[10] += 0.0044277203;
            } else {
              result[10] += -0.11906599;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56328)) {
              result[10] += 0.1357204;
            } else {
              result[10] += 0.0057673077;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
              result[11] += -3.3208213e-05;
            } else {
              result[11] += 0.063604884;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
              result[11] += -0.14378361;
            } else {
              result[11] += 0.020977356;
            }
          }
        } else {
          result[11] += 0.10723958;
        }
      } else {
        result[11] += -0.08621007;
      }
    } else {
      result[11] += -0.085167766;
    }
  } else {
    result[11] += -0.085537516;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)310338752)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)290972000)) {
              result[12] += -0.0012994929;
            } else {
              result[12] += -0.051110648;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)604431232)) {
              result[12] += 0.015438396;
            } else {
              result[12] += -0.00015937019;
            }
          }
        } else {
          result[12] += -0.088309;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          result[12] += -0.10465095;
        } else {
          result[12] += 0.010678287;
        }
      }
    } else {
      result[12] += 0.104328685;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            result[12] += 0.025780782;
          } else {
            result[12] += -0.11496401;
          }
        } else {
          result[12] += 0.07593712;
        }
      } else {
        result[12] += -0.11424716;
      }
    } else {
      result[12] += 0.05177529;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)3905469696)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3865091840)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3587199488)) {
              result[13] += -4.947365e-05;
            } else {
              result[13] += 0.067652345;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9237)) {
              result[13] += 0.089085326;
            } else {
              result[13] += -0.05703378;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)20245)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11556)) {
              result[13] += 0.0053247176;
            } else {
              result[13] += -0.117628045;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
              result[13] += 0.35134336;
            } else {
              result[13] += 0.04579836;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)32760)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[13] += 0.026193017;
          } else {
            result[13] += -0.14093685;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)37333)) {
            result[13] += 0.23465978;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += 0.05237347;
            } else {
              result[13] += -0.11589585;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)41485)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13341)) {
              result[13] += 0.0874331;
            } else {
              result[13] += 0.36272326;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24306)) {
              result[13] += -0.11447243;
            } else {
              result[13] += 0.11537997;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[13] += 0.038759254;
          } else {
            result[13] += -0.0911483;
          }
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)12831)) {
            result[13] += 0.06129427;
          } else {
            result[13] += -0.13543732;
          }
        } else {
          result[13] += 0.09559212;
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)32530)) {
        result[13] += -0.14269108;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)38627)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)36048)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[13] += 0.057789564;
            } else {
              result[13] += -0.10267258;
            }
          } else {
            result[13] += 0.22467142;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59171)) {
            result[13] += -0.14122957;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.08475027;
            } else {
              result[13] += -0.10712458;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)32530)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49638)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += 0.15900764;
            } else {
              result[13] += 0.028678108;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
              result[13] += -0.08940897;
            } else {
              result[13] += 0.01737018;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
              result[13] += 0.007236765;
            } else {
              result[13] += -0.12546407;
            }
          } else {
            result[13] += 0.17150874;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)43031)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49509)) {
              result[13] += -0.056323145;
            } else {
              result[13] += -0.15442798;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44043)) {
              result[13] += 0.19347018;
            } else {
              result[13] += -0.016209472;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)46583)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[13] += 0.13663003;
            } else {
              result[13] += -0.035763174;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
              result[13] += -0.0858452;
            } else {
              result[13] += 0.057997927;
            }
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3649703168)) {
              result[14] += -0.00033154228;
            } else {
              result[14] += 0.035152107;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19734)) {
              result[14] += -0.046955016;
            } else {
              result[14] += 0.009398231;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[14] += -0.019341003;
            } else {
              result[14] += 0.2787914;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45055)) {
              result[14] += -0.06638608;
            } else {
              result[14] += 0.084196076;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61197)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)34542)) {
              result[14] += -0.022019567;
            } else {
              result[14] += -0.12553021;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[14] += 0.047991615;
            } else {
              result[14] += 0.10537549;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            result[14] += 0.25874364;
          } else {
            result[14] += 0.06315536;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)15370)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
              result[14] += 0.0884025;
            } else {
              result[14] += -0.08254197;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23807)) {
              result[14] += 0.13926803;
            } else {
              result[14] += 0.03652149;
            }
          }
        } else {
          result[14] += -0.094288066;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
          result[14] += -0.13561118;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            result[14] += -0.106007196;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44043)) {
              result[14] += 0.01147891;
            } else {
              result[14] += 0.17148082;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)55573)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)54286)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3338)) {
              result[14] += -0.09680972;
            } else {
              result[14] += -0.005403409;
            }
          } else {
            result[14] += 0.18926531;
          }
        } else {
          result[14] += -0.115378626;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)26083)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[14] += -0.09433096;
            } else {
              result[14] += 0.12955374;
            }
          } else {
            result[14] += -0.09648981;
          }
        } else {
          result[14] += -0.13313483;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)13080)) {
        result[14] += -0.10560835;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)39929)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)30457)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22786)) {
              result[14] += 0.14013164;
            } else {
              result[14] += -0.11481761;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)34792)) {
              result[14] += 0.27853525;
            } else {
              result[14] += 0.05023482;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)56583)) {
            result[14] += -0.11581262;
          } else {
            result[14] += 0.100639954;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          result[0] += -0.0004764363;
        } else {
          result[0] += -0.001072718;
        }
      } else {
        result[0] += 0.00047797128;
      }
    } else {
      result[0] += -0.12283828;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1496744960)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)604431232)) {
              result[0] += 0.0034826992;
            } else {
              result[0] += 0.10978655;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)841263296)) {
              result[0] += -0.11587502;
            } else {
              result[0] += 0.010968855;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
            result[0] += 0.07747127;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)32760)) {
              result[0] += -0.033157207;
            } else {
              result[0] += 0.014851789;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)13590)) {
            result[0] += -0.018499417;
          } else {
            result[0] += -0.11125917;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[0] += -0.09731145;
            } else {
              result[0] += 0.024476323;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)42774)) {
              result[0] += 0.0033616188;
            } else {
              result[0] += 0.066506214;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)742410688)) {
        result[0] += 0.09618658;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[0] += 0.038246077;
            } else {
              result[0] += 0.00058193336;
            }
          } else {
            result[0] += -0.08327551;
          }
        } else {
          result[0] += 0.061461423;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
              result[1] += -1.3179039e-05;
            } else {
              result[1] += 0.03230009;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[1] += -0.13622077;
            } else {
              result[1] += -0.0042013167;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)604431232)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)215123600)) {
              result[1] += 0.018346153;
            } else {
              result[1] += -0.11401696;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
              result[1] += 0.11349404;
            } else {
              result[1] += 0.0010414422;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)26334)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)22786)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2610506496)) {
              result[1] += 0.015231157;
            } else {
              result[1] += -0.113353804;
            }
          } else {
            result[1] += 0.18436761;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59926)) {
            result[1] += -0.13171388;
          } else {
            result[1] += 0.058551963;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2398340864)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33010)) {
              result[1] += -0.060886405;
            } else {
              result[1] += 0.14580101;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30979)) {
              result[1] += 0.027176503;
            } else {
              result[1] += -0.10722908;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
              result[1] += 0.16065176;
            } else {
              result[1] += -0.07972254;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48125)) {
              result[1] += 0.30868325;
            } else {
              result[1] += 0.08300081;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)22786)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3325106688)) {
              result[1] += -0.07745145;
            } else {
              result[1] += 0.063313685;
            }
          } else {
            result[1] += -0.111504845;
          }
        } else {
          result[1] += 0.08694639;
        }
      }
    }
  } else {
    result[1] += -0.088123076;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)64747)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)14608)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)14347)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)13838)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)11305)) {
              result[2] += 0.0017902326;
            } else {
              result[2] += -0.01905075;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)14099)) {
              result[2] += 0.038985163;
            } else {
              result[2] += 0.005839265;
            }
          }
        } else {
          result[2] += -0.082075946;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)16405)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)16133)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += 0.03553382;
            } else {
              result[2] += -0.02862068;
            }
          } else {
            result[2] += 0.13165243;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)18398)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.08659862;
            } else {
              result[2] += 0.043495283;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)24122)) {
              result[2] += 0.016273718;
            } else {
              result[2] += 0.00047837052;
            }
          }
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)65015)) {
          result[2] += -0.06973433;
        } else {
          result[2] += 0.013497318;
        }
      } else {
        result[2] += 0.013094635;
      }
    }
  } else {
    result[2] += 0.035483554;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.00093820057;
    } else {
      result[3] += 0.0136369085;
    }
  } else {
    result[3] += -0.02608726;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.033729114;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)8473)) {
          result[4] += 0.041808806;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            result[4] += -0.018734273;
          } else {
            result[4] += 0.025405005;
          }
        }
      } else {
        result[4] += -0.010640253;
      }
    }
  } else {
    result[4] += 0.05085921;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1730353280)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1710604032)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1670813696)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1632386176)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1574747392)) {
              result[5] += 0.0005569217;
            } else {
              result[5] += -0.10125488;
            }
          } else {
            result[5] += 0.10396693;
          }
        } else {
          result[5] += -0.10504923;
        }
      } else {
        result[5] += 0.20440902;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1807130496)) {
        result[5] += -0.103377245;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1846921344)) {
              result[5] += 0.05931767;
            } else {
              result[5] += -0.10816166;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[5] += -0.02995321;
            } else {
              result[5] += 0.10407033;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            result[5] += -0.10717476;
          } else {
            result[5] += 0.0028665725;
          }
        }
      }
    }
  } else {
    result[5] += 0.06578887;
  }
  result[6] += -0.00024459284;
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3392075008)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3370453760)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)63502)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59426)) {
              result[7] += 4.352982e-05;
            } else {
              result[7] += -0.0145627605;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3196177408)) {
              result[7] += 0.0020049384;
            } else {
              result[7] += 0.15444817;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)3338)) {
            result[7] += -0.19389613;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)55824)) {
              result[7] += 0.07974826;
            } else {
              result[7] += -0.038425874;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57868)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51893)) {
              result[7] += 0.003008844;
            } else {
              result[7] += -0.15946165;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12063)) {
              result[7] += -0.03377433;
            } else {
              result[7] += 0.04534975;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58035)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3456480256)) {
              result[7] += -0.5646237;
            } else {
              result[7] += -0.07036719;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45573)) {
              result[7] += -0.0023226405;
            } else {
              result[7] += -0.061144274;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)34792)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)32004)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)30457)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3671485440)) {
              result[7] += -0.04763888;
            } else {
              result[7] += 0.0040553655;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3971443456)) {
              result[7] += 0.17327453;
            } else {
              result[7] += -0.011624564;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4079296768)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[7] += -0.13377388;
            } else {
              result[7] += 0.08997819;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += 0.102860324;
            } else {
              result[7] += -0.18988656;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)38365)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37600)) {
              result[7] += 0.16452014;
            } else {
              result[7] += 0.021766722;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3865091840)) {
              result[7] += -0.11950668;
            } else {
              result[7] += 0.052494925;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)38627)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58035)) {
              result[7] += -0.38209027;
            } else {
              result[7] += 0.13194913;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44043)) {
              result[7] += 0.033551406;
            } else {
              result[7] += -0.0014807531;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      result[7] += -0.08151153;
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)16666)) {
        result[7] += 0.01856957;
      } else {
        result[7] += -0.027477741;
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)7194)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3927323392)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3500444928)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[8] += -0.002157468;
            } else {
              result[8] += 0.103226036;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[8] += 0.115476914;
            } else {
              result[8] += 0.011541003;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
              result[8] += -0.030874811;
            } else {
              result[8] += -0.13000132;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
              result[8] += 0.0026723596;
            } else {
              result[8] += 0.25273347;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49638)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3597)) {
              result[8] += 0.004533326;
            } else {
              result[8] += -0.1337997;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4079296768)) {
              result[8] += 0.11948415;
            } else {
              result[8] += -0.005193519;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3971443456)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3338)) {
              result[8] += 0.43844494;
            } else {
              result[8] += -0.07930677;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1559)) {
              result[8] += 0.115546405;
            } else {
              result[8] += 0.009828836;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1054373056)) {
              result[8] += -0.012768006;
            } else {
              result[8] += -0.051554505;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3865091840)) {
              result[8] += 0.099980466;
            } else {
              result[8] += -0.046969194;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
            result[8] += 0.046767287;
          } else {
            result[8] += 0.19226436;
          }
        }
      } else {
        result[8] += -0.2032214;
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4016157440)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[8] += 0.028885778;
            } else {
              result[8] += -0.011647234;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3671485440)) {
              result[8] += 0.2901701;
            } else {
              result[8] += 0.048411913;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[8] += -0.14805783;
            } else {
              result[8] += -0.034924373;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
              result[8] += 0.098288454;
            } else {
              result[8] += -0.10252347;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          result[8] += 0.19534947;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            result[8] += 0.06071579;
          } else {
            result[8] += 0.0027286857;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)10521)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3800402176)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3757889792)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8737)) {
              result[8] += 0.01935212;
            } else {
              result[8] += -0.014165521;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[8] += 0.17080498;
            } else {
              result[8] += 0.05997096;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8737)) {
              result[8] += -0.13731408;
            } else {
              result[8] += 0.0019000724;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[8] += -0.12358348;
            } else {
              result[8] += -0.020112228;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)11301)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4079296768)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3522095104)) {
              result[8] += 0.012794912;
            } else {
              result[8] += 0.11095138;
            }
          } else {
            result[8] += -0.15003118;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)19991)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19205)) {
              result[8] += 0.0004405089;
            } else {
              result[8] += 0.04122029;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
              result[8] += -0.023875333;
            } else {
              result[8] += 8.922931e-05;
            }
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1846921344)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1807130496)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1730353280)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1392936448)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1307060480)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51470)) {
              result[9] += -1.4119688e-05;
            } else {
              result[9] += -0.027682818;
            }
          } else {
            result[9] += 0.08097257;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[9] += 0.067856275;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44552)) {
              result[9] += -0.12249171;
            } else {
              result[9] += 0.07476951;
            }
          }
        }
      } else {
        result[9] += 0.07845418;
      }
    } else {
      result[9] += -0.046051607;
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1983854080)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[9] += -0.014224779;
      } else {
        result[9] += 0.10278358;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
        result[9] += -0.082787305;
      } else {
        result[9] += 0.02962756;
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)3303400704)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3196177408)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3109958656)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2979963136)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2875370496)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[10] += 4.8703947e-05;
            } else {
              result[10] += 0.029719085;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
              result[10] += -0.1376983;
            } else {
              result[10] += -0.02676422;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)18948)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3022144256)) {
              result[10] += 0.14783703;
            } else {
              result[10] += -0.1280787;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37600)) {
              result[10] += 0.20554228;
            } else {
              result[10] += -0.020504493;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3131613440)) {
            result[10] += -0.046082202;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23807)) {
              result[10] += 0.0038067999;
            } else {
              result[10] += -0.18731935;
            }
          }
        } else {
          result[10] += 0.095262714;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)43031)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3239138816)) {
          result[10] += 0.198581;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)18948)) {
            result[10] += -0.08200231;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)27865)) {
              result[10] += 0.18824975;
            } else {
              result[10] += -0.016797502;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3260428288)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61450)) {
            result[10] += -0.17001417;
          } else {
            result[10] += -0.04424642;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3282277376)) {
            result[10] += 0.027313797;
          } else {
            result[10] += 0.15298761;
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)4105)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)3338)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)1296)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
            result[10] += -0.027474383;
          } else {
            result[10] += 0.14786495;
          }
        } else {
          result[10] += -0.15453152;
        }
      } else {
        result[10] += 0.16464686;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)4620)) {
        result[10] += -0.14582941;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)30200)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)27865)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3522095104)) {
              result[10] += -0.084754616;
            } else {
              result[10] += 0.016341297;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4016157440)) {
              result[10] += 0.22741595;
            } else {
              result[10] += -0.009620071;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)43798)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3927323392)) {
              result[10] += -0.10979906;
            } else {
              result[10] += 0.029898357;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3905469696)) {
              result[10] += 0.02582529;
            } else {
              result[10] += -0.04448887;
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)7194)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
              result[11] += -0.003874249;
            } else {
              result[11] += 0.013068593;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8737)) {
              result[11] += -0.014276077;
            } else {
              result[11] += -9.658604e-05;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[11] += -0.1270849;
          } else {
            result[11] += 0.12686253;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.15751566;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += 0.114470676;
            } else {
              result[11] += -0.021747759;
            }
          } else {
            result[11] += -0.14609347;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)45573)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3994002688)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3865091840)) {
              result[11] += 0.0039764564;
            } else {
              result[11] += 0.18990378;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31234)) {
              result[11] += -0.120146014;
            } else {
              result[11] += 0.08817046;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3260428288)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3022144256)) {
              result[11] += -0.041476183;
            } else {
              result[11] += -0.31246573;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[11] += 0.1261265;
            } else {
              result[11] += -0.02260935;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)45831)) {
          result[11] += 0.256757;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
              result[11] += 0.020704608;
            } else {
              result[11] += 0.19518839;
            }
          } else {
            result[11] += -0.12899616;
          }
        }
      }
    }
  } else {
    result[11] += -0.08626166;
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)48125)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)47601)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)46333)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46078)) {
              result[12] += -0.0005922048;
            } else {
              result[12] += -0.037397668;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2299286272)) {
              result[12] += 0.034113303;
            } else {
              result[12] += -0.04015356;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[12] += -0.026166018;
            } else {
              result[12] += 0.14926769;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3565603328)) {
              result[12] += -0.10756772;
            } else {
              result[12] += 0.036432844;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2610506496)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[12] += 0.025452727;
            } else {
              result[12] += -0.08837925;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2853225984)) {
              result[12] += 0.15673524;
            } else {
              result[12] += 0.04878169;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            result[12] += -0.14473344;
          } else {
            result[12] += 0.11466832;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)48385)) {
          result[12] += -0.07503334;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)48646)) {
            result[12] += -0.029538773;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
              result[12] += -0.07566981;
            } else {
              result[12] += -0.04474461;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)59329708)) {
            result[12] += 0.26466668;
          } else {
            result[12] += 0.06228013;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[12] += -0.018082067;
            } else {
              result[12] += 0.036061917;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[12] += -0.11385113;
            } else {
              result[12] += 0.060733106;
            }
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)49419)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3456480256)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[12] += 0.053080816;
            } else {
              result[12] += -0.03866126;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
              result[12] += 0.1976025;
            } else {
              result[12] += 0.07055499;
            }
          }
        } else {
          result[12] += 0.14816655;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2109833344)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
            result[12] += -0.08386801;
          } else {
            result[12] += 0.11308811;
          }
        } else {
          result[12] += -0.1011842;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)49678)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[12] += -0.017969536;
            } else {
              result[12] += -0.11378529;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50449)) {
              result[12] += 0.023463469;
            } else {
              result[12] += 0.0008142213;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50954)) {
              result[12] += 0.013412066;
            } else {
              result[12] += -0.10679717;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
              result[12] += -0.04450575;
            } else {
              result[12] += 0.11364128;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)50449)) {
          result[12] += 0.23016007;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)57887)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53779)) {
              result[12] += 0.0026958638;
            } else {
              result[12] += -0.124336764;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[12] += 0.006925569;
            } else {
              result[12] += 0.07770404;
            }
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)3087300608)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2875370496)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2830898688)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2786661888)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2692863232)) {
              result[13] += -0.0003698058;
            } else {
              result[13] += 0.033055943;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
              result[13] += 0.03564465;
            } else {
              result[13] += -0.073391475;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)33269)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)16408)) {
              result[13] += -0.0022695572;
            } else {
              result[13] += 0.37292886;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[13] += -0.09855203;
            } else {
              result[13] += 0.08819398;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)15634)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)11301)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += 0.051471353;
            } else {
              result[13] += -0.13510402;
            }
          } else {
            result[13] += 0.16674013;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)34542)) {
            result[13] += -0.15216428;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45831)) {
              result[13] += 0.08186746;
            } else {
              result[13] += -0.10084056;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)23807)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19205)) {
              result[13] += 0.0071824114;
            } else {
              result[13] += -0.15632091;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24306)) {
              result[13] += 0.34469146;
            } else {
              result[13] += 0.046121195;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2979963136)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2938224384)) {
              result[13] += -0.037525322;
            } else {
              result[13] += -0.17196648;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3001000192)) {
              result[13] += 0.11650344;
            } else {
              result[13] += -0.0972085;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2958984960)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)20497)) {
            result[13] += 0.0090239905;
          } else {
            result[13] += 0.43482196;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47082)) {
              result[13] += 0.25915882;
            } else {
              result[13] += -0.08091806;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[13] += -0.06955773;
            } else {
              result[13] += 0.09146598;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3260428288)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)9742)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
              result[13] += -0.14660342;
            } else {
              result[13] += 0.040295694;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += 0.019663515;
            } else {
              result[13] += -0.06689343;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
            result[13] += 0.12898579;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3151783168)) {
              result[13] += -0.023245838;
            } else {
              result[13] += -0.11390249;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)43534)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3109958656)) {
            result[13] += 0.04550356;
          } else {
            result[13] += -0.07518822;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
            result[13] += 0.31874144;
          } else {
            result[13] += -0.047704954;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50146)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
              result[13] += -0.0021505293;
            } else {
              result[13] += 0.18862739;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3325106688)) {
              result[13] += 0.103619516;
            } else {
              result[13] += -0.085922755;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3565603328)) {
              result[13] += 0.07482605;
            } else {
              result[13] += 0.2183911;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[13] += -0.13927937;
            } else {
              result[13] += 0.0084826;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)25824)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3971443456)) {
              result[13] += -0.068606466;
            } else {
              result[13] += 0.05945727;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
              result[13] += -0.15361677;
            } else {
              result[13] += -0.044134602;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)26083)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49638)) {
              result[13] += 0.008944027;
            } else {
              result[13] += 0.24460264;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[13] += -0.011185674;
            } else {
              result[13] += 0.010302801;
            }
          }
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)8737)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)5640)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1296)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3001000192)) {
              result[14] += 0.00023822628;
            } else {
              result[14] += -0.08097078;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2835)) {
              result[14] += 0.032326248;
            } else {
              result[14] += 0.004011672;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)4358)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[14] += -0.08844912;
            } else {
              result[14] += 0.024148874;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[14] += 0.015079972;
            } else {
              result[14] += -0.1474227;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6165)) {
              result[14] += 0.050923247;
            } else {
              result[14] += 0.0059279767;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[14] += -0.16198343;
            } else {
              result[14] += -0.02027105;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2958984960)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1054373056)) {
              result[14] += 0.09872199;
            } else {
              result[14] += -0.04549743;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
              result[14] += 0.20128953;
            } else {
              result[14] += 0.066435896;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2109833344)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1432541440)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1091894528)) {
              result[14] += -0.06797547;
            } else {
              result[14] += 0.067023665;
            }
          } else {
            result[14] += -0.14056581;
          }
        } else {
          result[14] += 0.10717502;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2275607552)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)5394)) {
            result[14] += 0.3393235;
          } else {
            result[14] += 0.028860984;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
              result[14] += -0.006794955;
            } else {
              result[14] += 0.26735;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
              result[14] += -0.022666138;
            } else {
              result[14] += -0.11243696;
            }
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)8983)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[14] += -0.06147076;
        } else {
          result[14] += -0.14439608;
        }
      } else {
        result[14] += 0.11936969;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[14] += -0.0015733478;
            } else {
              result[14] += 0.025602343;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[14] += -0.12741894;
            } else {
              result[14] += -0.00061100075;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)11043)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
              result[14] += -0.060910746;
            } else {
              result[14] += 0.03403907;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3671485440)) {
              result[14] += 0.00945043;
            } else {
              result[14] += -0.016522422;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)29932)) {
          result[14] += -0.12665778;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)34792)) {
            result[14] += 0.13260816;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
              result[14] += -0.0738021;
            } else {
              result[14] += 0.009549331;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[0] += -0.00040563385;
            } else {
              result[0] += -0.00091149926;
            }
          } else {
            result[0] += 0.0004081819;
          }
        } else {
          result[0] += -0.11999912;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1072968960)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
              result[0] += 0.0030487368;
            } else {
              result[0] += -0.10930318;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[0] += 0.0048465324;
            } else {
              result[0] += 0.083537996;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[0] += -0.008667639;
            } else {
              result[0] += -0.1085308;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[0] += 0.067496374;
            } else {
              result[0] += -0.008713526;
            }
          }
        }
      }
    } else {
      result[0] += -0.08855999;
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)19991)) {
      result[0] += 0.09640687;
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)30200)) {
        result[0] += -0.059390318;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
            result[0] += 0.09122419;
          } else {
            result[0] += 0.0004603304;
          }
        } else {
          result[0] += -0.041318435;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.00013209114;
            } else {
              result[1] += 0.0058343625;
            }
          } else {
            result[1] += -0.07295227;
          }
        } else {
          result[1] += -0.09557089;
        }
      } else {
        result[1] += -0.09733022;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[1] += -0.13473058;
          } else {
            result[1] += 0.008098946;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
              result[1] += -0.10425328;
            } else {
              result[1] += 0.0052428767;
            }
          } else {
            result[1] += 0.10438094;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3282277376)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
              result[1] += -0.032966703;
            } else {
              result[1] += 0.0466355;
            }
          } else {
            result[1] += -0.09233574;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
            result[1] += -0.023330439;
          } else {
            result[1] += 0.086183794;
          }
        }
      }
    }
  } else {
    result[1] += 0.07665934;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)65281)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)64484)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)4155)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[2] += 0.00079591403;
            } else {
              result[2] += -0.0005481955;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)3906)) {
              result[2] += -0.00051323447;
            } else {
              result[2] += -0.12861183;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)5162)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += 0.0069170264;
            } else {
              result[2] += 0.09301928;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)6201)) {
              result[2] += -0.029582033;
            } else {
              result[2] += 0.001128065;
            }
          }
        }
      } else {
        result[2] += 0.03577092;
      }
    } else {
      result[2] += -0.027056519;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
            result[2] += 0.03561617;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
              result[2] += -0.037836753;
            } else {
              result[2] += 0.031049566;
            }
          }
        } else {
          result[2] += -0.025501713;
        }
      } else {
        result[2] += 0.039956056;
      }
    } else {
      result[2] += -0.0039029263;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.022114363;
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1168160128)) {
      result[3] += 0.018776737;
    } else {
      result[3] += 0.0028391138;
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)46494)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)21042)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
            result[4] += -0.0058974363;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
              result[4] += 0.0104490835;
            } else {
              result[4] += 0.044003956;
            }
          }
        } else {
          result[4] += -0.024666436;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          result[4] += 0.045911275;
        } else {
          result[4] += 0.007482629;
        }
      }
    } else {
      result[4] += -0.023806917;
    }
  } else {
    result[4] += 0.034902267;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)44297)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)41235)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38627)) {
              result[5] += 3.795162e-05;
            } else {
              result[5] += 0.070673876;
            }
          } else {
            result[5] += -0.097770914;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1574747392)) {
            result[5] += -0.11286247;
          } else {
            result[5] += -0.01683129;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)44802)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)978331136)) {
            result[5] += -0.09455308;
          } else {
            result[5] += 0.27189833;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1296776704)) {
              result[5] += 0.009398337;
            } else {
              result[5] += 0.10479023;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[5] += -0.103989325;
            } else {
              result[5] += -0.01567087;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)20497)) {
          result[5] += 0.05888505;
        } else {
          result[5] += -0.083844736;
        }
      } else {
        result[5] += -0.11897956;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)52332)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)29932)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1195706368)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
            result[5] += 0.16760361;
          } else {
            result[5] += -0.082437776;
          }
        } else {
          result[5] += 0.225802;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
          result[5] += -0.0996249;
        } else {
          result[5] += 0.051755384;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)21524)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57868)) {
          result[5] += -0.11381296;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1149980416)) {
            result[5] += -0.054311793;
          } else {
            result[5] += 0.04275301;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)45055)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)41745)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
              result[5] += 0.12492471;
            } else {
              result[5] += -0.07903609;
            }
          } else {
            result[5] += 0.16800132;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)52745)) {
            result[5] += -0.09398728;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1325477248)) {
              result[5] += -0.06592461;
            } else {
              result[5] += 0.08619423;
            }
          }
        }
      }
    }
  }
  result[6] += -0.00020982578;
}


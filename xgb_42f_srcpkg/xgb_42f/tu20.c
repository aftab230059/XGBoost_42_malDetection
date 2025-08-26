
#include "header.h"

void predict_unit20(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)51238)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)49475)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)49210)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)44471)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)32902)) {
              result[10] += -9.988327e-05;
            } else {
              result[10] += -0.03055664;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)183891488)) {
              result[10] += -0.22700165;
            } else {
              result[10] += 0.037205372;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1078326144)) {
            result[10] += 0.15137123;
          } else {
            result[10] += -0.559402;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)265767216)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)50981)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)50734)) {
              result[10] += -0.19609459;
            } else {
              result[10] += -0.41744557;
            }
          } else {
            result[10] += 0.12916933;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2578545664)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[10] += -0.066214345;
            } else {
              result[10] += 0.18557157;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)50198)) {
              result[10] += 0.1633187;
            } else {
              result[10] += -0.23600689;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)52537)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[10] += -0.101744875;
            } else {
              result[10] += 0.13776857;
            }
          } else {
            result[10] += -0.5536996;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)51507)) {
            result[10] += -0.371719;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2326164224)) {
              result[10] += -0.017198607;
            } else {
              result[10] += 0.16558523;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)365605792)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[10] += -0.11263435;
            } else {
              result[10] += -0.38603136;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
              result[10] += 0.17608474;
            } else {
              result[10] += 0.029618798;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)432921696)) {
            result[10] += -0.4039728;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2407267328)) {
              result[10] += 0.017886968;
            } else {
              result[10] += -0.029914334;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
      result[10] += -0.1463368;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)264)) {
        result[10] += 0.14339186;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
            result[10] += -0.011413368;
          } else {
            result[10] += -0.43032652;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)2315)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2078)) {
              result[10] += 0.050350096;
            } else {
              result[10] += 0.17060159;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
              result[10] += -0.08283899;
            } else {
              result[10] += 0.006129209;
            }
          }
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)1)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)41648)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)40113)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3088273664)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2928404992)) {
              result[11] += -0.0027440437;
            } else {
              result[11] += -0.062948555;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[11] += -0.14674576;
            } else {
              result[11] += 0.0180687;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3832654848)) {
              result[11] += -0.02786626;
            } else {
              result[11] += 0.18186522;
            }
          } else {
            result[11] += -0.30719462;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)44471)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)44832)) {
              result[11] += 0.035449523;
            } else {
              result[11] += 0.18858244;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)43427)) {
              result[11] += -0.14728425;
            } else {
              result[11] += 0.23143688;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)38644)) {
              result[11] += -0.0053633167;
            } else {
              result[11] += 0.01836559;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3541748992)) {
              result[11] += -0.06776701;
            } else {
              result[11] += -0.004013842;
            }
          }
        }
      }
    } else {
      result[11] += -0.13030738;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)41328)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)40794)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)40340)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)39950)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)37736)) {
              result[11] += 0.0015448346;
            } else {
              result[11] += 0.016343608;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)133638360)) {
              result[11] += 0.17886531;
            } else {
              result[11] += -0.054893736;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)26939)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)26696)) {
              result[11] += 0.0050154473;
            } else {
              result[11] += -0.33319756;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63476)) {
              result[11] += 0.091163665;
            } else {
              result[11] += -0.11189914;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2515185920)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2487559424)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[11] += -0.14034605;
            } else {
              result[11] += 0.16105458;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)51507)) {
              result[11] += -0.10846121;
            } else {
              result[11] += -0.32990503;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)41134)) {
              result[11] += 1.096243;
            } else {
              result[11] += -0.107516505;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)442)) {
              result[11] += 0.16706215;
            } else {
              result[11] += 0.23145668;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)348961088)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)201685632)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)44832)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)21099)) {
              result[11] += -0.1404615;
            } else {
              result[11] += 0.024441827;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
              result[11] += 0.18652123;
            } else {
              result[11] += -0.036909796;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)47199)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)44448)) {
              result[11] += 0.14061989;
            } else {
              result[11] += -0.025020944;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)280175584)) {
              result[11] += 0.2292185;
            } else {
              result[11] += 0.04280963;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)713554112)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)43994)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)40854)) {
              result[11] += -0.05340027;
            } else {
              result[11] += -0.16881019;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)442)) {
              result[11] += -0.061662674;
            } else {
              result[11] += 0.13369581;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)868466368)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)43594)) {
              result[11] += 0.25036916;
            } else {
              result[11] += 0.00823843;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
              result[11] += -0.058769736;
            } else {
              result[11] += -0.0022812712;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        result[12] += -0.01149394;
      } else {
        result[12] += -0.047872636;
      }
    } else {
      result[12] += -0.13553536;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)9301)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)8251)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2538908928)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2326164224)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
              result[12] += 0.0071524526;
            } else {
              result[12] += -0.059670705;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)5141)) {
              result[12] += 0.19305365;
            } else {
              result[12] += -0.04649201;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56324)) {
              result[12] += -0.052690875;
            } else {
              result[12] += 0.015862644;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
              result[12] += 0.029905053;
            } else {
              result[12] += -0.031488284;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48516)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
              result[12] += 0.022742134;
            } else {
              result[12] += 0.4270735;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2407267328)) {
              result[12] += -0.13738467;
            } else {
              result[12] += 0.008927001;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4103136768)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1339201280)) {
              result[12] += -0.020545855;
            } else {
              result[12] += 0.15335602;
            }
          } else {
            result[12] += -0.15335771;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)12973)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59252)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2621401856)) {
              result[12] += -0.008752912;
            } else {
              result[12] += -0.04552012;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3427947776)) {
              result[12] += -0.18286279;
            } else {
              result[12] += 0.054178268;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1614904576)) {
              result[12] += 0.36187032;
            } else {
              result[12] += 0.09337294;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60440)) {
              result[12] += 0.057662837;
            } else {
              result[12] += -0.03566118;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)13219)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)34500)) {
              result[12] += 0.029375328;
            } else {
              result[12] += -0.15852703;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
              result[12] += 0.0463116;
            } else {
              result[12] += 0.39460954;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2905214976)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60694)) {
              result[12] += -0.0028111036;
            } else {
              result[12] += 0.03569518;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)13475)) {
              result[12] += -0.15980509;
            } else {
              result[12] += 0.0065453635;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)62713)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)55339)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53033)) {
              result[13] += -0.0011949341;
            } else {
              result[13] += -0.08603281;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56386)) {
              result[13] += 0.10455963;
            } else {
              result[13] += 0.0027984749;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3687526656)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1730588800)) {
              result[13] += -0.023015093;
            } else {
              result[13] += -0.17124891;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3999892736)) {
              result[13] += 0.23094699;
            } else {
              result[13] += 0.034498185;
            }
          }
        }
      } else {
        result[13] += 0.28549194;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4217347584)) {
              result[13] += 0.0068217693;
            } else {
              result[13] += -0.06272234;
            }
          } else {
            result[13] += -0.14742807;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
              result[13] += 0.05975126;
            } else {
              result[13] += 0.2398925;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)432921696)) {
              result[13] += -0.12274239;
            } else {
              result[13] += 0.01975486;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)150)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2905214976)) {
              result[13] += -0.013704941;
            } else {
              result[13] += -0.091832794;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)261)) {
              result[13] += 0.10144711;
            } else {
              result[13] += 0.004157829;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
            result[13] += 0.14980064;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
              result[13] += -0.09294346;
            } else {
              result[13] += 0.10666191;
            }
          }
        }
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
      result[13] += -0.12886395;
    } else {
      result[13] += 0.0052484698;
    }
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3655086336)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3340514816)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3172840704)) {
              result[14] += -0.00040934785;
            } else {
              result[14] += 0.01914815;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46186)) {
              result[14] += 0.0023882187;
            } else {
              result[14] += -0.061817285;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3742177280)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[14] += 0.09587426;
            } else {
              result[14] += -0.0641092;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3832654848)) {
              result[14] += -0.051131837;
            } else {
              result[14] += 0.006735815;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
          result[14] += -0.1494138;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3467)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[14] += 0.12456263;
            } else {
              result[14] += -0.009755892;
            }
          } else {
            result[14] += -0.09580358;
          }
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
        result[14] += 0.1475056;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)21604)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)11088)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)9301)) {
              result[14] += -0.04770352;
            } else {
              result[14] += 0.2922058;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2567035392)) {
              result[14] += -0.16209021;
            } else {
              result[14] += -0.002332759;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)52771)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)52273)) {
              result[14] += 0.040481225;
            } else {
              result[14] += 0.6528708;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)57897)) {
              result[14] += -0.13890494;
            } else {
              result[14] += 0.023988655;
            }
          }
        }
      }
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)440)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
        result[14] += -0.1450088;
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)862)) {
          result[14] += 0.07818796;
        } else {
          result[14] += -0.09224078;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
          result[14] += -0.091278255;
        } else {
          result[14] += 0.20900449;
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)544)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)512)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)277)) {
              result[14] += -0.08606706;
            } else {
              result[14] += 0.065733925;
            }
          } else {
            result[14] += 0.14628433;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
            result[14] += -0.14693686;
          } else {
            result[14] += 0.025255835;
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)10064)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)9301)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)749577344)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)7995)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)7708)) {
              result[0] += -0.000408384;
            } else {
              result[0] += 0.26817304;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8527)) {
              result[0] += -0.080350846;
            } else {
              result[0] += 0.0092029935;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1206383360)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2845)) {
              result[0] += -0.03590364;
            } else {
              result[0] += -0.14013635;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[0] += -0.106032096;
            } else {
              result[0] += 0.06558873;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)9555)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            result[0] += -0.19710673;
          } else {
            result[0] += 0.07812955;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)9820)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[0] += -0.011304034;
            } else {
              result[0] += 0.040943738;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1402044288)) {
              result[0] += -0.18854721;
            } else {
              result[0] += -0.10308916;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
        result[0] += -0.1463806;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)14981)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)14735)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)14490)) {
              result[0] += 0.04392063;
            } else {
              result[0] += -0.088693164;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[0] += 0.035298035;
            } else {
              result[0] += 0.37016818;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)15206)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[0] += -0.19638824;
            } else {
              result[0] += 0.13655783;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
              result[0] += -0.036375314;
            } else {
              result[0] += 0.005848037;
            }
          }
        }
      }
    }
  } else {
    result[0] += -0.12707832;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63732)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60933)) {
              result[1] += 0.0001755762;
            } else {
              result[1] += 0.021763448;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
              result[1] += -0.052964006;
            } else {
              result[1] += -0.011091549;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)441)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[1] += -0.09985827;
            } else {
              result[1] += 0.03789348;
            }
          } else {
            result[1] += 0.21418472;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)24)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[1] += -0.019138902;
            } else {
              result[1] += -0.098389156;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)68)) {
              result[1] += 0.1588321;
            } else {
              result[1] += -0.0035920206;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
              result[1] += 0.1314592;
            } else {
              result[1] += -0.011479668;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
              result[1] += -0.13807073;
            } else {
              result[1] += 0.03286132;
            }
          }
        }
      }
    } else {
      result[1] += -0.148371;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[1] += -0.08120027;
        } else {
          result[1] += 0.1540979;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)16531)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)11906)) {
            result[1] += -0.0875548;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)12187)) {
              result[1] += 0.18964987;
            } else {
              result[1] += 0.028173301;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63476)) {
            result[1] += -0.1271002;
          } else {
            result[1] += 0.05479713;
          }
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)133638360)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)35344664)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
              result[1] += -0.05715719;
            } else {
              result[1] += 0.071750544;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
              result[1] += -0.088920206;
            } else {
              result[1] += 0.003387498;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)232647088)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)37732)) {
              result[1] += 0.08773541;
            } else {
              result[1] += -0.006084707;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)348961088)) {
              result[1] += -0.042437226;
            } else {
              result[1] += 0.004262536;
            }
          }
        }
      } else {
        result[1] += -0.13904901;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)19951)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)19293)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)18755)) {
              result[2] += 0.0002836959;
            } else {
              result[2] += 0.13184714;
            }
          } else {
            result[2] += -0.103719845;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
            result[2] += -0.14127181;
          } else {
            result[2] += -0.0008744442;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)20521)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            result[2] += 0.19426303;
          } else {
            result[2] += -0.095754825;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)21308)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)20857)) {
              result[2] += -0.034369916;
            } else {
              result[2] += -0.12877585;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)24830)) {
              result[2] += 0.042597413;
            } else {
              result[2] += -0.0021877603;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2568)) {
          result[2] += 0.037214268;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)3453)) {
            result[2] += -0.018995784;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)3753)) {
              result[2] += 0.0476018;
            } else {
              result[2] += 0.008004992;
            }
          }
        }
      } else {
        result[2] += 0.084889986;
      }
    }
  } else {
    result[2] += -0.11072693;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.11703437;
    } else {
      result[3] += -0.0022914673;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
      result[3] += 0.08488178;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
        result[3] += -0.081530385;
      } else {
        result[3] += 0.053712543;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1675)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1368)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1060)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[4] += -0.0024000476;
            } else {
              result[4] += -0.0098854825;
            }
          } else {
            result[4] += 0.019720657;
          }
        } else {
          result[4] += -0.029553693;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)65213)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)64201)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)49564)) {
              result[4] += 0.009331377;
            } else {
              result[4] += 0.002173668;
            }
          } else {
            result[4] += 0.040618144;
          }
        } else {
          result[4] += -0.020862937;
        }
      }
    } else {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)62964)) {
        result[4] += 0.03388266;
      } else {
        result[4] += 0.10122635;
      }
    }
  } else {
    result[4] += -0.11056775;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
              result[5] += 2.9039077e-06;
            } else {
              result[5] += -0.14051114;
            }
          } else {
            result[5] += -0.14090057;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)749577344)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)38752)) {
              result[5] += 0.14124247;
            } else {
              result[5] += 0.05705094;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
              result[5] += -0.106377065;
            } else {
              result[5] += 0.09965169;
            }
          }
        }
      } else {
        result[5] += -0.1383419;
      }
    } else {
      result[5] += -0.1394398;
    }
  } else {
    result[5] += -0.14072017;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[23].missing != -1) && (data[23].fvalue < (float)12)) {
      result[6] += 0.00019251561;
    } else {
      result[6] += 0.012638182;
    }
  } else {
    result[6] += -0.1105539;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)59506)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)50828)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)6)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)2315)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1822)) {
              result[7] += 0.0007503152;
            } else {
              result[7] += 0.13614918;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
              result[7] += -0.08174449;
            } else {
              result[7] += -0.0060434095;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
            result[7] += 0.14304014;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
              result[7] += -0.08786536;
            } else {
              result[7] += 0.059632707;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)52948)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)183891488)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)57669)) {
              result[7] += 0.12956092;
            } else {
              result[7] += -0.05921137;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)608804544)) {
              result[7] += -0.033505302;
            } else {
              result[7] += 0.021809286;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)54038)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)215557952)) {
              result[7] += -0.030592151;
            } else {
              result[7] += -0.00088687387;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
              result[7] += -0.06606283;
            } else {
              result[7] += 0.0204609;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60024)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2677389824)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)732651392)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)662398464)) {
              result[7] += -0.0137466155;
            } else {
              result[7] += 0.13660374;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)9820)) {
              result[7] += -0.007086281;
            } else {
              result[7] += -0.056867875;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)6428)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2315)) {
              result[7] += -0.037567466;
            } else {
              result[7] += 0.18376398;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3427947776)) {
              result[7] += 0.017987438;
            } else {
              result[7] += -0.03416454;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3655086336)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60694)) {
              result[7] += 0.120767415;
            } else {
              result[7] += -0.03297637;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
              result[7] += -0.086246476;
            } else {
              result[7] += -0.007717625;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3742177280)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
              result[7] += -0.04766384;
            } else {
              result[7] += 0.7870347;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
              result[7] += 0.02538045;
            } else {
              result[7] += -0.07656793;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)984983168)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        result[7] += -0.046359226;
      } else {
        result[7] += 0.15240668;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2456591104)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2272993536)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1763358336)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1730588800)) {
              result[7] += 0.030869516;
            } else {
              result[7] += -0.27747935;
            }
          } else {
            result[7] += 0.16092682;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)26696)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4626)) {
              result[7] += -0.16071865;
            } else {
              result[7] += 0.13195649;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)26939)) {
              result[7] += -0.43174952;
            } else {
              result[7] += -0.15391481;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3832654848)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)40854)) {
            result[7] += 0.15865801;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)41134)) {
              result[7] += -0.42198846;
            } else {
              result[7] += 0.1540014;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3859072512)) {
            result[7] += -0.19869958;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)43719)) {
              result[7] += 0.16765867;
            } else {
              result[7] += -0.07627784;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[8] += 0.00016479778;
            } else {
              result[8] += -0.14092249;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
              result[8] += -0.14676274;
            } else {
              result[8] += 0.021033557;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[8] += 0.02271432;
            } else {
              result[8] += -0.13862246;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
              result[8] += 0.14703394;
            } else {
              result[8] += -0.05166418;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
          result[8] += -0.14324863;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
              result[8] += 0.01533024;
            } else {
              result[8] += 0.12027294;
            }
          } else {
            result[8] += -0.09959549;
          }
        }
      }
    } else {
      result[8] += -0.13590589;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)4626)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)4385)) {
        result[8] += -0.07401375;
      } else {
        result[8] += 0.18813315;
      }
    } else {
      result[8] += -0.14229402;
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)57897)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)57669)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55339)) {
              result[9] += 0.00033830525;
            } else {
              result[9] += -0.14614995;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[9] += -0.09284055;
            } else {
              result[9] += 0.15637255;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)7751)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)695816320)) {
              result[9] += -0.18687287;
            } else {
              result[9] += 0.105272226;
            }
          } else {
            result[9] += 0.123728275;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)60425)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[9] += -0.101890184;
            } else {
              result[9] += 0.16046892;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
              result[9] += 0.08488833;
            } else {
              result[9] += -0.08433531;
            }
          }
        } else {
          result[9] += 0.14809102;
        }
      }
    } else {
      result[9] += -0.13522352;
    }
  } else {
    result[9] += -0.13578375;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)7995)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)7708)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3626729728)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3399763968)) {
              result[10] += -0.0002261363;
            } else {
              result[10] += -0.15679827;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6929)) {
              result[10] += 0.122622974;
            } else {
              result[10] += -0.35238093;
            }
          }
        } else {
          result[10] += -0.1808106;
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          result[10] += -0.26048487;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3340514816)) {
            result[10] += 0.16507047;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4051475456)) {
              result[10] += -0.26868632;
            } else {
              result[10] += 0.08007988;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
        result[10] += -0.14659451;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)10064)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)9301)) {
              result[10] += 0.04084958;
            } else {
              result[10] += 0.13515897;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
              result[10] += -0.16666155;
            } else {
              result[10] += 0.030843245;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)14981)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)14735)) {
              result[10] += -0.008457549;
            } else {
              result[10] += -0.37767062;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15468)) {
              result[10] += 0.14723383;
            } else {
              result[10] += 0.001806908;
            }
          }
        }
      }
    }
  } else {
    result[10] += -0.12228813;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)1)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4243005184)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)1307)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
              result[11] += -0.0052572466;
            } else {
              result[11] += -0.047679324;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4191465472)) {
              result[11] += -0.00087693275;
            } else {
              result[11] += -0.044145994;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)43122)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)39062)) {
              result[11] += 0.0012103759;
            } else {
              result[11] += 0.2089868;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)43594)) {
              result[11] += -0.33748046;
            } else {
              result[11] += 0.020339016;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)43594)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)42630)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)41328)) {
              result[11] += 0.003056395;
            } else {
              result[11] += -0.016685477;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
              result[11] += 0.04558724;
            } else {
              result[11] += -0.045520168;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[11] += -0.07736673;
            } else {
              result[11] += 0.08820886;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)43994)) {
              result[11] += -0.041737035;
            } else {
              result[11] += 0.012015269;
            }
          }
        }
      }
    } else {
      result[11] += -0.13113049;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)7187)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)6166)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)2315)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
              result[11] += 0.2400193;
            } else {
              result[11] += -0.023040375;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
              result[11] += 0.24546544;
            } else {
              result[11] += 0.06757384;
            }
          }
        } else {
          result[11] += -0.14099477;
        }
      } else {
        result[11] += 0.2804077;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)59439)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)319)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)32405)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)23106)) {
              result[11] += -0.03957492;
            } else {
              result[11] += -0.19891377;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)36194)) {
              result[11] += 0.1829786;
            } else {
              result[11] += -0.06746438;
            }
          }
        } else {
          result[11] += 0.13406144;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)61435)) {
          result[11] += 0.19057652;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)62460)) {
            result[11] += -0.13260503;
          } else {
            result[11] += 0.12981302;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)121)) {
              result[12] += 0.0017243816;
            } else {
              result[12] += -0.16735023;
            }
          } else {
            result[12] += -0.14111379;
          }
        } else {
          result[12] += -0.14446579;
        }
      } else {
        result[12] += 0.1478714;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)5141)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)4385)) {
          result[12] += -0.12441206;
        } else {
          result[12] += 0.13072425;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
          result[12] += -0.14766368;
        } else {
          result[12] += 0.061491534;
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
      result[12] += -0.14940529;
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)34500)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
              result[12] += -0.017686091;
            } else {
              result[12] += 0.14264718;
            }
          } else {
            result[12] += -0.10660323;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[12] += -0.15258709;
            } else {
              result[12] += -0.017484086;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
              result[12] += -0.06815544;
            } else {
              result[12] += 0.06219061;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)1822)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)35344664)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)264)) {
              result[12] += 0.21444695;
            } else {
              result[12] += 0.045004144;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)331876768)) {
              result[12] += -0.10775079;
            } else {
              result[12] += -0.020832045;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59886)) {
              result[12] += 0.010832438;
            } else {
              result[12] += 0.17142396;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3427947776)) {
              result[12] += -0.0039484045;
            } else {
              result[12] += 0.008845994;
            }
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)940)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)441)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)378)) {
              result[13] += -0.00050637947;
            } else {
              result[13] += 0.024385603;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
              result[13] += -0.14205703;
            } else {
              result[13] += 0.12754901;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)55088)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53768)) {
              result[13] += 0.018441414;
            } else {
              result[13] += 0.23940259;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3369854464)) {
              result[13] += -0.041677635;
            } else {
              result[13] += 0.07185903;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)16270)) {
              result[13] += 0.09343899;
            } else {
              result[13] += -0.0861942;
            }
          } else {
            result[13] += -0.13456674;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
              result[13] += 0.1449489;
            } else {
              result[13] += -0.072078876;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2248229888)) {
              result[13] += -0.0619143;
            } else {
              result[13] += 0.032311853;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)298)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)29570)) {
            result[13] += 0.06421725;
          } else {
            result[13] += -0.0037023604;
          }
        } else {
          result[13] += 0.12237066;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)419)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)58919)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
              result[13] += 0.13371877;
            } else {
              result[13] += -0.037673246;
            }
          } else {
            result[13] += -0.09495639;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
              result[13] += 0.10899695;
            } else {
              result[13] += -0.07358285;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46699)) {
              result[13] += -0.11712623;
            } else {
              result[13] += 0.07975653;
            }
          }
        }
      }
    }
  } else {
    result[13] += -0.12497947;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)528995584)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)348961088)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)331876768)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)266309232)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)266134912)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)150343280)) {
              result[14] += -0.0007427457;
            } else {
              result[14] += 0.032890163;
            }
          } else {
            result[14] += 0.46050766;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1557)) {
              result[14] += 0.2090718;
            } else {
              result[14] += -0.043735463;
            }
          } else {
            result[14] += -0.32100582;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)61678)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)26416)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
              result[14] += 0.070316344;
            } else {
              result[14] += -0.17396955;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)34135)) {
              result[14] += 0.268523;
            } else {
              result[14] += 0.07750415;
            }
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            result[14] += -0.16021012;
          } else {
            result[14] += -0.30321217;
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60210)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60024)) {
              result[14] += -0.045697965;
            } else {
              result[14] += -0.21815607;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
              result[14] += -0.09075123;
            } else {
              result[14] += 0.15400666;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)11906)) {
            result[14] += -0.24236341;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)25904)) {
              result[14] += 0.21702069;
            } else {
              result[14] += 0.13003835;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)24342)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)23617)) {
            result[14] += -0.27590403;
          } else {
            result[14] += 0.19358587;
          }
        } else {
          result[14] += -0.33610928;
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)592172608)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)11906)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)576729216)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)11356)) {
              result[14] += 0.07280047;
            } else {
              result[14] += 0.45194477;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6428)) {
              result[14] += -0.112364344;
            } else {
              result[14] += 0.41037533;
            }
          }
        } else {
          result[14] += -0.2238143;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)41390)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)27752)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)24600)) {
              result[14] += -0.0775533;
            } else {
              result[14] += 0.31899628;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)38506)) {
              result[14] += -0.21350963;
            } else {
              result[14] += -0.057339422;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)42674)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[14] += 0.66708004;
            } else {
              result[14] += 0.18234424;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63241)) {
              result[14] += 0.03216713;
            } else {
              result[14] += 0.22993065;
            }
          }
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)54038)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)53520)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)52537)) {
              result[14] += 0.0027007759;
            } else {
              result[14] += -0.05786525;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)950050240)) {
              result[14] += 0.32591057;
            } else {
              result[14] += 0.08631146;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)901448896)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)57416)) {
              result[14] += -0.067464866;
            } else {
              result[14] += 0.088391304;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3626729728)) {
              result[14] += -0.022505943;
            } else {
              result[14] += 0.01413692;
            }
          }
        }
      } else {
        result[14] += -0.14291476;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)65016)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)62186)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)54551)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)50734)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)50461)) {
              result[0] += 0.00046910706;
            } else {
              result[0] += 0.21681394;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)52273)) {
              result[0] += -0.07190029;
            } else {
              result[0] += 0.0009971252;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)56138)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55339)) {
              result[0] += 0.028073782;
            } else {
              result[0] += 0.1892489;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56386)) {
              result[0] += -0.19013177;
            } else {
              result[0] += 0.008611688;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)62713)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            result[0] += -0.09614166;
          } else {
            result[0] += 0.06927713;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)62970)) {
            result[0] += 0.17570305;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[0] += -0.012845923;
            } else {
              result[0] += -0.12544449;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
        result[0] += 0.06277293;
      } else {
        result[0] += 0.03055315;
      }
    }
  } else {
    result[0] += -0.124964945;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)3742177280)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3714831616)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
              result[1] += 0.0006299575;
            } else {
              result[1] += -0.010219345;
            }
          } else {
            result[1] += -0.14788607;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)40340)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3655086336)) {
              result[1] += 0.012814838;
            } else {
              result[1] += 0.121856935;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)41328)) {
              result[1] += -0.047465302;
            } else {
              result[1] += 0.0021109001;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)37360)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
              result[1] += -0.024281045;
            } else {
              result[1] += 0.21152227;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)43594)) {
              result[1] += -0.22420289;
            } else {
              result[1] += -0.072894365;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)42926)) {
            result[1] += -0.10404287;
          } else {
            result[1] += 0.5322181;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)350)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)39508)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)39062)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46443)) {
              result[1] += 0.1629961;
            } else {
              result[1] += -0.10246318;
            }
          } else {
            result[1] += 0.93955;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60440)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[1] += 0.08569718;
            } else {
              result[1] += -0.15300576;
            }
          } else {
            result[1] += 0.32199967;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)26939)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)408)) {
              result[1] += -0.19163951;
            } else {
              result[1] += 0.072019815;
            }
          } else {
            result[1] += -0.283923;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)38174)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
              result[1] += -0.027079584;
            } else {
              result[1] += 0.25282466;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)52006)) {
              result[1] += 0.024679258;
            } else {
              result[1] += -0.25155157;
            }
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
      result[1] += -0.158265;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1557)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3999892736)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
              result[1] += -0.082996815;
            } else {
              result[1] += 1.1597375;
            }
          } else {
            result[1] += -0.087315984;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)332)) {
              result[1] += -0.122701325;
            } else {
              result[1] += 0.021221772;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
              result[1] += 0.22982036;
            } else {
              result[1] += -0.097278856;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)321)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4076412416)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)314)) {
              result[1] += -0.019738406;
            } else {
              result[1] += -0.1566164;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
              result[1] += 0.012441634;
            } else {
              result[1] += -0.116734944;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4051475456)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)21346)) {
              result[1] += -0.022050098;
            } else {
              result[1] += 0.24940656;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4162893824)) {
              result[1] += -0.14915487;
            } else {
              result[1] += 0.056406237;
            }
          }
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)42608)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)37429)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)29481)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)23587)) {
              result[2] += 0.0048725232;
            } else {
              result[2] += -0.038463898;
            }
          } else {
            result[2] += 0.021261234;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)38883)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)38428)) {
              result[2] += -0.060333088;
            } else {
              result[2] += -0.12988915;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)39175)) {
              result[2] += 0.06312261;
            } else {
              result[2] += -0.03747169;
            }
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)51794)) {
          result[2] += 0.033601653;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)52886)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)52145)) {
              result[2] += -0.009028516;
            } else {
              result[2] += -0.07734645;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)63458)) {
              result[2] += 0.014331285;
            } else {
              result[2] += -0.018043527;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)44853)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)37177)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)36950)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)35051)) {
              result[2] += 0.0036111358;
            } else {
              result[2] += 0.36226094;
            }
          } else {
            result[2] += -0.08996771;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)38428)) {
            result[2] += 1.4021275;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)39175)) {
              result[2] += 0.07886327;
            } else {
              result[2] += 0.01885866;
            }
          }
        }
      } else {
        result[2] += -0.11244611;
      }
    }
  } else {
    result[2] += -0.10733905;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.113875166;
    } else {
      result[3] += -0.0020003798;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[3] += 0.024544943;
      } else {
        result[3] += 0.080122404;
      }
    } else {
      result[3] += -0.038125228;
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1675)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1368)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
            result[4] += -0.0023004832;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1060)) {
              result[4] += 0.0040591974;
            } else {
              result[4] += 0.017394964;
            }
          }
        } else {
          result[4] += -0.027416894;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)63618)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)63339)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)31100)) {
              result[4] += 0.0043994817;
            } else {
              result[4] += 0.009818045;
            }
          } else {
            result[4] += 0.066851705;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)64201)) {
            result[4] += -0.03967157;
          } else {
            result[4] += 0.019507479;
          }
        }
      }
    } else {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)62964)) {
        result[4] += 0.029883986;
      } else {
        result[4] += 0.09782977;
      }
    }
  } else {
    result[4] += -0.10717627;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)43994)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)37473)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)37225)) {
              result[5] += -0.00022560553;
            } else {
              result[5] += 0.16464029;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53520)) {
              result[5] += -0.15803173;
            } else {
              result[5] += 0.017211083;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)5909)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
              result[5] += -0.059323214;
            } else {
              result[5] += 0.13271825;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)23856)) {
              result[5] += -0.12995455;
            } else {
              result[5] += 0.017879572;
            }
          }
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          result[5] += -0.13806635;
        } else {
          result[5] += 0.14927329;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)51858)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)18352)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)331876768)) {
              result[5] += 0.035712834;
            } else {
              result[5] += -0.15741456;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
              result[5] += -0.14535807;
            } else {
              result[5] += 0.1596649;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1371489792)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
              result[5] += -0.23473525;
            } else {
              result[5] += -0.1634796;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)44471)) {
              result[5] += -0.1656214;
            } else {
              result[5] += 0.0809698;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)52771)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)45411)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)41909)) {
              result[5] += -0.009583747;
            } else {
              result[5] += 0.08311288;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[5] += -0.17159332;
            } else {
              result[5] += 0.081211634;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)53033)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
              result[5] += 0.19408765;
            } else {
              result[5] += -0.091057375;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1352913536)) {
              result[5] += 0.047081884;
            } else {
              result[5] += -0.16040474;
            }
          }
        }
      }
    }
  } else {
    result[5] += -0.13905169;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[23].missing != -1) && (data[23].fvalue < (float)12)) {
      result[6] += 0.00013698234;
    } else {
      result[6] += 0.011348502;
    }
  } else {
    result[6] += -0.10716211;
  }
  if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)4294947072)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[31].missing != -1) && (data[31].fvalue < (float)16)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
              result[7] += -0.00023692474;
            } else {
              result[7] += -0.032196745;
            }
          } else {
            result[7] += 0.119631365;
          }
        } else {
          result[7] += -0.11417305;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)8771)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)6166)) {
            result[7] += 0.023767548;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6428)) {
              result[7] += -0.20130679;
            } else {
              result[7] += -0.04076005;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)46186)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59886)) {
              result[7] += 0.18763663;
            } else {
              result[7] += 0.015365159;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60425)) {
              result[7] += -0.045436706;
            } else {
              result[7] += 0.23047133;
            }
          }
        }
      }
    } else {
      result[7] += -0.17671564;
    }
  } else {
    result[7] += 0.12316256;
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)7187)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)59630)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)6428)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)6166)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[8] += -0.0063730255;
            } else {
              result[8] += 0.03799324;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4024162560)) {
              result[8] += 0.13502607;
            } else {
              result[8] += -0.2919453;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2326164224)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
              result[8] += 0.06510641;
            } else {
              result[8] += -0.05311304;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[8] += 0.24271554;
            } else {
              result[8] += 0.03558978;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4024162560)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
              result[8] += -0.037189294;
            } else {
              result[8] += 0.1448778;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33712)) {
              result[8] += -0.13991849;
            } else {
              result[8] += 0.3953646;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)6690)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[8] += -0.46002376;
            } else {
              result[8] += -0.08834166;
            }
          } else {
            result[8] += -0.17271185;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1977933952)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
            result[8] += 0.28767058;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)918588480)) {
              result[8] += -0.15144181;
            } else {
              result[8] += -0.05290048;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2011381248)) {
            result[8] += 0.67790395;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60024)) {
              result[8] += 0.21540183;
            } else {
              result[8] += -0.01565156;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
          result[8] += 0.505338;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60824)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
              result[8] += 0.17253101;
            } else {
              result[8] += -0.14032741;
            }
          } else {
            result[8] += 0.51956797;
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)8251)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60694)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)42630)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)40794)) {
              result[8] += 0.024852222;
            } else {
              result[8] += -0.18267837;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)918588480)) {
              result[8] += -0.038315557;
            } else {
              result[8] += 0.12566862;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)627447552)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)464605088)) {
              result[8] += -0.07862169;
            } else {
              result[8] += 0.3216157;
            }
          } else {
            result[8] += -0.14879644;
          }
        }
      } else {
        result[8] += 0.48982462;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)10315)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3118221568)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2956528384)) {
              result[8] += -0.003361732;
            } else {
              result[8] += -0.10858256;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)9027)) {
              result[8] += -0.14797819;
            } else {
              result[8] += 0.38890058;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8771)) {
              result[8] += -0.13008092;
            } else {
              result[8] += -0.07641293;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
              result[8] += 0.13623238;
            } else {
              result[8] += -0.10202459;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)19858)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)19087)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60694)) {
              result[8] += 0.004394732;
            } else {
              result[8] += 0.12417878;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57256)) {
              result[8] += 0.055254053;
            } else {
              result[8] += -0.08836631;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60024)) {
              result[8] += -0.03311913;
            } else {
              result[8] += 0.31525084;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60160)) {
              result[8] += 0.00011205931;
            } else {
              result[8] += -0.034659192;
            }
          }
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1942640640)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1860617216)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1698013184)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1647413248)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1631175168)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1402044288)) {
              result[9] += -9.0068925e-06;
            } else {
              result[9] += 0.050019596;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)18064)) {
              result[9] += -0.15953724;
            } else {
              result[9] += 0.14716923;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            result[9] += -0.07799998;
          } else {
            result[9] += 0.16662627;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)7095)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1715437184)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)38506)) {
              result[9] += -0.18207815;
            } else {
              result[9] += 0.13195878;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)38506)) {
              result[9] += 0.04787102;
            } else {
              result[9] += -0.11307059;
            }
          }
        } else {
          result[9] += 0.14284793;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[9] += -0.0857283;
      } else {
        result[9] += 0.16202083;
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)36442)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)21836)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[9] += -0.118155226;
        } else {
          result[9] += 0.14194486;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1992729472)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)5900)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)5591)) {
              result[9] += -0.10115239;
            } else {
              result[9] += -0.16441466;
            }
          } else {
            result[9] += 0.094616696;
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            result[9] += -0.07826721;
          } else {
            result[9] += 0.11259877;
          }
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[9] += -0.09003513;
      } else {
        result[9] += 0.15370102;
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)51238)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)49475)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)49210)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
              result[10] += -0.0003627238;
            } else {
              result[10] += -0.10229939;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46186)) {
              result[10] += 0.04917833;
            } else {
              result[10] += -0.17476563;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1030112576)) {
            result[10] += 0.1420311;
          } else {
            result[10] += -0.40245712;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)265767216)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)50981)) {
            result[10] += -0.2660584;
          } else {
            result[10] += 0.123039424;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2578545664)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[10] += -0.06221875;
            } else {
              result[10] += 0.17771238;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)50198)) {
              result[10] += 0.15622588;
            } else {
              result[10] += -0.18991278;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)52771)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[10] += -0.096209966;
            } else {
              result[10] += 0.12687545;
            }
          } else {
            result[10] += -0.38652694;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)51507)) {
            result[10] += -0.30860758;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2326164224)) {
              result[10] += -0.016280893;
            } else {
              result[10] += 0.15732944;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
            result[10] += -0.14260814;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1030112576)) {
              result[10] += 0.08048994;
            } else {
              result[10] += 0.013580869;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)365605792)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55339)) {
              result[10] += -0.3136728;
            } else {
              result[10] += 0.099122144;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)432921696)) {
              result[10] += -0.3389005;
            } else {
              result[10] += 0.000208749;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
      result[10] += -0.14523436;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)264)) {
        result[10] += 0.14020045;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
            result[10] += -0.009568579;
          } else {
            result[10] += -0.3306387;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)2315)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2078)) {
              result[10] += 0.04409017;
            } else {
              result[10] += 0.16416907;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2564)) {
              result[10] += -0.18715933;
            } else {
              result[10] += 0.0048600323;
            }
          }
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)478)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)442)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
              result[11] += -1.5879457e-05;
            } else {
              result[11] += 0.022563849;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)472)) {
              result[11] += -0.04719954;
            } else {
              result[11] += -0.17723635;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[11] += -0.17015494;
          } else {
            result[11] += 0.14850202;
          }
        }
      } else {
        result[11] += -0.16359586;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)647)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)62460)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)527)) {
            result[11] += -0.16916963;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[11] += 0.08832887;
            } else {
              result[11] += -0.015940785;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)62970)) {
            result[11] += -0.29868177;
          } else {
            result[11] += 0.15621987;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)52537)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)47457)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)705)) {
              result[11] += -0.04909351;
            } else {
              result[11] += 0.024843143;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)50461)) {
              result[11] += -0.19056484;
            } else {
              result[11] += -0.02491686;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)61194)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)59669)) {
              result[11] += 0.046885226;
            } else {
              result[11] += 0.2235593;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)62460)) {
              result[11] += -0.17435482;
            } else {
              result[11] += -0.014278957;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.13077967;
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)1)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)54551)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)49210)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)47957)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)45935)) {
              result[12] += -0.0020864485;
            } else {
              result[12] += 0.049579117;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2692215808)) {
              result[12] += -0.063332036;
            } else {
              result[12] += 0.10382351;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1220404864)) {
              result[12] += 0.030405272;
            } else {
              result[12] += -0.072264105;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)52273)) {
              result[12] += 0.041530922;
            } else {
              result[12] += 0.18329471;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)113590144)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55088)) {
              result[12] += -0.014524018;
            } else {
              result[12] += -0.06718874;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3314336000)) {
              result[12] += -0.22813812;
            } else {
              result[12] += 0.12109973;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2430779136)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)868466368)) {
              result[12] += -0.0050419485;
            } else {
              result[12] += -0.092827484;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2487559424)) {
              result[12] += 0.3168935;
            } else {
              result[12] += 0.035700075;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
          result[12] += -0.15023193;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51858)) {
              result[12] += -0.11064925;
            } else {
              result[12] += -0.03807853;
            }
          } else {
            result[12] += -0.1496423;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)59916)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)59669)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)331876768)) {
              result[12] += 0.024182446;
            } else {
              result[12] += -0.0008119994;
            }
          } else {
            result[12] += -0.18550593;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)62186)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
              result[12] += 0.06227482;
            } else {
              result[12] += 0.32478952;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)62713)) {
              result[12] += -0.15124342;
            } else {
              result[12] += 0.0072449334;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)51858)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)50476)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)50334)) {
              result[12] += 0.0031157988;
            } else {
              result[12] += -0.10174739;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
              result[12] += -0.1432229;
            } else {
              result[12] += 0.16110606;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1730588800)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1250292736)) {
              result[12] += 0.04744281;
            } else {
              result[12] += -0.10055891;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[12] += -0.006507147;
            } else {
              result[12] += 0.15977815;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[12] += -0.1631265;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3340514816)) {
              result[12] += 0.038966008;
            } else {
              result[12] += -0.14187889;
            }
          }
        } else {
          result[12] += 0.15862283;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)464605088)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
              result[12] += -0.141693;
            } else {
              result[12] += 0.013317852;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
              result[12] += 0.15007737;
            } else {
              result[12] += -0.10825665;
            }
          }
        } else {
          result[12] += -0.188021;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)58670)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)45411)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)44233)) {
              result[12] += 0.055396214;
            } else {
              result[12] += -0.16033983;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
              result[12] += 0.16540328;
            } else {
              result[12] += -0.0577274;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)58919)) {
            result[12] += -0.1680434;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
              result[12] += 0.13728744;
            } else {
              result[12] += -0.07060338;
            }
          }
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1159754368)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)832030464)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)627447552)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)36967)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)31625)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)31122)) {
              result[13] += -0.005541712;
            } else {
              result[13] += 0.1226228;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)201685632)) {
              result[13] += -0.024076173;
            } else {
              result[13] += -0.10252481;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)37732)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)414614720)) {
              result[13] += 0.10746885;
            } else {
              result[13] += -0.12550634;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)514242560)) {
              result[13] += -0.0010322633;
            } else {
              result[13] += 0.06159565;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)64759)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)43175)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
              result[13] += -0.052883368;
            } else {
              result[13] += 0.068957746;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)58145)) {
              result[13] += -0.06111745;
            } else {
              result[13] += 0.051160127;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)782316608)) {
            result[13] += 0.36497998;
          } else {
            result[13] += 0.028420623;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)57147)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)55867)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)30343)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1078326144)) {
              result[13] += -0.07340144;
            } else {
              result[13] += 0.01642448;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)33651)) {
              result[13] += 0.12509723;
            } else {
              result[13] += -0.009408299;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1078326144)) {
            result[13] += -0.048688255;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.7366908;
            } else {
              result[13] += 0.20038243;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1145715328)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)966552000)) {
              result[13] += -0.035319783;
            } else {
              result[13] += -0.13890927;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)934930688)) {
              result[13] += -0.5161849;
            } else {
              result[13] += -0.15026186;
            }
          }
        } else {
          result[13] += 0.2887487;
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1250292736)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)63241)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)51238)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48966)) {
              result[13] += -0.021619195;
            } else {
              result[13] += 0.29651016;
            }
          } else {
            result[13] += -0.14009799;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1236219776)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49952)) {
              result[13] += 0.09959246;
            } else {
              result[13] += -0.19293284;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)30583)) {
              result[13] += 0.1749971;
            } else {
              result[13] += 0.28638318;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1206383360)) {
          result[13] += 0.66753924;
        } else {
          result[13] += -0.08604588;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)51042)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1893026944)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)50828)) {
              result[13] += 0.01217568;
            } else {
              result[13] += 0.15355462;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1977933952)) {
              result[13] += -0.08640292;
            } else {
              result[13] += 0.003632004;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2020837248)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1324402432)) {
              result[13] += 0.052216496;
            } else {
              result[13] += -0.1852684;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2384619520)) {
              result[13] += 0.18455704;
            } else {
              result[13] += -0.04875164;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)378)) {
          result[13] += -0.17359047;
        } else {
          result[13] += 0.090636216;
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
              result[14] += 9.6026764e-05;
            } else {
              result[14] += 0.1402458;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
              result[14] += -0.10505206;
            } else {
              result[14] += 0.034185044;
            }
          }
        } else {
          result[14] += -0.14337483;
        }
      } else {
        result[14] += -0.14676572;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)108)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)30583)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)23856)) {
              result[14] += 0.1206458;
            } else {
              result[14] += -0.0426815;
            }
          } else {
            result[14] += 0.16370904;
          }
        } else {
          result[14] += -0.17755245;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)121)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3118221568)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[14] += -0.25749624;
            } else {
              result[14] += -0.10973991;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
              result[14] += -0.099367745;
            } else {
              result[14] += 0.12731954;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2621401856)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[14] += 0.113322414;
            } else {
              result[14] += -0.10081406;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)62186)) {
              result[14] += 0.015511445;
            } else {
              result[14] += -0.283704;
            }
          }
        }
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)441)) {
      result[14] += -0.14747241;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
          result[14] += -0.1450101;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
              result[14] += 0.18247372;
            } else {
              result[14] += 0.119948;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
              result[14] += -0.15452865;
            } else {
              result[14] += 0.02849004;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
            result[14] += 0.14304997;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)35306)) {
              result[14] += -0.09564286;
            } else {
              result[14] += 0.120870434;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)52948)) {
            result[14] += -0.1447415;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
              result[14] += 0.0007213405;
            } else {
              result[14] += 0.1279805;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
              result[0] += -0.0027284205;
            } else {
              result[0] += 0.00063867745;
            }
          } else {
            result[0] += -0.115654826;
          }
        } else {
          result[0] += 0.005969012;
        }
      } else {
        result[0] += -0.12391289;
      }
    } else {
      result[0] += -0.14683367;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)264)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
        result[0] += -0.13244662;
      } else {
        result[0] += 0.024537751;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32920)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)527)) {
              result[0] += 0.023149181;
            } else {
              result[0] += 0.014663834;
            }
          } else {
            result[0] += -0.005563663;
          }
        } else {
          result[0] += 0.25085527;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)2315)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2078)) {
              result[0] += -0.034413744;
            } else {
              result[0] += -0.14669766;
            }
          } else {
            result[0] += 0.11690311;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)2564)) {
            result[0] += 0.17355622;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3365)) {
              result[0] += 0.053076148;
            } else {
              result[0] += 0.0033611374;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        result[1] += -0.055837844;
      } else {
        result[1] += -0.12137533;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
        result[1] += -0.02973373;
      } else {
        result[1] += -0.010251308;
      }
    }
  } else {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)25)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)331)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)310)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)304)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)288)) {
              result[1] += -0.0003301724;
            } else {
              result[1] += 0.13559969;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)678742336)) {
              result[1] += -0.14106837;
            } else {
              result[1] += -0.029612027;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)314)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)59186)) {
              result[1] += 0.091821;
            } else {
              result[1] += -0.046681523;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3570386688)) {
              result[1] += -0.015418044;
            } else {
              result[1] += 0.04737748;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)43594)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)87)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)280)) {
              result[1] += -0.14051159;
            } else {
              result[1] += 0.050190683;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)316)) {
              result[1] += 0.11413679;
            } else {
              result[1] += -0.07859981;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)484)) {
            result[1] += -0.10819743;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
              result[1] += -0.0054858895;
            } else {
              result[1] += 0.08919464;
            }
          }
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)477)) {
        result[1] += 0.1356764;
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)484)) {
          result[1] += -0.013928021;
        } else {
          result[1] += 0.1022422;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)27655)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)23202)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)22590)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)11198)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)9584)) {
              result[2] += 0.0031039994;
            } else {
              result[2] += 0.08152295;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)13222)) {
              result[2] += -0.08345767;
            } else {
              result[2] += 0.00872365;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)22869)) {
            result[2] += -0.10034046;
          } else {
            result[2] += -0.04622405;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)23587)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            result[2] += 0.4858095;
          } else {
            result[2] += 0.18955632;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)24390)) {
              result[2] += -0.07721974;
            } else {
              result[2] += 0.0033527121;
            }
          } else {
            result[2] += 0.090359345;
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)28383)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
          result[2] += -0.11905659;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)28195)) {
            result[2] += -0.017572794;
          } else {
            result[2] += -0.10589722;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)32611)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)30864)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)30467)) {
              result[2] += 0.034758646;
            } else {
              result[2] += -0.13945235;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)31144)) {
              result[2] += 0.13484944;
            } else {
              result[2] += 0.058399953;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)35998)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)35866)) {
              result[2] += -0.020030994;
            } else {
              result[2] += -0.13966024;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)36659)) {
              result[2] += 0.087492965;
            } else {
              result[2] += 0.00046111742;
            }
          }
        }
      }
    }
  } else {
    result[2] += -0.10371723;
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2182849)) {
        result[3] += -0.116376095;
      } else {
        result[3] += 0.044526804;
      }
    } else {
      result[3] += -0.0017785098;
    }
  } else {
    result[3] += 0.052127272;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1675)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1368)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
            result[4] += -0.0019548247;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1060)) {
              result[4] += 0.003782991;
            } else {
              result[4] += 0.01563143;
            }
          }
        } else {
          result[4] += -0.02515858;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)64539)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)52507)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)51884)) {
              result[4] += 0.007221748;
            } else {
              result[4] += -0.07839644;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)52818)) {
              result[4] += 0.1690174;
            } else {
              result[4] += 0.005419148;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)64882)) {
            result[4] += -0.050179016;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)65213)) {
              result[4] += 0.04798771;
            } else {
              result[4] += -0.019986296;
            }
          }
        }
      }
    } else {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)62964)) {
        result[4] += 0.031023419;
      } else {
        result[4] += 0.09444476;
      }
    }
  } else {
    result[4] += -0.10355163;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)592172608)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)45184)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)24342)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)20366)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)7187)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)560492160)) {
              result[5] += 0.00042166913;
            } else {
              result[5] += 0.13411418;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
              result[5] += -0.15196337;
            } else {
              result[5] += -0.08703296;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)232647088)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
              result[5] += -0.12859026;
            } else {
              result[5] += 0.122211516;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60210)) {
              result[5] += -0.102932416;
            } else {
              result[5] += 0.15190428;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)41134)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)41328)) {
              result[5] += -0.16819404;
            } else {
              result[5] += -0.10252456;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)41390)) {
              result[5] += 0.15570787;
            } else {
              result[5] += -0.1656244;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)34379)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)464605088)) {
              result[5] += -0.09529919;
            } else {
              result[5] += 0.17350356;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[5] += -0.16783582;
            } else {
              result[5] += 0.083728544;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)45411)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)8581)) {
          result[5] += 0.20453456;
        } else {
          result[5] += -0.08309056;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)48966)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59506)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)18524)) {
              result[5] += -0.1702095;
            } else {
              result[5] += -0.11253263;
            }
          } else {
            result[5] += 0.023338981;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)576729216)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)398755392)) {
              result[5] += 0.040529285;
            } else {
              result[5] += -0.07864945;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)7751)) {
              result[5] += 0.17444211;
            } else {
              result[5] += -0.13567047;
            }
          }
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      result[5] += -0.1492132;
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)782316608)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)26416)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)26159)) {
              result[5] += -0.1525753;
            } else {
              result[5] += 0.11666426;
            }
          } else {
            result[5] += -0.1558443;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)36442)) {
            result[5] += -0.1547851;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
              result[5] += 0.15092216;
            } else {
              result[5] += 0.07107004;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)813467392)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)31372)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)31122)) {
              result[5] += -0.05989236;
            } else {
              result[5] += 0.2259426;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)59439)) {
              result[5] += -0.15659215;
            } else {
              result[5] += 0.0694569;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1030112576)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)5909)) {
              result[5] += 0.06456855;
            } else {
              result[5] += -0.15784045;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15206)) {
              result[5] += -0.055532735;
            } else {
              result[5] += 0.01318035;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[23].missing != -1) && (data[23].fvalue < (float)12)) {
      result[6] += 8.865329e-05;
    } else {
      result[6] += 0.014775744;
    }
  } else {
    result[6] += -0.10353722;
  }
  if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
              result[7] += -0.0049622543;
            } else {
              result[7] += 0.12550248;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1879)) {
              result[7] += -0.14713666;
            } else {
              result[7] += -0.0075513646;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49348)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)560492160)) {
              result[7] += -0.07953427;
            } else {
              result[7] += 0.07054596;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
              result[7] += 0.003656895;
            } else {
              result[7] += -0.004289661;
            }
          }
        }
      } else {
        result[7] += -0.12251769;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
        result[7] += -0.006492377;
      } else {
        result[7] += 0.121101074;
      }
    }
  } else {
    result[7] += 0.1201754;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)63476)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)61678)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)39508)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[8] += 0.00071207335;
            } else {
              result[8] += -0.01491818;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)262)) {
              result[8] += 0.008563142;
            } else {
              result[8] += -0.03695828;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3714831616)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2956528384)) {
              result[8] += -0.008391837;
            } else {
              result[8] += -0.047159772;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4024162560)) {
              result[8] += 0.07172815;
            } else {
              result[8] += -0.023266729;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2882424576)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2772094208)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2650760192)) {
              result[8] += -0.031947467;
            } else {
              result[8] += 0.12846273;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57256)) {
              result[8] += -0.1361356;
            } else {
              result[8] += 0.08186553;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)62713)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
              result[8] += 0.12268167;
            } else {
              result[8] += -0.05751149;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3687526656)) {
              result[8] += 0.14231457;
            } else {
              result[8] += -0.00046798735;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)59886)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59130)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2928404992)) {
              result[8] += 0.011927976;
            } else {
              result[8] += 0.16750827;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[8] += -0.046224307;
            } else {
              result[8] += 0.03458057;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3481869312)) {
            result[8] += -0.14740303;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3512011520)) {
              result[8] += 0.3092595;
            } else {
              result[8] += -0.13694812;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60160)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2567035392)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1747430528)) {
              result[8] += 0.3018365;
            } else {
              result[8] += -0.102103755;
            }
          } else {
            result[8] += 0.8270504;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)348961088)) {
            result[8] += 0.4594242;
          } else {
            result[8] += -0.14603627;
          }
        }
      }
    }
  } else {
    result[8] += -0.13398053;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)33651)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)23617)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
              result[9] += 0.0035388;
            } else {
              result[9] += -0.0022596112;
            }
          } else {
            result[9] += -0.13538109;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)266309232)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
              result[9] += -0.07644014;
            } else {
              result[9] += -0.1676019;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[9] += -0.13497372;
            } else {
              result[9] += 0.040624186;
            }
          }
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)386)) {
            result[9] += -0.14038214;
          } else {
            result[9] += 0.032099616;
          }
        } else {
          result[9] += 0.15867071;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)33879)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)201685632)) {
          result[9] += 0.093586504;
        } else {
          result[9] += -0.18432269;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)159697)) {
            result[9] += -0.14667627;
          } else {
            result[9] += 0.08223915;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46946)) {
              result[9] += 0.15213726;
            } else {
              result[9] += -0.15470128;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1942640640)) {
              result[9] += 0.15829188;
            } else {
              result[9] += -0.11416316;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)2904)) {
      result[9] += 0.14840026;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)38506)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)31372)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)31122)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
              result[9] += 0.14989729;
            } else {
              result[9] += 0.0073343883;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)799135808)) {
              result[9] += 0.13839394;
            } else {
              result[9] += -0.20049368;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
              result[9] += 0.14733455;
            } else {
              result[9] += -0.11484699;
            }
          } else {
            result[9] += 0.15756416;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)39016)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
            result[9] += 0.16256382;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1371489792)) {
              result[9] += 0.12942182;
            } else {
              result[9] += -0.1413787;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)41134)) {
            result[9] += 0.14994122;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)41390)) {
              result[9] += -0.123168744;
            } else {
              result[9] += -0.001272164;
            }
          }
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)4243005184)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)4051475456)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3999892736)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3911013376)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
              result[10] += 0.00023424698;
            } else {
              result[10] += -0.04259119;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53290)) {
              result[10] += -0.10485064;
            } else {
              result[10] += -0.39130512;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)43719)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3966758144)) {
              result[10] += 0.16783252;
            } else {
              result[10] += 0.06505289;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63241)) {
              result[10] += -0.2924268;
            } else {
              result[10] += 0.12995338;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)48703)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)45411)) {
              result[10] += -0.21685842;
            } else {
              result[10] += 0.14351696;
            }
          } else {
            result[10] += -0.35825416;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)29299)) {
            result[10] += -0.24372005;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)43175)) {
              result[10] += -0.02376915;
            } else {
              result[10] += 0.11243466;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)8527)) {
          result[10] += -0.26546994;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)8771)) {
            result[10] += 0.13511984;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)62186)) {
              result[10] += -0.22106634;
            } else {
              result[10] += 0.1071363;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4076412416)) {
              result[10] += -0.3338294;
            } else {
              result[10] += 0.14804822;
            }
          } else {
            result[10] += 0.14416973;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48838)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
              result[10] += -0.03226128;
            } else {
              result[10] += 0.08421545;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4162893824)) {
              result[10] += -0.31482157;
            } else {
              result[10] += 0.114994936;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)25409)) {
        result[10] += -0.29170522;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)44913)) {
          result[10] += 0.1670676;
        } else {
          result[10] += -0.102092646;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
        result[10] += -0.3115505;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)37473)) {
          result[10] += 0.14197639;
        } else {
          result[10] += -0.17822292;
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)25)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[11] += 0.00015762531;
            } else {
              result[11] += 0.06603622;
            }
          } else {
            result[11] += -0.14516033;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
            result[11] += -0.15993159;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)45676)) {
              result[11] += -0.007441754;
            } else {
              result[11] += -0.16979855;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)334)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)215557952)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)65016)) {
              result[11] += 0.13231349;
            } else {
              result[11] += -0.28363797;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
              result[11] += -0.08853514;
            } else {
              result[11] += 0.11719265;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
              result[11] += -0.0016034313;
            } else {
              result[11] += -0.15043566;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
              result[11] += 0.14715149;
            } else {
              result[11] += -0.121016055;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)46186)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)27752)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[11] += 0.0074964203;
            } else {
              result[11] += 0.19704284;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[11] += -0.15036136;
            } else {
              result[11] += 0.06725429;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)849185600)) {
              result[11] += -0.033739917;
            } else {
              result[11] += 0.22635838;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)249908816)) {
              result[11] += 0.26457924;
            } else {
              result[11] += -0.022110125;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)479)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)472)) {
            result[11] += -0.14480303;
          } else {
            result[11] += 0.12710202;
          }
        } else {
          result[11] += -0.15288046;
        }
      }
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)477)) {
      result[11] += -0.13740253;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)484)) {
        result[11] += 0.014609867;
      } else {
        result[11] += -0.08442053;
      }
    }
  }
}


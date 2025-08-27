
#include "header.h"

void predict_unit18(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 0.0002410956;
  } else {
    result[6] += -0.11247811;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += -3.8585516e-05;
            } else {
              result[7] += -0.010040274;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.11134402;
            } else {
              result[7] += -0.004439787;
            }
          }
        } else {
          result[7] += -0.11365379;
        }
      } else {
        result[7] += -0.20410158;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            result[7] += 0.14178178;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[7] += 0.016929515;
            } else {
              result[7] += -0.1243609;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
            result[7] += -0.16451381;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
              result[7] += -0.006370452;
            } else {
              result[7] += 0.005471627;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          result[7] += 0.13492025;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            result[7] += -0.08219937;
          } else {
            result[7] += 0.06052716;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
      result[7] += -0.0036648898;
    } else {
      result[7] += 0.09898658;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[8] += 4.981944e-05;
            } else {
              result[8] += -0.10896106;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += 0.12064982;
            } else {
              result[8] += -0.02213417;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
              result[8] += -0.11395783;
            } else {
              result[8] += 0.0038889034;
            }
          } else {
            result[8] += -0.11558999;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.058129042;
            } else {
              result[8] += -0.037587665;
            }
          } else {
            result[8] += -0.18283658;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
            result[8] += 0.14200754;
          } else {
            result[8] += -0.013166304;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[8] += -0.13510084;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.0750457;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            result[8] += 0.083298706;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[8] += 0.08021873;
            } else {
              result[8] += -0.02212242;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      result[8] += -0.13356684;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        result[8] += -0.17511128;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            result[8] += 0.119602636;
          } else {
            result[8] += -0.016422182;
          }
        } else {
          result[8] += -0.08892901;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[9] += 0.00022277993;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          result[9] += -0.027997933;
        } else {
          result[9] += -0.08894199;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[9] += 0.010206226;
      } else {
        result[9] += 0.004745576;
      }
    }
  } else {
    result[9] += -0.09403179;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[10] += -3.2052217e-06;
      } else {
        result[10] += -0.1194528;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[10] += 0.005245811;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          result[10] += -0.08758406;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[10] += 0.00016656212;
            } else {
              result[10] += -0.102469616;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[10] += 0.031653374;
            } else {
              result[10] += -0.09081265;
            }
          }
        }
      }
    }
  } else {
    result[10] += -0.080529094;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[11] += 0.0001259906;
            } else {
              result[11] += -0.09083992;
            }
          } else {
            result[11] += -0.09230355;
          }
        } else {
          result[11] += -0.09407006;
        }
      } else {
        result[11] += -0.14125232;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        result[11] += -0.15390748;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[11] += -0.02906138;
            } else {
              result[11] += 0.14469269;
            }
          } else {
            result[11] += -0.03225076;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            result[11] += -0.10943263;
          } else {
            result[11] += 0.0400851;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[11] += 0.092566565;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[11] += -0.0933617;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += 0.13821489;
            } else {
              result[11] += -0.015437087;
            }
          }
        } else {
          result[11] += 0.07884701;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[11] += 0.00637416;
            } else {
              result[11] += -0.008381916;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += 0.13604693;
            } else {
              result[11] += 0.00090220716;
            }
          }
        } else {
          result[11] += 0.14048392;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[11] += -0.11361479;
            } else {
              result[11] += 0.119648345;
            }
          } else {
            result[11] += -0.16143543;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[11] += -0.0022317008;
            } else {
              result[11] += -0.17161816;
            }
          } else {
            result[11] += 0.0347976;
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[12] += -0.0013525408;
            } else {
              result[12] += -0.08851193;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[12] += -0.039621074;
            } else {
              result[12] += -0.102490716;
            }
          }
        } else {
          result[12] += -0.13328977;
        }
      } else {
        result[12] += 0.14117768;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
        result[12] += -0.14885022;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[12] += 0.070539646;
        } else {
          result[12] += -0.011157631;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            result[12] += 0.0068462878;
          } else {
            result[12] += 0.017128628;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[12] += 0.0044845543;
            } else {
              result[12] += -0.0061074365;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[12] += -0.16928266;
            } else {
              result[12] += 0.07929016;
            }
          }
        }
      } else {
        result[12] += -0.13152716;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
        result[12] += -0.14345281;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[12] += -0.039377533;
            } else {
              result[12] += -0.107281946;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[12] += 0.004626338;
            } else {
              result[12] += -0.1134746;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[12] += 0.015043065;
            } else {
              result[12] += 0.03382367;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[12] += 0.0031288036;
            } else {
              result[12] += -0.014224667;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[13] += 0.000616109;
            } else {
              result[13] += -0.06113418;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[13] += 0.036594894;
            } else {
              result[13] += -0.11837855;
            }
          }
        } else {
          result[13] += -0.13970321;
        }
      } else {
        result[13] += 0.0866507;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.00018947758;
            } else {
              result[13] += 0.13376172;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[13] += 0.021235617;
            } else {
              result[13] += -0.13406184;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[13] += -0.011648245;
            } else {
              result[13] += -0.114340365;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[13] += -0.110495776;
            } else {
              result[13] += 0.12845759;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            result[13] += -0.12772895;
          } else {
            result[13] += -0.030095065;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[13] += -0.102838375;
            } else {
              result[13] += 0.1441726;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.12966177;
            } else {
              result[13] += 0.037803352;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
      result[13] += -0.094920285;
    } else {
      result[13] += -0.021384688;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[14] += -0.0008396301;
            } else {
              result[14] += -0.08154308;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += 0.002359761;
            } else {
              result[14] += -0.09389708;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[14] += -0.121276364;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += 0.09868028;
            } else {
              result[14] += -0.046470024;
            }
          }
        }
      } else {
        result[14] += -0.12735167;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
          result[14] += 0.018231926;
        } else {
          result[14] += 0.124728926;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[14] += 0.08941667;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[14] += 0.005227118;
            } else {
              result[14] += 0.09617071;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[14] += -0.124542445;
            } else {
              result[14] += -0.023681542;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        result[14] += -0.14362407;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
          result[14] += 0.046972256;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51039)) {
            result[14] += -0.076963454;
          } else {
            result[14] += 0.040433355;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        result[14] += 0.01305106;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[14] += -0.13674854;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[14] += 0.011353414;
            } else {
              result[14] += -0.100648135;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[14] += 0.02088973;
            } else {
              result[14] += -0.06756836;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[0] += -8.702623e-05;
    } else {
      result[0] += -0.125946;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.0050874907;
            } else {
              result[0] += -0.081890315;
            }
          } else {
            result[0] += 0.014027789;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[0] += -0.12922645;
            } else {
              result[0] += 0.036704008;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.013241036;
            } else {
              result[0] += 0.03279746;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          result[0] += 0.14952849;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[0] += -0.062122144;
          } else {
            result[0] += 0.03185056;
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)626220)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)229193)) {
            result[0] += -0.038261797;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
              result[0] += -0.1302991;
            } else {
              result[0] += -0.029886885;
            }
          }
        } else {
          result[0] += 0.0018170278;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)464371)) {
            result[0] += 0.119236335;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
              result[0] += -0.107408464;
            } else {
              result[0] += 0.0671374;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)229193)) {
              result[0] += -0.17773962;
            } else {
              result[0] += 0.01017797;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
              result[0] += -0.026203565;
            } else {
              result[0] += 0.0022201133;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
              result[1] += -0.0004385971;
            } else {
              result[1] += 0.010625774;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
              result[1] += -0.13996704;
            } else {
              result[1] += -0.01050617;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[1] += 0.0030985672;
            } else {
              result[1] += 0.035812907;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
              result[1] += -0.09414403;
            } else {
              result[1] += -0.00082248665;
            }
          }
        }
      } else {
        result[1] += 0.0975015;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        result[1] += 0.089351386;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[1] += -0.037506085;
            } else {
              result[1] += -0.025948746;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[1] += -0.011276372;
            } else {
              result[1] += -0.07562236;
            }
          }
        } else {
          result[1] += -0.09986165;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += 0.12872368;
            } else {
              result[1] += 0.030456;
            }
          } else {
            result[1] += -0.08929232;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.0055570817;
            } else {
              result[1] += -0.12220983;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[1] += 0.031886335;
            } else {
              result[1] += -0.006789267;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[1] += -0.14160222;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += -0.032981157;
            } else {
              result[1] += 0.0802487;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[1] += 0.12393722;
            } else {
              result[1] += 0.003713924;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[1] += -0.07614437;
            } else {
              result[1] += -0.0015948865;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
        result[1] += -0.18794633;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.049120247;
            } else {
              result[1] += 0.027680527;
            }
          } else {
            result[1] += 0.11121348;
          }
        } else {
          result[1] += -0.051102757;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[2] += 0.000114153605;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
        result[2] += 0.084681064;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)56646)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
              result[2] += 0.0129014775;
            } else {
              result[2] += 0.07539255;
            }
          } else {
            result[2] += -0.04558152;
          }
        } else {
          result[2] += 0.0729329;
        }
      }
    }
  } else {
    result[2] += -0.1090635;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[3] += -0.016704027;
      } else {
        result[3] += -0.11563944;
      }
    } else {
      result[3] += 0.03188982;
    }
  } else {
    result[3] += 0.033787206;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.0002210997;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[4] += 0.06393582;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          result[4] += -0.05756799;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[4] += 0.014357262;
            } else {
              result[4] += 0.081241995;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
              result[4] += -0.037639156;
            } else {
              result[4] += 0.08105512;
            }
          }
        }
      }
    }
  } else {
    result[4] += -0.10922841;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[5] += 0.00020755366;
            } else {
              result[5] += -0.10744741;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[5] += 0.008465189;
            } else {
              result[5] += -0.01010167;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            result[5] += -0.08784728;
          } else {
            result[5] += -0.02470259;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51446)) {
          result[5] += 0.11486619;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
            result[5] += -0.099380285;
          } else {
            result[5] += 0.03811886;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
        result[5] += -0.104647584;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
          result[5] += 0.10262242;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            result[5] += -0.10031025;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[5] += 0.08480939;
            } else {
              result[5] += -0.014731467;
            }
          }
        }
      }
    }
  } else {
    result[5] += 0.06889396;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 0.00020679136;
  } else {
    result[6] += -0.10906378;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)495)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)272)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[7] += -0.00013610402;
            } else {
              result[7] += -0.08834435;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.0022807834;
            } else {
              result[7] += 0.09424369;
            }
          }
        } else {
          result[7] += -0.101169586;
        }
      } else {
        result[7] += 0.21248727;
      }
    } else {
      result[7] += -0.1163694;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
        result[7] += 0.23342364;
      } else {
        result[7] += 0.019746052;
      }
    } else {
      result[7] += -0.041550588;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[8] += -0.0012160572;
            } else {
              result[8] += 0.011806706;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
              result[8] += -0.06284033;
            } else {
              result[8] += 0.009092479;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.09177602;
            } else {
              result[8] += -0.055612683;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[8] += -0.07795737;
            } else {
              result[8] += 0.0011490504;
            }
          }
        }
      } else {
        result[8] += -0.11963158;
      }
    } else {
      result[8] += 0.08382253;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
          result[8] += -0.1294511;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
            result[8] += 0.08666782;
          } else {
            result[8] += -0.0065729218;
          }
        }
      } else {
        result[8] += -0.15623635;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        result[8] += -0.237274;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            result[8] += 0.1096207;
          } else {
            result[8] += -0.19284917;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50613)) {
              result[8] += -0.03295638;
            } else {
              result[8] += 0.10122006;
            }
          } else {
            result[8] += 0.125526;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[9] += 0.00018927855;
        } else {
          result[9] += -0.024098365;
        }
      } else {
        result[9] += -0.085734256;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[9] += 0.009774459;
      } else {
        result[9] += 0.0045167785;
      }
    }
  } else {
    result[9] += -0.090463474;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[10] += 0.00061685586;
            } else {
              result[10] += 0.017957995;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
              result[10] += -0.04005715;
            } else {
              result[10] += 0.0029434862;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            result[10] += -0.09584236;
          } else {
            result[10] += 0.008811956;
          }
        }
      } else {
        result[10] += 0.0652958;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
        result[10] += -0.09236534;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          result[10] += -0.08282324;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
            result[10] += 0.05698692;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
              result[10] += -0.09524919;
            } else {
              result[10] += 0.05846515;
            }
          }
        }
      }
    }
  } else {
    result[10] += -0.07725167;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 1.1073866e-05;
            } else {
              result[11] += -0.031818584;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[11] += 0.005208232;
            } else {
              result[11] += -0.13640662;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[11] += -0.17555107;
          } else {
            result[11] += 0.14125463;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.18329675;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += 0.13125178;
            } else {
              result[11] += 0.0051474236;
            }
          } else {
            result[11] += -0.16581441;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[11] += -0.011166762;
            } else {
              result[11] += 0.023113698;
            }
          } else {
            result[11] += -0.120531894;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[11] += -0.06273525;
          } else {
            result[11] += -0.13990194;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          result[11] += 0.13309638;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[11] += -0.009378525;
            } else {
              result[11] += 0.021788638;
            }
          } else {
            result[11] += 0.028648436;
          }
        }
      }
    }
  } else {
    result[11] += -0.09841518;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[12] += -0.0004437201;
            } else {
              result[12] += 0.019614065;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.046181705;
            } else {
              result[12] += -0.11091148;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[12] += 0.06593297;
            } else {
              result[12] += -0.09164145;
            }
          } else {
            result[12] += 0.1078692;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          result[12] += -0.116115846;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            result[12] += -0.0150787495;
          } else {
            result[12] += 0.029516999;
          }
        }
      }
    } else {
      result[12] += -0.14929926;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
            result[12] += 0.005297636;
          } else {
            result[12] += -0.103604905;
          }
        } else {
          result[12] += 0.07384025;
        }
      } else {
        result[12] += -0.13698159;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
        result[12] += 0.11255785;
      } else {
        result[12] += -0.0018938074;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
              result[13] += 0.00053751766;
            } else {
              result[13] += 0.03657358;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[13] += 0.05228963;
            } else {
              result[13] += -0.11756639;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += -0.03381476;
            } else {
              result[13] += -0.12250023;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[13] += 0.019506576;
            } else {
              result[13] += -0.0077186446;
            }
          }
        }
      } else {
        result[13] += -0.08848865;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        result[13] += -0.040227488;
      } else {
        result[13] += -0.11597354;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
      result[13] += 0.19471662;
    } else {
      result[13] += -0.054721806;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[14] += 0.00017063526;
            } else {
              result[14] += -0.07897583;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
              result[14] += -0.09511196;
            } else {
              result[14] += 0.028206533;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[14] += -0.11800471;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += 0.095227465;
            } else {
              result[14] += -0.042788014;
            }
          }
        }
      } else {
        result[14] += -0.12376506;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[14] += 0.009339192;
            } else {
              result[14] += 0.12086488;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[14] += 0.004031427;
            } else {
              result[14] += 0.089379825;
            }
          }
        } else {
          result[14] += -0.11485102;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[14] += 0.18607742;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            result[14] += 0.09406363;
          } else {
            result[14] += -0.085729115;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)52901)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[14] += -0.010527944;
            } else {
              result[14] += -0.10191329;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += -0.02596944;
            } else {
              result[14] += 0.14923722;
            }
          }
        } else {
          result[14] += -0.123619236;
        }
      } else {
        result[14] += 0.16680196;
      }
    } else {
      result[14] += -0.10694174;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[0] += -0.00058787694;
            } else {
              result[0] += 0.0022418487;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
              result[0] += -0.1035019;
            } else {
              result[0] += -0.004474433;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += 0.1094716;
            } else {
              result[0] += -0.0069855573;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[0] += -0.07994236;
            } else {
              result[0] += 0.027694723;
            }
          }
        }
      } else {
        result[0] += 0.09075915;
      }
    } else {
      result[0] += -0.050328717;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
      result[0] += 0.08945288;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
          result[0] += 0.017344568;
        } else {
          result[0] += 0.08359982;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
          result[0] += -0.047891073;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
            result[0] += 0.09348163;
          } else {
            result[0] += -0.04544381;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[1] += -0.0005845874;
            } else {
              result[1] += 0.009132038;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += -0.139852;
            } else {
              result[1] += -0.019668259;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[1] += 0.16282693;
            } else {
              result[1] += -0.10847525;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[1] += 0.041519947;
            } else {
              result[1] += 0.0006690106;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[1] += -0.0072578853;
            } else {
              result[1] += 0.14142886;
            }
          } else {
            result[1] += -0.13933639;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[1] += -0.13981335;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[1] += -0.11345276;
            } else {
              result[1] += 0.11329461;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            result[1] += -0.13521814;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += 0.18515919;
            } else {
              result[1] += -0.0774796;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += 0.10511585;
            } else {
              result[1] += 0.030023923;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[1] += 0.0017943456;
            } else {
              result[1] += 0.07936088;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[1] += -0.050271045;
            } else {
              result[1] += 0.08373264;
            }
          } else {
            result[1] += -0.17157212;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            result[1] += 0.098657764;
          } else {
            result[1] += 0.01579304;
          }
        }
      }
    }
  } else {
    result[1] += -0.09310032;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
        result[2] += 0.00021962663;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[2] += 0.0903633;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
              result[2] += 0.030421993;
            } else {
              result[2] += -0.027702574;
            }
          } else {
            result[2] += 0.07961198;
          }
        }
      }
    } else {
      result[2] += -0.08632091;
    }
  } else {
    result[2] += -0.105660334;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[3] += -0.015128695;
    } else {
      result[3] += -0.105009355;
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
      result[3] += -0.021011313;
    } else {
      result[3] += 0.04510055;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.0002224347;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[4] += 0.022849008;
        } else {
          result[4] += 0.06262016;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
          result[4] += -0.0722663;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
            result[4] += 0.06788602;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
              result[4] += -0.06514946;
            } else {
              result[4] += 0.033367213;
            }
          }
        }
      }
    }
  } else {
    result[4] += -0.10582826;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[5] += 0.0001774328;
      } else {
        result[5] += -0.11506827;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
        result[5] += 0.00862685;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          result[5] += -0.09340024;
        } else {
          result[5] += 0.004299914;
        }
      }
    }
  } else {
    result[5] += 0.06668949;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 0.00017696353;
  } else {
    result[6] += -0.10566063;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)495)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)272)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.0007876524;
            } else {
              result[7] += -0.0012072846;
            }
          } else {
            result[7] += -0.08470034;
          }
        } else {
          result[7] += 0.08575231;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[7] += 0.0020414118;
        } else {
          result[7] += 0.08995721;
        }
      }
    } else {
      result[7] += -0.11264648;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
        result[7] += 0.21151777;
      } else {
        result[7] += 0.023218518;
      }
    } else {
      result[7] += -0.07858817;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58035)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
              result[8] += 0.00016803917;
            } else {
              result[8] += -0.018380534;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.02031406;
            } else {
              result[8] += -0.027975243;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58206)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[8] += -0.07060355;
            } else {
              result[8] += 0.1997174;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[8] += 0.025371516;
            } else {
              result[8] += -0.0339584;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58700)) {
            result[8] += 0.010510437;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[8] += 0.025455832;
            } else {
              result[8] += 0.0052392306;
            }
          }
        } else {
          result[8] += 0.18457377;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[8] += 0.0067994096;
            } else {
              result[8] += -0.068112835;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[8] += 0.04996965;
            } else {
              result[8] += -0.032948926;
            }
          }
        } else {
          result[8] += -0.08036868;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += -0.102511056;
            } else {
              result[8] += 0.12082069;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[8] += -0.12737297;
            } else {
              result[8] += 0.03230247;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[8] += -0.015943935;
            } else {
              result[8] += 0.010987607;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[8] += -0.053238176;
            } else {
              result[8] += 0.0012055367;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.13341598;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          result[8] += 0.07452866;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[8] += 0.06311885;
          } else {
            result[8] += -0.026365632;
          }
        }
      } else {
        result[8] += -0.08484746;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[9] += 0.00015850342;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          result[9] += -0.023478344;
        } else {
          result[9] += -0.082189456;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[9] += 0.0006013904;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[9] += 0.022120116;
        } else {
          result[9] += 0.004763949;
        }
      }
    }
  } else {
    result[9] += -0.087023005;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[10] += -9.314907e-05;
      } else {
        result[10] += -0.11631582;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[10] += 0.0048598964;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[10] += -0.072432935;
            } else {
              result[10] += 0.002167332;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += 0.0019023436;
            } else {
              result[10] += 0.036465835;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
              result[10] += 0.00043050898;
            } else {
              result[10] += -0.08881311;
            }
          } else {
            result[10] += 0.0695834;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      result[10] += -0.07906179;
    } else {
      result[10] += -0.0061541465;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += -0.0016884507;
            } else {
              result[11] += 0.0068377242;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.0013094954;
            } else {
              result[11] += -0.0105147865;
            }
          }
        } else {
          result[11] += -0.09071682;
        }
      } else {
        result[11] += -0.0921341;
      }
    } else {
      result[11] += -0.09192659;
    }
  } else {
    result[11] += -0.09699255;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[12] += -0.0011633553;
            } else {
              result[12] += -0.08524454;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[12] += -0.036378387;
            } else {
              result[12] += -0.095038235;
            }
          }
        } else {
          result[12] += -0.13119961;
        }
      } else {
        result[12] += 0.1397995;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
        result[12] += -0.14775813;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[12] += 0.06672232;
        } else {
          result[12] += -0.013864697;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            result[12] += 0.0058362153;
          } else {
            result[12] += 0.014781292;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += 0.0015359422;
            } else {
              result[12] += 0.120873064;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[12] += -0.16762137;
            } else {
              result[12] += 0.03783734;
            }
          }
        }
      } else {
        result[12] += -0.12880556;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
        result[12] += -0.14234053;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[12] += -0.035196953;
            } else {
              result[12] += -0.10246552;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[12] += 0.0038702057;
            } else {
              result[12] += -0.10784605;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[12] += 0.013569619;
            } else {
              result[12] += 0.003778299;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[12] += -0.0018467483;
            } else {
              result[12] += -0.056657895;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.00036901774;
            } else {
              result[13] += 0.016248459;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[13] += -0.08161792;
            } else {
              result[13] += -3.2835444e-05;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            result[13] += -0.13261695;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += 0.005598714;
            } else {
              result[13] += -0.063811064;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[13] += 0.026372548;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.13371849;
            } else {
              result[13] += -0.0062346994;
            }
          }
        } else {
          result[13] += 0.026962698;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.0724954;
            } else {
              result[13] += -0.015442973;
            }
          } else {
            result[13] += 0.08713499;
          }
        } else {
          result[13] += -0.11757795;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.0028273389;
            } else {
              result[13] += -0.107099146;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[13] += 0.13571414;
            } else {
              result[13] += -5.315699e-05;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.12537417;
            } else {
              result[13] += -0.016315348;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.089388765;
            } else {
              result[13] += 0.031792935;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
      result[13] += -0.093958445;
    } else {
      result[13] += -0.01589999;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += 0.00010345001;
            } else {
              result[14] += 0.024699843;
            }
          } else {
            result[14] += -0.078456745;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[14] += -0.114752315;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += 0.09204988;
            } else {
              result[14] += -0.03747121;
            }
          }
        }
      } else {
        result[14] += -0.12135712;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
          result[14] += 0.013805198;
        } else {
          result[14] += 0.11807074;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[14] += 0.07473997;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[14] += 0.007375492;
            } else {
              result[14] += 0.07889324;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[14] += -0.11869294;
            } else {
              result[14] += -0.020594744;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.119674295;
            } else {
              result[14] += 0.02386873;
            }
          } else {
            result[14] += 0.01693417;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[14] += -0.11730303;
            } else {
              result[14] += 0.027867015;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[14] += 0.11685657;
            } else {
              result[14] += -0.043160655;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            result[14] += -0.0831194;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[14] += 0.05815909;
            } else {
              result[14] += 0.16152976;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[14] += 0.02952034;
          } else {
            result[14] += -0.12851438;
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
            result[14] += -0.08914035;
          } else {
            result[14] += -0.0022325213;
          }
        } else {
          result[14] += -0.12714022;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[14] += -0.050347593;
            } else {
              result[14] += 0.13774264;
            }
          } else {
            result[14] += -0.056718398;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
            result[14] += -0.0024819637;
          } else {
            result[14] += -0.09740961;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[0] += 0.00085881737;
            } else {
              result[0] += -0.09382898;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[0] += -0.076579794;
            } else {
              result[0] += 0.031052297;
            }
          }
        } else {
          result[0] += -0.08628639;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          result[0] += 0.08514795;
        } else {
          result[0] += -0.02849116;
        }
      }
    } else {
      result[0] += -0.0829429;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
      result[0] += 0.10546052;
    } else {
      result[0] += -0.05211828;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[1] += -0.025602179;
      } else {
        result[1] += -0.083338045;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[1] += -0.00016231684;
            } else {
              result[1] += 0.023333838;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[1] += -0.15111408;
            } else {
              result[1] += -0.043285567;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[1] += 0.08778524;
          } else {
            result[1] += 0.0004983903;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[1] += -0.04240705;
          } else {
            result[1] += -0.14953963;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
              result[1] += 0.014865656;
            } else {
              result[1] += -0.05877249;
            }
          } else {
            result[1] += 0.087415375;
          }
        }
      }
    }
  } else {
    result[1] += -0.09422416;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[2] += 0.0001261826;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
              result[2] += 0.021925315;
            } else {
              result[2] += 0.08303018;
            }
          } else {
            result[2] += -0.011985974;
          }
        } else {
          result[2] += 0.094888054;
        }
      } else {
        result[2] += -0.023244033;
      }
    }
  } else {
    result[2] += -0.102212004;
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[3] += -0.0314548;
      } else {
        result[3] += 0.038910683;
      }
    } else {
      result[3] += -0.10551554;
    }
  } else {
    result[3] += 0.031901576;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.000104410785;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[4] += 0.063154526;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[4] += -0.0075692325;
            } else {
              result[4] += 0.052840017;
            }
          } else {
            result[4] += -0.07695056;
          }
        } else {
          result[4] += 0.073710844;
        }
      }
    }
  } else {
    result[4] += -0.10238165;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[5] += 0.0002108469;
      } else {
        result[5] += -0.11209025;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
        result[5] += 0.007884592;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          result[5] += -0.0899253;
        } else {
          result[5] += 0.0031968018;
        }
      }
    }
  } else {
    result[5] += 0.06454641;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 0.00021793447;
  } else {
    result[6] += -0.10221231;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)17)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
              result[7] += -0.00025725772;
            } else {
              result[7] += 0.0068763113;
            }
          } else {
            result[7] += -0.07856507;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[7] += -0.03464862;
            } else {
              result[7] += 0.10109833;
            }
          } else {
            result[7] += -0.110073894;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)14)) {
          result[7] += 0.07499795;
        } else {
          result[7] += 0.028412096;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
        result[7] += -0.10554512;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
          result[7] += 0.06338556;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[7] += -0.155211;
            } else {
              result[7] += 0.11382326;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
              result[7] += -0.0026630529;
            } else {
              result[7] += 0.044399578;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
      result[7] += 0.0023404814;
    } else {
      result[7] += 0.085991055;
    }
  }
}


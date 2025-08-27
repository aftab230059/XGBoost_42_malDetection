
#include "header.h"

void predict_unit8(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += -0.0030471464;
            } else {
              result[1] += -0.08732396;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[1] += 0.09059493;
            } else {
              result[1] += 0.009245006;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[1] += 0.7693811;
            } else {
              result[1] += -0.003951527;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += 0.15621467;
            } else {
              result[1] += -0.0910662;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
          result[1] += -0.15815635;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[1] += 0.05071658;
            } else {
              result[1] += -0.14537035;
            }
          } else {
            result[1] += -0.16087253;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += 0.14526354;
            } else {
              result[1] += -0.14124432;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[1] += -0.1491795;
            } else {
              result[1] += 0.18034595;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
            result[1] += -0.16967985;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[1] += -0.021110691;
            } else {
              result[1] += 0.17143638;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[1] += 0.15465043;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[1] += -0.08588934;
            } else {
              result[1] += -0.00076741446;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += 0.014488447;
            } else {
              result[1] += 0.06641023;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[1] += -0.14256118;
            } else {
              result[1] += -0.0003434399;
            }
          }
        }
      }
    }
  } else {
    result[1] += -0.14689183;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += 0.0015170409;
        } else {
          result[2] += 0.0057388786;
        }
      } else {
        result[2] += -0.13769005;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.13653295;
      } else {
        result[2] += -0.07577886;
      }
    }
  } else {
    result[2] += -0.14972855;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.14885576;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[3] += 0.13877521;
            } else {
              result[3] += -0.10550766;
            }
          } else {
            result[3] += 0.14564224;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.10655744;
          } else {
            result[3] += 0.1352784;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.14465505;
        } else {
          result[3] += 0.14393444;
        }
      }
    } else {
      result[3] += -0.14742975;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.14906165;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
            result[4] += 0.082924955;
          } else {
            result[4] += -0.099944;
          }
        } else {
          result[4] += 0.17774284;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
          result[4] += -0.1148016;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
              result[4] += 0.0115367;
            } else {
              result[4] += 0.112933405;
            }
          } else {
            result[4] += -0.079900615;
          }
        }
      }
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
            result[4] += -0.019817512;
          } else {
            result[4] += 0.14887413;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
            result[4] += -0.018722074;
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
              result[4] += 0.1394679;
            } else {
              result[4] += -0.00071734685;
            }
          }
        }
      } else {
        result[4] += 0.1410243;
      }
    } else {
      result[4] += 0.14912981;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[5] += 0.0026359067;
        } else {
          result[5] += 0.0073979557;
        }
      } else {
        result[5] += -0.13264108;
      }
    } else {
      result[5] += -0.1383655;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.14970262;
      } else {
        result[5] += 0.09017937;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[5] += -0.14111511;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[5] += 0.16434126;
            } else {
              result[5] += 0.0710986;
            }
          } else {
            result[5] += -0.080417804;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[5] += 0.018409817;
            } else {
              result[5] += -0.07807027;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
              result[5] += 0.13125746;
            } else {
              result[5] += 0.029184442;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[6] += 0.0037557029;
        } else {
          result[6] += 0.10787924;
        }
      } else {
        result[6] += -0.13384856;
      }
    } else {
      result[6] += -0.13836564;
    }
  } else {
    result[6] += -0.14972855;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
              result[7] += -0.0015759631;
            } else {
              result[7] += 0.06481225;
            }
          } else {
            result[7] += -0.14567849;
          }
        } else {
          result[7] += 0.14335302;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
            result[7] += -0.14306156;
          } else {
            result[7] += 0.06214614;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[7] += -0.23687546;
            } else {
              result[7] += -0.48807538;
            }
          } else {
            result[7] += -0.12519066;
          }
        }
      }
    } else {
      result[7] += 0.14932196;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.1322637;
            } else {
              result[7] += -0.08942427;
            }
          } else {
            result[7] += 0.14967293;
          }
        } else {
          result[7] += -0.0021129253;
        }
      } else {
        result[7] += -0.09033802;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
          result[7] += -0.148514;
        } else {
          result[7] += 0.090285584;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[7] += -0.065053396;
            } else {
              result[7] += 0.15553948;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[7] += -0.15225682;
            } else {
              result[7] += 0.16317147;
            }
          }
        } else {
          result[7] += 0.14946465;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += 0.0035161853;
            } else {
              result[8] += -0.16468383;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[8] += 0.14920819;
            } else {
              result[8] += -0.17808414;
            }
          }
        } else {
          result[8] += -0.15867911;
        }
      } else {
        result[8] += 0.17034498;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          result[8] += -0.15876509;
        } else {
          result[8] += -0.21641909;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
            result[8] += 0.15685189;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[8] += -0.18303348;
            } else {
              result[8] += 0.14508152;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            result[8] += -0.15303116;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[8] += 0.15974647;
            } else {
              result[8] += 0.013308558;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.1549286;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.13812794;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[8] += 0.13672654;
          } else {
            result[8] += -0.08152871;
          }
        }
      } else {
        result[8] += -0.15281919;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[9] += 0.005697589;
      } else {
        result[9] += -0.13501103;
      }
    } else {
      result[9] += -0.13926713;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
          result[9] += -0.149301;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            result[9] += 0.06895472;
          } else {
            result[9] += -0.12812407;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)351236864)) {
            result[9] += 0.060424954;
          } else {
            result[9] += 0.14118849;
          }
        } else {
          result[9] += -0.10207782;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.12439724;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[9] += 0.051478427;
            } else {
              result[9] += 0.08022464;
            }
          } else {
            result[9] += 0.03632908;
          }
        }
      } else {
        result[9] += -0.14315589;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[10] += 0.006506217;
            } else {
              result[10] += -0.13618231;
            }
          } else {
            result[10] += -0.1393872;
          }
        } else {
          result[10] += -0.14917496;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)404894)) {
              result[10] += 0.024635836;
            } else {
              result[10] += 0.010300414;
            }
          } else {
            result[10] += -0.12349504;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[10] += -0.1437975;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[10] += -0.11459725;
            } else {
              result[10] += 0.013424493;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[10] += -0.1480078;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[10] += -0.14112137;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[10] += 0.06732955;
            } else {
              result[10] += -0.12941766;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[10] += -0.12098519;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[10] += 0.35862362;
            } else {
              result[10] += 0.1314711;
            }
          } else {
            result[10] += -0.09934331;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.14885798;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
        result[10] += 0.08740692;
      } else {
        result[10] += -0.13637999;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[11] += -0.0037717163;
            } else {
              result[11] += -0.1502063;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += 0.012023478;
            } else {
              result[11] += -0.0061097234;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
            result[11] += -0.15107504;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
              result[11] += 0.08745939;
            } else {
              result[11] += -0.012521002;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
              result[11] += 0.14160109;
            } else {
              result[11] += -0.14728032;
            }
          } else {
            result[11] += -0.17446262;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[11] += -0.8620894;
            } else {
              result[11] += -0.13867497;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[11] += 0.12231645;
            } else {
              result[11] += -0.16838832;
            }
          }
        }
      }
    } else {
      result[11] += -0.14754523;
    }
  } else {
    result[11] += -0.14897239;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[12] += -0.04750095;
            } else {
              result[12] += -0.14147069;
            }
          } else {
            result[12] += -0.1440734;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[12] += 0.005676462;
            } else {
              result[12] += -0.067969404;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[12] += 0.030263204;
            } else {
              result[12] += -0.14098437;
            }
          }
        }
      } else {
        result[12] += -0.14999887;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          result[12] += 0.15167043;
        } else {
          result[12] += -0.15470193;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[12] += 0.09436623;
            } else {
              result[12] += 0.14943032;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[12] += -0.19115408;
            } else {
              result[12] += 0.09259637;
            }
          }
        } else {
          result[12] += -0.1554969;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[12] += -0.14970905;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.14151785;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[12] += 0.23652467;
            } else {
              result[12] += 0.13827157;
            }
          } else {
            result[12] += -0.13784541;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.14272581;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
              result[12] += 0.05228595;
            } else {
              result[12] += 0.16406903;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[12] += 0.07486219;
            } else {
              result[12] += -0.12685709;
            }
          }
        }
      } else {
        result[12] += -0.14435248;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += 0.0021560716;
            } else {
              result[13] += -0.042475335;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[13] += -0.01568517;
            } else {
              result[13] += 0.2833614;
            }
          }
        } else {
          result[13] += -0.15573736;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[13] += 0.08707044;
            } else {
              result[13] += -0.027343715;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += -0.09189344;
            } else {
              result[13] += 0.052578542;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += -0.037183326;
            } else {
              result[13] += -0.13825013;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += 0.011484634;
            } else {
              result[13] += 0.15090042;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[13] += 0.13305482;
          } else {
            result[13] += -0.020803329;
          }
        } else {
          result[13] += 0.14452228;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)307)) {
            result[13] += -0.101949945;
          } else {
            result[13] += 0.02510121;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
              result[13] += 0.051175937;
            } else {
              result[13] += 0.09534455;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += -0.101483054;
            } else {
              result[13] += 0.08603302;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
      result[13] += -0.14609139;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[13] += 0.053323563;
            } else {
              result[13] += -0.10562899;
            }
          } else {
            result[13] += 0.2546561;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            result[13] += -0.11875604;
          } else {
            result[13] += 0.022653075;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
          result[13] += -0.15400732;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            result[13] += 0.23323093;
          } else {
            result[13] += -0.14106412;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += -0.00026763012;
            } else {
              result[14] += -0.1476359;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += 0.14875008;
            } else {
              result[14] += -0.123654254;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[14] += -0.20683484;
            } else {
              result[14] += -0.03217258;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[14] += 0.8068283;
            } else {
              result[14] += -0.11198925;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          result[14] += -0.14833273;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[14] += -0.10299551;
            } else {
              result[14] += -0.008205338;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += 0.16815169;
            } else {
              result[14] += 0.018667968;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[14] += 0.028073965;
            } else {
              result[14] += 0.09795708;
            }
          } else {
            result[14] += 0.118177935;
          }
        } else {
          result[14] += -0.1086238;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[14] += -0.14932933;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[14] += -0.102966614;
            } else {
              result[14] += 0.18258554;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
              result[14] += 0.0778798;
            } else {
              result[14] += -0.12645045;
            }
          } else {
            result[14] += -0.12400321;
          }
        }
      }
    }
  } else {
    result[14] += -0.1461168;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[0] += 0.0066222954;
            } else {
              result[0] += -0.13351968;
            }
          } else {
            result[0] += -0.13891704;
          }
        } else {
          result[0] += -0.14907306;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)272)) {
              result[0] += 0.025415985;
            } else {
              result[0] += -0.1866733;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
              result[0] += 0.048242338;
            } else {
              result[0] += 0.13248967;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[0] += -0.0045425612;
            } else {
              result[0] += -0.067846805;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
              result[0] += 0.088465;
            } else {
              result[0] += 0.010716561;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[0] += -0.14675623;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          result[0] += 0.24612294;
        } else {
          result[0] += -0.13670704;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      result[0] += -0.14912485;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        result[0] += -0.14417212;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[0] += 0.057347197;
            } else {
              result[0] += -0.19793089;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[0] += 0.08260833;
            } else {
              result[0] += 0.20756935;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[0] += 0.06383423;
            } else {
              result[0] += -0.12173591;
            }
          } else {
            result[0] += -0.14131713;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[1] += -0.094983585;
          } else {
            result[1] += -0.13550808;
          }
        } else {
          result[1] += -0.14007398;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += 0.0034637735;
            } else {
              result[1] += 0.02497344;
            }
          } else {
            result[1] += -0.15158132;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += -0.046442147;
            } else {
              result[1] += 0.028855568;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.14160731;
            } else {
              result[1] += -0.007512425;
            }
          }
        }
      }
    } else {
      result[1] += -0.15201354;
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.020315865;
            } else {
              result[1] += -0.06857333;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[1] += 0.20028964;
            } else {
              result[1] += -0.0061289207;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += 0.1492033;
            } else {
              result[1] += -0.0135806985;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[1] += -0.14859192;
            } else {
              result[1] += 0.20978533;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.08659001;
            } else {
              result[1] += 0.10332905;
            }
          } else {
            result[1] += -0.12524515;
          }
        } else {
          result[1] += -0.14455265;
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          result[1] += -0.15200335;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            result[1] += 0.013370132;
          } else {
            result[1] += 0.15462384;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
          result[1] += 0.17512119;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[1] += -0.10062788;
            } else {
              result[1] += -0.016910989;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[1] += 0.13196667;
            } else {
              result[1] += 0.029029645;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += 0.0013701266;
        } else {
          result[2] += 0.0055152015;
        }
      } else {
        result[2] += -0.1348884;
      }
    } else {
      result[2] += 0.13232926;
    }
  } else {
    result[2] += -0.14963439;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.1485864;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[3] += 0.13304287;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.10289036;
          } else {
            result[3] += 0.1310935;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.14370632;
        } else {
          result[3] += 0.1420986;
        }
      }
    } else {
      result[3] += -0.14677246;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.14883001;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[4] += 0.00016287479;
        } else {
          result[4] += 0.11077337;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
          result[4] += -0.10759108;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
              result[4] += 0.024677416;
            } else {
              result[4] += 0.18309489;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
              result[4] += -0.091625996;
            } else {
              result[4] += 0.07263258;
            }
          }
        }
      }
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
            result[4] += -0.017507453;
          } else {
            result[4] += 0.14626622;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
            result[4] += -0.01692686;
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
              result[4] += 0.13763855;
            } else {
              result[4] += -0.001299;
            }
          }
        }
      } else {
        result[4] += 0.13917504;
      }
    } else {
      result[4] += 0.14887798;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[5] += 0.002309771;
        } else {
          result[5] += 0.006900412;
        }
      } else {
        result[5] += -0.12806404;
      }
    } else {
      result[5] += -0.13564974;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.14960283;
      } else {
        result[5] += 0.08990253;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[5] += -0.13894029;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[5] += 0.13411245;
            } else {
              result[5] += 0.05204209;
            }
          } else {
            result[5] += 0.12482584;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
              result[5] += -0.0034309675;
            } else {
              result[5] += -0.12914038;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[5] += 0.11520764;
            } else {
              result[5] += -0.0138145415;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[6] += 0.0032383967;
        } else {
          result[6] += 0.10418323;
        }
      } else {
        result[6] += -0.12971364;
      }
    } else {
      result[6] += -0.1356499;
    }
  } else {
    result[6] += -0.14963439;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[7] += -0.0006854758;
            } else {
              result[7] += -0.14549135;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
              result[7] += -0.03656091;
            } else {
              result[7] += -0.14042765;
            }
          }
        } else {
          result[7] += 0.14997698;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[7] += -0.15207365;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
              result[7] += -0.19408725;
            } else {
              result[7] += -0.08357316;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[7] += 0.020731704;
            } else {
              result[7] += -0.003488707;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
              result[7] += -0.25974905;
            } else {
              result[7] += 0.03931672;
            }
          }
        }
      }
    } else {
      result[7] += 0.1490474;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.12828256;
            } else {
              result[7] += -0.08636323;
            }
          } else {
            result[7] += 0.14953119;
          }
        } else {
          result[7] += -0.004231228;
        }
      } else {
        result[7] += -0.08307366;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[7] += -0.14804016;
        } else {
          result[7] += -0.016542112;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[7] += -0.05529857;
            } else {
              result[7] += 0.13735186;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[7] += -0.14988929;
            } else {
              result[7] += 0.15418285;
            }
          }
        } else {
          result[7] += 0.14923525;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[8] += -0.007103843;
            } else {
              result[8] += 0.022306597;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += 0.20746997;
            } else {
              result[8] += 0.0032239428;
            }
          }
        } else {
          result[8] += -0.15774217;
        }
      } else {
        result[8] += 0.16516203;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          result[8] += -0.15723078;
        } else {
          result[8] += -0.2083638;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
            result[8] += 0.15367381;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[8] += -0.18443537;
            } else {
              result[8] += 0.1422349;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            result[8] += -0.1527303;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[8] += 0.15755685;
            } else {
              result[8] += 0.009488233;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.15400395;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.13565178;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[8] += 0.13314225;
          } else {
            result[8] += -0.07994288;
          }
        }
      } else {
        result[8] += -0.1520492;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[9] += 0.0047670756;
      } else {
        result[9] += -0.13111173;
      }
    } else {
      result[9] += -0.13673131;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
          result[9] += -0.14911501;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            result[9] += 0.061087687;
          } else {
            result[9] += -0.122407004;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)351236864)) {
            result[9] += 0.053361695;
          } else {
            result[9] += 0.13847116;
          }
        } else {
          result[9] += -0.0936616;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.12182095;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[9] += 0.03782589;
            } else {
              result[9] += 0.07178113;
            }
          } else {
            result[9] += 0.034160864;
          }
        }
      } else {
        result[9] += -0.14161244;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[10] += 0.0055121398;
            } else {
              result[10] += -0.13252924;
            }
          } else {
            result[10] += -0.13687563;
          }
        } else {
          result[10] += -0.14897822;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[10] += 0.023366094;
            } else {
              result[10] += -0.11859855;
            }
          } else {
            result[10] += 0.15002877;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            result[10] += -0.13954945;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[10] += 0.0122426115;
            } else {
              result[10] += -0.055540595;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[10] += -0.14750507;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[10] += -0.13888273;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[10] += 0.05280039;
            } else {
              result[10] += -0.12661198;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[10] += -0.117277406;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[10] += 0.26162615;
            } else {
              result[10] += 0.12673393;
            }
          } else {
            result[10] += -0.095554285;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.14858252;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          result[10] += -0.07852557;
        } else {
          result[10] += 0.15477897;
        }
      } else {
        result[10] += -0.13254769;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[11] += -0.039320312;
          } else {
            result[11] += -0.14050497;
          }
        } else {
          result[11] += -0.14308082;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += 0.0014444652;
            } else {
              result[11] += 0.019562094;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
              result[11] += -0.15071762;
            } else {
              result[11] += 0.01011819;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.12455837;
            } else {
              result[11] += -0.16359122;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
              result[11] += -0.33471853;
            } else {
              result[11] += 0.044512052;
            }
          }
        }
      }
    } else {
      result[11] += -0.14672422;
    }
  } else {
    result[11] += -0.14871724;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[12] += -0.04243352;
            } else {
              result[12] += -0.13904281;
            }
          } else {
            result[12] += -0.14255135;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
              result[12] += 0.0027134034;
            } else {
              result[12] += -0.1536141;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
              result[12] += 0.036193352;
            } else {
              result[12] += -0.06025801;
            }
          }
        }
      } else {
        result[12] += -0.14977242;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          result[12] += 0.15107273;
        } else {
          result[12] += -0.1457159;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[12] += 0.0870316;
            } else {
              result[12] += 0.14847048;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[12] += -0.18179268;
            } else {
              result[12] += 0.0844799;
            }
          }
        } else {
          result[12] += -0.15436648;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[12] += -0.14942198;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.13944943;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 0.18087618;
          } else {
            result[12] += -0.13570084;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.14112528;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.14830936;
            } else {
              result[12] += -0.14857852;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[12] += 0.17381778;
            } else {
              result[12] += -0.13279103;
            }
          }
        }
      } else {
        result[12] += -0.14250736;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.0071742446;
            } else {
              result[13] += -0.14374036;
            }
          } else {
            result[13] += 0.15915665;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1263)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[13] += -0.15056661;
            } else {
              result[13] += -0.104553394;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[13] += 0.03428096;
            } else {
              result[13] += -0.16445829;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += 0.012664622;
            } else {
              result[13] += 0.07960322;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[13] += -0.12763397;
            } else {
              result[13] += 0.1505214;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.18036513;
            } else {
              result[13] += 0.12662764;
            }
          } else {
            result[13] += -0.07798279;
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)229)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
              result[13] += 0.03514581;
            } else {
              result[13] += 0.14627087;
            }
          } else {
            result[13] += -0.0848219;
          }
        } else {
          result[13] += 0.14688194;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)307)) {
            result[13] += -0.09772912;
          } else {
            result[13] += 0.023688199;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[13] += 0.08380197;
            } else {
              result[13] += 0.035666846;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += -0.095352456;
            } else {
              result[13] += 0.08122879;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
      result[13] += -0.14514254;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          result[13] += -0.007530849;
        } else {
          result[13] += 0.1310871;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
          result[13] += -0.15625566;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            result[13] += 0.20092282;
          } else {
            result[13] += -0.13805872;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.00025096186;
            } else {
              result[14] += -0.09490097;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
              result[14] += 0.028779699;
            } else {
              result[14] += -0.00335121;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[14] += 0.023482244;
            } else {
              result[14] += -0.100883976;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
              result[14] += -0.1291694;
            } else {
              result[14] += 0.038825028;
            }
          }
        }
      } else {
        result[14] += -0.14148593;
      }
    } else {
      result[14] += -0.14221895;
    }
  } else {
    result[14] += -0.14487268;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[0] += 0.005616819;
            } else {
              result[0] += -0.12941322;
            }
          } else {
            result[0] += -0.1363799;
          }
        } else {
          result[0] += -0.14883842;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[0] += 0.022553816;
            } else {
              result[0] += 0.004312061;
            }
          } else {
            result[0] += -0.1274891;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            result[0] += -0.12697339;
          } else {
            result[0] += 0.08039902;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[0] += -0.14589559;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          result[0] += 0.2482183;
        } else {
          result[0] += -0.13344073;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      result[0] += -0.14887159;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        result[0] += -0.14329943;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[0] += 0.048308276;
            } else {
              result[0] += -0.2042759;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[0] += 0.0727477;
            } else {
              result[0] += 0.21568182;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[0] += 0.054593164;
            } else {
              result[0] += -0.116756186;
            }
          } else {
            result[0] += -0.13871786;
          }
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 0.0015178609;
            } else {
              result[1] += -0.0135339005;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[1] += 0.04496188;
            } else {
              result[1] += -0.010190837;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += 0.063970976;
            } else {
              result[1] += 0.021414455;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[1] += 0.027408917;
            } else {
              result[1] += -0.16299272;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
          result[1] += -0.15636823;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[1] += -0.14194183;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[1] += 0.10809408;
            } else {
              result[1] += -0.20709467;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[1] += -0.06587211;
          } else {
            result[1] += -0.14821744;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.17408909;
            } else {
              result[1] += -0.093300015;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
              result[1] += -0.08053361;
            } else {
              result[1] += 0.04247566;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.20949648;
            } else {
              result[1] += -0.13455616;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
              result[1] += 0.017983288;
            } else {
              result[1] += -0.096478134;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[1] += -0.15395373;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += -0.016145749;
            } else {
              result[1] += 0.072321214;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
        result[1] += -0.14338955;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
              result[1] += 0.015252505;
            } else {
              result[1] += -0.09072424;
            }
          } else {
            result[1] += 0.03926245;
          }
        } else {
          result[1] += -0.11438118;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
        result[1] += -0.13672113;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[1] += -0.100352675;
            } else {
              result[1] += 0.16811277;
            }
          } else {
            result[1] += 0.23252077;
          }
        } else {
          result[1] += -0.07821753;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += 0.0012308669;
        } else {
          result[2] += 0.0049654744;
        }
      } else {
        result[2] += -0.13168001;
      }
    } else {
      result[2] += 0.12811267;
    }
  } else {
    result[2] += -0.14952269;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.14825709;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.11773446;
          } else {
            result[3] += 0.13918485;
          }
        } else {
          result[3] += 0.14046879;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.14258902;
        } else {
          result[3] += 0.14001258;
        }
      }
    } else {
      result[3] += -0.14598137;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.14854918;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[4] += 0.11267778;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          result[4] += -0.09101237;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)24760)) {
            result[4] += 0.14263862;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[4] += -0.095405556;
            } else {
              result[4] += 0.07691254;
            }
          }
        }
      }
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
            result[4] += -0.0153658865;
          } else {
            result[4] += 0.14367895;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
            result[4] += -0.015544392;
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
              result[4] += 0.13560455;
            } else {
              result[4] += -0.0018331652;
            }
          }
        }
      } else {
        result[4] += 0.13654098;
      }
    } else {
      result[4] += 0.14853853;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[5] += 0.0020201812;
        } else {
          result[5] += 0.006289341;
        }
      } else {
        result[5] += -0.12272771;
      }
    } else {
      result[5] += -0.13251813;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.14948462;
      } else {
        result[5] += 0.08634811;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[5] += -0.13630392;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[5] += 0.06913671;
            } else {
              result[5] += -0.11654494;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[5] += 0.06497644;
            } else {
              result[5] += 0.1383246;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
              result[5] += -0.061293006;
            } else {
              result[5] += 0.016951064;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[5] += 0.45230326;
            } else {
              result[5] += -0.013345608;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[6] += 0.002790311;
        } else {
          result[6] += 0.10053184;
        }
      } else {
        result[6] += -0.1249195;
      }
    } else {
      result[6] += -0.13251832;
    }
  } else {
    result[6] += -0.1495227;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[7] += 0.0012222575;
            } else {
              result[7] += 0.14074793;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.039029688;
            } else {
              result[7] += -0.22039308;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[7] += 0.14970359;
            } else {
              result[7] += -0.09207507;
            }
          } else {
            result[7] += 0.14982982;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
          result[7] += -0.14511868;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            result[7] += 0.07395639;
          } else {
            result[7] += -0.084947996;
          }
        }
      }
    } else {
      result[7] += 0.14867586;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.12561303;
            } else {
              result[7] += -0.07803418;
            }
          } else {
            result[7] += 0.14935774;
          }
        } else {
          result[7] += -0.008755737;
        }
      } else {
        result[7] += -0.07652945;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[7] += -0.14759383;
        } else {
          result[7] += -0.020014884;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
              result[7] += -0.06008963;
            } else {
              result[7] += 0.13090855;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += 0.1832097;
            } else {
              result[7] += -0.035294328;
            }
          }
        } else {
          result[7] += 0.14893974;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[8] += -0.0060237055;
            } else {
              result[8] += 0.016801346;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += 0.18859395;
            } else {
              result[8] += 0.0025636384;
            }
          }
        } else {
          result[8] += -0.15730268;
        }
      } else {
        result[8] += 0.15978527;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          result[8] += -0.155784;
        } else {
          result[8] += -0.20134817;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
              result[8] += 0.15356869;
            } else {
              result[8] += 0.12226925;
            }
          } else {
            result[8] += -0.07563449;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            result[8] += -0.15270098;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[8] += 0.15549433;
            } else {
              result[8] += 0.012257971;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.15317431;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.13247454;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[8] += 0.12921427;
          } else {
            result[8] += -0.08226068;
          }
        }
      } else {
        result[8] += -0.15078454;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[9] += 0.003989909;
      } else {
        result[9] += -0.12656008;
      }
    } else {
      result[9] += -0.13379365;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
          result[9] += -0.14886093;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            result[9] += 0.056447078;
          } else {
            result[9] += -0.115831204;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)351236864)) {
            result[9] += 0.04992446;
          } else {
            result[9] += 0.13588522;
          }
        } else {
          result[9] += -0.085450396;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.118622206;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[9] += 0.032101154;
            } else {
              result[9] += 0.066453576;
            }
          } else {
            result[9] += 0.031200806;
          }
        }
      } else {
        result[9] += -0.13972262;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[10] += 0.004671965;
            } else {
              result[10] += -0.12823537;
            }
          } else {
            result[10] += -0.13396427;
          }
        } else {
          result[10] += -0.14872807;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[10] += 0.022431996;
            } else {
              result[10] += 0.118953936;
            }
          } else {
            result[10] += -0.10406254;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            result[10] += -0.13806492;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
              result[10] += 0.009992064;
            } else {
              result[10] += -0.1181736;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[10] += -0.14690453;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[10] += -0.13604456;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[10] += 0.04179845;
            } else {
              result[10] += -0.12336121;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[10] += -0.11311062;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[10] += 0.17717075;
          } else {
            result[10] += -0.08556853;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.14825574;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          result[10] += -0.07725099;
        } else {
          result[10] += 0.11375965;
        }
      } else {
        result[10] += -0.12793006;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
              result[11] += -0.05456231;
            } else {
              result[11] += 0.0020035408;
            }
          } else {
            result[11] += -0.17850602;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[11] += -0.15093504;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += -0.0020686411;
            } else {
              result[11] += 0.050682228;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += -0.04845032;
            } else {
              result[11] += 0.017604837;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.085884266;
            } else {
              result[11] += 0.02847957;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += -0.0037688885;
            } else {
              result[11] += -0.19353181;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.024503984;
            } else {
              result[11] += -0.060638566;
            }
          }
        }
      }
    } else {
      result[11] += -0.15084152;
    }
  } else {
    result[11] += -0.14841238;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
              result[12] += 0.004150016;
            } else {
              result[12] += -0.099736385;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[12] += -0.10643954;
            } else {
              result[12] += 0.12036115;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[12] += 0.028980568;
            } else {
              result[12] += -0.08127069;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[12] += -0.027806276;
            } else {
              result[12] += -0.13790424;
            }
          }
        }
      } else {
        result[12] += -0.14949092;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          result[12] += 0.15052897;
        } else {
          result[12] += -0.13745774;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[12] += 0.07994974;
            } else {
              result[12] += 0.14765038;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[12] += -0.17359269;
            } else {
              result[12] += 0.07768327;
            }
          }
        } else {
          result[12] += -0.15283531;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[12] += -0.14911668;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.13711163;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 0.16843307;
          } else {
            result[12] += -0.13243227;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
            result[12] += -0.14809854;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[12] += 0.14201112;
            } else {
              result[12] += -0.11820868;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[12] += 0.16812764;
          } else {
            result[12] += -0.12818316;
          }
        }
      } else {
        result[12] += -0.1401497;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[13] += -0.030751754;
          } else {
            result[13] += -0.14119256;
          }
        } else {
          result[13] += -0.14287692;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
              result[13] += 0.0062766173;
            } else {
              result[13] += -0.09278534;
            }
          } else {
            result[13] += -0.15485045;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.05890119;
            } else {
              result[13] += -0.007601382;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[13] += -0.07700072;
            } else {
              result[13] += 0.0401106;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[13] += 0.49762818;
            } else {
              result[13] += 0.11079455;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
              result[13] += -0.07143824;
            } else {
              result[13] += 0.22053245;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
              result[13] += -0.1868998;
            } else {
              result[13] += -0.0102507565;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
              result[13] += 0.1369352;
            } else {
              result[13] += 0.024399064;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            result[13] += -0.10542431;
          } else {
            result[13] += 0.24971864;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            result[13] += -0.14692618;
          } else {
            result[13] += 0.05705991;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
      result[13] += -0.14411344;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          result[13] += 0.023976965;
        } else {
          result[13] += 0.09533862;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
          result[13] += -0.15500075;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            result[13] += 0.17151839;
          } else {
            result[13] += -0.13433288;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[14] += 0.0027406793;
            } else {
              result[14] += -0.07267844;
            }
          } else {
            result[14] += -0.14900789;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[14] += 0.0335683;
            } else {
              result[14] += 0.17703174;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.1548368;
            } else {
              result[14] += 0.07542984;
            }
          }
        }
      } else {
        result[14] += -0.1471123;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[14] += -0.087831676;
        } else {
          result[14] += 0.15116863;
        }
      } else {
        result[14] += -0.11612887;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.13210614;
            } else {
              result[14] += -0.0127079245;
            }
          } else {
            result[14] += -0.14090702;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            result[14] += 0.13224824;
          } else {
            result[14] += -0.10601347;
          }
        }
      } else {
        result[14] += -1.2626892;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        result[14] += 0.07514952;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[14] += -0.16050485;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[14] += -0.05784368;
            } else {
              result[14] += 0.15438685;
            }
          } else {
            result[14] += -0.14096715;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[0] += 0.0049611004;
            } else {
              result[0] += -0.12467668;
            }
          } else {
            result[0] += -0.13345227;
          }
        } else {
          result[0] += -0.14859651;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[0] += 0.021264497;
            } else {
              result[0] += 0.0041215774;
            }
          } else {
            result[0] += -0.1240611;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            result[0] += -0.12431704;
          } else {
            result[0] += 0.074293226;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[0] += -0.14486168;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            result[0] += 0.34061316;
          } else {
            result[0] += 0.10225616;
          }
        } else {
          result[0] += -0.12987073;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      result[0] += -0.1485358;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        result[0] += -0.14224204;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[0] += -0.09950869;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[0] += 0.026135117;
            } else {
              result[0] += 0.12880531;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[0] += 0.04565502;
            } else {
              result[0] += -0.11174835;
            }
          } else {
            result[0] += -0.13539034;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += 0.001827047;
            } else {
              result[1] += -0.021865746;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.13160695;
            } else {
              result[1] += 0.03694523;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += -0.06878956;
            } else {
              result[1] += -0.10036168;
            }
          } else {
            result[1] += 0.13873993;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += 0.061676875;
            } else {
              result[1] += 0.1208234;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[1] += 0.26975778;
            } else {
              result[1] += -0.0919029;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[1] += -0.03367328;
            } else {
              result[1] += 0.10409923;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.019231712;
            } else {
              result[1] += 0.07195738;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        result[1] += -0.15089147;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.019176753;
            } else {
              result[1] += -0.15582998;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[1] += 0.16330369;
            } else {
              result[1] += -0.0036359632;
            }
          }
        } else {
          result[1] += 0.15652025;
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += 0.040996503;
            } else {
              result[1] += 0.005552611;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[1] += -0.15599379;
            } else {
              result[1] += -0.014765833;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[1] += 0.079402685;
            } else {
              result[1] += -0.14757687;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.04198428;
            } else {
              result[1] += -0.055656407;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[1] += -0.038146794;
            } else {
              result[1] += 0.019253785;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.19038153;
            } else {
              result[1] += -0.1238616;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[1] += -0.15131015;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[1] += -0.28210968;
            } else {
              result[1] += 0.027303062;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          result[1] += -0.15060665;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            result[1] += -0.013180852;
          } else {
            result[1] += 0.12814575;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
          result[1] += 0.16910425;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[1] += -0.02053722;
            } else {
              result[1] += -0.11480352;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[1] += 0.12005342;
            } else {
              result[1] += 0.025888216;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += 0.0012865474;
        } else {
          result[2] += 0.0047412748;
        }
      } else {
        result[2] += -0.12806398;
      }
    } else {
      result[2] += 0.12406341;
    }
  } else {
    result[2] += -0.14939494;
  }
}


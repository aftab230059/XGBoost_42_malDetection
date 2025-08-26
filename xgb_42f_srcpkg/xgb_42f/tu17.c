
#include "header.h"

void predict_unit17(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)62964)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1675)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1368)) {
              result[4] += -0.0016987536;
            } else {
              result[4] += -0.04810817;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)31100)) {
              result[4] += 0.0064484435;
            } else {
              result[4] += 0.012414172;
            }
          }
        } else {
          result[4] += -0.085892946;
        }
      } else {
        result[4] += -0.09286046;
      }
    } else {
      result[4] += 0.13046645;
    }
  } else {
    result[4] += -0.13693574;
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)44233)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)42674)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1280068736)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1190531200)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)33651)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)31122)) {
              result[5] += 0.00018808417;
            } else {
              result[5] += 0.0873658;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
              result[5] += 0.042113137;
            } else {
              result[5] += -0.14112559;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)50334)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[5] += 0.16865501;
            } else {
              result[5] += -0.13758548;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)52948)) {
              result[5] += 0.17665118;
            } else {
              result[5] += -0.16227387;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)37225)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1631175168)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)63923)) {
              result[5] += -0.16074957;
            } else {
              result[5] += 0.10426431;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
              result[5] += 0.031097315;
            } else {
              result[5] += -0.066414185;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1826348032)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)39016)) {
              result[5] += 0.10988163;
            } else {
              result[5] += -0.03776765;
            }
          } else {
            result[5] += -0.17312014;
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1923645952)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
            result[5] += -0.1586907;
          } else {
            result[5] += -0.1924517;
          }
        } else {
          result[5] += -0.032785464;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)18524)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
            result[5] += -0.08964586;
          } else {
            result[5] += 0.11964204;
          }
        } else {
          result[5] += -0.13947979;
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)45411)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[5] += -0.054433495;
            } else {
              result[5] += -0.1734917;
            }
          } else {
            result[5] += -0.39678818;
          }
        } else {
          result[5] += -0.15288025;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
          result[5] += 0.30232197;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)11064)) {
            result[5] += -0.1535896;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)984983168)) {
              result[5] += -0.20554505;
            } else {
              result[5] += 0.14241883;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)47199)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          result[5] += -0.1696277;
        } else {
          result[5] += -0.014963299;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1664345728)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1647413248)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1386276096)) {
              result[5] += 0.020724036;
            } else {
              result[5] += -0.14817096;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)52948)) {
              result[5] += -0.12233353;
            } else {
              result[5] += 0.22057202;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2054161792)) {
            result[5] += -0.15801358;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)37736)) {
              result[5] += 0.086158216;
            } else {
              result[5] += -0.12255108;
            }
          }
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          result[6] += 0.0004466429;
        } else {
          result[6] += -0.08356942;
        }
      } else {
        result[6] += -0.092361525;
      }
    } else {
      result[6] += 0.09596835;
    }
  } else {
    result[6] += -0.13692887;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
      if ( (data[31].missing != -1) && (data[31].fvalue < (float)16)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
              result[7] += -0.0005816317;
            } else {
              result[7] += 0.027001176;
            }
          } else {
            result[7] += -0.04626705;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)10)) {
              result[7] += -0.14008304;
            } else {
              result[7] += -0.056691624;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
              result[7] += 0.10347254;
            } else {
              result[7] += -0.019751942;
            }
          }
        }
      } else {
        result[7] += 0.13451271;
      }
    } else {
      result[7] += 0.13633886;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)38506)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)8771)) {
          result[7] += -0.08620475;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)10064)) {
            result[7] += 0.027727777;
          } else {
            result[7] += -0.06315699;
          }
        }
      } else {
        result[7] += -0.096481405;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
        result[7] += 0.13973424;
      } else {
        result[7] += -0.13304645;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)86)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[8] += 0.0001430837;
            } else {
              result[8] += -0.15038255;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
              result[8] += 0.14763203;
            } else {
              result[8] += -0.037238985;
            }
          }
        } else {
          result[8] += -0.14577274;
        }
      } else {
        result[8] += -0.15160424;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
          result[8] += 0.15225895;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)24600)) {
            result[8] += 0.16871536;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
              result[8] += -0.041858304;
            } else {
              result[8] += 0.13633394;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
            result[8] += -0.1560085;
          } else {
            result[8] += 0.103705525;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)223)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
              result[8] += 0.1564755;
            } else {
              result[8] += -0.054007277;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
              result[8] += -0.15340084;
            } else {
              result[8] += 0.028082026;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
      result[8] += -0.14798744;
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)261)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          result[8] += 0.1247915;
        } else {
          result[8] += -0.12228516;
        }
      } else {
        result[8] += -0.1294188;
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
              result[9] += 0.0043982086;
            } else {
              result[9] += -0.0022207138;
            }
          } else {
            result[9] += -0.13714036;
          }
        } else {
          result[9] += -0.13951688;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)311377)) {
          result[9] += -0.14964673;
        } else {
          result[9] += 0.11141277;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
        result[9] += 0.15041581;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)883932608)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
              result[9] += 0.089533255;
            } else {
              result[9] += -0.15128578;
            }
          } else {
            result[9] += 0.1206347;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)17307)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)51103944)) {
              result[9] += -0.060472377;
            } else {
              result[9] += 0.1517507;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
              result[9] += -0.11965055;
            } else {
              result[9] += 0.008974025;
            }
          }
        }
      }
    }
  } else {
    result[9] += -0.14129384;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)320)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)919)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4051475456)) {
              result[10] += -0.0001603021;
            } else {
              result[10] += 0.032273106;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60670)) {
              result[10] += -0.14532954;
            } else {
              result[10] += 0.14052965;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)249908816)) {
            result[10] += -0.14338121;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)280175584)) {
              result[10] += 0.24073271;
            } else {
              result[10] += 0.010611618;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)14653)) {
          result[10] += -0.14381553;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2013966080)) {
            result[10] += -0.104180254;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2020837248)) {
              result[10] += 0.11507988;
            } else {
              result[10] += -0.09250691;
            }
          }
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)477)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1030112576)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)403)) {
            result[10] += 0.047723174;
          } else {
            result[10] += 0.13930959;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2013966080)) {
            result[10] += -0.13660148;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2020837248)) {
              result[10] += 0.1427933;
            } else {
              result[10] += -0.10386799;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
          result[10] += -0.119656734;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2013966080)) {
            result[10] += -0.07294845;
          } else {
            result[10] += 0.03762986;
          }
        }
      }
    }
  } else {
    result[10] += -0.13115375;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)40340)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)39950)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[11] += 0.0011680844;
            } else {
              result[11] += -0.008206838;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)323)) {
              result[11] += -0.014588795;
            } else {
              result[11] += -0.08196512;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)41328)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[11] += -0.0023122493;
            } else {
              result[11] += 0.11235372;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3088273664)) {
              result[11] += -0.0065350886;
            } else {
              result[11] += 0.014824478;
            }
          }
        }
      } else {
        result[11] += -0.13595879;
      }
    } else {
      result[11] += -0.13637726;
    }
  } else {
    result[11] += -0.13670824;
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)108)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[12] += -0.00032511295;
            } else {
              result[12] += -0.13189963;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
              result[12] += 0.14598261;
            } else {
              result[12] += 0.0014368601;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[12] += 0.048125323;
            } else {
              result[12] += -0.10885572;
            }
          } else {
            result[12] += -0.14690147;
          }
        }
      } else {
        result[12] += -0.14536351;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)121)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)5141)) {
            result[12] += 0.104463495;
          } else {
            result[12] += -0.10764352;
          }
        } else {
          result[12] += 0.14176896;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
          result[12] += -0.18238328;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
            result[12] += 0.14513342;
          } else {
            result[12] += -0.10601662;
          }
        }
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)15842)) {
        result[12] += -0.14527756;
      } else {
        result[12] += 0.0797528;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)129921)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)16021)) {
              result[12] += 0.116989605;
            } else {
              result[12] += 0.0012951482;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)39638)) {
              result[12] += -0.082704306;
            } else {
              result[12] += 0.07760209;
            }
          }
        } else {
          result[12] += -0.08130092;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)17502)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2692215808)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1664345728)) {
              result[12] += -0.14591393;
            } else {
              result[12] += 0.07367527;
            }
          } else {
            result[12] += -0.17139167;
          }
        } else {
          result[12] += 0.07942653;
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2182743296)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1826348032)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1482411776)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1371489792)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3101)) {
              result[13] += -0.01766787;
            } else {
              result[13] += 0.04167057;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49952)) {
              result[13] += 0.38722357;
            } else {
              result[13] += -0.031369347;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1680521472)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)321)) {
              result[13] += -0.16786604;
            } else {
              result[13] += 0.0053557903;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
              result[13] += -0.12058125;
            } else {
              result[13] += 0.1705932;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1860617216)) {
          result[13] += 0.4908731;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2054161792)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1957388416)) {
              result[13] += 0.07225855;
            } else {
              result[13] += -0.10403756;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[13] += 0.20577188;
            } else {
              result[13] += 0.012529087;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2592396800)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)350)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48516)) {
            result[13] += -0.12736312;
          } else {
            result[13] += -0.20275773;
          }
        } else {
          result[13] += 0.0019203357;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2621401856)) {
            result[13] += 0.20223638;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)321)) {
              result[13] += -0.090820774;
            } else {
              result[13] += 0.036050808;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4103136768)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)50334)) {
              result[13] += 0.08692935;
            } else {
              result[13] += -0.057222743;
            }
          } else {
            result[13] += -0.17140423;
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)60176)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1062497984)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1030112576)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)934930688)) {
              result[13] += 0.0006427977;
            } else {
              result[13] += 0.08234726;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)39950)) {
              result[13] += -0.14624672;
            } else {
              result[13] += -0.01213625;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)386)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)5141)) {
              result[13] += 0.1488752;
            } else {
              result[13] += -0.14491452;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)22343)) {
              result[13] += 0.14759019;
            } else {
              result[13] += -0.050588686;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)59916)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)20861)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51042)) {
              result[13] += 0.02443528;
            } else {
              result[13] += -0.10126505;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)23372)) {
              result[13] += -0.052239716;
            } else {
              result[13] += 0.005026782;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3911013376)) {
              result[13] += 0.13217962;
            } else {
              result[13] += 0.4253289;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)316)) {
              result[13] += -0.15571238;
            } else {
              result[13] += 0.025289278;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)4191465472)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)50828)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += -0.0039679953;
            } else {
              result[13] += -0.07644445;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3687526656)) {
              result[13] += -0.0061076325;
            } else {
              result[13] += 0.20307902;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63241)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)62970)) {
              result[13] += -0.13140073;
            } else {
              result[13] += 0.1748851;
            }
          } else {
            result[13] += -0.16284451;
          }
        }
      } else {
        result[13] += -0.1549681;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)486)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)441)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
              result[14] += 0.00010329394;
            } else {
              result[14] += -0.14406589;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[14] += -0.15209177;
            } else {
              result[14] += 0.019627353;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[14] += 0.06853424;
            } else {
              result[14] += -0.146555;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
              result[14] += 0.2516969;
            } else {
              result[14] += 0.124291435;
            }
          }
        }
      } else {
        result[14] += -0.14711435;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          result[14] += 0.14841798;
        } else {
          result[14] += -0.09814155;
        }
      } else {
        result[14] += -0.14312884;
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)43719)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)121)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)13475)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1295143936)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1190531200)) {
              result[14] += -0.0825408;
            } else {
              result[14] += 0.14577873;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)12187)) {
              result[14] += -0.1746242;
            } else {
              result[14] += 0.067058764;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3088273664)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)109)) {
              result[14] += -0.14723931;
            } else {
              result[14] += -0.46804324;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[14] += -0.13996358;
            } else {
              result[14] += 0.1082948;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)150)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3512011520)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
              result[14] += 0.1447292;
            } else {
              result[14] += -0.116580755;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3859072512)) {
              result[14] += -0.25632566;
            } else {
              result[14] += 0.12352007;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
              result[14] += -0.14177282;
            } else {
              result[14] += 0.15378019;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)52390)) {
              result[14] += -0.12119268;
            } else {
              result[14] += 0.07157088;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2621401856)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)109)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[14] += -0.13685538;
            } else {
              result[14] += -0.2446225;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
              result[14] += 0.113628455;
            } else {
              result[14] += -0.06283274;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)62186)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
              result[14] += 0.06149575;
            } else {
              result[14] += -0.14107548;
            }
          } else {
            result[14] += -0.80019045;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)54812)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)52771)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48703)) {
              result[14] += -0.018858295;
            } else {
              result[14] += 0.13913864;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
              result[14] += 0.01601952;
            } else {
              result[14] += 0.4106252;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)705)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[14] += -0.075546876;
            } else {
              result[14] += 0.086876385;
            }
          } else {
            result[14] += -0.114053704;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)29299)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)28765)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)27491)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)25409)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)25147)) {
              result[0] += -0.0011301936;
            } else {
              result[0] += 0.12146128;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)26416)) {
              result[0] += -0.07629797;
            } else {
              result[0] += -0.009767966;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)28010)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[0] += -0.095003836;
            } else {
              result[0] += 0.13398395;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
              result[0] += -0.018665195;
            } else {
              result[0] += 0.14666826;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)29022)) {
            result[0] += -0.16872802;
          } else {
            result[0] += -0.11728611;
          }
        } else {
          result[0] += 0.04896228;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
        result[0] += -0.14607453;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)33113)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)31122)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)30078)) {
              result[0] += 0.13221107;
            } else {
              result[0] += -0.05651717;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)32132)) {
              result[0] += 0.13146433;
            } else {
              result[0] += 0.07578592;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)33651)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
              result[0] += -0.08992005;
            } else {
              result[0] += 0.11231219;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)35706)) {
              result[0] += 0.047291774;
            } else {
              result[0] += 0.0017225528;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1062497984)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)39016)) {
        result[0] += -0.15346348;
      } else {
        result[0] += 0.08978653;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1309093120)) {
          result[0] += 0.1505203;
        } else {
          result[0] += 0.03086241;
        }
      } else {
        result[0] += -0.11729363;
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          result[1] += -0.0677542;
        } else {
          result[1] += -0.12691972;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
          result[1] += -0.03786768;
        } else {
          result[1] += -0.01460871;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)40794)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)39062)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)38174)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33712)) {
              result[1] += -0.0041788174;
            } else {
              result[1] += 0.029408047;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
              result[1] += -0.039286412;
            } else {
              result[1] += -0.20890595;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)813467392)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)528995584)) {
              result[1] += 0.03726534;
            } else {
              result[1] += -0.18891738;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4162893824)) {
              result[1] += 0.04707133;
            } else {
              result[1] += 0.18952106;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)41328)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)442)) {
              result[1] += -0.16200444;
            } else {
              result[1] += -0.24715538;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[1] += 0.19187099;
            } else {
              result[1] += -0.12537219;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
              result[1] += -0.0066435128;
            } else {
              result[1] += 0.14562762;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
              result[1] += -0.031329494;
            } else {
              result[1] += -0.17475751;
            }
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)24872)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)24342)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)442)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20861)) {
              result[1] += 0.037381187;
            } else {
              result[1] += 0.0011596115;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)478)) {
              result[1] += 0.22484004;
            } else {
              result[1] += 0.028450364;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
              result[1] += -0.046546172;
            } else {
              result[1] += 0.13248922;
            }
          } else {
            result[1] += 0.75263566;
          }
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4162893824)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)984983168)) {
              result[1] += 0.047686737;
            } else {
              result[1] += -0.04974081;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)24600)) {
              result[1] += 0.6875494;
            } else {
              result[1] += 0.06720716;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)39508)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3427947776)) {
              result[1] += 0.2779008;
            } else {
              result[1] += -0.08956139;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
              result[1] += -0.07602211;
            } else {
              result[1] += 0.24994703;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)25655)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1045826752)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)87)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)25409)) {
              result[1] += -0.024177598;
            } else {
              result[1] += -0.07238381;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[1] += 0.5978589;
            } else {
              result[1] += 0.000344728;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1112952576)) {
            result[1] += 0.41271245;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
              result[1] += -0.0017592226;
            } else {
              result[1] += 0.2588218;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)328)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)321)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)37360)) {
              result[1] += -0.0007221323;
            } else {
              result[1] += 0.0056082234;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)544740288)) {
              result[1] += -0.16189194;
            } else {
              result[1] += 0.11170352;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)44832)) {
              result[1] += -0.09941893;
            } else {
              result[1] += 0.013362963;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2882424576)) {
              result[1] += 0.12333765;
            } else {
              result[1] += 0.043469302;
            }
          }
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)19951)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)19293)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)18755)) {
              result[2] += 0.00017109427;
            } else {
              result[2] += 0.18142113;
            }
          } else {
            result[2] += -0.1079897;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
            result[2] += -0.14229739;
          } else {
            result[2] += 5.1979234e-05;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)20521)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            result[2] += 0.28864267;
          } else {
            result[2] += -0.09850883;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)21308)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)20857)) {
              result[2] += -0.036780994;
            } else {
              result[2] += -0.13107875;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)24830)) {
              result[2] += 0.049091626;
            } else {
              result[2] += -0.0024870355;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)3172)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2256)) {
            result[2] += 0.009190622;
          } else {
            result[2] += 0.03579999;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)22390)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)20941)) {
              result[2] += 0.0078515345;
            } else {
              result[2] += -0.041381553;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)23233)) {
              result[2] += 0.14213176;
            } else {
              result[2] += 0.009152189;
            }
          }
        }
      } else {
        result[2] += 0.107663095;
      }
    }
  } else {
    result[2] += -0.13517717;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.13823356;
    } else {
      result[3] += -0.007828984;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
      result[3] += 0.07742789;
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
        result[3] += -0.08524782;
      } else {
        result[3] += 0.02115333;
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)62964)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1060)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)33014)) {
              result[4] += -0.0019193697;
            } else {
              result[4] += -0.017946929;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)22390)) {
              result[4] += 0.01453862;
            } else {
              result[4] += 0.007858805;
            }
          }
        } else {
          result[4] += -0.08249788;
        }
      } else {
        result[4] += -0.08956195;
      }
    } else {
      result[4] += 0.12819098;
    }
  } else {
    result[4] += -0.13508928;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)43994)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)22071)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)21099)) {
              result[5] += -0.0001775357;
            } else {
              result[5] += 0.10659819;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)33651)) {
              result[5] += -0.16110647;
            } else {
              result[5] += -0.012866354;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1826348032)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)7751)) {
              result[5] += 0.06648871;
            } else {
              result[5] += -0.0011493951;
            }
          } else {
            result[5] += -0.1604234;
          }
        }
      } else {
        result[5] += -0.14620288;
      }
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
        result[5] += -0.14654203;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
              result[5] += 0.1517306;
            } else {
              result[5] += 0.087880105;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48966)) {
              result[5] += -0.19840313;
            } else {
              result[5] += 0.09426399;
            }
          }
        } else {
          result[5] += 0.15361749;
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)51858)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)150343280)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)20366)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)7187)) {
              result[5] += 0.10003633;
            } else {
              result[5] += -0.15284744;
            }
          } else {
            result[5] += 0.23263507;
          }
        } else {
          result[5] += -0.16353506;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1190531200)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
              result[5] += -0.13203043;
            } else {
              result[5] += 0.16991487;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
              result[5] += -0.3436771;
            } else {
              result[5] += -0.1650778;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1206383360)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)18597)) {
              result[5] += 0.1985775;
            } else {
              result[5] += -0.15648815;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)44471)) {
              result[5] += -0.17139915;
            } else {
              result[5] += 0.049303573;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)52390)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1730588800)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)331876768)) {
            result[5] += -0.16003734;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)30078)) {
              result[5] += 0.15977013;
            } else {
              result[5] += 0.039373584;
            }
          }
        } else {
          result[5] += -0.15956837;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)33361)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
            result[5] += -0.16502059;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)25655)) {
              result[5] += 0.043701988;
            } else {
              result[5] += -0.1375963;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)33651)) {
            result[5] += 0.19899552;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)592172608)) {
              result[5] += -0.13789557;
            } else {
              result[5] += 0.0339882;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          result[6] += 0.00047967175;
        } else {
          result[6] += -0.080438904;
        }
      } else {
        result[6] += -0.08907118;
      }
    } else {
      result[6] += 0.0922415;
    }
  } else {
    result[6] += -0.13508162;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)5)) {
              result[7] += -0.00023463665;
            } else {
              result[7] += 0.06733441;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[7] += -0.13189928;
            } else {
              result[7] += 0.061697744;
            }
          }
        } else {
          result[7] += 0.13375467;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)38506)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8771)) {
              result[7] += -0.08115874;
            } else {
              result[7] += -0.05282283;
            }
          } else {
            result[7] += -0.09127174;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
            result[7] += 0.13813205;
          } else {
            result[7] += -0.13084987;
          }
        }
      }
    } else {
      result[7] += 0.13618365;
    }
  } else {
    result[7] += -0.12922919;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)221)) {
              result[8] += -4.4506312e-05;
            } else {
              result[8] += 0.111402854;
            }
          } else {
            result[8] += -0.14482827;
          }
        } else {
          result[8] += -0.15104836;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
            result[8] += 0.15137523;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)24600)) {
              result[8] += 0.16503257;
            } else {
              result[8] += 0.0387072;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
              result[8] += -0.15510423;
            } else {
              result[8] += 0.09759925;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)223)) {
              result[8] += 0.14589481;
            } else {
              result[8] += 0.0038526992;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
        result[8] += -0.14715894;
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)261)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
            result[8] += 0.11979533;
          } else {
            result[8] += -0.11849976;
          }
        } else {
          result[8] += -0.12672396;
        }
      }
    }
  } else {
    result[8] += -0.14179601;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)7751)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)49720)) {
              result[9] += 0.00047486267;
            } else {
              result[9] += -0.088834845;
            }
          } else {
            result[9] += 0.15929009;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)8581)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)25409)) {
              result[9] += -0.13957246;
            } else {
              result[9] += 0.20336738;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)22857)) {
              result[9] += 0.21028428;
            } else {
              result[9] += -0.14557356;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43562)) {
            result[9] += -0.14926828;
          } else {
            result[9] += 0.107270114;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)382589280)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[9] += -0.025713895;
            } else {
              result[9] += 0.156435;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)2904)) {
              result[9] += 0.06579383;
            } else {
              result[9] += -0.007899432;
            }
          }
        }
      }
    } else {
      result[9] += -0.13938926;
    }
  } else {
    result[9] += -0.13997783;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1236219776)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1220404864)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1159754368)) {
              result[10] += 0.00031080804;
            } else {
              result[10] += -0.2571295;
            }
          } else {
            result[10] += 0.16902982;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1599453184)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53033)) {
              result[10] += -0.08849523;
            } else {
              result[10] += -0.27246693;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1647413248)) {
              result[10] += 0.10964766;
            } else {
              result[10] += -0.01853274;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)183891488)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)51103944)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)35344664)) {
              result[10] += -0.0009843525;
            } else {
              result[10] += 0.19054888;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
              result[10] += -0.15006113;
            } else {
              result[10] += 0.07397081;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)65016)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63732)) {
              result[10] += 0.010536648;
            } else {
              result[10] += -0.11902174;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)950050240)) {
              result[10] += -0.102710016;
            } else {
              result[10] += 0.17541365;
            }
          }
        }
      }
    } else {
      result[10] += -0.12862764;
    }
  } else {
    result[10] += -0.13021033;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)442)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)441)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)440)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)368)) {
              result[11] += 0.00073697575;
            } else {
              result[11] += -0.021008318;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)365605792)) {
              result[11] += -0.111862935;
            } else {
              result[11] += 0.14614041;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)232647088)) {
            result[11] += 0.08435814;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)40854)) {
              result[11] += -0.08447505;
            } else {
              result[11] += -0.23959616;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)44913)) {
              result[11] += 0.06204721;
            } else {
              result[11] += -0.034486476;
            }
          } else {
            result[11] += -0.19787191;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
              result[11] += 0.1483604;
            } else {
              result[11] += -0.0921005;
            }
          } else {
            result[11] += -0.11488835;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
        result[11] += -0.15502602;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)19087)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3859072512)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1599453184)) {
              result[11] += 0.067568935;
            } else {
              result[11] += -0.101108;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3911013376)) {
              result[11] += 0.3812379;
            } else {
              result[11] += -0.05224926;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)37736)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60425)) {
              result[11] += -0.08455277;
            } else {
              result[11] += 0.50102055;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2136418816)) {
              result[11] += -0.15535225;
            } else {
              result[11] += -0.08593971;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
      result[11] += -0.14776766;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)647)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)113590144)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)11619)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)41748)) {
              result[11] += 0.16210526;
            } else {
              result[11] += -0.082316175;
            }
          } else {
            result[11] += 0.20773757;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)150343280)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)35936)) {
              result[11] += -0.28206268;
            } else {
              result[11] += -0.09584175;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)348961088)) {
              result[11] += 0.12581271;
            } else {
              result[11] += 0.023632033;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)3365)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1582615552)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1112952576)) {
              result[11] += 0.10169646;
            } else {
              result[11] += -0.20310815;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)40340)) {
              result[11] += 0.06441553;
            } else {
              result[11] += 0.2565245;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1977933952)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1877709568)) {
              result[11] += 0.0021204052;
            } else {
              result[11] += 0.21588558;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3512011520)) {
              result[11] += -0.051291328;
            } else {
              result[11] += 0.016253639;
            }
          }
        }
      }
    }
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)152)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.90231198072)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)34500)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3832654848)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2248229888)) {
              result[12] += -0.0026724732;
            } else {
              result[12] += 0.043572992;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4243005184)) {
              result[12] += -0.07423391;
            } else {
              result[12] += 0.12686619;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)32643)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33712)) {
              result[12] += 0.050793454;
            } else {
              result[12] += -0.031976204;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4217347584)) {
              result[12] += 0.054298557;
            } else {
              result[12] += -0.16751176;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56386)) {
              result[12] += 0.0068313708;
            } else {
              result[12] += -0.1050495;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
              result[12] += -0.15065509;
            } else {
              result[12] += -0.100034475;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6929)) {
              result[12] += 0.07529598;
            } else {
              result[12] += -0.11809254;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
              result[12] += 0.1152498;
            } else {
              result[12] += 0.0033050126;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)59186)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)41134)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)52390)) {
              result[12] += 0.0042038616;
            } else {
              result[12] += 0.07550682;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)42171)) {
              result[12] += -0.0641066;
            } else {
              result[12] += -0.0023961593;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)59916)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1599453184)) {
              result[12] += -0.01375926;
            } else {
              result[12] += 0.2067956;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2567035392)) {
              result[12] += 0.030144393;
            } else {
              result[12] += -0.0204544;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
            result[12] += -0.14651775;
          } else {
            result[12] += 0.038625076;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
            result[12] += 0.13734144;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[12] += -0.1210938;
            } else {
              result[12] += 0.053429503;
            }
          }
        }
      }
    }
  } else {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1532925184)) {
        result[12] += -0.0823506;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)54038)) {
          result[12] += 0.1008234;
        } else {
          result[12] += 0.02634338;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)862)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
          result[12] += -0.14423528;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3118221568)) {
            result[12] += 0.04548443;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
              result[12] += -0.034685075;
            } else {
              result[12] += -0.15923546;
            }
          }
        }
      } else {
        result[12] += 0.011356637;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)356)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
              result[13] += 0.0008928483;
            } else {
              result[13] += -0.085587576;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)403)) {
              result[13] += 0.046491925;
            } else {
              result[13] += -0.0027745783;
            }
          }
        } else {
          result[13] += -0.13030648;
        }
      } else {
        result[13] += -0.13022487;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2371757312)) {
        result[13] += -0.08466513;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2384619520)) {
          result[13] += 0.45895395;
        } else {
          result[13] += -0.07742066;
        }
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
      result[13] += -0.13362533;
    } else {
      result[13] += 0.0036780734;
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
              result[14] += 8.938735e-05;
            } else {
              result[14] += 0.088905774;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
              result[14] += -0.122356735;
            } else {
              result[14] += 0.04355724;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
            result[14] += -0.14947093;
          } else {
            result[14] += -0.04214742;
          }
        }
      } else {
        result[14] += -0.14851144;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)108)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)30583)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)30343)) {
              result[14] += 0.11854663;
            } else {
              result[14] += -0.11978305;
            }
          } else {
            result[14] += 0.16426855;
          }
        } else {
          result[14] += -0.21251091;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)121)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1614904576)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1339201280)) {
              result[14] += -0.115074515;
            } else {
              result[14] += -0.5336463;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1680521472)) {
              result[14] += 0.119793296;
            } else {
              result[14] += -0.073635824;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
              result[14] += 0.10480627;
            } else {
              result[14] += -0.13895166;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)318)) {
              result[14] += -0.13789786;
            } else {
              result[14] += 0.077933;
            }
          }
        }
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)441)) {
      result[14] += -0.14895236;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
            result[14] += -0.14479072;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[14] += 0.14436032;
            } else {
              result[14] += 0.023657525;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)5661)) {
              result[14] += 0.30790704;
            } else {
              result[14] += 0.17242369;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
              result[14] += 0.13867128;
            } else {
              result[14] += -0.10981425;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)311)) {
            result[14] += -0.14764616;
          } else {
            result[14] += -0.023977922;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
              result[14] += 0.08554574;
            } else {
              result[14] += -0.11474351;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
              result[14] += 0.16378948;
            } else {
              result[14] += -0.08827489;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)4)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)54038)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)50734)) {
              result[0] += 0.0012369831;
            } else {
              result[0] += -0.04693438;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56138)) {
              result[0] += 0.10463106;
            } else {
              result[0] += 0.00013893642;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)420)) {
              result[0] += -0.14454767;
            } else {
              result[0] += 0.023919625;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
              result[0] += 0.074606866;
            } else {
              result[0] += -0.012977523;
            }
          }
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          result[0] += -0.13631116;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2011381248)) {
            result[0] += 0.14259742;
          } else {
            result[0] += -0.0022973623;
          }
        }
      }
    } else {
      result[0] += -0.13286176;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1062497984)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)39016)) {
        result[0] += -0.15053894;
      } else {
        result[0] += 0.071938656;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1309093120)) {
          result[0] += 0.14099765;
        } else {
          result[0] += 0.03020343;
        }
      } else {
        result[0] += -0.114250086;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)60440)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60210)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60024)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59886)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59630)) {
              result[1] += -0.00023648223;
            } else {
              result[1] += 0.047763664;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)62970)) {
              result[1] += -0.14949577;
            } else {
              result[1] += 0.2251399;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)695816320)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)215557952)) {
              result[1] += -0.048075497;
            } else {
              result[1] += 0.49320215;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2744264704)) {
              result[1] += 0.06660977;
            } else {
              result[1] += -0.11136881;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)10064)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)7995)) {
            result[1] += -0.1348047;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1977933952)) {
              result[1] += -0.0864654;
            } else {
              result[1] += 0.34489182;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
            result[1] += -0.15323281;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)57416)) {
              result[1] += 0.1513234;
            } else {
              result[1] += -0.13577685;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)50198)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3626729728)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1295143936)) {
              result[1] += 0.117830224;
            } else {
              result[1] += -0.094850294;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
              result[1] += 0.72197074;
            } else {
              result[1] += -0.10763475;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1112952576)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)59669)) {
              result[1] += 0.12436789;
            } else {
              result[1] += -0.124962725;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1777797376)) {
              result[1] += 1.2394801;
            } else {
              result[1] += 0.2741098;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)9555)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)5405)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60694)) {
              result[1] += 0.05036887;
            } else {
              result[1] += -0.13734294;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2677389824)) {
              result[1] += 0.8379551;
            } else {
              result[1] += -0.09893186;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)45676)) {
              result[1] += 0.21284923;
            } else {
              result[1] += -0.08664137;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)59916)) {
              result[1] += -0.043108094;
            } else {
              result[1] += 0.0792042;
            }
          }
        }
      }
    }
  } else {
    result[1] += -0.13985427;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)4057)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)41643)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)40892)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)40682)) {
              result[2] += -0.001531992;
            } else {
              result[2] += 0.17781736;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)41361)) {
              result[2] += -0.1104779;
            } else {
              result[2] += -0.016786197;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)41991)) {
            result[2] += 0.15674023;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += 0.012076576;
            } else {
              result[2] += -0.050788734;
            }
          }
        }
      } else {
        result[2] += -0.09470521;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)10755)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)9790)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)8891)) {
              result[2] += 0.020717679;
            } else {
              result[2] += -0.058446392;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)10433)) {
              result[2] += 0.111929365;
            } else {
              result[2] += 0.029656721;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)12683)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)12366)) {
              result[2] += 0.010346215;
            } else {
              result[2] += -0.09306416;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)13257)) {
              result[2] += 0.07035941;
            } else {
              result[2] += 0.00829203;
            }
          }
        }
      } else {
        result[2] += 0.10234212;
      }
    }
  } else {
    result[2] += -0.13314185;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.13658144;
    } else {
      result[3] += -0.0068603703;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
        result[3] += 0.08404584;
      } else {
        result[3] += -0.012667959;
      }
    } else {
      result[3] += -0.07558011;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)6065)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)10755)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)9790)) {
              result[4] += 0.0009520415;
            } else {
              result[4] += -0.06523459;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)12683)) {
              result[4] += 0.05007252;
            } else {
              result[4] += 0.009113966;
            }
          }
        } else {
          result[4] += -0.07923761;
        }
      } else {
        result[4] += -0.08630083;
      }
    } else {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)62964)) {
        result[4] += 0.045603797;
      } else {
        result[4] += 0.1257176;
      }
    }
  } else {
    result[4] += -0.1330446;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1992729472)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1942640640)) {
              result[5] += -7.074118e-05;
            } else {
              result[5] += 0.06538007;
            }
          } else {
            result[5] += -0.14565788;
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            result[5] += -0.14588876;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
              result[5] += 0.15094945;
            } else {
              result[5] += 0.043409113;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)51858)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)47457)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)44471)) {
              result[5] += -0.06481291;
            } else {
              result[5] += 0.094175905;
            }
          } else {
            result[5] += -0.1661748;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)331876768)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
              result[5] += -0.15609464;
            } else {
              result[5] += -0.050143275;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)348961088)) {
              result[5] += 0.16100425;
            } else {
              result[5] += 0.011707618;
            }
          }
        }
      }
    } else {
      result[5] += -0.14561372;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)749577344)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)38752)) {
        result[5] += 0.1515158;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          result[5] += -0.1120541;
        } else {
          result[5] += 0.12653835;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
        result[5] += -0.14635313;
      } else {
        result[5] += 0.11518024;
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
          result[6] += 0.0004004987;
        } else {
          result[6] += -0.07901874;
        }
      } else {
        result[6] += -0.08582057;
      }
    } else {
      result[6] += 0.088532954;
    }
  } else {
    result[6] += -0.13303615;
  }
  if ( (data[31].missing != -1) && (data[31].fvalue < (float)16)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59506)) {
              result[7] += 0.00085101736;
            } else {
              result[7] += -0.013858133;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)984983168)) {
              result[7] += 0.1364105;
            } else {
              result[7] += 0.009836051;
            }
          }
        } else {
          result[7] += 0.13350148;
        }
      } else {
        result[7] += -0.12668298;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)10)) {
          result[7] += -0.13832122;
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)35)) {
            result[7] += 0.048424345;
          } else {
            result[7] += -0.10122834;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
          result[7] += 0.07959596;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1482411776)) {
            result[7] += -0.049470257;
          } else {
            result[7] += 0.01178007;
          }
        }
      }
    }
  } else {
    result[7] += 0.13137822;
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)86)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[8] += -0.00034373006;
            } else {
              result[8] += -0.14825755;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
              result[8] += 0.044088498;
            } else {
              result[8] += -0.06698094;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[8] += 0.14919694;
            } else {
              result[8] += -0.10006323;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)29825)) {
              result[8] += -0.062300507;
            } else {
              result[8] += 0.027476318;
            }
          }
        }
      } else {
        result[8] += -0.14972551;
      }
    } else {
      result[8] += 0.14488252;
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)221)) {
      result[8] += -0.14776507;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)224)) {
        result[8] += 0.13967909;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)37)) {
            result[8] += -0.15614042;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)39)) {
              result[8] += 0.13243747;
            } else {
              result[8] += -0.09483784;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)432)) {
            result[8] += 0.1257908;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)223)) {
              result[8] += 0.057522785;
            } else {
              result[8] += -0.1369788;
            }
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)64759)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)61435)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)61194)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)57897)) {
              result[9] += 0.00021617043;
            } else {
              result[9] += 0.13748637;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
              result[9] += -0.17313871;
            } else {
              result[9] += 0.120489806;
            }
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            result[9] += -0.12020182;
          } else {
            result[9] += 0.15289998;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)544740288)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
            result[9] += -0.17600982;
          } else {
            result[9] += 0.11193651;
          }
        } else {
          result[9] += 0.16783702;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[9] += -0.07925527;
      } else {
        result[9] += 0.14688915;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)311377)) {
      result[9] += -0.14450186;
    } else {
      result[9] += 0.10216733;
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)320)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)442)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[10] += 7.7618555e-05;
            } else {
              result[10] += -0.14192958;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[10] += 0.00830237;
            } else {
              result[10] += 0.14939919;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)14653)) {
            result[10] += -0.14146729;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2013966080)) {
              result[10] += -0.09213993;
            } else {
              result[10] += 0.038803022;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2020837248)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2013966080)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1030112576)) {
              result[10] += 0.112406366;
            } else {
              result[10] += -0.13488339;
            }
          } else {
            result[10] += 0.14162587;
          }
        } else {
          result[10] += -0.119625844;
        }
      }
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)24)) {
        result[10] += -0.1314755;
      } else {
        result[10] += 0.03372472;
      }
    }
  } else {
    result[10] += -0.12840082;
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)1)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1557)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)527)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2829588992)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)432921696)) {
              result[11] += -0.009204359;
            } else {
              result[11] += 0.11775035;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3088273664)) {
              result[11] += -0.37471458;
            } else {
              result[11] += -0.04342355;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3626729728)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2039111168)) {
              result[11] += -0.03133781;
            } else {
              result[11] += -0.15040146;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3859072512)) {
              result[11] += 0.22277443;
            } else {
              result[11] += -0.12545696;
            }
          }
        }
      } else {
        result[11] += 0.15373406;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)1822)) {
            result[11] += 0.06324431;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)9555)) {
              result[11] += -0.011732275;
            } else {
              result[11] += 0.00019019653;
            }
          }
        } else {
          result[11] += -0.15114494;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)6690)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)6428)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2078)) {
              result[11] += -0.059841074;
            } else {
              result[11] += 0.02941855;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3512011520)) {
              result[11] += 0.21585779;
            } else {
              result[11] += -0.06840962;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)25655)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
              result[11] += -0.005928868;
            } else {
              result[11] += -0.07114862;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3999892736)) {
              result[11] += 0.009505624;
            } else {
              result[11] += -0.034609236;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2221068800)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2136418816)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)527)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1250292736)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)167486704)) {
              result[11] += -0.09978188;
            } else {
              result[11] += 0.034993507;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1877709568)) {
              result[11] += -0.14076799;
            } else {
              result[11] += 0.09534442;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)1307)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1942640640)) {
              result[11] += 0.08378939;
            } else {
              result[11] += -0.10582591;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1112952576)) {
              result[11] += 0.00022171573;
            } else {
              result[11] += 0.0099234115;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)61435)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)12452)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8251)) {
              result[11] += 0.06334694;
            } else {
              result[11] += -0.20854317;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)35427)) {
              result[11] += 0.09993533;
            } else {
              result[11] += -0.009288394;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2209388032)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63476)) {
              result[11] += 0.38560522;
            } else {
              result[11] += 0.1100908;
            }
          } else {
            result[11] += -0.20514604;
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2772094208)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)39062)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)5661)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[11] += 0.018132472;
            } else {
              result[11] += 0.17539285;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)40854)) {
              result[11] += -0.020234764;
            } else {
              result[11] += 0.006571014;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)42630)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2078)) {
              result[11] += -0.25606525;
            } else {
              result[11] += -0.06271616;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)442)) {
              result[11] += -0.04158333;
            } else {
              result[11] += 0.094853945;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)38174)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)54038)) {
              result[11] += -0.0016075536;
            } else {
              result[11] += 0.018629918;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
              result[11] += -0.17213383;
            } else {
              result[11] += -0.028214969;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)38644)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2078)) {
              result[11] += -0.26560152;
            } else {
              result[11] += 0.1778063;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2829588992)) {
              result[11] += 0.1398002;
            } else {
              result[11] += 0.0044355453;
            }
          }
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)4191465472)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)4024162560)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3314336000)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3284568832)) {
              result[12] += -0.0012092578;
            } else {
              result[12] += -0.059650213;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3369854464)) {
              result[12] += 0.052584223;
            } else {
              result[12] += 0.007394288;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63732)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60160)) {
              result[12] += -0.058905922;
            } else {
              result[12] += 0.08961117;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
              result[12] += 0.08585002;
            } else {
              result[12] += 0.3926261;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)2078)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)527)) {
            result[12] += -0.14021519;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[12] += 0.3860801;
            } else {
              result[12] += 0.19169733;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)3365)) {
            result[12] += -0.20632227;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
              result[12] += 0.041407794;
            } else {
              result[12] += -0.004203113;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)50461)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)49475)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)9301)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[12] += 0.20238073;
            } else {
              result[12] += -0.2196035;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
              result[12] += -0.069730975;
            } else {
              result[12] += 0.04723546;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4243005184)) {
            result[12] += 0.08638443;
          } else {
            result[12] += 0.6279901;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)63732)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)51238)) {
              result[12] += -0.25603318;
            } else {
              result[12] += -0.15504576;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4217347584)) {
              result[12] += -0.14536378;
            } else {
              result[12] += 0.20970339;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64250)) {
              result[12] += 0.10889511;
            } else {
              result[12] += 0.4200798;
            }
          } else {
            result[12] += -0.15289891;
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)2078)) {
      result[12] += 0.33313572;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)7187)) {
        result[12] += -0.13934623;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)18352)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)11088)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8771)) {
              result[12] += 0.29327774;
            } else {
              result[12] += -0.11962284;
            }
          } else {
            result[12] += 0.30969375;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)50198)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)32643)) {
              result[12] += 0.036990717;
            } else {
              result[12] += -0.09955532;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53768)) {
              result[12] += 0.31776854;
            } else {
              result[12] += 0.056147244;
            }
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)9027)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)7446)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)6929)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)50334)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)50108)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2487559424)) {
              result[13] += 0.0015389096;
            } else {
              result[13] += -0.035182267;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
              result[13] += 0.14608625;
            } else {
              result[13] += -0.13477236;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2829588992)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
              result[13] += -0.15976368;
            } else {
              result[13] += -0.026584618;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3314336000)) {
              result[13] += 0.14891677;
            } else {
              result[13] += -0.15507159;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)49952)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)695816320)) {
              result[13] += -0.024940938;
            } else {
              result[13] += 0.14769891;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)7187)) {
              result[13] += 0.061168768;
            } else {
              result[13] += -0.21167298;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)50476)) {
            result[13] += 0.31361398;
          } else {
            result[13] += -0.09780947;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)7708)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[13] += -0.14025612;
            } else {
              result[13] += -0.21778825;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)592172608)) {
              result[13] += -0.12259764;
            } else {
              result[13] += 0.07527756;
            }
          }
        } else {
          result[13] += -0.029940099;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3626729728)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1777797376)) {
              result[13] += -0.023255184;
            } else {
              result[13] += -0.10058129;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3714831616)) {
              result[13] += 0.39884755;
            } else {
              result[13] += -0.033721026;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1386276096)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[13] += 0.33483282;
            } else {
              result[13] += 0.113999255;
            }
          } else {
            result[13] += -0.0049341563;
          }
        }
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)940)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)862)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)440)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)705)) {
              result[13] += 0.0029321732;
            } else {
              result[13] += -0.14587112;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
              result[13] += -0.14541635;
            } else {
              result[13] += 0.1343307;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)14490)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1698013184)) {
              result[13] += 0.020614706;
            } else {
              result[13] += 0.1504142;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)615)) {
              result[13] += 0.00047558532;
            } else {
              result[13] += 0.09666646;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)16803)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)12452)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)11356)) {
              result[13] += 0.15766458;
            } else {
              result[13] += -0.12583548;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[13] += 0.37143528;
            } else {
              result[13] += 0.07115619;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[13] += 0.007900183;
            } else {
              result[13] += 0.15248847;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
              result[13] += -0.13141456;
            } else {
              result[13] += 0.08361544;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)13219)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[13] += 0.15968719;
            } else {
              result[13] += -0.105937876;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)6869)) {
              result[13] += -0.15096426;
            } else {
              result[13] += -0.039425064;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)23106)) {
              result[13] += -0.15468477;
            } else {
              result[13] += -0.014926265;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
              result[13] += 0.14252694;
            } else {
              result[13] += -0.0235914;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
            result[13] += 0.0477712;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2100655232)) {
              result[13] += -0.027714757;
            } else {
              result[13] += -0.11628023;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
            result[13] += 0.14352249;
          } else {
            result[13] += -0.03421943;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[14] += 0.00020445805;
            } else {
              result[14] += 0.054448545;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
              result[14] += -0.14881632;
            } else {
              result[14] += -0.0042671724;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1250292736)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[14] += -0.12849703;
            } else {
              result[14] += -0.453641;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)44471)) {
              result[14] += -0.06144024;
            } else {
              result[14] += 0.10905329;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)544740288)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)398755392)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
              result[14] += -0.039247412;
            } else {
              result[14] += 0.13791499;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
              result[14] += -0.3277777;
            } else {
              result[14] += -0.17196758;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)9301)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)5661)) {
              result[14] += 0.023898976;
            } else {
              result[14] += -0.28435427;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15468)) {
              result[14] += 0.13276388;
            } else {
              result[14] += 0.03704302;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)61435)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
              result[14] += -0.15090518;
            } else {
              result[14] += -0.079301745;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61678)) {
              result[14] += 0.42930752;
            } else {
              result[14] += -0.14530052;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)46186)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[14] += -0.14374217;
            } else {
              result[14] += 0.18928567;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46443)) {
              result[14] += 1.1221029;
            } else {
              result[14] += -0.11843069;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)35306)) {
            result[14] += -0.101834565;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)49210)) {
              result[14] += 0.027177364;
            } else {
              result[14] += 0.21845558;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)52948)) {
            result[14] += -0.14125884;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
              result[14] += 0.14891231;
            } else {
              result[14] += -0.12010338;
            }
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)527)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)528995584)) {
        result[14] += -0.2608543;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60440)) {
          result[14] += 0.17165124;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60694)) {
            result[14] += -0.24072479;
          } else {
            result[14] += 0.17728014;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)5661)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)5405)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
              result[14] += -0.029336253;
            } else {
              result[14] += -0.19440697;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4385)) {
              result[14] += -0.037064053;
            } else {
              result[14] += 0.18520844;
            }
          }
        } else {
          result[14] += -0.29264346;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)7708)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)133638360)) {
              result[14] += -0.28396034;
            } else {
              result[14] += 0.089231774;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3144361216)) {
              result[14] += -0.2653579;
            } else {
              result[14] += 0.11094635;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)7995)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59378)) {
              result[14] += 0.19821718;
            } else {
              result[14] += -0.23415259;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8251)) {
              result[14] += 0.15958764;
            } else {
              result[14] += 0.0053343354;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)10064)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)9301)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)749577344)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)544740288)) {
              result[0] += -0.00038476646;
            } else {
              result[0] += 0.13946687;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1206383360)) {
              result[0] += -0.13565822;
            } else {
              result[0] += 0.025971247;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)9555)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[0] += -0.20993343;
            } else {
              result[0] += 0.088735715;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)9820)) {
              result[0] += -0.0064457688;
            } else {
              result[0] += -0.17502913;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
          result[0] += -0.14728989;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)11088)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)10315)) {
              result[0] += 0.027523095;
            } else {
              result[0] += 0.14121674;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)11619)) {
              result[0] += -0.09734043;
            } else {
              result[0] += 0.0060472083;
            }
          }
        }
      }
    } else {
      result[0] += -0.13117303;
    }
  } else {
    result[0] += -0.13191353;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)16531)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)14490)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)232647088)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)13961)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)133638360)) {
              result[1] += -0.0016889775;
            } else {
              result[1] += 0.10858451;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
              result[1] += 0.055071443;
            } else {
              result[1] += 0.22498928;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)365605792)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)37360)) {
              result[1] += -0.026822561;
            } else {
              result[1] += -0.12660177;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)13961)) {
              result[1] += -0.0032798727;
            } else {
              result[1] += -0.07058052;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)34500)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)328)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2956528384)) {
              result[1] += -0.028085029;
            } else {
              result[1] += -0.12398049;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3172840704)) {
              result[1] += -0.06610626;
            } else {
              result[1] += 0.40771836;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)44832)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
              result[1] += 0.057143606;
            } else {
              result[1] += -0.08845393;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3687526656)) {
              result[1] += -0.06678934;
            } else {
              result[1] += 0.19834842;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)64759)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)58400)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)52771)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4103136768)) {
              result[1] += 0.0016529317;
            } else {
              result[1] += 0.028141046;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)55789)) {
              result[1] += -0.009878855;
            } else {
              result[1] += -0.06589983;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60440)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2984166400)) {
              result[1] += 0.010490167;
            } else {
              result[1] += -0.01821227;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3598538240)) {
              result[1] += 0.039625853;
            } else {
              result[1] += 0.7311734;
            }
          }
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3966758144)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
              result[1] += -0.013564103;
            } else {
              result[1] += -0.22161034;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)386)) {
              result[1] += 0.16884996;
            } else {
              result[1] += -0.15460446;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1811010176)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)662398464)) {
              result[1] += -0.14590478;
            } else {
              result[1] += 0.11348222;
            }
          } else {
            result[1] += -0.15901597;
          }
        }
      }
    }
  } else {
    result[1] += -0.13759111;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)42608)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)37429)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)29481)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)23587)) {
              result[2] += 0.0060244114;
            } else {
              result[2] += -0.047607366;
            }
          } else {
            result[2] += 0.025055164;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)40395)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)40191)) {
              result[2] += -0.06789222;
            } else {
              result[2] += -0.12855212;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)41223)) {
              result[2] += 0.10591911;
            } else {
              result[2] += -0.05563835;
            }
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)52145)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)51388)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)50272)) {
              result[2] += 0.043463692;
            } else {
              result[2] += -0.04054164;
            }
          } else {
            result[2] += 0.22508831;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)55824)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)53284)) {
              result[2] += 0.015854176;
            } else {
              result[2] += -0.08201522;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)59958)) {
              result[2] += 0.059686355;
            } else {
              result[2] += -0.0019883155;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)44853)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)35051)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)28195)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)23202)) {
              result[2] += 0.00302036;
            } else {
              result[2] += 0.12023888;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)30864)) {
              result[2] += -0.089185506;
            } else {
              result[2] += -0.0010331733;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)36659)) {
            result[2] += 0.65735185;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37177)) {
              result[2] += -0.077570595;
            } else {
              result[2] += 0.08732499;
            }
          }
        }
      } else {
        result[2] += -0.122653045;
      }
    }
  } else {
    result[2] += -0.13094428;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.13476543;
    } else {
      result[3] += -0.005997635;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
      result[3] += 0.09756449;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
        result[3] += -0.09933506;
      } else {
        result[3] += 0.07030534;
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1675)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1368)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1060)) {
              result[4] += -0.0031620965;
            } else {
              result[4] += 0.0325421;
            }
          } else {
            result[4] += -0.046288442;
          }
        } else {
          result[4] += -0.083114594;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)49564)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)48082)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)47005)) {
              result[4] += 0.011239068;
            } else {
              result[4] += -0.035355628;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)48635)) {
              result[4] += 0.07843943;
            } else {
              result[4] += 0.032407865;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)50483)) {
            result[4] += -0.106772244;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)51298)) {
              result[4] += 0.12238412;
            } else {
              result[4] += 0.0065171695;
            }
          }
        }
      }
    } else {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)62964)) {
        result[4] += 0.04755154;
      } else {
        result[4] += 0.12298227;
      }
    }
  } else {
    result[4] += -0.13083775;
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)43994)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)37473)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)37225)) {
              result[5] += -0.00025818986;
            } else {
              result[5] += 0.18877213;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53520)) {
              result[5] += -0.16057816;
            } else {
              result[5] += 0.04105607;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1130557440)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1112952576)) {
              result[5] += 0.024703065;
            } else {
              result[5] += 0.20089258;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)38506)) {
              result[5] += -0.13982052;
            } else {
              result[5] += 0.030683506;
            }
          }
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          result[5] += -0.14393209;
        } else {
          result[5] += 0.15195885;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)51858)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)18352)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)331876768)) {
              result[5] += 0.060867958;
            } else {
              result[5] += -0.1604124;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
              result[5] += -0.15239221;
            } else {
              result[5] += 0.18308641;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1371489792)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
              result[5] += -0.29887384;
            } else {
              result[5] += -0.16954201;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)44471)) {
              result[5] += -0.16913693;
            } else {
              result[5] += 0.09525394;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)3615)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            result[5] += -0.011402311;
          } else {
            result[5] += -0.16246289;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
              result[5] += -0.0921506;
            } else {
              result[5] += 0.16961548;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)12452)) {
              result[5] += -0.11755909;
            } else {
              result[5] += 0.018950094;
            }
          }
        }
      }
    }
  } else {
    result[5] += -0.14345424;
  }
}


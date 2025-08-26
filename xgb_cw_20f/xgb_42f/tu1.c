
#include "header.h"

void predict_unit1(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.15391243;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.2332092;
      } else {
        result[2] += -0.15330988;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)41676)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)41154)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)786)) {
            result[2] += 0.041087016;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)24122)) {
              result[2] += 0.19289702;
            } else {
              result[2] += 0.15956046;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)41406)) {
            result[2] += -0.15643209;
          } else {
            result[2] += 0.11119791;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)47877)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)44766)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)44284)) {
              result[2] += 0.2489819;
            } else {
              result[2] += -0.02159665;
            }
          } else {
            result[2] += 0.3125944;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)51430)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += 0.098534144;
            } else {
              result[2] += -0.09214772;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)65281)) {
              result[2] += 0.20474006;
            } else {
              result[2] += 0.03468427;
            }
          }
        }
      }
    } else {
      result[2] += 0.22604592;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
          result[3] += -0.15388241;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            result[3] += -0.15308276;
          } else {
            result[3] += 0.24065588;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
          result[3] += -0.15366578;
        } else {
          result[3] += 0.22922553;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.15384698;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          result[3] += 0.23035765;
        } else {
          result[3] += -0.14709741;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      result[3] += -0.1533818;
    } else {
      result[3] += 0.22581153;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    result[4] += -0.15390666;
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.2267988;
    } else {
      result[4] += -0.15186352;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[5] += -0.13366272;
            } else {
              result[5] += -0.15361184;
            }
          } else {
            result[5] += -0.15392834;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            result[5] += -0.15374228;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[5] += -0.116803974;
            } else {
              result[5] += -0.15333758;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[5] += -0.11364058;
        } else {
          result[5] += -0.06716249;
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)24370)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)21231)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[5] += 0.20211595;
            } else {
              result[5] += 0.1417632;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[5] += 0.10078313;
            } else {
              result[5] += -0.1157639;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)30791)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)30252)) {
              result[5] += 0.24011223;
            } else {
              result[5] += 0.45302147;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)31803)) {
              result[5] += -0.0045776214;
            } else {
              result[5] += 0.17779094;
            }
          }
        }
      } else {
        result[5] += -0.1536302;
      }
    }
  } else {
    result[5] += 0.3646318;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[6] += 0.018928219;
            } else {
              result[6] += -0.1560431;
            }
          } else {
            result[6] += -0.15500842;
          }
        } else {
          result[6] += -0.1536048;
        }
      } else {
        result[6] += -0.1536403;
      }
    } else {
      result[6] += -0.15391862;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[6] += 0.25867555;
    } else {
      result[6] += -0.15184554;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[7] += 0.20622434;
            } else {
              result[7] += -0.15359853;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
              result[7] += -0.13110629;
            } else {
              result[7] += 0.25148124;
            }
          }
        } else {
          result[7] += -0.1540462;
        }
      } else {
        result[7] += 0.2267456;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[7] += 0.1637557;
      } else {
        result[7] += 0.12292245;
      }
    }
  } else {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[7] += 0.22815086;
            } else {
              result[7] += -0.15369451;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[7] += -0.18843418;
            } else {
              result[7] += 0.2188992;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[7] += -0.15770686;
          } else {
            result[7] += -0.20202331;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          result[7] += -0.19256987;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[7] += 0.21422364;
            } else {
              result[7] += 0.13479397;
            }
          } else {
            result[7] += 0.2343908;
          }
        }
      }
    } else {
      result[7] += -0.15381198;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        result[8] += -0.15254462;
      } else {
        result[8] += -0.13894565;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
              result[8] += 0.14141867;
            } else {
              result[8] += 0.37434125;
            }
          } else {
            result[8] += -0.1574713;
          }
        } else {
          result[8] += -0.15432452;
        }
      } else {
        result[8] += -0.15400697;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[8] += -0.1538912;
            } else {
              result[8] += -0.13249521;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += 0.22043844;
            } else {
              result[8] += -0.13329746;
            }
          }
        } else {
          result[8] += -0.15370414;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[8] += 0.13553749;
            } else {
              result[8] += 0.3953143;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[8] += 0.15790132;
            } else {
              result[8] += 0.2499553;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
              result[8] += 0.004549082;
            } else {
              result[8] += -0.039538365;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[8] += -0.10836877;
            } else {
              result[8] += -0.15387756;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += 0.22093616;
            } else {
              result[8] += -0.15716228;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.2978735;
            } else {
              result[8] += 0.19185454;
            }
          }
        } else {
          result[8] += -0.15592006;
        }
      } else {
        result[8] += -0.15383047;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[9] += -0.11457951;
            } else {
              result[9] += -0.1538434;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
              result[9] += -0.15393037;
            } else {
              result[9] += -0.13776441;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.30207127;
            } else {
              result[9] += -0.15585491;
            }
          } else {
            result[9] += -0.15363084;
          }
        }
      } else {
        result[9] += 0.14385515;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[9] += -0.15523005;
          } else {
            result[9] += 0.23127793;
          }
        } else {
          result[9] += -0.15281424;
        }
      } else {
        result[9] += -0.15379241;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[9] += 0.22595318;
      } else {
        result[9] += -0.1512757;
      }
    } else {
      result[9] += -0.15353481;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[10] += -0.13648345;
            } else {
              result[10] += -0.15401557;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
              result[10] += 0.13732003;
            } else {
              result[10] += -0.13938688;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[10] += 0.01409385;
          } else {
            result[10] += 0.0985302;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
            result[10] += 0.22722839;
          } else {
            result[10] += -0.10970359;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            result[10] += -0.15363726;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
              result[10] += 0.29908255;
            } else {
              result[10] += -0.1403414;
            }
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[10] += -0.15025938;
            } else {
              result[10] += 0.35040638;
            }
          } else {
            result[10] += -0.15359105;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[10] += 0.22559454;
          } else {
            result[10] += -0.13206941;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[10] += -0.14695252;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[10] += 1.4371736;
          } else {
            result[10] += -0.1449581;
          }
        }
      }
    }
  } else {
    result[10] += -0.15382904;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[11] += -0.1527304;
          } else {
            result[11] += -0.14302596;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += 0.09193373;
            } else {
              result[11] += 0.19234408;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += -0.28205085;
            } else {
              result[11] += -0.15393767;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[11] += -0.15375125;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[11] += -0.15395306;
          } else {
            result[11] += -0.17408796;
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.22148891;
            } else {
              result[11] += 0.091949694;
            }
          } else {
            result[11] += -0.15265833;
          }
        } else {
          result[11] += -0.15559667;
        }
      } else {
        result[11] += -0.15388572;
      }
    }
  } else {
    result[11] += -0.15380965;
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[12] += -0.15311998;
            } else {
              result[12] += -0.07221868;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[12] += 0.27582875;
            } else {
              result[12] += -0.103044264;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.0867689;
            } else {
              result[12] += -0.11171035;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[12] += -0.15890206;
            } else {
              result[12] += 0.23424192;
            }
          }
        }
      } else {
        result[12] += -0.15361609;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
              result[12] += 0.21458364;
            } else {
              result[12] += -0.15191495;
            }
          } else {
            result[12] += -0.15658252;
          }
        } else {
          result[12] += -0.15333936;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += -0.15440837;
            } else {
              result[12] += 0.29574114;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[12] += -0.11529652;
            } else {
              result[12] += -0.15371343;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            result[12] += -0.15571019;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[12] += 0.23964588;
            } else {
              result[12] += -0.12243111;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)62466)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)61450)) {
              result[12] += 0.034147467;
            } else {
              result[12] += 0.100455694;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62732)) {
              result[12] += -0.11183601;
            } else {
              result[12] += 0.013247736;
            }
          }
        } else {
          result[12] += -0.15365146;
        }
      } else {
        result[12] += -0.15383613;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[12] += 0.27519265;
      } else {
        result[12] += -0.15023038;
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += -0.13694407;
            } else {
              result[13] += -0.15389529;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[13] += -0.078610934;
            } else {
              result[13] += 0.12609534;
            }
          }
        } else {
          result[13] += -0.1538481;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            result[13] += -0.15366662;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12324)) {
              result[13] += -0.11048364;
            } else {
              result[13] += 0.21437283;
            }
          }
        } else {
          result[13] += 0.28653318;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[13] += 0.08594037;
            } else {
              result[13] += -0.13734527;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[13] += 0.19127148;
            } else {
              result[13] += -0.15867461;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[13] += 0.20437177;
            } else {
              result[13] += -0.2191134;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.4070759;
            } else {
              result[13] += -0.15753056;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)663824320)) {
              result[13] += 0.03237606;
            } else {
              result[13] += -0.15333134;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[13] += -0.122516215;
            } else {
              result[13] += 0.32834536;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[13] += -0.14990982;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1535688832)) {
              result[13] += 0.58633566;
            } else {
              result[13] += 0.23838083;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1415)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[13] += 0.22866453;
            } else {
              result[13] += -0.14888038;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += 0.23394625;
            } else {
              result[13] += -0.14212523;
            }
          }
        } else {
          result[13] += 0.2260519;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          result[13] += -0.15079957;
        } else {
          result[13] += 0.20637566;
        }
      }
    } else {
      result[13] += -0.15292801;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[14] += -0.013731454;
            } else {
              result[14] += -0.114429824;
            }
          } else {
            result[14] += -0.15360625;
          }
        } else {
          result[14] += -0.1536403;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += -0.02242852;
            } else {
              result[14] += 0.29661903;
            }
          } else {
            result[14] += -0.15488358;
          }
        } else {
          result[14] += -0.15365142;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[14] += -0.028367475;
            } else {
              result[14] += 0.25514007;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[14] += -0.10796644;
            } else {
              result[14] += -0.15440929;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[14] += -0.15287304;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
              result[14] += 0.23302917;
            } else {
              result[14] += -0.151051;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[14] += -0.13071795;
            } else {
              result[14] += -0.17523904;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[14] += 0.11708805;
            } else {
              result[14] += -0.15610276;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
              result[14] += -0.13331762;
            } else {
              result[14] += -0.15204236;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[14] += 0.34200037;
            } else {
              result[14] += -0.13292012;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[14] += -0.15376773;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += 0.15241966;
            } else {
              result[14] += -0.15386102;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
              result[14] += -0.086414844;
            } else {
              result[14] += 0.2556456;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.1027701;
            } else {
              result[14] += -0.15360457;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[14] += 0.22922076;
          } else {
            result[14] += -0.20553128;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.12596282;
            } else {
              result[14] += 0.33006454;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += -0.13099904;
            } else {
              result[14] += -0.15296368;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[14] += -0.044542;
            } else {
              result[14] += 0.13245632;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.15394059;
            } else {
              result[14] += 0.20861436;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[14] += 0.16710511;
            } else {
              result[14] += 0.29813576;
            }
          } else {
            result[14] += -0.15655579;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.15187337;
            } else {
              result[14] += 0.32920027;
            }
          } else {
            result[14] += -0.15368341;
          }
        } else {
          result[14] += 0.26004988;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[0] += 0.047732558;
            } else {
              result[0] += -0.14982902;
            }
          } else {
            result[0] += -0.15274394;
          }
        } else {
          result[0] += -0.15277132;
        }
      } else {
        result[0] += -0.15317118;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[0] += -0.026862686;
      } else {
        result[0] += 0.05025849;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
              result[0] += 0.19339429;
            } else {
              result[0] += -0.18417539;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
              result[0] += 0.268778;
            } else {
              result[0] += 0.20489408;
            }
          }
        } else {
          result[0] += 0.7274185;
        }
      } else {
        result[0] += -0.15027967;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          result[0] += -0.15294242;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.08401258;
            } else {
              result[0] += 2.8581681;
            }
          } else {
            result[0] += -0.15292087;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[0] += -0.15243012;
            } else {
              result[0] += -0.06487597;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[0] += -0.047442522;
            } else {
              result[0] += 1.628558;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[0] += 0.20570658;
          } else {
            result[0] += -0.13519026;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.15278013;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += 0.09243013;
            } else {
              result[1] += 0.19775309;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
              result[1] += -0.16048726;
            } else {
              result[1] += 0.746352;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.050930575;
            } else {
              result[1] += 0.21813144;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[1] += 0.16862485;
            } else {
              result[1] += 0.20870672;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[1] += 0.1904546;
            } else {
              result[1] += -0.121779054;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.16013855;
            } else {
              result[1] += 0.2000062;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23043)) {
              result[1] += -0.04067146;
            } else {
              result[1] += -0.11886193;
            }
          } else {
            result[1] += -0.15268183;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
              result[1] += -0.14333913;
            } else {
              result[1] += 4.0363984;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[1] += -0.15280068;
            } else {
              result[1] += -0.12926763;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.11098345;
            } else {
              result[1] += -0.15365097;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[1] += -0.1468313;
            } else {
              result[1] += 0.017911706;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
              result[1] += 0.11200414;
            } else {
              result[1] += 0.051063906;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[1] += 0.03165591;
            } else {
              result[1] += 0.083706506;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            result[1] += -0.1529072;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[1] += -0.080031864;
            } else {
              result[1] += -0.151705;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
            result[1] += -0.15912661;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.35736048;
            } else {
              result[1] += -0.17891842;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[1] += 0.2523051;
            } else {
              result[1] += 0.05802222;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += 0.22035953;
            } else {
              result[1] += 0.4297831;
            }
          }
        }
      } else {
        result[1] += -0.15283483;
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.15303607;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.20754518;
      } else {
        result[2] += -0.15232778;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)30791)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)27439)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)27196)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)24370)) {
              result[2] += 0.14628206;
            } else {
              result[2] += 0.08122425;
            }
          } else {
            result[2] += 0.35506427;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)29495)) {
              result[2] += 0.01200945;
            } else {
              result[2] += 0.16449645;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)29495)) {
              result[2] += -0.022346443;
            } else {
              result[2] += -0.14232662;
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)31803)) {
          result[2] += 0.22620745;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)36088)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)35330)) {
              result[2] += 0.13072893;
            } else {
              result[2] += 0.018179698;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)37885)) {
              result[2] += 0.24612762;
            } else {
              result[2] += 0.14836428;
            }
          }
        }
      }
    } else {
      result[2] += 0.2023104;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.15304342;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[3] += -0.15351662;
            } else {
              result[3] += 0.20731;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
              result[3] += 1.4711556;
            } else {
              result[3] += 0.2022531;
            }
          }
        } else {
          result[3] += -0.15259703;
        }
      } else {
        result[3] += -0.15340233;
      }
    } else {
      result[3] += -0.15301979;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    result[4] += -0.1530278;
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.20263594;
    } else {
      result[4] += -0.1504591;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[5] += -0.12957107;
            } else {
              result[5] += -0.1527299;
            }
          } else {
            result[5] += -0.1530561;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            result[5] += -0.15288395;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[5] += -0.10700061;
            } else {
              result[5] += -0.15240121;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[5] += -0.1063421;
        } else {
          result[5] += -0.059249133;
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)53285)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)41676)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)41154)) {
              result[5] += 0.14024264;
            } else {
              result[5] += 0.270748;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)41951)) {
              result[5] += -0.122783676;
            } else {
              result[5] += 0.106979676;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)57657)) {
            result[5] += 0.22884561;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)61488)) {
              result[5] += 0.07499418;
            } else {
              result[5] += 0.16980071;
            }
          }
        }
      } else {
        result[5] += -0.15273972;
      }
    }
  } else {
    result[5] += 0.3046003;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[6] += 0.01448861;
            } else {
              result[6] += -0.1540234;
            }
          } else {
            result[6] += -0.15396923;
          }
        } else {
          result[6] += -0.15272263;
        }
      } else {
        result[6] += -0.15275103;
      }
    } else {
      result[6] += -0.15304755;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[6] += 0.23287125;
    } else {
      result[6] += -0.15044254;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[7] += 0.14176433;
            } else {
              result[7] += -0.15297735;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
              result[7] += -0.12544817;
            } else {
              result[7] += 0.22585268;
            }
          }
        } else {
          result[7] += -0.15305844;
        }
      } else {
        result[7] += 0.2025177;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[7] += 0.1252975;
      } else {
        result[7] += 0.094439894;
      }
    }
  } else {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[7] += 0.18137132;
            } else {
              result[7] += 0.20096277;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5629642)) {
              result[7] += -0.15418239;
            } else {
              result[7] += 0.5940229;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += 0.1760246;
            } else {
              result[7] += -0.15345171;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)978331136)) {
              result[7] += -0.2301376;
            } else {
              result[7] += 0.20113601;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            result[7] += -0.18272454;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
              result[7] += -0.07874718;
            } else {
              result[7] += 0.00027430634;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[7] += 0.18688557;
            } else {
              result[7] += 0.10630608;
            }
          } else {
            result[7] += 0.20744245;
          }
        }
      }
    } else {
      result[7] += -0.15290731;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        result[8] += -0.15129393;
      } else {
        result[8] += -0.1350999;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.09805424;
            } else {
              result[8] += -0.14876452;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[8] += 0.2711174;
            } else {
              result[8] += 0.15526448;
            }
          }
        } else {
          result[8] += -0.15352297;
        }
      } else {
        result[8] += -0.15312763;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[8] += -0.15297091;
            } else {
              result[8] += -0.12347806;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[8] += 0.18418609;
            } else {
              result[8] += 0.23755299;
            }
          }
        } else {
          result[8] += -0.15286842;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3994002688)) {
              result[8] += -0.04655617;
            } else {
              result[8] += 0.2058452;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[8] += 0.16879646;
            } else {
              result[8] += 0.1298003;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1559)) {
              result[8] += 0.049049903;
            } else {
              result[8] += -0.021732172;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[8] += -0.10106433;
            } else {
              result[8] += -0.15284607;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[8] += 0.091732614;
            } else {
              result[8] += 0.20704551;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[8] += -0.020000748;
            } else {
              result[8] += 0.3134218;
            }
          }
        } else {
          result[8] += -0.15435961;
        }
      } else {
        result[8] += -0.1529563;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[9] += -0.12746347;
            } else {
              result[9] += -0.15335518;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.25757363;
            } else {
              result[9] += -0.15402405;
            }
          }
        } else {
          result[9] += -0.15303391;
        }
      } else {
        result[9] += 0.11108739;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[9] += -0.15421253;
          } else {
            result[9] += 0.2063583;
          }
        } else {
          result[9] += -0.1517201;
        }
      } else {
        result[9] += -0.1529178;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[9] += 0.20208168;
      } else {
        result[9] += -0.14974396;
      }
    } else {
      result[9] += -0.1526143;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.1006879;
            } else {
              result[10] += -0.15286744;
            }
          } else {
            result[10] += -0.15287344;
          }
        } else {
          result[10] += -0.15314826;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[10] += 0.01769372;
        } else {
          result[10] += 0.078159496;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[10] += 0.19290552;
            } else {
              result[10] += 0.027951162;
            }
          } else {
            result[10] += -0.15029351;
          }
        } else {
          result[10] += -0.15228723;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[10] += -0.1525581;
            } else {
              result[10] += 0.21462971;
            }
          } else {
            result[10] += -0.15323362;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[10] += 0.17910948;
            } else {
              result[10] += 0.33865085;
            }
          } else {
            result[10] += -0.15264304;
          }
        }
      }
    }
  } else {
    result[10] += -0.15294054;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[11] += -0.15153208;
          } else {
            result[11] += -0.13986802;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += 0.07398643;
            } else {
              result[11] += 0.16316229;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += -0.26599082;
            } else {
              result[11] += -0.15311433;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[11] += -0.15286154;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[11] += -0.15312132;
          } else {
            result[11] += -0.17091969;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[11] += 0.11628168;
            } else {
              result[11] += 0.16109093;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47601)) {
              result[11] += 0.05039573;
            } else {
              result[11] += 0.13005199;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[11] += -0.15064755;
            } else {
              result[11] += -0.050081033;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += -0.01799177;
            } else {
              result[11] += 0.26238465;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += 0.21361838;
            } else {
              result[11] += 0.15869847;
            }
          } else {
            result[11] += -0.17905772;
          }
        } else {
          result[11] += -0.15212795;
        }
      }
    }
  } else {
    result[11] += -0.15293139;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[12] += -0.15149984;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[12] += -0.035908695;
            } else {
              result[12] += 0.19489978;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
              result[12] += 0.15130489;
            } else {
              result[12] += -0.1537512;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.1524544;
            } else {
              result[12] += 0.22008868;
            }
          } else {
            result[12] += -0.15578008;
          }
        }
      } else {
        result[12] += -0.15305367;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[12] += -0.15419991;
          } else {
            result[12] += 0.21554834;
          }
        } else {
          result[12] += -0.15236841;
        }
      } else {
        result[12] += -0.15415952;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          result[12] += -0.15281194;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += 0.25011122;
            } else {
              result[12] += 0.21401648;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.27849463;
            } else {
              result[12] += -0.14324622;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          result[12] += -0.14319466;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += 0.2602275;
            } else {
              result[12] += 0.19392797;
            }
          } else {
            result[12] += -0.1326371;
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += -0.13194162;
            } else {
              result[13] += -0.15297456;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[13] += -0.062871344;
            } else {
              result[13] += 0.108354524;
            }
          }
        } else {
          result[13] += -0.15290543;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            result[13] += -0.15278676;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1924085632)) {
              result[13] += -0.108901195;
            } else {
              result[13] += 0.19839428;
            }
          }
        } else {
          result[13] += 0.23517087;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += -0.10820736;
            } else {
              result[13] += 0.16350581;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.15272747;
            } else {
              result[13] += -0.06211085;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[13] += 0.10944838;
            } else {
              result[13] += -0.079591855;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
              result[13] += 0.22776495;
            } else {
              result[13] += -0.14014447;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3022144256)) {
              result[13] += -0.1523635;
            } else {
              result[13] += 0.023426972;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[13] += -0.121374436;
            } else {
              result[13] += 0.2816287;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[13] += -0.14781024;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1535688832)) {
              result[13] += 0.4136117;
            } else {
              result[13] += 0.20464684;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1415)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[13] += 0.21181622;
            } else {
              result[13] += -0.14490335;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[13] += 0.21260868;
            } else {
              result[13] += -0.06715912;
            }
          }
        } else {
          result[13] += 0.2021343;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          result[13] += -0.14903817;
        } else {
          result[13] += 0.18237257;
        }
      }
    } else {
      result[13] += -0.15154958;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[14] += -0.0034800214;
            } else {
              result[14] += -0.15455411;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[14] += -0.11861815;
            } else {
              result[14] += -0.07820711;
            }
          }
        } else {
          result[14] += -0.15272412;
        }
      } else {
        result[14] += -0.15275103;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[14] += 0.006564985;
            } else {
              result[14] += -0.1542296;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
              result[14] += 0.2017961;
            } else {
              result[14] += -0.1818421;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[14] += -0.1524657;
            } else {
              result[14] += 0.16339242;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
              result[14] += 0.670983;
            } else {
              result[14] += -0.10567574;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[14] += -0.15262322;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[14] += -0.15028237;
            } else {
              result[14] += -0.05079892;
            }
          }
        } else {
          result[14] += -0.15293829;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[14] += -0.15287872;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += 0.115696006;
            } else {
              result[14] += -0.15301031;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4620)) {
              result[14] += 0.32312614;
            } else {
              result[14] += 0.14786789;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.10203145;
            } else {
              result[14] += -0.15266328;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[14] += 0.20539056;
          } else {
            result[14] += -0.1918936;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += -0.02353813;
            } else {
              result[14] += -0.14974245;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[14] += -0.15205017;
            } else {
              result[14] += -0.09864683;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[14] += -0.034829035;
            } else {
              result[14] += 0.10928346;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.15296683;
            } else {
              result[14] += 0.18205203;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += 0.18608701;
            } else {
              result[14] += -0.19588952;
            }
          } else {
            result[14] += -0.15515223;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[14] += -0.15040734;
            } else {
              result[14] += 0.2845311;
            }
          } else {
            result[14] += -0.15281446;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
            result[14] += 0.09194733;
          } else {
            result[14] += 0.23266712;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[0] += 0.040474348;
            } else {
              result[0] += -0.14819291;
            }
          } else {
            result[0] += -0.1520486;
          }
        } else {
          result[0] += -0.15207407;
        }
      } else {
        result[0] += -0.15250081;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[0] += -0.01901989;
      } else {
        result[0] += 0.043097273;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
              result[0] += 0.17359532;
            } else {
              result[0] += -0.1792813;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
              result[0] += 0.23659973;
            } else {
              result[0] += 0.18844785;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[0] += 1.6908339;
          } else {
            result[0] += 0.29241985;
          }
        }
      } else {
        result[0] += -0.14875865;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          result[0] += -0.1522239;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.070776135;
            } else {
              result[0] += 0.30707768;
            }
          } else {
            result[0] += -0.15221685;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[0] += -0.15154068;
            } else {
              result[0] += -0.052704476;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[0] += 1.7745347;
            } else {
              result[0] += 0.108431906;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[0] += 0.18888204;
          } else {
            result[0] += -0.13086891;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.1520125;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
              result[1] += 0.11254449;
            } else {
              result[1] += 0.10132105;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += -0.04700947;
            } else {
              result[1] += 0.11798022;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.05017596;
            } else {
              result[1] += 0.16751173;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[1] += 0.22893372;
            } else {
              result[1] += 0.18981971;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            result[1] += -0.15351546;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.021395264;
            } else {
              result[1] += 0.17523487;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1807130496)) {
              result[1] += -0.11855848;
            } else {
              result[1] += -0.04062245;
            }
          } else {
            result[1] += -0.15189554;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += -0.14496596;
            } else {
              result[1] += -0.027579887;
            }
          } else {
            result[1] += 0.28963974;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[1] += -0.15211655;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.14778131;
            } else {
              result[1] += 2.017548;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
              result[1] += 0.062082436;
            } else {
              result[1] += 0.3211973;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1710604032)) {
              result[1] += -0.029602682;
            } else {
              result[1] += -0.13779733;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            result[1] += -0.15217605;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[1] += -0.06725932;
            } else {
              result[1] += -0.15060633;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            result[1] += -0.15468365;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.30100012;
            } else {
              result[1] += -0.16133665;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
              result[1] += 0.094920166;
            } else {
              result[1] += 0.21377076;
            }
          } else {
            result[1] += -0.15188044;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          result[1] += -0.15231618;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            result[1] += 0.27992624;
          } else {
            result[1] += -0.15232234;
          }
        }
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.15235105;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.18349282;
      } else {
        result[2] += -0.15150802;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)4155)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)3123)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)2057)) {
              result[2] += 0.08283673;
            } else {
              result[2] += 0.23605734;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1805)) {
              result[2] += 0.08423292;
            } else {
              result[2] += -0.053790662;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)3906)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.055557717;
            } else {
              result[2] += 0.05029555;
            }
          } else {
            result[2] += -0.079095215;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)5438)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)4409)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += 0.0027866224;
            } else {
              result[2] += 0.16677013;
            }
          } else {
            result[2] += 0.23475635;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)6201)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)5952)) {
              result[2] += 0.10130383;
            } else {
              result[2] += -0.15305595;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)10262)) {
              result[2] += 0.15961352;
            } else {
              result[2] += 0.114830814;
            }
          }
        }
      }
    } else {
      result[2] += 0.18680677;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.15236525;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[3] += -0.15276575;
            } else {
              result[3] += 0.19059654;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
              result[3] += 0.48490107;
            } else {
              result[3] += 0.18675566;
            }
          }
        } else {
          result[3] += -0.15165532;
        }
      } else {
        result[3] += -0.15269989;
      }
    } else {
      result[3] += -0.1523406;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    result[4] += -0.15233988;
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.18702376;
    } else {
      result[4] += -0.14907758;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[5] += -0.12480092;
            } else {
              result[5] += -0.15204021;
            }
          } else {
            result[5] += -0.15238136;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            result[5] += -0.15220638;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[5] += -0.09442184;
            } else {
              result[5] += -0.15166806;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[5] += -0.09875528;
        } else {
          result[5] += -0.051606677;
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)4155)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)3123)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)2057)) {
              result[5] += 0.14639682;
            } else {
              result[5] += 0.03119787;
            }
          } else {
            result[5] += 0.24038166;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)5162)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)4409)) {
              result[5] += 0.094004706;
            } else {
              result[5] += -0.105222456;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)10532)) {
              result[5] += 0.078602694;
            } else {
              result[5] += 0.118517056;
            }
          }
        }
      } else {
        result[5] += -0.15204565;
      }
    }
  } else {
    result[5] += 0.26955187;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[6] += 0.013552542;
            } else {
              result[6] += -0.1521571;
            }
          } else {
            result[6] += -0.15309489;
          }
        } else {
          result[6] += -0.15203188;
        }
      } else {
        result[6] += -0.15205868;
      }
    } else {
      result[6] += -0.15237162;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[6] += 0.21589746;
    } else {
      result[6] += -0.1490612;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[7] += 0.105259605;
            } else {
              result[7] += -0.15198559;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[7] += -0.08598021;
            } else {
              result[7] += -0.15152243;
            }
          }
        } else {
          result[7] += -0.15228866;
        }
      } else {
        result[7] += 0.18683745;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[7] += 0.097859085;
      } else {
        result[7] += 0.074966274;
      }
    }
  } else {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          result[7] += 0.19067559;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[7] += -0.18541181;
            } else {
              result[7] += -0.015731;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.21343568;
            } else {
              result[7] += 0.1565909;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[7] += 0.18631624;
            } else {
              result[7] += 0.17384574;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5629642)) {
              result[7] += -0.15335502;
            } else {
              result[7] += 0.37704533;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += 0.14484245;
            } else {
              result[7] += -0.15126851;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += -0.17336854;
            } else {
              result[7] += 0.18542169;
            }
          }
        }
      }
    } else {
      result[7] += -0.15219283;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        result[8] += -0.15009868;
      } else {
        result[8] += -0.13103107;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[8] += 0.030130958;
            } else {
              result[8] += 0.12451408;
            }
          } else {
            result[8] += -0.15625486;
          }
        } else {
          result[8] += -0.15290582;
        }
      } else {
        result[8] += -0.15243357;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
      result[8] += -0.15220973;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[8] += 0.10245304;
            } else {
              result[8] += 0.18088323;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += -0.07493177;
            } else {
              result[8] += -0.15330468;
            }
          }
        } else {
          result[8] += -0.1527411;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += -0.12459993;
            } else {
              result[8] += -0.15222499;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
              result[8] += -0.0036504036;
            } else {
              result[8] += -0.14777553;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[8] += 0.068184495;
            } else {
              result[8] += 0.22225179;
            }
          } else {
            result[8] += -0.1521674;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[9] += -0.11998183;
            } else {
              result[9] += -0.15269685;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.2257074;
            } else {
              result[9] += -0.15244098;
            }
          }
        } else {
          result[9] += -0.15235616;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[9] += 0.09071992;
        } else {
          result[9] += 0.08463111;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[9] += -0.1533121;
          } else {
            result[9] += 0.19226687;
          }
        } else {
          result[9] += -0.15075944;
        }
      } else {
        result[9] += -0.15221298;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[9] += 0.18661822;
      } else {
        result[9] += -0.14817014;
      }
    } else {
      result[9] += -0.15187562;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.079534784;
            } else {
              result[10] += -0.15214232;
            }
          } else {
            result[10] += -0.15215151;
          }
        } else {
          result[10] += -0.15248299;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[10] += 0.020142883;
        } else {
          result[10] += 0.06368221;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
              result[10] += 0.17963827;
            } else {
              result[10] += -0.154948;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
              result[10] += 1.604303;
            } else {
              result[10] += 0.20028862;
            }
          }
        } else {
          result[10] += -0.15132655;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[10] += -0.15371926;
            } else {
              result[10] += 0.1941895;
            }
          } else {
            result[10] += -0.15254867;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[10] += -0.14896823;
            } else {
              result[10] += 0.18915148;
            }
          } else {
            result[10] += -0.15180242;
          }
        }
      }
    }
  } else {
    result[10] += -0.15222658;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[11] += -0.15040654;
          } else {
            result[11] += -0.13655332;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
              result[11] += 0.067420565;
            } else {
              result[11] += 0.18243006;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += -0.2520729;
            } else {
              result[11] += -0.15245536;
            }
          }
        }
      } else {
        result[11] += -0.15234865;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[11] += 0.08664878;
            } else {
              result[11] += 0.12509187;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[11] += 0.2857002;
            } else {
              result[11] += 0.05215686;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[11] += -0.052677844;
            } else {
              result[11] += -0.15318641;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += -0.010083102;
            } else {
              result[11] += 0.2414762;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[11] += 0.21402434;
            } else {
              result[11] += 0.17612708;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[11] += 0.11951614;
            } else {
              result[11] += -0.06856484;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += -0.18250188;
            } else {
              result[11] += -0.40081438;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[11] += 0.13523899;
            } else {
              result[11] += -0.15111503;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.15223747;
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[12] += -0.15092024;
            } else {
              result[12] += -0.047857102;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += -0.15720403;
            } else {
              result[12] += 0.19596644;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.08049836;
            } else {
              result[12] += -0.093778156;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[12] += -0.15937415;
            } else {
              result[12] += 0.18062003;
            }
          }
        }
      } else {
        result[12] += -0.15196796;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[12] += 0.12595665;
            } else {
              result[12] += 0.19659586;
            }
          } else {
            result[12] += -0.15596052;
          }
        } else {
          result[12] += -0.15168191;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
              result[12] += -0.11902615;
            } else {
              result[12] += 0.15708488;
            }
          } else {
            result[12] += -0.15214676;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            result[12] += -0.15778475;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[12] += 0.19753878;
            } else {
              result[12] += -0.1086729;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)17173)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)16917)) {
              result[12] += 0.05234822;
            } else {
              result[12] += 0.12749952;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44043)) {
              result[12] += 0.030076485;
            } else {
              result[12] += 0.049953945;
            }
          }
        } else {
          result[12] += -0.15200594;
        }
      } else {
        result[12] += -0.15250902;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[12] += 0.23584108;
      } else {
        result[12] += -0.14822835;
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += -0.12618543;
            } else {
              result[13] += -0.15226255;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[13] += 0.03717904;
            } else {
              result[13] += -0.13309795;
            }
          }
        } else {
          result[13] += -0.15212908;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            result[13] += -0.15209828;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
              result[13] += -0.102595724;
            } else {
              result[13] += 0.17748234;
            }
          }
        } else {
          result[13] += 0.20095603;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += -0.101398446;
            } else {
              result[13] += 0.121254385;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.15157145;
            } else {
              result[13] += -0.049759075;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += 0.07245099;
            } else {
              result[13] += 0.22938141;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[13] += -0.23892392;
            } else {
              result[13] += -0.11336235;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)663824320)) {
              result[13] += 0.022805983;
            } else {
              result[13] += -0.15152803;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50899)) {
              result[13] += 0.25394753;
            } else {
              result[13] += -0.12740576;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[13] += -0.14556813;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1535688832)) {
              result[13] += 0.3514061;
            } else {
              result[13] += 0.18544999;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1415)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[13] += 0.19545387;
            } else {
              result[13] += -0.14244744;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += 0.184771;
            } else {
              result[13] += -0.13575464;
            }
          }
        } else {
          result[13] += 0.18674031;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          result[13] += -0.14737204;
        } else {
          result[13] += 0.16534026;
        }
      }
    } else {
      result[13] += -0.15020621;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[14] += -0.0011550309;
            } else {
              result[14] += -0.15263167;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[14] += -0.112229444;
            } else {
              result[14] += -0.070471965;
            }
          }
        } else {
          result[14] += -0.15203355;
        }
      } else {
        result[14] += -0.15205868;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[14] += 0.009215973;
            } else {
              result[14] += -0.14957431;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[14] += 0.19154043;
            } else {
              result[14] += 0.058785535;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[14] += -0.15113501;
            } else {
              result[14] += 0.14768988;
            }
          } else {
            result[14] += 0.48536786;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[14] += -0.15184963;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[14] += -0.14876933;
            } else {
              result[14] += -0.03563461;
            }
          }
        } else {
          result[14] += -0.15223832;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[14] += -0.1521878;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[14] += 0.08981402;
            } else {
              result[14] += -0.15227042;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2192098560)) {
              result[14] += 0.14698038;
            } else {
              result[14] += 0.07502438;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.0988771;
            } else {
              result[14] += -0.15188989;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[14] += 0.19032559;
          } else {
            result[14] += -0.1829251;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += -0.00910764;
            } else {
              result[14] += -0.15205896;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[14] += -0.15103292;
            } else {
              result[14] += -0.08588691;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[14] += 0.010849534;
            } else {
              result[14] += 0.21288133;
            }
          } else {
            result[14] += -0.15251859;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += 0.21085402;
            } else {
              result[14] += -0.12711523;
            }
          } else {
            result[14] += -0.17704281;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[14] += -0.14892428;
            } else {
              result[14] += 0.23957266;
            }
          } else {
            result[14] += -0.1521194;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
            result[14] += 0.08084671;
          } else {
            result[14] += 0.20127343;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[0] += 0.034462966;
            } else {
              result[0] += -0.14667027;
            }
          } else {
            result[0] += -0.15150645;
          }
        } else {
          result[0] += -0.15153167;
        }
      } else {
        result[0] += -0.15198004;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[0] += -0.012311752;
      } else {
        result[0] += 0.037127674;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1452252288)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
            result[0] += -0.18946792;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47082)) {
              result[0] += 0.11753855;
            } else {
              result[0] += 0.080084704;
            }
          }
        } else {
          result[0] += -0.15437119;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[0] += 0.17869034;
            } else {
              result[0] += 0.2882511;
            }
          } else {
            result[0] += 0.18428874;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2130028928)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[0] += -0.18306664;
            } else {
              result[0] += -0.15055896;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[0] += 0.17826925;
            } else {
              result[0] += 0.38312903;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          result[0] += -0.15166578;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.055832565;
            } else {
              result[0] += 0.26761693;
            }
          } else {
            result[0] += -0.15167092;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[0] += -0.15075551;
            } else {
              result[0] += -0.042685714;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[0] += -0.056583058;
            } else {
              result[0] += 0.40607694;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[0] += 0.17789374;
          } else {
            result[0] += -0.12611644;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.15137188;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[1] += 0.07476844;
            } else {
              result[1] += -0.12985867;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[1] += 0.19394706;
            } else {
              result[1] += -0.10592582;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.32705146;
            } else {
              result[1] += 0.0978239;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.17888142;
            } else {
              result[1] += -0.04264759;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)23043)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)14612)) {
              result[1] += -0.101789065;
            } else {
              result[1] += 0.05592356;
            }
          } else {
            result[1] += -0.11695412;
          }
        } else {
          result[1] += -0.15125565;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += -0.14215064;
            } else {
              result[1] += -0.01023563;
            }
          } else {
            result[1] += 0.26841047;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[1] += -0.15159217;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.14595315;
            } else {
              result[1] += 0.39943036;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3435244800)) {
              result[1] += 0.027398646;
            } else {
              result[1] += -0.07103047;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[1] += 0.08347615;
            } else {
              result[1] += 0.044368774;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[1] += -0.029608851;
            } else {
              result[1] += -0.15161361;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[1] += -0.052216012;
            } else {
              result[1] += -0.14963761;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[1] += 0.07519577;
            } else {
              result[1] += 0.1666092;
            }
          } else {
            result[1] += -0.15122434;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)280)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[1] += -0.15630773;
            } else {
              result[1] += -0.056411397;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[1] += -0.007165044;
            } else {
              result[1] += 0.22779988;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          result[1] += -0.15175259;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[1] += -0.08960806;
            } else {
              result[1] += 0.26781613;
            }
          } else {
            result[1] += -0.14976601;
          }
        }
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.15181881;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.1696881;
      } else {
        result[2] += -0.15079878;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)18664)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)17886)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)10532)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)4155)) {
              result[2] += 0.061012447;
            } else {
              result[2] += 0.12455864;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)13573)) {
              result[2] += 0.00053751207;
            } else {
              result[2] += 0.10736247;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)18398)) {
            result[2] += -0.109745555;
          } else {
            result[2] += 0.03935728;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)24122)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)22837)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += 0.09119785;
            } else {
              result[2] += 0.15826517;
            }
          } else {
            result[2] += 0.22747785;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)30791)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)30252)) {
              result[2] += 0.060674157;
            } else {
              result[2] += -0.13650091;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)31053)) {
              result[2] += 0.2265584;
            } else {
              result[2] += 0.10261728;
            }
          }
        }
      }
    } else {
      result[2] += 0.17634745;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.1518389;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[3] += -0.15214607;
            } else {
              result[3] += 0.1795422;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
              result[3] += 0.3263207;
            } else {
              result[3] += 0.17622806;
            }
          }
        } else {
          result[3] += -0.15078892;
        }
      } else {
        result[3] += -0.15211411;
      }
    } else {
      result[3] += -0.15183769;
    }
  }
}


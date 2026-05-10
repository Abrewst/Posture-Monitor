#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class DecisionTree {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        if (x[1] <= -1.034999966621399) {
                            if (x[1] <= -2.9450000524520874) {
                                if (x[0] <= 4.914999961853027) {
                                    if (x[1] <= -3.3649998903274536) {
                                        if (x[0] <= 4.454999923706055) {
                                            return 0;
                                        }


                                        else {
                                            return 0;
                                        }
                                    }


                                    else {
                                        if (x[0] <= 3.024999976158142) {
                                            return 0;
                                        }


                                        else {
                                            return 2;
                                        }
                                    }
                                }


                                else {
                                    if (x[1] <= -3.0449999570846558) {
                                        if (x[1] <= -3.140000104904175) {
                                            return 2;
                                        }


                                        else {
                                            return 0;
                                        }
                                    }


                                    else {
                                        return 1;
                                    }
                                }
                            }


                            else {
                                if (x[1] <= -2.725000023841858) {
                                    if (x[0] <= 4.994999885559082) {
                                        if (x[0] <= 3.6050000190734863) {
                                            return 0;
                                        }


                                        else {
                                            return 2;
                                        }
                                    }


                                    else {
                                        if (x[0] <= 5.949999809265137) {
                                            return 1;
                                        }


                                        else {
                                            return 0;
                                        }
                                    }
                                }


                                else {
                                    if (x[1] <= -1.6749999523162842) {
                                        if (x[0] <= 3.75) {
                                            return 0;
                                        }


                                        else {
                                            return 2;
                                        }
                                    }


                                    else {
                                        if (x[0] <= 5.855000019073486) {
                                            return 1;
                                        }


                                        else {
                                            return 2;
                                        }
                                    }
                                }
                            }
                        }


                        else {
                            if (x[0] <= 3.875) {
                                if (x[0] <= 3.0649999380111694) {
                                    if (x[0] <= 2.7549999952316284) {
                                        if (x[1] <= -0.7150000035762787) {
                                            return 3;
                                        }


                                        else {
                                            return 3;
                                        }
                                    }


                                    else {
                                        if (x[1] <= -0.8149999976158142) {
                                            return 3;
                                        }


                                        else {
                                            return 3;
                                        }
                                    }
                                }


                                else {
                                    if (x[1] <= -0.3050000071525574) {
                                        if (x[1] <= -0.45000000298023224) {
                                            return 2;
                                        }


                                        else {
                                            return 0;
                                        }
                                    }


                                    else {
                                        if (x[0] <= 3.8049999475479126) {
                                            return 3;
                                        }


                                        else {
                                            return 3;
                                        }
                                    }
                                }
                            }


                            else {
                                if (x[1] <= -0.7350000143051147) {
                                    if (x[0] <= 6.949999809265137) {
                                        if (x[0] <= 6.634999990463257) {
                                            return 2;
                                        }


                                        else {
                                            return 1;
                                        }
                                    }


                                    else {
                                        if (x[0] <= 8.005000114440918) {
                                            return 2;
                                        }


                                        else {
                                            return 0;
                                        }
                                    }
                                }


                                else {
                                    if (x[1] <= 1.1100000143051147) {
                                        if (x[1] <= 0.4350000023841858) {
                                            return 1;
                                        }


                                        else {
                                            return 3;
                                        }
                                    }


                                    else {
                                        if (x[0] <= 4.429999947547913) {
                                            return 0;
                                        }


                                        else {
                                            return 1;
                                        }
                                    }
                                }
                            }
                        }
                    }


                protected:
                };
            }
        }
    }

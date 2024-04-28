const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0c0e12", /* black   */
  [1] = "#3D6391", /* red     */
  [2] = "#4D739B", /* green   */
  [3] = "#6C788A", /* yellow  */
  [4] = "#527AA1", /* blue    */
  [5] = "#138F94", /* magenta */
  [6] = "#6D8A9F", /* cyan    */
  [7] = "#c6c7c9", /* white   */

  /* 8 bright colors */
  [8]  = "#8a8b8c",  /* black   */
  [9]  = "#3D6391",  /* red     */
  [10] = "#4D739B", /* green   */
  [11] = "#6C788A", /* yellow  */
  [12] = "#527AA1", /* blue    */
  [13] = "#138F94", /* magenta */
  [14] = "#6D8A9F", /* cyan    */
  [15] = "#c6c7c9", /* white   */

  /* special colors */
  [256] = "#0c0e12", /* background */
  [257] = "#c6c7c9", /* foreground */
  [258] = "#c6c7c9",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;

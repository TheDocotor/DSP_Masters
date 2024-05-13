/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase()
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 800, 480);
    box1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    add(box1);

    dynamicGraph1.setPosition(0, 0, 800, 480);
    dynamicGraph1.setScale(1);
    dynamicGraph1.setGraphRangeX(0, 99);
    dynamicGraph1.setGraphAreaMargin(10, 68, 0, 30);
    dynamicGraph1.setGraphAreaPadding(0, 0, 0, 0);
    dynamicGraph1.setGraphRangeY(0, 3500);
    dynamicGraph1MinorXAxisGrid.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    dynamicGraph1MinorXAxisGrid.setInterval(10);
    dynamicGraph1MinorXAxisGrid.setLineWidth(1);
    dynamicGraph1MinorXAxisGrid.setScale(1);
    dynamicGraph1MinorXAxisGrid.setMajorGrid(dynamicGraph1MajorXAxisGrid);
    dynamicGraph1.addGraphElement(dynamicGraph1MinorXAxisGrid);

    dynamicGraph1MinorYAxisGrid.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    dynamicGraph1MinorYAxisGrid.setInterval(500);
    dynamicGraph1MinorYAxisGrid.setLineWidth(1);
    dynamicGraph1MinorYAxisGrid.setScale(1);
    dynamicGraph1MinorYAxisGrid.setMajorGrid(dynamicGraph1MajorYAxisGrid);
    dynamicGraph1.addGraphElement(dynamicGraph1MinorYAxisGrid);

    dynamicGraph1MajorXAxisGrid.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    dynamicGraph1MajorXAxisGrid.setInterval(50);
    dynamicGraph1MajorXAxisGrid.setLineWidth(2);
    dynamicGraph1MajorXAxisGrid.setScale(1);
    dynamicGraph1.addGraphElement(dynamicGraph1MajorXAxisGrid);

    dynamicGraph1MajorYAxisGrid.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    dynamicGraph1MajorYAxisGrid.setInterval(1000);
    dynamicGraph1MajorYAxisGrid.setLineWidth(2);
    dynamicGraph1MajorYAxisGrid.setScale(1);
    dynamicGraph1.addGraphElement(dynamicGraph1MajorYAxisGrid);

    dynamicGraph1MajorYAxisLabel.setInterval(500);
    dynamicGraph1MajorYAxisLabel.setLabelTypedText(touchgfx::TypedText(T___SINGLEUSE_5INS));
    dynamicGraph1MajorYAxisLabel.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    dynamicGraph1MajorYAxisLabel.setScale(1);
    dynamicGraph1.addLeftElement(dynamicGraph1MajorYAxisLabel);

    dynamicGraph1Line1Painter.setColor(touchgfx::Color::getColorFromRGB(209, 4, 4));
    dynamicGraph1Line1.setPainter(dynamicGraph1Line1Painter);
    dynamicGraph1Line1.setLineWidth(2);
    dynamicGraph1.addGraphElement(dynamicGraph1Line1);


    dynamicGraph1.addDataPoint(2096.60034f);
    dynamicGraph1.addDataPoint(2157.98535f);
    dynamicGraph1.addDataPoint(2144.39874f);
    dynamicGraph1.addDataPoint(2065.11726f);
    dynamicGraph1.addDataPoint(1936.21012f);
    dynamicGraph1.addDataPoint(1778.85154f);
    dynamicGraph1.addDataPoint(1617.13421f);
    dynamicGraph1.addDataPoint(1475.59741f);
    dynamicGraph1.addDataPoint(1376.71158f);
    dynamicGraph1.addDataPoint(1338.56502f);
    dynamicGraph1.addDataPoint(1372.979f);
    dynamicGraph1.addDataPoint(1484.23591f);
    dynamicGraph1.addDataPoint(1668.54555f);
    dynamicGraph1.addDataPoint(1914.30332f);
    dynamicGraph1.addDataPoint(2203.11672f);
    dynamicGraph1.addDataPoint(2511.50249f);
    dynamicGraph1.addDataPoint(2813.0912f);
    dynamicGraph1.addDataPoint(3081.12684f);
    dynamicGraph1.addDataPoint(3291.02017f);
    dynamicGraph1.addDataPoint(3422.7091f);
    dynamicGraph1.addDataPoint(3462.59781f);
    dynamicGraph1.addDataPoint(3404.88675f);
    dynamicGraph1.addDataPoint(3252.16468f);
    dynamicGraph1.addDataPoint(3015.20472f);
    dynamicGraph1.addDataPoint(2711.98353f);
    dynamicGraph1.addDataPoint(2366.0177f);
    dynamicGraph1.addDataPoint(2004.17719f);
    dynamicGraph1.addDataPoint(1654.18624f);
    dynamicGraph1.addDataPoint(1342.05218f);
    dynamicGraph1.addDataPoint(1089.66945f);
    dynamicGraph1.addDataPoint(912.82897f);
    dynamicGraph1.addDataPoint(819.82359f);
    dynamicGraph1.addDataPoint(810.78279f);
    dynamicGraph1.addDataPoint(877.79861f);
    dynamicGraph1.addDataPoint(1005.82877f);
    dynamicGraph1.addDataPoint(1174.28714f);
    dynamicGraph1.addDataPoint(1359.16551f);
    dynamicGraph1.addDataPoint(1535.47916f);
    dynamicGraph1.addDataPoint(1679.79736f);
    dynamicGraph1.addDataPoint(1772.61216f);
    dynamicGraph1.addDataPoint(1800.31423f);
    dynamicGraph1.addDataPoint(1756.5832f);
    dynamicGraph1.addDataPoint(1643.05666f);
    dynamicGraph1.addDataPoint(1469.21206f);
    dynamicGraph1.addDataPoint(1251.47238f);
    dynamicGraph1.addDataPoint(1011.62188f);
    dynamicGraph1.addDataPoint(774.68509f);
    dynamicGraph1.addDataPoint(566.47496f);
    dynamicGraph1.addDataPoint(411.04779f);
    dynamicGraph1.addDataPoint(328.31239f);
    dynamicGraph1.addDataPoint(332.02588f);
    dynamicGraph1.addDataPoint(428.3715f);
    dynamicGraph1.addDataPoint(615.25759f);
    dynamicGraph1.addDataPoint(882.40719f);
    dynamicGraph1.addDataPoint(1212.23142f);
    dynamicGraph1.addDataPoint(1581.40384f);
    dynamicGraph1.addDataPoint(1962.98542f);
    dynamicGraph1.addDataPoint(2328.89633f);
    dynamicGraph1.addDataPoint(2652.49727f);
    dynamicGraph1.addDataPoint(2911.03247f);
    dynamicGraph1.addDataPoint(3087.69986f);
    dynamicGraph1.addDataPoint(3173.15002f);
    dynamicGraph1.addDataPoint(3166.27063f);
    dynamicGraph1.addDataPoint(3074.18242f);
    dynamicGraph1.addDataPoint(2911.44874f);
    dynamicGraph1.addDataPoint(2698.57678f);
    dynamicGraph1.addDataPoint(2459.95716f);
    dynamicGraph1.addDataPoint(2221.4425f);
    dynamicGraph1.addDataPoint(2007.8005f);
    dynamicGraph1.addDataPoint(1840.28887f);
    dynamicGraph1.addDataPoint(1734.58739f);
    dynamicGraph1.addDataPoint(1699.28768f);
    dynamicGraph1.addDataPoint(1735.08666f);
    dynamicGraph1.addDataPoint(1834.7615f);
    dynamicGraph1.addDataPoint(1983.92789f);
    dynamicGraph1.addDataPoint(2162.50713f);
    dynamicGraph1.addDataPoint(2346.75892f);
    dynamicGraph1.addDataPoint(2511.68145f);
    dynamicGraph1.addDataPoint(2633.54483f);
    dynamicGraph1.addDataPoint(2692.31067f);
    dynamicGraph1.addDataPoint(2673.70158f);
    dynamicGraph1.addDataPoint(2570.7181f);
    dynamicGraph1.addDataPoint(2384.45405f);
    dynamicGraph1.addDataPoint(2124.12916f);
    dynamicGraph1.addDataPoint(1806.33372f);
    dynamicGraph1.addDataPoint(1453.55613f);
    dynamicGraph1.addDataPoint(1092.13405f);
    dynamicGraph1.addDataPoint(749.82546f);
    dynamicGraph1.addDataPoint(453.23304f);
    dynamicGraph1.addDataPoint(225.32965f);
    dynamicGraph1.addDataPoint(83.32285f);
    dynamicGraph1.addDataPoint(37.06415f);
    dynamicGraph1.addDataPoint(88.15558f);
    dynamicGraph1.addDataPoint(229.83951f);
    dynamicGraph1.addDataPoint(447.68139f);
    dynamicGraph1.addDataPoint(720.97906f);
    dynamicGraph1.addDataPoint(1024.76183f);
    dynamicGraph1.addDataPoint(1332.18575f);
    dynamicGraph1.addDataPoint(1617.0936f);
    dynamicGraph1.addDataPoint(1856.49205f);
    dynamicGraph1.addDataPoint(2032.70705f);
    dynamicGraph1.addDataPoint(2135.00974f);
    dynamicGraph1.addDataPoint(2160.55677f);
    dynamicGraph1.addDataPoint(2114.55546f);
    dynamicGraph1.addDataPoint(2009.6395f);
    dynamicGraph1.addDataPoint(1864.51761f);
    dynamicGraph1.addDataPoint(1702.02795f);
    dynamicGraph1.addDataPoint(1546.78895f);
    dynamicGraph1.addDataPoint(1422.67605f);
    dynamicGraph1.addDataPoint(1350.37114f);
    dynamicGraph1.addDataPoint(1345.2241f);
    dynamicGraph1.addDataPoint(1415.63568f);
    dynamicGraph1.addDataPoint(1562.1205f);
    dynamicGraph1.addDataPoint(1777.14271f);
    dynamicGraph1.addDataPoint(2045.74212f);
    dynamicGraph1.addDataPoint(2346.89175f);
    dynamicGraph1.addDataPoint(2655.45674f);
    dynamicGraph1.addDataPoint(2944.56599f);
    dynamicGraph1.addDataPoint(3188.16794f);
    dynamicGraph1.addDataPoint(3363.52354f);
    dynamicGraph1.addDataPoint(3453.39553f);
    dynamicGraph1.addDataPoint(3447.72194f);
    dynamicGraph1.addDataPoint(3344.61201f);
    dynamicGraph1.addDataPoint(3150.56731f);
    dynamicGraph1.addDataPoint(2879.90647f);
    dynamicGraph1.addDataPoint(2553.44802f);
    dynamicGraph1.addDataPoint(2196.5781f);
    dynamicGraph1.addDataPoint(1836.88873f);
    dynamicGraph1.addDataPoint(1501.61403f);
    dynamicGraph1.addDataPoint(1215.1109f);
    dynamicGraph1.addDataPoint(996.62641f);
    dynamicGraph1.addDataPoint(858.56613f);
    dynamicGraph1.addDataPoint(805.4292f);
    dynamicGraph1.addDataPoint(833.51095f);
    dynamicGraph1.addDataPoint(931.39989f);
    dynamicGraph1.addDataPoint(1081.21871f);
    dynamicGraph1.addDataPoint(1260.48696f);
    dynamicGraph1.addDataPoint(1444.42291f);
    dynamicGraph1.addDataPoint(1608.45979f);
    dynamicGraph1.addDataPoint(1730.73075f);
    dynamicGraph1.addDataPoint(1794.28023f);
    dynamicGraph1.addDataPoint(1788.78612f);
    dynamicGraph1.addDataPoint(1711.62466f);
    dynamicGraph1.addDataPoint(1568.17378f);
    dynamicGraph1.addDataPoint(1371.32489f);
    dynamicGraph1.addDataPoint(1140.24988f);
    dynamicGraph1.addDataPoint(898.54237f);
    dynamicGraph1.addDataPoint(671.91345f);
    dynamicGraph1.addDataPoint(485.66537f);
    dynamicGraph1.addDataPoint(362.18833f);
    dynamicGraph1.addDataPoint(318.72387f);
    dynamicGraph1.addDataPoint(365.61229f);
    dynamicGraph1.addDataPoint(505.19546f);
    dynamicGraph1.addDataPoint(731.48254f);
    dynamicGraph1.addDataPoint(1030.61273f);
    dynamicGraph1.addDataPoint(1382.07223f);
    dynamicGraph1.addDataPoint(1760.54915f);
    dynamicGraph1.addDataPoint(2138.24917f);
    dynamicGraph1.addDataPoint(2487.44935f);
    dynamicGraph1.addDataPoint(2783.04529f);
    add(dynamicGraph1);
}

Screen1ViewBase::~Screen1ViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void Screen1ViewBase::setupScreen()
{

}
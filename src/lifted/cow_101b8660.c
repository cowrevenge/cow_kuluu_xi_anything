/* f_0x101b8660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101b8660(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c3c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 7292u);

    wr32(sp0 - 0x1c48u, in_ebx);
    wr32(sp0 - 0x1c4cu, in_ebp);
    wr32(sp0 - 0x1c50u, in_esi);
    wr32(sp0 - 0x1c54u, in_edi);
    wr32(sp0 - 0x1c40u, self);
    if ((int32_t)arg2 <= 360)
    {
        if (rd8(arg1) != 0x7fu) goto L_101b86c1;
        if (rd8(arg1 + 1u) != 0xfeu) goto L_101b86c1;
        esi = arg1 + 2u;
        edi = sp0 - 0x12d0u;
        ecx = (arg2 - 2u) >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = arg2 - 2u & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        wr8(arg2 + sp0 - 0x12d2u, 0u);
        eax = arg2 - 2u;
        edx = arg2 - 2u;
L_101b86e0: ;
        wr32(sp0 - 0x1c58u, 0x968u);
        wr32(sp0 - 0x1c5cu, eax);
        wr32(sp0 - 0x1c60u, sp0 - 0x12d0u);
        wr32(sp0 - 0x1c44u, 0x80808080u);
        g->eax = sp0 - 0x12d0u;
        g->esp = sp0 - 0x1c54u;
        t1 = cow_call_regs(g, COW_IMG(0x10190140u), g->eax, g->ecx, edx, 1, 3, sp0 - 0x12d0u, eax, 0x968u);
        wr32(sp0 - 0x1c64u, self + 0x28u);
        wr32(sp0 - 0x1c68u, arg5);
        wr32(sp0 - 0x1c6cu, 0x168u);
        wr32(sp0 - 0x1c70u, sp0 - 0x968u);
        wr32(sp0 - 0x1c74u, t1);
        wr32(sp0 - 0x1c78u, sp0 - 0x12d0u);
        g->eax = sp0 - 0x12d0u;
        g->esp = sp0 - 0x1408u;
        t2 = cow_bridge_indirect(g, COW_IMG(0x10190280u), 0u, 540u, (const uint32_t[]){sp0 - 0x12d0u, t1, sp0 - 0x968u, 0x168u, arg5, self + 0x28u, sp0 - 0x12d0u, rd32(sp0 - 0x1c5cu), 0x968u, in_edi, in_esi, in_ebp, in_ebx, 0x80808080u, self, rd32(sp0 - 0x1c3cu), rd32(sp0 - 0x1c38u), rd32(sp0 - 0x1c34u), rd32(sp0 - 0x1c30u), rd32(sp0 - 0x1c2cu), rd32(sp0 - 0x1c28u), rd32(sp0 - 0x1c24u), rd32(sp0 - 0x1c20u), rd32(sp0 - 0x1c1cu), rd32(sp0 - 0x1c18u), rd32(sp0 - 0x1c14u), rd32(sp0 - 0x1c10u), rd32(sp0 - 0x1c0cu), rd32(sp0 - 0x1c08u), rd32(sp0 - 0x1c04u), rd32(sp0 - 0x1c00u), rd32(sp0 - 0x1bfcu), rd32(sp0 - 0x1bf8u), rd32(sp0 - 0x1bf4u), rd32(sp0 - 0x1bf0u), rd32(sp0 - 0x1becu), rd32(sp0 - 0x1be8u), rd32(sp0 - 0x1be4u), rd32(sp0 - 0x1be0u), rd32(sp0 - 0x1bdcu), rd32(sp0 - 0x1bd8u), rd32(sp0 - 0x1bd4u), rd32(sp0 - 0x1bd0u), rd32(sp0 - 0x1bccu), rd32(sp0 - 0x1bc8u), rd32(sp0 - 0x1bc4u), rd32(sp0 - 0x1bc0u), rd32(sp0 - 0x1bbcu), rd32(sp0 - 0x1bb8u), rd32(sp0 - 0x1bb4u), rd32(sp0 - 0x1bb0u), rd32(sp0 - 0x1bacu), rd32(sp0 - 0x1ba8u), rd32(sp0 - 0x1ba4u), rd32(sp0 - 0x1ba0u), rd32(sp0 - 0x1b9cu), rd32(sp0 - 0x1b98u), rd32(sp0 - 0x1b94u), rd32(sp0 - 0x1b90u), rd32(sp0 - 0x1b8cu), rd32(sp0 - 0x1b88u), rd32(sp0 - 0x1b84u), rd32(sp0 - 0x1b80u), rd32(sp0 - 0x1b7cu), rd32(sp0 - 0x1b78u), rd32(sp0 - 0x1b74u), rd32(sp0 - 0x1b70u), rd32(sp0 - 0x1b6cu), rd32(sp0 - 0x1b68u), rd32(sp0 - 0x1b64u), rd32(sp0 - 0x1b60u), rd32(sp0 - 0x1b5cu), rd32(sp0 - 0x1b58u), rd32(sp0 - 0x1b54u), rd32(sp0 - 0x1b50u), rd32(sp0 - 0x1b4cu), rd32(sp0 - 0x1b48u), rd32(sp0 - 0x1b44u), rd32(sp0 - 0x1b40u), rd32(sp0 - 0x1b3cu), rd32(sp0 - 0x1b38u), rd32(sp0 - 0x1b34u), rd32(sp0 - 0x1b30u), rd32(sp0 - 0x1b2cu), rd32(sp0 - 0x1b28u), rd32(sp0 - 0x1b24u), rd32(sp0 - 0x1b20u), rd32(sp0 - 0x1b1cu), rd32(sp0 - 0x1b18u), rd32(sp0 - 0x1b14u), rd32(sp0 - 0x1b10u), rd32(sp0 - 0x1b0cu), rd32(sp0 - 0x1b08u), rd32(sp0 - 0x1b04u), rd32(sp0 - 0x1b00u), rd32(sp0 - 0x1afcu), rd32(sp0 - 0x1af8u), rd32(sp0 - 0x1af4u), rd32(sp0 - 0x1af0u), rd32(sp0 - 0x1aecu), rd32(sp0 - 0x1ae8u), rd32(sp0 - 0x1ae4u), rd32(sp0 - 0x1ae0u), rd32(sp0 - 0x1adcu), rd32(sp0 - 0x1ad8u), rd32(sp0 - 0x1ad4u), rd32(sp0 - 0x1ad0u), rd32(sp0 - 0x1accu), rd32(sp0 - 0x1ac8u), rd32(sp0 - 0x1ac4u), rd32(sp0 - 0x1ac0u), rd32(sp0 - 0x1abcu), rd32(sp0 - 0x1ab8u), rd32(sp0 - 0x1ab4u), rd32(sp0 - 0x1ab0u), rd32(sp0 - 0x1aacu), rd32(sp0 - 0x1aa8u), rd32(sp0 - 0x1aa4u), rd32(sp0 - 0x1aa0u), rd32(sp0 - 0x1a9cu), rd32(sp0 - 0x1a98u), rd32(sp0 - 0x1a94u), rd32(sp0 - 0x1a90u), rd32(sp0 - 0x1a8cu), rd32(sp0 - 0x1a88u), rd32(sp0 - 0x1a84u), rd32(sp0 - 0x1a80u), rd32(sp0 - 0x1a7cu), rd32(sp0 - 0x1a78u), rd32(sp0 - 0x1a74u), rd32(sp0 - 0x1a70u), rd32(sp0 - 0x1a6cu), rd32(sp0 - 0x1a68u), rd32(sp0 - 0x1a64u), rd32(sp0 - 0x1a60u), rd32(sp0 - 0x1a5cu), rd32(sp0 - 0x1a58u), rd32(sp0 - 0x1a54u), rd32(sp0 - 0x1a50u), rd32(sp0 - 0x1a4cu), rd32(sp0 - 0x1a48u), rd32(sp0 - 0x1a44u), rd32(sp0 - 0x1a40u), rd32(sp0 - 0x1a3cu), rd32(sp0 - 0x1a38u), rd32(sp0 - 0x1a34u), rd32(sp0 - 0x1a30u), rd32(sp0 - 0x1a2cu), rd32(sp0 - 0x1a28u), rd32(sp0 - 0x1a24u), rd32(sp0 - 0x1a20u), rd32(sp0 - 0x1a1cu), rd32(sp0 - 0x1a18u), rd32(sp0 - 0x1a14u), rd32(sp0 - 0x1a10u), rd32(sp0 - 0x1a0cu), rd32(sp0 - 0x1a08u), rd32(sp0 - 0x1a04u), rd32(sp0 - 0x1a00u), rd32(sp0 - 0x19fcu), rd32(sp0 - 0x19f8u), rd32(sp0 - 0x19f4u), rd32(sp0 - 0x19f0u), rd32(sp0 - 0x19ecu), rd32(sp0 - 0x19e8u), rd32(sp0 - 0x19e4u), rd32(sp0 - 0x19e0u), rd32(sp0 - 0x19dcu), rd32(sp0 - 0x19d8u), rd32(sp0 - 0x19d4u), rd32(sp0 - 0x19d0u), rd32(sp0 - 0x19ccu), rd32(sp0 - 0x19c8u), rd32(sp0 - 0x19c4u), rd32(sp0 - 0x19c0u), rd32(sp0 - 0x19bcu), rd32(sp0 - 0x19b8u), rd32(sp0 - 0x19b4u), rd32(sp0 - 0x19b0u), rd32(sp0 - 0x19acu), rd32(sp0 - 0x19a8u), rd32(sp0 - 0x19a4u), rd32(sp0 - 0x19a0u), rd32(sp0 - 0x199cu), rd32(sp0 - 0x1998u), rd32(sp0 - 0x1994u), rd32(sp0 - 0x1990u), rd32(sp0 - 0x198cu), rd32(sp0 - 0x1988u), rd32(sp0 - 0x1984u), rd32(sp0 - 0x1980u), rd32(sp0 - 0x197cu), rd32(sp0 - 0x1978u), rd32(sp0 - 0x1974u), rd32(sp0 - 0x1970u), rd32(sp0 - 0x196cu), rd32(sp0 - 0x1968u), rd32(sp0 - 0x1964u), rd32(sp0 - 0x1960u), rd32(sp0 - 0x195cu), rd32(sp0 - 0x1958u), rd32(sp0 - 0x1954u), rd32(sp0 - 0x1950u), rd32(sp0 - 0x194cu), rd32(sp0 - 0x1948u), rd32(sp0 - 0x1944u), rd32(sp0 - 0x1940u), rd32(sp0 - 0x193cu), rd32(sp0 - 0x1938u), rd32(sp0 - 0x1934u), rd32(sp0 - 0x1930u), rd32(sp0 - 0x192cu), rd32(sp0 - 0x1928u), rd32(sp0 - 0x1924u), rd32(sp0 - 0x1920u), rd32(sp0 - 0x191cu), rd32(sp0 - 0x1918u), rd32(sp0 - 0x1914u), rd32(sp0 - 0x1910u), rd32(sp0 - 0x190cu), rd32(sp0 - 0x1908u), rd32(sp0 - 0x1904u), rd32(sp0 - 0x1900u), rd32(sp0 - 0x18fcu), rd32(sp0 - 0x18f8u), rd32(sp0 - 0x18f4u), rd32(sp0 - 0x18f0u), rd32(sp0 - 0x18ecu), rd32(sp0 - 0x18e8u), rd32(sp0 - 0x18e4u), rd32(sp0 - 0x18e0u), rd32(sp0 - 0x18dcu), rd32(sp0 - 0x18d8u), rd32(sp0 - 0x18d4u), rd32(sp0 - 0x18d0u), rd32(sp0 - 0x18ccu), rd32(sp0 - 0x18c8u), rd32(sp0 - 0x18c4u), rd32(sp0 - 0x18c0u), rd32(sp0 - 0x18bcu), rd32(sp0 - 0x18b8u), rd32(sp0 - 0x18b4u), rd32(sp0 - 0x18b0u), rd32(sp0 - 0x18acu), rd32(sp0 - 0x18a8u), rd32(sp0 - 0x18a4u), rd32(sp0 - 0x18a0u), rd32(sp0 - 0x189cu), rd32(sp0 - 0x1898u), rd32(sp0 - 0x1894u), rd32(sp0 - 0x1890u), rd32(sp0 - 0x188cu), rd32(sp0 - 0x1888u), rd32(sp0 - 0x1884u), rd32(sp0 - 0x1880u), rd32(sp0 - 0x187cu), rd32(sp0 - 0x1878u), rd32(sp0 - 0x1874u), rd32(sp0 - 0x1870u), rd32(sp0 - 0x186cu), rd32(sp0 - 0x1868u), rd32(sp0 - 0x1864u), rd32(sp0 - 0x1860u), rd32(sp0 - 0x185cu), rd32(sp0 - 0x1858u), rd32(sp0 - 0x1854u), rd32(sp0 - 0x1850u), rd32(sp0 - 0x184cu), rd32(sp0 - 0x1848u), rd32(sp0 - 0x1844u), rd32(sp0 - 0x1840u), rd32(sp0 - 0x183cu), rd32(sp0 - 0x1838u), rd32(sp0 - 0x1834u), rd32(sp0 - 0x1830u), rd32(sp0 - 0x182cu), rd32(sp0 - 0x1828u), rd32(sp0 - 0x1824u), rd32(sp0 - 0x1820u), rd32(sp0 - 0x181cu), rd32(sp0 - 0x1818u), rd32(sp0 - 0x1814u), rd32(sp0 - 0x1810u), rd32(sp0 - 0x180cu), rd32(sp0 - 0x1808u), rd32(sp0 - 0x1804u), rd32(sp0 - 0x1800u), rd32(sp0 - 0x17fcu), rd32(sp0 - 0x17f8u), rd32(sp0 - 0x17f4u), rd32(sp0 - 0x17f0u), rd32(sp0 - 0x17ecu), rd32(sp0 - 0x17e8u), rd32(sp0 - 0x17e4u), rd32(sp0 - 0x17e0u), rd32(sp0 - 0x17dcu), rd32(sp0 - 0x17d8u), rd32(sp0 - 0x17d4u), rd32(sp0 - 0x17d0u), rd32(sp0 - 0x17ccu), rd32(sp0 - 0x17c8u), rd32(sp0 - 0x17c4u), rd32(sp0 - 0x17c0u), rd32(sp0 - 0x17bcu), rd32(sp0 - 0x17b8u), rd32(sp0 - 0x17b4u), rd32(sp0 - 0x17b0u), rd32(sp0 - 0x17acu), rd32(sp0 - 0x17a8u), rd32(sp0 - 0x17a4u), rd32(sp0 - 0x17a0u), rd32(sp0 - 0x179cu), rd32(sp0 - 0x1798u), rd32(sp0 - 0x1794u), rd32(sp0 - 0x1790u), rd32(sp0 - 0x178cu), rd32(sp0 - 0x1788u), rd32(sp0 - 0x1784u), rd32(sp0 - 0x1780u), rd32(sp0 - 0x177cu), rd32(sp0 - 0x1778u), rd32(sp0 - 0x1774u), rd32(sp0 - 0x1770u), rd32(sp0 - 0x176cu), rd32(sp0 - 0x1768u), rd32(sp0 - 0x1764u), rd32(sp0 - 0x1760u), rd32(sp0 - 0x175cu), rd32(sp0 - 0x1758u), rd32(sp0 - 0x1754u), rd32(sp0 - 0x1750u), rd32(sp0 - 0x174cu), rd32(sp0 - 0x1748u), rd32(sp0 - 0x1744u), rd32(sp0 - 0x1740u), rd32(sp0 - 0x173cu), rd32(sp0 - 0x1738u), rd32(sp0 - 0x1734u), rd32(sp0 - 0x1730u), rd32(sp0 - 0x172cu), rd32(sp0 - 0x1728u), rd32(sp0 - 0x1724u), rd32(sp0 - 0x1720u), rd32(sp0 - 0x171cu), rd32(sp0 - 0x1718u), rd32(sp0 - 0x1714u), rd32(sp0 - 0x1710u), rd32(sp0 - 0x170cu), rd32(sp0 - 0x1708u), rd32(sp0 - 0x1704u), rd32(sp0 - 0x1700u), rd32(sp0 - 0x16fcu), rd32(sp0 - 0x16f8u), rd32(sp0 - 0x16f4u), rd32(sp0 - 0x16f0u), rd32(sp0 - 0x16ecu), rd32(sp0 - 0x16e8u), rd32(sp0 - 0x16e4u), rd32(sp0 - 0x16e0u), rd32(sp0 - 0x16dcu), rd32(sp0 - 0x16d8u), rd32(sp0 - 0x16d4u), rd32(sp0 - 0x16d0u), rd32(sp0 - 0x16ccu), rd32(sp0 - 0x16c8u), rd32(sp0 - 0x16c4u), rd32(sp0 - 0x16c0u), rd32(sp0 - 0x16bcu), rd32(sp0 - 0x16b8u), rd32(sp0 - 0x16b4u), rd32(sp0 - 0x16b0u), rd32(sp0 - 0x16acu), rd32(sp0 - 0x16a8u), rd32(sp0 - 0x16a4u), rd32(sp0 - 0x16a0u), rd32(sp0 - 0x169cu), rd32(sp0 - 0x1698u), rd32(sp0 - 0x1694u), rd32(sp0 - 0x1690u), rd32(sp0 - 0x168cu), rd32(sp0 - 0x1688u), rd32(sp0 - 0x1684u), rd32(sp0 - 0x1680u), rd32(sp0 - 0x167cu), rd32(sp0 - 0x1678u), rd32(sp0 - 0x1674u), rd32(sp0 - 0x1670u), rd32(sp0 - 0x166cu), rd32(sp0 - 0x1668u), rd32(sp0 - 0x1664u), rd32(sp0 - 0x1660u), rd32(sp0 - 0x165cu), rd32(sp0 - 0x1658u), rd32(sp0 - 0x1654u), rd32(sp0 - 0x1650u), rd32(sp0 - 0x164cu), rd32(sp0 - 0x1648u), rd32(sp0 - 0x1644u), rd32(sp0 - 0x1640u), rd32(sp0 - 0x163cu), rd32(sp0 - 0x1638u), rd32(sp0 - 0x1634u), rd32(sp0 - 0x1630u), rd32(sp0 - 0x162cu), rd32(sp0 - 0x1628u), rd32(sp0 - 0x1624u), rd32(sp0 - 0x1620u), rd32(sp0 - 0x161cu), rd32(sp0 - 0x1618u), rd32(sp0 - 0x1614u), rd32(sp0 - 0x1610u), rd32(sp0 - 0x160cu), rd32(sp0 - 0x1608u), rd32(sp0 - 0x1604u), rd32(sp0 - 0x1600u), rd32(sp0 - 0x15fcu), rd32(sp0 - 0x15f8u), rd32(sp0 - 0x15f4u), rd32(sp0 - 0x15f0u), rd32(sp0 - 0x15ecu), rd32(sp0 - 0x15e8u), rd32(sp0 - 0x15e4u), rd32(sp0 - 0x15e0u), rd32(sp0 - 0x15dcu), rd32(sp0 - 0x15d8u), rd32(sp0 - 0x15d4u), rd32(sp0 - 0x15d0u), rd32(sp0 - 0x15ccu), rd32(sp0 - 0x15c8u), rd32(sp0 - 0x15c4u), rd32(sp0 - 0x15c0u), rd32(sp0 - 0x15bcu), rd32(sp0 - 0x15b8u), rd32(sp0 - 0x15b4u), rd32(sp0 - 0x15b0u), rd32(sp0 - 0x15acu), rd32(sp0 - 0x15a8u), rd32(sp0 - 0x15a4u), rd32(sp0 - 0x15a0u), rd32(sp0 - 0x159cu), rd32(sp0 - 0x1598u), rd32(sp0 - 0x1594u), rd32(sp0 - 0x1590u), rd32(sp0 - 0x158cu), rd32(sp0 - 0x1588u), rd32(sp0 - 0x1584u), rd32(sp0 - 0x1580u), rd32(sp0 - 0x157cu), rd32(sp0 - 0x1578u), rd32(sp0 - 0x1574u), rd32(sp0 - 0x1570u), rd32(sp0 - 0x156cu), rd32(sp0 - 0x1568u), rd32(sp0 - 0x1564u), rd32(sp0 - 0x1560u), rd32(sp0 - 0x155cu), rd32(sp0 - 0x1558u), rd32(sp0 - 0x1554u), rd32(sp0 - 0x1550u), rd32(sp0 - 0x154cu), rd32(sp0 - 0x1548u), rd32(sp0 - 0x1544u), rd32(sp0 - 0x1540u), rd32(sp0 - 0x153cu), rd32(sp0 - 0x1538u), rd32(sp0 - 0x1534u), rd32(sp0 - 0x1530u), rd32(sp0 - 0x152cu), rd32(sp0 - 0x1528u), rd32(sp0 - 0x1524u), rd32(sp0 - 0x1520u), rd32(sp0 - 0x151cu), rd32(sp0 - 0x1518u), rd32(sp0 - 0x1514u), rd32(sp0 - 0x1510u), rd32(sp0 - 0x150cu), rd32(sp0 - 0x1508u), rd32(sp0 - 0x1504u), rd32(sp0 - 0x1500u), rd32(sp0 - 0x14fcu), rd32(sp0 - 0x14f8u), rd32(sp0 - 0x14f4u), rd32(sp0 - 0x14f0u), rd32(sp0 - 0x14ecu), rd32(sp0 - 0x14e8u), rd32(sp0 - 0x14e4u), rd32(sp0 - 0x14e0u), rd32(sp0 - 0x14dcu), rd32(sp0 - 0x14d8u), rd32(sp0 - 0x14d4u), rd32(sp0 - 0x14d0u), rd32(sp0 - 0x14ccu), rd32(sp0 - 0x14c8u), rd32(sp0 - 0x14c4u), rd32(sp0 - 0x14c0u), rd32(sp0 - 0x14bcu), rd32(sp0 - 0x14b8u), rd32(sp0 - 0x14b4u), rd32(sp0 - 0x14b0u), rd32(sp0 - 0x14acu), rd32(sp0 - 0x14a8u), rd32(sp0 - 0x14a4u), rd32(sp0 - 0x14a0u), rd32(sp0 - 0x149cu), rd32(sp0 - 0x1498u), rd32(sp0 - 0x1494u), rd32(sp0 - 0x1490u), rd32(sp0 - 0x148cu), rd32(sp0 - 0x1488u), rd32(sp0 - 0x1484u), rd32(sp0 - 0x1480u), rd32(sp0 - 0x147cu), rd32(sp0 - 0x1478u), rd32(sp0 - 0x1474u), rd32(sp0 - 0x1470u), rd32(sp0 - 0x146cu), rd32(sp0 - 0x1468u), rd32(sp0 - 0x1464u), rd32(sp0 - 0x1460u), rd32(sp0 - 0x145cu), rd32(sp0 - 0x1458u), rd32(sp0 - 0x1454u), rd32(sp0 - 0x1450u), rd32(sp0 - 0x144cu), rd32(sp0 - 0x1448u), rd32(sp0 - 0x1444u), rd32(sp0 - 0x1440u), rd32(sp0 - 0x143cu), rd32(sp0 - 0x1438u), rd32(sp0 - 0x1434u), rd32(sp0 - 0x1430u), rd32(sp0 - 0x142cu), rd32(sp0 - 0x1428u), rd32(sp0 - 0x1424u), rd32(sp0 - 0x1420u), rd32(sp0 - 0x141cu), rd32(sp0 - 0x1418u), rd32(sp0 - 0x1414u), rd32(sp0 - 0x1410u), rd32(sp0 - 0x140cu)}, arg5, g->edx, g->eax, 2160u);
        wr32(sp0 - 0x1c3cu, t2);
        if ((int32_t)t2 >= 0)
        {
            eax = t2;
            ebx = t2;
            loc_1c3c = t2;
            if ((int32_t)ebx > 0)
            {
                ebp = 0u;
                esi = 0u;
                edi = arg3;
L_101b8746: ;
                if (rd8(ebp + sp0 - 0x968u) != 0x7fu)
                {
                    eax = (eax & 0xffffff00u) | rd8(ebp + sp0 - 0x968u);
                    wr8(esi + sp0 - 0x1c38u, (uint8_t)eax);
                    esi = esi + 1u;
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(ebp + sp0 - 0x968u);
                    if (rd8(ebp + sp0 - 0x967u) != 0xffu)
                    {
                        eax = (eax & 0xffffff00u) | rd8(ebp + sp0 - 0x967u);
                        goto L_101b87b6;
                    }
                    eax = (eax & 0xffffff00u) | rd8(ebp + sp0 - 0x967u);
                    if (rd8(sp0 + 0x18u) != 1u) goto L_101b87ba;
                    wr32(sp0 - 0x1c58u, 0x80808080u);
                    wr32(sp0 - 0x1c5cu, sp0 - 0x1c38u);
                    wr32(sp0 - 0x1c60u, arg4);
                    wr32(sp0 - 0x1c64u, edi);
                    wr8(esi + sp0 - 0x1c38u, 0x7cu);
                    wr8(esi + sp0 - 0x1c37u, 0u);
                    g->eax = arg4;
                    g->edx = sp0 - 0x1c38u;
                    g->esp = sp0 - 0x1c40u;
                    t3 = cow_cdecl(g, COW_IMG(0x101907e0u), 9, edi, arg4, sp0 - 0x1c38u, 0x80808080u, rd32(sp0 - 0x1c54u), rd32(sp0 - 0x1c50u), rd32(sp0 - 0x1c4cu), rd32(sp0 - 0x1c48u), 0x80808080u);
                    t4 = g->edx;
                    wr8(esi + sp0 - 0x1c38u, 0u);
                    wr32(sp0 - 0x1c68u, sp0 - 0x1c38u);
                    g->esp = sp0 - 0x1c54u;
                    t5 = cow_call_regs(g, COW_IMG(0x10190830u), t3, sp0 - 0x1c38u, g->edx, 1, 5, sp0 - 0x1c38u, rd32(sp0 - 0x1c64u), arg4, sp0 - 0x1c38u, 0x80808080u);
                    t6 = rd32(sp0 - 0x1c3cu);
                    wr8(sp0 - 0x1c38u, 0u);
                    wr8(sp0 + 0x18u, 0u);
                    eax = t5;
                    ebx = t6;
                    ebp = ebp + 1u;
                    esi = 0u;
                    edi = edi + t5;
                }
L_101b8810: ;
                if ((int32_t)(ebp + 1u) < (int32_t)ebx)
                {
                    ebp = ebp + 1u;
                    goto L_101b8746;
                }
                if ((int32_t)esi > 0)
                {
                    wr32(sp0 - 0x1c58u, 0x80808080u);
                    wr32(sp0 - 0x1c5cu, sp0 - 0x1c38u);
                    wr32(sp0 - 0x1c60u, arg4);
                    wr32(sp0 - 0x1c64u, edi);
                    wr8(esi + sp0 - 0x1c38u, 0u);
                    g->esp = sp0 - 0x1c40u;
                    cow_cdecl(g, COW_IMG(0x101907e0u), 9, edi, arg4, sp0 - 0x1c38u, 0x80808080u, rd32(sp0 - 0x1c54u), rd32(sp0 - 0x1c50u), rd32(sp0 - 0x1c4cu), rd32(sp0 - 0x1c48u), 0x80808080u);
                }
            }
        }
    }
    return;
L_101b86c1: ;
    esi = arg1;
    edi = sp0 - 0x12d0u;
    ecx = arg2 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg2 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(arg2 + sp0 - 0x12d0u, 0u);
    eax = arg2;
    edx = arg2;
    goto L_101b86e0;
L_101b87b6: ;
    if ((uint8_t)eax != 0xfeu) goto L_101b87bd;
L_101b87ba: ;
    ebp = ebp + 1u;
    goto L_101b8810;
L_101b87bd: ;
    wr32(sp0 - 0x1c58u, 0x80808080u);
    wr32(sp0 - 0x1c5cu, sp0 - 0x1c38u);
    wr32(sp0 - 0x1c60u, arg4);
    wr32(sp0 - 0x1c64u, edi);
    wr8(esi + sp0 - 0x1c38u, 0u);
    g->eax = sp0 - 0x1c38u;
    g->edx = 0x80808080u;
    g->esp = sp0 - 0x1c40u;
    t7 = cow_cdecl(g, COW_IMG(0x101907e0u), 9, edi, arg4, sp0 - 0x1c38u, 0x80808080u, rd32(sp0 - 0x1c54u), rd32(sp0 - 0x1c50u), rd32(sp0 - 0x1c4cu), rd32(sp0 - 0x1c48u), 0x80808080u);
    t8 = g->edx;
    t9 = (t8 & 0xffffff00u) | rd8(ebp + sp0 - 0x967u);
    wr32(sp0 - 0x1c58u, t9);
    g->ecx = rd32(sp0 - 0x1c40u);
    g->edx = t9;
    t10 = rd32(sp0 - 0x1c40u);
    g->esp = sp0 - 0x1c54u;
    t11 = cow_stdcall(g, COW_IMG(0x101b8dc0u), 1, t9);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0x1c44u, t11);
    wr32(sp0 - 0x1c58u, sp0 - 0x1c38u);
    g->esp = sp0 - 0x1c44u;
    t14 = cow_call_regs(g, COW_IMG(0x10190830u), sp0 - 0x1c38u, t12, g->edx, 1, 5, sp0 - 0x1c38u, rd32(sp0 - 0x1c54u), rd32(sp0 - 0x1c50u), rd32(sp0 - 0x1c4cu), rd32(sp0 - 0x1c48u));
    wr8(sp0 - 0x1c38u, 0u);
    eax = t14;
    ebp = ebp + 1u;
    esi = 0u;
    edi = edi + t14;
    goto L_101b8810;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b8660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101b8660(g);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */

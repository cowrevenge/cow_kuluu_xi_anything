/* f_0x1015afa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1015afa0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(self + 0x14ccu) != 0u)
    {
        ecx = rd32(self + 0x14ccu);
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
    }
    edi = self + 0xb0u;
    eax = 0u;
    ecx = 0x500u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(self + 0x14b0u, 0u);
    wr32(self + 0x14b4u, 0u);
    wr32(self + 0x14b8u, 0u);
    wr32(self + 0x14bcu, 0u);
    wr32(self + 0x14c0u, 0u);
    wr32(self + 0x14c4u, 0u);
    wr32(self + 0x14d0u, 0u);
    wr32(self + 0x14d4u, 0u);
    wr32(self + 0x14d8u, 0u);
    wr32(self + 0x14dcu, 0u);
    wr32(self + 0x14e0u, 0u);
    wr32(self + 0x14e4u, 0u);
    wr32(self + 0x14e8u, 0u);
    wr32(self + 0x14ecu, 0u);
    wr32(self + 0x14f0u, 0u);
    wr32(self + 0x14f4u, 0u);
    wr32(self + 0x14f8u, 0u);
    wr32(self + 0x14fcu, 0u);
    wr32(self + 0x1500u, 0u);
    wr32(self + 0x1504u, 0u);
    wr32(self + 0x1508u, 0u);
    wr32(self + 0x150cu, 0u);
    wr32(self + 0x1510u, 0u);
    wr32(self + 0x1514u, 0u);
    wr32(self + 0x1518u, 0u);
    wr32(self + 0x151cu, 0u);
    wr32(self + 0x1520u, 0u);
    wr32(self + 0x1528u, 0u);
    wr32(self + 0x1524u, 0u);
    wr32(self + 0x152cu, 0u);
    wr32(self + 0x1530u, 0u);
    wr32(self + 0x1580u, 0u);
    wr32(self + 0x1534u, 0u);
    wr32(self + 0x1538u, 0u);
    wr32(self + 0x153cu, 0u);
    wr32(self + 0x1540u, 0u);
    wr32(self + 0x1544u, 0u);
    wr32(self + 0x1548u, 0u);
    wr32(self + 0x154cu, 0u);
    wr32(self + 0x1584u, 0u);
    wr32(self + 0x1550u, 0u);
    wr32(self + 0x1554u, 0u);
    wr32(self + 0x1558u, 0u);
    wr32(self + 0x155cu, 0u);
    wr32(self + 0x1560u, 0u);
    wr32(self + 0x1564u, 0u);
    wr32(self + 0x1568u, 0u);
    wr32(self + 0x156cu, 0u);
    wr32(self + 0x1570u, 0u);
    wr32(self + 0x1574u, 0u);
    wr32(self + 0x1578u, 0u);
    wr32(self + 0x157cu, 0u);
    wr32(self + 0x1588u, 0u);
    wr32(self + 0x158cu, 0u);
    wr32(self + 0x1590u, 0u);
    wr32(self + 0x1594u, 0u);
    wr32(self + 0x1598u, 0u);
    wr32(self + 0x159cu, 0u);
    wr32(self + 0x15a0u, 0u);
    wr32(self + 0x15a4u, 0u);
    edx = 0u;
    ebp = self + 8u;
    loc_4 = self + 0x10u;
L_1015b13c: ;
    wr8(edx + self + 4u, 0u);
    wr32(ebp, 0u);
    edi = loc_4;
    eax = 0u;
    ecx = 0x14u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((int32_t)(edx + 1u) < 2)
    {
        edx = edx + 1u;
        ebp = ebp + 4u;
        loc_4 = loc_4 + 0x50u;
        goto L_1015b13c;
    }
    edx = edx + 1u;
    loc_4 = loc_4 + 0x50u;
    wr32(self + 0x14c8u, 0u);
    wr32(self + 0x14ccu, 0u);
    wr8(self + 0x15a8u, 0u);
    wr8(self + 0x15a9u, 0u);
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015afa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1015afa0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* f_0x1015c9d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1015c9d0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(arg1 + 0x14b8u, arg1 + 0xb0u);
    wr32(arg1 + 0x14bcu, arg1 + 0xb4u);
    wr32(arg1 + 0x14c0u, arg1 + 0xb8u);
    wr32(arg1 + 0x14b4u, arg1 + 0xbau);
    wr32(arg1 + 0x14f4u, arg1 + 0xbcu);
    wr32(arg1 + 0x14c4u, arg1 + 0xbeu);
    wr32(arg1 + 0x14d0u, arg1 + 0xc0u);
    wr32(arg1 + 0x151cu, arg1 + 0xceu);
    wr32(arg1 + 0x14d4u, arg1 + 0xc2u);
    wr32(arg1 + 0x1520u, arg1 + 0xcfu);
    wr32(arg1 + 0x14d8u, arg1 + 0xc4u);
    wr32(arg1 + 0x1524u, arg1 + 0xd0u);
    wr32(arg1 + 0x14dcu, arg1 + 0xc8u);
    wr32(arg1 + 0x1528u, arg1 + 0xd4u);
    wr32(arg1 + 0x14e0u, 0u);
    wr32(arg1 + 0x14f8u, 0u);
    wr32(arg1 + 0x14e4u, 0u);
    wr32(arg1 + 0x1508u, 0u);
    wr32(arg1 + 0x1538u, 0u);
    wr32(arg1 + 0x153cu, 0u);
    wr32(arg1 + 0x1540u, 0u);
    wr32(arg1 + 0x1544u, 0u);
    wr32(arg1 + 0x1548u, 0u);
    wr32(arg1 + 0x154cu, 0u);
    wr32(arg1 + 0x1584u, 0u);
    wr32(arg1 + 0x1550u, 0u);
    wr32(arg1 + 0x1554u, 0u);
    wr32(arg1 + 0x1558u, 0u);
    wr32(arg1 + 0x155cu, 0u);
    wr32(arg1 + 0x1560u, 0u);
    wr32(arg1 + 0x1564u, 0u);
    wr32(arg1 + 0x1568u, 0u);
    wr32(arg1 + 0x156cu, 0u);
    wr32(arg1 + 0x1570u, 0u);
    wr32(arg1 + 0x1574u, 0u);
    wr32(arg1 + 0x1578u, 0u);
    wr32(arg1 + 0x157cu, 0u);
    wr32(arg1 + 0x1588u, 0u);
    wr32(arg1 + 0x158cu, 0u);
    wr32(arg1 + 0x1590u, 0u);
    wr32(arg1 + 0x1594u, 0u);
    wr32(arg1 + 0x1598u, 0u);
    wr32(arg1 + 0x159cu, 0u);
    wr32(arg1 + 0x15a0u, 0u);
    wr32(arg1 + 0x15a4u, 0u);
    wr32(arg1 + 0x152cu, arg1 + 0xccu);
    wr32(arg1 + 0x14ecu, arg1 + 0x330u);
    wr32(arg1 + 0x14e8u, arg1 + 0x334u);
    wr32(arg1 + 0x1534u, arg1 + 0xd8u);
    wr32(arg1 + 0x14f0u, arg1 + 0x14afu);
    g->eax = arg1;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x1015be00u), g->eax, arg1 + 0x14afu, arg1 + 0xdcu, 1, 3, arg1, arg1 + 0xdcu, 1u);
    t2 = g->edx;
    g->edx = t2;
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015c9d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015c9d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

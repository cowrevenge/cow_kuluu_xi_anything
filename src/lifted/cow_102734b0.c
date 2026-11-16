/* f_0x102734b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102734b0(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0xffffffffu)
    {
        edx = arg1;
    }
    else
    {
        edx = rd32(COW_IMG(0x1099b0f4u));
    }
    if (arg2 == 0u)
    {
        ecx = arg2;
    }
    else
    {
        t1 = rd32(arg2 + 0x14u);
        wr32(COW_IMG(0x1099b1e4u) + edx * 0x34u, t1);
        t2 = rd32(arg2 + 0x18u);
        wr32(COW_IMG(0x1099b1e8u) + edx * 0x34u, t2);
        t3 = rd32(arg2 + 0x1cu);
        wr32(COW_IMG(0x1099b1ecu) + edx * 0x34u, t3);
        t4 = rd32(arg2 + 0x20u);
        wr32(COW_IMG(0x1099b1f0u) + edx * 0x34u, t4);
        t5 = rd32(arg2 + 0x24u);
        wr32(COW_IMG(0x1099b1f4u) + edx * 0x34u, t5);
        t6 = rd32(arg2 + 0x28u);
        wr32(COW_IMG(0x1099b1f8u) + edx * 0x34u, t6);
        t7 = rd32(arg2 + 0x2cu);
        wr32(COW_IMG(0x1099b1fcu) + edx * 0x34u, t7);
        t8 = rd32(arg2 + 0x30u);
        wr32(COW_IMG(0x1099b200u) + edx * 0x34u, t8);
        ecx = t8;
    }
    if (arg3 != 0u)
    {
        t9 = COW_IMG(0x1099b358u) + edx * 0x7cu;
        g->cf = ((edx << 5u) - edx) >> 0x1eu & 1u;
        g->pf = PARITY((uint8_t)(edx * 0x7cu));
        g->af = (edx ^ (edx << 5u) - edx) >> 4u & 1u;
        g->zf = edx * 0x7cu == 0u;
        g->sf = (int32_t)(edx * 0x7cu) < 0;
        g->of = edx * 0x7cu >> 0x1fu ^ (((edx << 5u) - edx) >> 0x1eu & 1u);
        g->eax = t9;
        g->esp = sp0 - 8u;
        t10 = cow_cdecl(g, COW_IMG(0x1027eb30u), 2, t9, arg3 + 0x1cu);
        t11 = COW_IMG(0x1099b398u) + edx * 0x7cu;
        g->edx = t11;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t11, arg3 + 0x5cu);
        t12 = g->edx;
        t13 = COW_IMG(0x1099b3a4u) + edx * 0x7cu;
        g->eax = arg3 + 0x68u;
        g->ecx = t13;
        g->esp = sp0 - 0x18u;
        t14 = cow_cdecl(g, COW_IMG(0x1027a720u), 2, t13, arg3 + 0x68u);
        t15 = g->ecx;
        t16 = rd32(arg3 + 0x78u);
        wr32(COW_IMG(0x1099b3b4u) + edx * 0x7cu, t16);
        g->esp = sp0 - 0x20u;
        cow_cdecl(g, COW_IMG(0x1026e210u), 1, arg3);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102734b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102734b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* f_0x10080570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10080570(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, self);
    if ((uint8_t)arg1 != 7u) goto L_1008059c;
    wr32(sp0 - 8u, 0x9cu);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x9cu);
    t2 = g->edx;
    g->edx = t2;
    return (t1 & 0xffffff00u) | 1u;
L_1008059c: ;
    if (arg2 == 0u) goto L_100805b9;
    if (arg2 == 1u) goto L_100805b2;
    if (arg2 != 2u)
    {
        eax = arg2 - 2u;
        edx = in_edx;
        goto L_100805e3;
    }
    wr32(sp0 - 8u, 0xbeu);
    eax = arg2 - 2u;
    loc_8 = 0xbeu;
L_100805be: ;
    wr32(sp0 - 0xcu, 9u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, loc_8);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        edx = t4;
    }
    else
    {
        eax = t3;
        edx = t4;
        wr32(sp0 - 8u, 0u);
        wr32(sp0 - 0xcu, 1u);
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0x14u, sp0 - 4u);
        wr32(sp0 - 0x18u, eax);
        g->edx = edx;
        g->esp = sp0 - 4u;
        t5 = cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, eax, sp0 - 4u, 0u, 1u, 0u);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
L_100805e3: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100805b2: ;
    wr32(sp0 - 8u, 0xbdu);
    eax = arg2 - 1u;
    loc_8 = 0xbdu;
    goto L_100805be;
L_100805b9: ;
    wr32(sp0 - 8u, 0xbcu);
    eax = arg2;
    loc_8 = 0xbcu;
    goto L_100805be;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10080570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10080570(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

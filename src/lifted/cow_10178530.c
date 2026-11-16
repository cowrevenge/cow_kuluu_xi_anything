/* f_0x10178530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_10178530(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d2;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)rd32(sp0 + 4u) < 0) goto L_10178607;
    eax = rd32(sp0 + 4u);
    if ((int32_t)eax >= 256) goto L_10178607;
    d1 = (double)rdf32(sp0 + 0x10u);
    d2 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(COW_IMG(0x1063207cu) + eax * 0x70u, rd32(arg2));
    t3 = rd32(arg2 + 4u);
    wr32(COW_IMG(0x10632080u) + eax * 0x70u, t3);
    t4 = rd32(arg2 + 8u);
    wr32(COW_IMG(0x10632084u) + eax * 0x70u, t4);
    wr32(COW_IMG(0x10632094u) + eax * 0x70u, arg5);
    wr32(COW_IMG(0x10632058u) + eax * 0x70u, 0u);
    if ((cow_fsw(g, d1, d2, 0u) & 0x4100u) != 0u)
    {
        ecx = COW_IMG(0x10632048u) + eax * 0x70u;
        goto L_101785f4;
    }
    ecx = COW_IMG(0x10632048u) + eax * 0x70u;
    t5 = rd32(sp0 + 0xeu);
    wr32(ecx + 0x60u, arg4);
    wr32(sp0 + 4u, (uint8_t)t5);
    t6 = (uint8_t)rd32(sp0 + 0xdu);
    t7 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t6);
    d8 = fr(g, (double)(int32_t)t7 * (double)rdf32(COW_IMG(0x1032a778u)));
    wrf32(ecx + 4u, (float)d8);
    t9 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, (uint8_t)arg3);
    d10 = fr(g, (double)(int32_t)t9 * (double)rdf32(COW_IMG(0x1032a778u)));
    wrf32(ecx + 8u, (float)d10);
    d11 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032a778u)));
    wrf32(ecx + 0xcu, (float)d11);
    d12 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 0x10u));
    wrf32(ecx + 0x5cu, (float)d12);
    return;
L_101785f4: ;
    wr32(ecx + 4u, 0u);
    wr32(ecx + 8u, 0u);
    wr32(ecx + 0xcu, 0u);
    wr32(ecx + 0x5cu, 0x3f800000u);
    wr32(ecx + 0x60u, 0u);
L_10178607: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10178530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10178530(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */

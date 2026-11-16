/* f_0x102999c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102999c0(Guest* g)
{
    double d3;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_30;
    uint32_t t1;
    uint32_t t2;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x18u, 0x40800000u);
    wr32(sp0 - 0x14u, 0x41800000u);
    wr32(sp0 - 0x10u, 0x43800000u);
    wr32(sp0 - 0xcu, 0x47800000u);
    wr32(sp0 - 8u, 0x4f800005u);
    wr32(sp0 - 4u, 0x5f7fffd8u);
    if (rd32(arg1 + 0x60u) == 0u) goto L_10299a1d;
    wr32(sp0 - 0x38u, arg2);
    g->eax = arg2;
    g->esp = sp0 - 0x34u;
    t1 = cow_cdecl(g, COW_IMG(0x102a1fc0u), 1, arg2);
    if (t1 != 2u) goto L_10299a1d;
    eax = t1;
    edx = (uint32_t)((int32_t)t1 >> 0x1fu);
    if (edx != 0u) goto L_10299a1d;
    g->esi = rd32(sp0 - 0x34u);
    return eax & 0xffffff00u;
L_10299a1d: ;
    t2 = rd32(arg1 + 0x5cu);
    wr32(sp0 - 0x30u, t2);
    if ((t2 | (uint32_t)((int32_t)rd32(arg1 + 0x5cu) >> 0x1fu)) == 0u)
    {
        eax = t2;
        ecx = t2 | (uint32_t)((int32_t)rd32(arg1 + 0x5cu) >> 0x1fu);
        loc_30 = t2;
        x0 = (double)rdf32(arg1 + 0x58u);
    }
    else
    {
        eax = t2;
        ecx = t2 | (uint32_t)((int32_t)rd32(arg1 + 0x5cu) >> 0x1fu);
        edx = (uint32_t)((int32_t)rd32(arg1 + 0x5cu) >> 0x1fu);
        loc_30 = t2;
        x0 = (double)rdf32(arg1 + 0x58u);
        if (edx != 0u) goto L_10299a37;
        if (eax < 6u) goto L_10299a48;
L_10299a37: ;
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 6u);
        eax = 6u;
        loc_30 = 6u;
L_10299a48: ;
        x0 = fr(g, x0 * (double)rdf32(eax * 4u + sp0 - 0x1cu));
    }
    wr32(sp0 - 0x38u, sp0 - 0x28u);
    d3 = (double)(float)fr(g, x0 * (double)rdf32(arg1 + 0x4cu));
    wrf32(sp0 - 0x28u, (float)d3);
    d4 = (double)(float)fr(g, x0 * (double)rdf32(arg1 + 0x50u));
    wrf32(sp0 - 0x24u, (float)d4);
    d5 = (double)(float)fr(g, x0 * (double)rdf32(arg1 + 0x54u));
    wrf32(sp0 - 0x20u, (float)d5);
    wrf32(sp0 - 0x1cu, (float)(double)(float)(double)(int32_t)loc_30);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x28u;
    g->esp = sp0 - 0x34u;
    t6 = cow_cdecl(g, COW_IMG(0x10283990u), 1, sp0 - 0x28u);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0x400000u);
    g->esp = sp0 - 0x38u;
    t9 = cow_cdecl(g, COW_IMG(0x10284b40u), 2, 0x400000u, 0u);
    return (t9 & 0xffffff00u) | (uint8_t)(t9 | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102999c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102999c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

/* f_0x10281460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10281460(Guest* g)
{
    double d12;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, 2u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x10281c70u), 1, 2u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x1cu, 0u);
    g->esp = sp0 - 0x10u;
    t4 = cow_call_regs(g, COW_IMG(0x10282490u), g->eax, t2, t3, 1, 3, 0u, 2u, in_esi);
    t5 = g->ecx;
    t6 = g->edx;
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x10281dd0u), g->eax, g->ecx, t6, 1, 0);
    wr32(sp0 - 0x20u, sp0 - 8u);
    wr32(sp0 - 0x24u, sp0 - 4u);
    t7 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x8b0u);
    wr32(sp0 - 0x28u, t7);
    cow_cdecl(g, COW_IMG(0x10281b80u), 3, t7, sp0 - 4u, sp0 - 8u);
    wr32(sp0 - 0x2cu, sp0 - 0xcu);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    t8 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x89cu);
    wr32(sp0 - 0x34u, t8);
    g->ecx = t8;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10281b80u), 3, t8, sp0 - 0x10u, sp0 - 0xcu);
    t9 = g->ecx;
    t10 = (uint32_t)((int32_t)(rd32(sp0 - 0x10u) - (uint32_t)((int32_t)rd32(sp0 - 0x10u) >> 0x1fu)) >> 1u);
    wr32(sp0 - 0x10u, t10);
    t11 = (uint32_t)((int32_t)(rd32(sp0 - 0xcu) - (uint32_t)((int32_t)rd32(sp0 - 0xcu) >> 0x1fu)) >> 1u);
    wr32(sp0 - 0xcu, t11);
    if ((int32_t)rd32(sp0 + 4u) <= 0)
    {
        eax = t11;
        ecx = t9;
        edx = (uint32_t)((int32_t)rd32(sp0 - 0xcu) >> 0x1fu);
        edi = in_edi;
        loc_14 = in_esi;
        loc_10 = t10;
    }
    else
    {
        eax = t11;
        ecx = t9;
        edx = (uint32_t)((int32_t)rd32(sp0 - 0xcu) >> 0x1fu);
        esi = rd32(sp0 + 4u);
        loc_10 = t10;
        wr32(sp0 - 0x18u, in_edi);
        d12 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 8u));
        wrf32(sp0 + 4u, (float)d12);
        edi = rd32(sp0 + 4u);
L_102814e6: ;
        wr32(sp0 - 0x1cu, edi);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x18u;
        t13 = cow_call_regs(g, COW_IMG(0x102826e0u), g->eax, g->ecx, edx, 1, 1, edi);
        t14 = g->ecx;
        t15 = g->edx;
        g->ecx = t14;
        g->edx = t15;
        t16 = cow_stdcall(g, COW_IMG(0x10283260u), 0);
        t17 = g->ecx;
        t18 = g->edx;
        if (esi != 1u)
        {
            eax = t16;
            ecx = t17;
            edx = t18;
            esi = esi - 1u;
            loc_10 = rd32(sp0 - 0x10u);
            goto L_102814e6;
        }
        eax = t16;
        ecx = t17;
        edx = t18;
        edi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
    }
    wr32(sp0 - 0x18u, 1u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t19 = cow_call_regs(g, COW_IMG(0x10282490u), g->eax, ecx, edx, 1, 3, 1u, loc_14, loc_10);
    t20 = g->ecx;
    t21 = g->edx;
    g->ecx = t20;
    g->esp = sp0 - 0x18u;
    t22 = cow_call_regs(g, COW_IMG(0x10283240u), g->eax, g->ecx, t21, 1, 0);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x1cu, 0xffffffffu);
    g->ecx = t23;
    g->edx = t24;
    t25 = cow_cdecl(g, COW_IMG(0x10281c40u), 1, 0xffffffffu);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x20u, 0u);
    g->edx = t27;
    g->esp = sp0 - 0x1cu;
    t28 = cow_cdecl(g, COW_IMG(0x10281c70u), 1, 0u);
    t29 = g->edx;
    g->esi = rd32(sp0 - 0x14u);
    g->edi = edi;
    g->edx = t29;
    return t28;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10281460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10281460(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

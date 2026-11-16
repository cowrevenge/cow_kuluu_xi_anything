/* f_0x10234680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10234680(Guest* g)
{
    double d1;
    double d6;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x10u) != 0u)
    {
        eax = rd32(self + 0x10u);
        g->ecx = self;
        g->edx = in_edx;
        d1 = fr(g, (double)(int32_t)rd32(self) - fr(g, fr(g, (double)rdf32(self + 0x20u) - (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x1032a3a0u))));
        fpush(g, d1);
        g->esp = sp0 - 0x1cu;
        t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t3 = g->ecx;
        t4 = g->edx;
        t5 = rd32(self + 8u) >> 1u;
        g->ecx = t3;
        g->edx = t4;
        d6 = fr(g, (double)(int32_t)rd32(self + 4u) - fr(g, fr(g, (double)rdf32(self + 0x24u) - (double)rdf32(COW_IMG(0x1032961cu))) * (double)(int32_t)t5));
        fpush(g, d6);
        t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), t5, g->ecx, g->edx, 1, 0);
        t8 = g->ecx;
        t9 = g->edx;
        t10 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 3u, 0u);
        t11 = rd32(self + 0x1cu);
        t12 = rd32(self + 0x18u);
        t13 = rd32(self + 0x24u);
        t14 = rd32(self + 0x20u);
        cow_thiscall(g, COW_IMG(0x10120000u), t10, 11, t2, t7, 0u, 0u, 8u, 4u, t14, t13, t12, t11, 0u);
        t15 = cow_divs(g, rd32(self + 0x10u) + (rd32(self + 8u) - 9u) * rd32(self + 0xcu), rd32(self + 0x10u));
        t16 = cow_mods(g, rd32(self + 0x10u) + (rd32(self + 8u) - 9u) * rd32(self + 0xcu), rd32(self + 0x10u));
        if ((int32_t)rd32(self + 0x10u) <= (int32_t)rd32(self + 0xcu))
        {
            ecx = rd32(self + 0x10u);
            edx = t15;
            ebx = t2;
            ebp = t7;
            edi = rd32(self + 8u) - 8u;
            loc_8 = t15;
            loc_c = 0u;
        }
        else
        {
            ecx = rd32(self + 0x10u);
            edx = t15;
            ebx = t2;
            ebp = t7;
            edi = rd32(self + 8u) - 8u;
            loc_8 = t15;
            t17 = cow_divs(g, (edi - edx) * rd32(self + 0x14u), ecx - rd32(self + 0xcu));
            t18 = cow_mods(g, (edi - edx) * rd32(self + 0x14u), ecx - rd32(self + 0xcu));
            ecx = ecx - rd32(self + 0xcu);
            edx = t18;
            loc_c = t17;
        }
        g->esp = sp0 - 0x1cu;
        t19 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 3u, 3u);
        t20 = rd32(self + 0x1cu);
        t21 = rd32(self + 0x18u);
        t22 = rd32(self + 0x24u);
        t23 = rd32(self + 0x20u);
        g->edx = loc_c + 4u;
        cow_thiscall(g, COW_IMG(0x10120000u), t19, 11, ebx, ebp, 1u, loc_c + 4u, 6u, loc_8, t23, t22, t21, t20, 0u);
        t24 = g->ecx;
        t25 = g->edx;
        t26 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 3u, 1u);
        t27 = rd32(self + 0x1cu);
        t28 = rd32(self + 0x18u);
        t29 = rd32(self + 0x24u);
        t30 = rd32(self + 0x20u);
        g->edx = t30;
        cow_thiscall(g, COW_IMG(0x10120000u), t26, 11, ebx, ebp, 0u, 4u, 8u, edi, t30, t29, t28, t27, 0u);
        t31 = g->ecx;
        t32 = g->edx;
        t33 = rd32(self + 8u);
        t34 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 3u, 2u);
        t35 = rd32(self + 0x1cu);
        t36 = rd32(self + 0x18u);
        t37 = rd32(self + 0x24u);
        t38 = rd32(self + 0x20u);
        cow_thiscall(g, COW_IMG(0x10120000u), t34, 11, ebx, ebp, 0u, t33 - 4u, 8u, 4u, t38, t37, t36, t35, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10234680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10234680(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

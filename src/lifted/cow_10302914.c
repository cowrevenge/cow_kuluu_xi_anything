/* f_0x10302914 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10302914(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    t1 = rd32(in_esi + 0x20u) << 3u;
    g->eax = rd32(in_esi + 4u);
    g->edx = in_edx;
    t2 = rd32(in_esi + 4u);
    t3 = rd32(in_esi + 0x180u);
    t4 = rd32(in_esi + 0x114u);
    g->esp = sp0 - 0x28u;
    t5 = cow_thiscall(g, rd32(t2), t1, 0);
    t6 = g->edx;
    wr32(t3 + 0x38u, t5);
    t7 = t5 + rd32(in_esi + 0x20u) * 4u;
    wr32(t3 + 0x3cu, t7);
    if ((int32_t)rd32(in_esi + 0x20u) <= 0)
    {
        edx = t6;
    }
    else
    {
        eax = rd32(in_esi + 0xc4u);
        ebx = t3;
        edi = t4;
        ecx = eax + 0xcu;
        loc_8 = 0u;
        loc_10 = edi + 4u;
        loc_c = eax + 0xcu;
L_10302967: ;
        t8 = cow_divs(g, rd32(ecx + 0x18u) * rd32(ecx), rd32(in_esi + 0x114u));
        t9 = cow_mods(g, rd32(ecx + 0x18u) * rd32(ecx), rd32(in_esi + 0x114u));
        t10 = loc_10 * t8 * 8u;
        g->eax = rd32(in_esi + 4u);
        t11 = rd32(in_esi + 4u);
        g->esp = sp0 - 0x28u;
        t12 = cow_thiscall(g, rd32(t11), t10, 0);
        t13 = t12 + t8 * 4u;
        wr32(loc_8 * 4u + rd32(ebx + 0x38u), t13);
        t14 = t13 + loc_10 * t8 * 4u;
        t15 = rd32(ebx + 0x3cu);
        wr32(loc_8 * 4u + t15, t14);
        if ((int32_t)(loc_8 + 1u) < (int32_t)rd32(in_esi + 0x20u))
        {
            loc_8 = loc_8 + 1u;
            loc_c = loc_c + 0x54u;
            goto L_10302964;
        }
        edx = t15;
    }
    g->edx = edx;
    return;
L_10302964: ;
    ecx = loc_c;
    goto L_10302967;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10302914(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10302914(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

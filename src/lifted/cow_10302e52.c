/* f_0x10302e52 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10302e52(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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

    t1 = rd32(sp0 + 4u);
    g->eax = rd32(rd32(sp0 + 4u) + 4u);
    g->edx = in_edx;
    t2 = rd32(rd32(sp0 + 4u) + 4u);
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall_cdecl(g, rd32(t2), self, 3, t1, 1u, 0x50u);
    t4 = g->ecx;
    t5 = g->edx;
    t6 = rd8(sp0 + 8u);
    wr32(t1 + 0x180u, t3);
    wr32(t3, COW_IMG(0x10302deau));
    if ((uint8_t)t6 == 0u)
    {
        ecx = t4;
        edx = t5;
        ebx = t3;
        esi = t1;
    }
    else
    {
        ecx = t4;
        edx = t5;
        ebx = t3;
        esi = t1;
        wr32(rd32(esi) + 0x14u, 4u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall_cdecl(g, rd32(rd32(esi)), ecx, 1, esi);
        t7 = g->edx;
        ecx = esi;
        edx = t7;
    }
    if (rd8(rd32(esi + 0x19cu) + 8u) == 0u)
    {
        t13 = rd32(esi + 0x114u);
        wr32(sp0 + 8u, t13);
        ecx = t13;
    }
    else
    {
        eax = rd32(esi + 0x19cu);
        if ((int32_t)rd32(esi + 0x114u) < 2)
        {
            wr32(rd32(esi) + 0x14u, 0x2eu);
            g->eax = rd32(esi);
            g->edx = edx;
            t8 = rd32(esi);
            g->esp = sp0 - 0x10u;
            t9 = cow_thiscall_cdecl(g, rd32(t8), ecx, 1, esi);
            t10 = g->edx;
            eax = t9;
            ecx = esi;
            edx = t10;
        }
        g->esi = esi;
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10302914u), g->eax, g->ecx, edx, 1, 0);
        t11 = g->edx;
        t12 = rd32(esi + 0x114u) + 2u;
        wr32(sp0 + 8u, t12);
        ecx = t12;
        edx = t11;
    }
    wr32(sp0 + 4u, 0u);
    if ((int32_t)rd32(esi + 0x20u) > 0)
    {
        edi = rd32(esi + 0xc4u);
        ebx = ebx + 8u;
        edi = edi + 0x24u;
L_10302ee7: ;
        t14 = cow_divs(g, rd32(edi - 0x18u) * rd32(edi), rd32(esi + 0x114u));
        t15 = cow_mods(g, rd32(edi - 0x18u) * rd32(edi), rd32(esi + 0x114u));
        t16 = rd32(edi - 8u) * rd32(edi);
        g->eax = t16;
        g->edx = rd32(esi + 4u);
        t17 = rd32(esi + 4u);
        g->esp = sp0 - 0x10u;
        t18 = cow_thiscall_cdecl(g, rd32(t17 + 8u), ecx, 4, esi, 1u, t16, t14 * ecx);
        t19 = g->edx;
        wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
        wr32(ebx, t18);
        if ((int32_t)rd32(sp0 + 4u) < (int32_t)rd32(esi + 0x20u))
        {
            ebx = ebx + 4u;
            edi = edi + 0x54u;
            goto L_10302ee4;
        }
        edx = t19;
    }
    g->esi = in_esi;
    g->edx = edx;
    return;
L_10302ee4: ;
    ecx = rd32(sp0 + 8u);
    goto L_10302ee7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10302e52(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10302e52(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

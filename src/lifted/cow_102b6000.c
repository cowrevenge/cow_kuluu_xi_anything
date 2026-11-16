/* f_0x102b6000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102b6000(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        eax = rd32(sp0 + 4u);
        ecx = self;
        goto L_102b60b0;
    }
    eax = rd32(sp0 + 4u);
    edi = rd32(rd32(sp0 + 4u) + 0x34u);
    if (rd32(edi + 0x14u) == 0u)
    {
        ecx = rd32(edi + 0x14u);
        goto L_102b60b0;
    }
    ecx = rd32(edi + 0x14u);
    if (rd32(eax + 0x4cu) == 0u) goto L_102b60d6;
    ebx = rd32(eax + 0x44u);
    esi = rd32(eax + 0x4cu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x102a9f10u), 3, edi, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)ebx <= 0)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    else
    {
        edx = t3;
        esi = esi + 8u;
        loc_4 = ebx;
L_102b6043: ;
        t4 = rd32(esi - 4u);
        t5 = rd32(esi - 8u);
        t6 = rd32(esi + 4u);
        t7 = rd32(esi);
        wr32(sp0 + 4u, t6);
        g->ecx = t6;
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x102aa1b0u), 4, t5, t4, t7, edi);
        t8 = g->ecx;
        t9 = rd32(sp0 + 4u);
        g->eax = t7;
        g->esp = sp0 - 0x28u;
        t10 = cow_cdecl(g, COW_IMG(0x102aa1b0u), 4, t4, t7, t9, edi);
        t11 = rd32(sp0 + 4u);
        g->ecx = t11;
        g->edx = t7;
        g->esp = sp0 - 0x38u;
        cow_cdecl(g, COW_IMG(0x102aa1b0u), 4, t7, t11, t5, edi);
        t12 = g->ecx;
        t13 = g->edx;
        t14 = rd32(sp0 + 4u);
        g->ecx = t12;
        g->edx = t13;
        g->esp = sp0 - 0xcu;
        cow_bridge_indirect(g, COW_IMG(0x102aa1b0u), 0u, 19u, (const uint32_t[]){t14, t5, t4, edi, t7, t11, t5, edi, t4, t7, t9, edi, t5, t4, t7, edi, in_ebp, in_edi, in_esi}, g->ecx, g->edx, g->eax, 76u);
        t15 = g->ecx;
        t16 = g->edx;
        if (loc_4 != 1u)
        {
            edx = t16;
            esi = esi + 0x10u;
            loc_4 = loc_4 - 1u;
            goto L_102b6043;
        }
        eax = loc_4 - 1u;
        ecx = t15;
        edx = t16;
    }
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102aa260u), 1, edi);
    return;
L_102b60b0: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t17 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103c2074u));
    t18 = g->ecx;
    t19 = g->edx;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103beae0u));
L_102b60d6: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b6000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b6000(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

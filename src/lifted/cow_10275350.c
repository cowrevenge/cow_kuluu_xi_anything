/* f_0x10275350 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10275350(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_8c;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 212u);

    wr32(sp0 - 0x90u, in_ebx);
    wr32(sp0 - 0x94u, in_ebp);
    wr32(sp0 - 0x98u, in_esi);
    wr32(sp0 - 0x9cu, in_edi);
    wr32(sp0 - 0x8cu, 0u);
    wr32(sp0 - 0x88u, 0u);
    wr32(sp0 - 0x84u, 0u);
    if (arg1 == 0u)
    {
        eax = rd32(COW_IMG(0x1099d1f8u));
        edi = COW_IMG(0x1099cef8u) + rd32(COW_IMG(0x1099d1f8u)) * 0x60u;
        esi = rd32(edi + 0x54u);
    }
    else
    {
        eax = rd32(COW_IMG(0x1099d1f8u));
        edi = COW_IMG(0x1099cef8u) + rd32(COW_IMG(0x1099d1f8u)) * 0x60u;
        esi = arg1 - 0x10u;
    }
    if (esi >= rd32(edi + 0x58u))
    {
        ebx = 0u;
        ebp = 0u;
        goto L_102753ff;
    }
    edx = in_edx;
    ebx = 0u;
    ebp = 0u;
L_10275393: ;
    wr32(sp0 - 0xa0u, esi + 0x10u);
    g->ecx = esi + 0x10u;
    g->esp = sp0 - 0x9cu;
    t1 = cow_cdecl(g, COW_IMG(0x10275310u), 1, esi + 0x10u);
    t2 = g->ecx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        if (eax != 3u)
        {
            t5 = rd32(sp0 - 0x84u) + 1u;
            wr32(sp0 - 0x84u, t5);
            eax = t5;
            ebp = ebp + rd32(esi + 4u);
            loc_84 = t5;
        }
    }
    else
    {
        ecx = t2;
        t3 = rd32(esi + 4u) + rd32(sp0 - 0x8cu);
        wr32(sp0 - 0x8cu, t3);
        t4 = rd32(sp0 - 0x88u) + 1u;
        wr32(sp0 - 0x88u, t4);
        eax = t4;
        loc_8c = t3;
        loc_88 = t4;
    }
    wr32(sp0 - 0xa0u, 0u);
    wr32(sp0 - 0xa4u, sp0 - 0x80u);
    wr32(sp0 - 0xa8u, ecx);
    g->ebx = ebx + 0x10u;
    g->esp = sp0 - 0x9cu;
    cow_call_regs(g, COW_IMG(0x102756c0u), g->eax, ecx, sp0 - 0x80u, 1, 3, ecx, sp0 - 0x80u, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0xacu, sp0 - 0x80u);
    wr32(sp0 - 0xb0u, COW_IMG(0x10361dc0u));
    g->ecx = t6;
    g->edx = t7;
    g->esp = sp0 - 0xa8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x10361dc0u), sp0 - 0x80u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0xb4u, esi);
    g->edx = t9;
    g->esp = sp0 - 0xb0u;
    t10 = cow_cdecl(g, COW_IMG(0x10275340u), 1, esi);
    t11 = g->edx;
    if (t10 < rd32(edi + 0x58u))
    {
        edx = t11;
        ebx = ebx + 0x10u;
        esi = t10;
        goto L_10275393;
    }
    eax = rd32(edi + 0x58u);
    ebx = ebx + 0x10u;
L_102753ff: ;
    wr32(sp0 - 0xa0u, 0u);
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa8u, COW_IMG(0x103b292cu));
    g->eax = eax;
    g->ecx = 0u;
    g->edx = 0u;
    g->esp = sp0 - 0xa0u;
    t12 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b292cu), 0u);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0xacu, 0u);
    wr32(sp0 - 0xb0u, ebp);
    wr32(sp0 - 0xb4u, COW_IMG(0x103b2908u));
    g->ecx = t13;
    g->edx = t14;
    g->esp = sp0 - 0xacu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2908u), ebp);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0xb8u, 0u);
    wr32(sp0 - 0xbcu, ebx);
    wr32(sp0 - 0xc0u, COW_IMG(0x103b28e4u));
    g->ecx = t15;
    g->edx = t16;
    g->esp = sp0 - 0xb8u;
    t17 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b28e4u), ebx);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0xc4u, COW_IMG(0x103b28b4u));
    g->ecx = t18;
    g->edx = t19;
    g->esp = sp0 - 0xbcu;
    t20 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b28b4u), COW_IMG(0x103b28e4u));
    t21 = g->ecx;
    t22 = g->edx;
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xccu, ebp + ebx);
    wr32(sp0 - 0xd0u, COW_IMG(0x103b2890u));
    g->edx = t22;
    g->esp = sp0 - 0xc8u;
    t23 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2890u), ebp + ebx);
    t24 = g->edx;
    g->ebx = in_ebx;
    g->edx = t24;
    return t23;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10275350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10275350(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

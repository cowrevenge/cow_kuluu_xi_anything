/* f_0x102751f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102751f0(Guest* g)
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
    uint32_t loc_90;
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
    uint32_t t25;
    uint32_t t26;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 216u);

    wr32(sp0 - 0x94u, in_ebx);
    wr32(sp0 - 0x98u, in_ebp);
    wr32(sp0 - 0x9cu, in_esi);
    wr32(sp0 - 0xa0u, in_edi);
    wr32(sp0 - 0x8cu, 0u);
    wr32(sp0 - 0x88u, 0u);
    wr32(sp0 - 0x90u, 0u);
    wr32(sp0 - 0x84u, 0u);
    if (rd32(COW_IMG(0x1099cf4cu) + rd32(COW_IMG(0x1099d1f8u)) * 0x60u) >= rd32(COW_IMG(0x1099cf50u) + rd32(COW_IMG(0x1099d1f8u)) * 0x60u))
    {
        eax = rd32(COW_IMG(0x1099cf50u) + rd32(COW_IMG(0x1099d1f8u)) * 0x60u);
        ebx = 0u;
        ebp = 0u;
        goto L_102752a1;
    }
    eax = rd32(COW_IMG(0x1099cf50u) + rd32(COW_IMG(0x1099d1f8u)) * 0x60u);
    ecx = self;
    edx = in_edx;
    ebp = 0u;
    esi = rd32(COW_IMG(0x1099cf4cu) + rd32(COW_IMG(0x1099d1f8u)) * 0x60u);
    edi = COW_IMG(0x1099cef8u) + rd32(COW_IMG(0x1099d1f8u)) * 0x60u;
L_10275229: ;
    wr32(sp0 - 0xa4u, esi + 0x10u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0xa0u;
    t1 = cow_cdecl(g, COW_IMG(0x10275310u), 1, esi + 0x10u);
    t2 = g->ecx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        ebx = esi + 0x10u;
        if (eax != 3u)
        {
            t5 = rd32(esi + 4u) + rd32(sp0 - 0x88u);
            wr32(sp0 - 0x88u, t5);
            t6 = rd32(sp0 - 0x84u) + 1u;
            wr32(sp0 - 0x84u, t6);
            eax = t6;
            ecx = rd32(esi + 4u);
            loc_88 = t5;
            loc_84 = t6;
        }
    }
    else
    {
        ebx = esi + 0x10u;
        t3 = rd32(esi + 4u) + rd32(sp0 - 0x8cu);
        wr32(sp0 - 0x8cu, t3);
        t4 = rd32(sp0 - 0x90u) + 1u;
        wr32(sp0 - 0x90u, t4);
        eax = t4;
        ecx = t3;
        loc_8c = t3;
        loc_90 = t4;
    }
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa8u, sp0 - 0x80u);
    wr32(sp0 - 0xacu, ebx);
    g->ebx = ebx;
    g->esp = sp0 - 0xa0u;
    cow_call_regs(g, COW_IMG(0x102756c0u), g->eax, ecx, sp0 - 0x80u, 1, 3, ebx, sp0 - 0x80u, 0u);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0xb0u, sp0 - 0x80u);
    wr32(sp0 - 0xb4u, COW_IMG(0x10361dc0u));
    g->eax = sp0 - 0x80u;
    g->ecx = t7;
    g->edx = t8;
    g->esp = sp0 - 0xacu;
    t9 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x10361dc0u), sp0 - 0x80u);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 - 0xb8u, esi);
    g->ecx = t10;
    g->edx = t11;
    g->esp = sp0 - 0xb4u;
    t12 = cow_cdecl(g, COW_IMG(0x10275340u), 1, esi);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 < rd32(edi + 0x58u))
    {
        eax = rd32(edi + 0x58u);
        ecx = t13;
        edx = t14;
        ebp = ebp + 0x10u;
        esi = t12;
        goto L_10275229;
    }
    eax = rd32(edi + 0x58u);
    ebp = ebp + 0x10u;
    ebx = rd32(sp0 - 0x88u);
L_102752a1: ;
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa8u, 0u);
    wr32(sp0 - 0xacu, COW_IMG(0x103b292cu));
    g->eax = eax;
    g->ecx = 0u;
    g->edx = 0u;
    g->esp = sp0 - 0xa4u;
    t15 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b292cu), 0u);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xb4u, ebx);
    wr32(sp0 - 0xb8u, COW_IMG(0x103b2908u));
    g->ecx = t16;
    g->edx = t17;
    g->esp = sp0 - 0xb0u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2908u), ebx);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0xbcu, 0u);
    wr32(sp0 - 0xc0u, ebp);
    wr32(sp0 - 0xc4u, COW_IMG(0x103b28e4u));
    g->ecx = t18;
    g->edx = t19;
    g->esp = sp0 - 0xbcu;
    t20 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b28e4u), ebp);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(sp0 - 0xc8u, COW_IMG(0x103b28b4u));
    g->ecx = t21;
    g->edx = t22;
    g->esp = sp0 - 0xc0u;
    t23 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b28b4u), COW_IMG(0x103b28e4u));
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0xccu, 0u);
    wr32(sp0 - 0xd0u, ebp + ebx);
    wr32(sp0 - 0xd4u, COW_IMG(0x103b2890u));
    g->edx = t25;
    g->esp = sp0 - 0xccu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2890u), ebp + ebx);
    t26 = g->edx;
    g->ebx = in_ebx;
    g->edx = t26;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102751f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102751f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* f_0x10317b36 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10317b36(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_ac;
    uint32_t loc_b0;
    uint32_t loc_b4;
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
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

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0xacu, in_ebx);
    wr32(sp0 - 0xb0u, in_esi);
    wr32(sp0 - 0xb4u, in_edi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0xb8u, t1);
    wr32(sp0 - 0xbcu, sp0 - 0x1cu);
    wr32(sp0 - 0xc0u, sp0 - 0x14u);
    wr32(sp0 - 0xc4u, sp0 - 0xa8u);
    t2 = rd32(sp0 + 8u);
    wr32(sp0 - 0xc8u, t2);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xb8u;
    t3 = cow_call_regs(g, COW_IMG(0x10317d0au), sp0 - 0xa8u, g->ecx, g->edx, 1, 4, t2, sp0 - 0xa8u, sp0 - 0x14u, sp0 - 0x1cu);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u)
    {
        loc_4 = in_ebp;
        loc_ac = in_ebx;
        loc_b0 = in_esi;
        loc_b4 = in_edi;
        goto L_10317c30;
    }
    ecx = t4;
    edx = t5;
    edi = t1;
    wr32(sp0 - 0xb8u, sp0 - 0xa8u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    t6 = cow_call_regs(g, COW_IMG(0x10317480u), sp0 - 0xa8u, g->ecx, g->edx, 1, 1, sp0 - 0xa8u);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0xbcu, t6 + 1u);
    g->eax = t6 + 1u;
    g->esp = sp0 - 0xb0u;
    t9 = cow_call_regs(g, COW_IMG(0x10312fd6u), g->eax, t7, t8, 1, 3, t6 + 1u, sp0 - 0xa8u, in_edi);
    t10 = g->edx;
    wr32(sp0 + 8u, t9);
    if (t9 == 0u)
    {
        loc_4 = in_ebp;
        loc_ac = in_ebx;
        loc_b0 = in_esi;
        loc_b4 = in_edi;
        goto L_10317c30;
    }
    edx = t10;
    wr32(sp0 - 0xb8u, 6u);
    t11 = rd32(COW_IMG(0x103d0734u) + edi * 0xcu);
    wr32(sp0 + 4u, t11);
    t12 = rd32(COW_IMG(0x109b27b0u) + edi * 4u);
    wr32(sp0 - 0x18u, t12);
    t13 = COW_IMG(0x109b29f8u) + edi * 6u;
    wr32(sp0 - 0xcu, t13);
    wr32(sp0 - 0xbcu, t13);
    wr32(sp0 - 0xc0u, sp0 - 0x24u);
    g->ecx = sp0 - 0xa8u;
    g->edx = edx;
    g->esp = sp0 - 0xacu;
    cow_cdecl(g, COW_IMG(0x103169e0u), 5, sp0 - 0x24u, t13, 6u, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u));
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 8u, rd32(COW_IMG(0x109b27c8u)));
    wr32(sp0 - 0xc4u, sp0 - 0xa8u);
    t16 = rd32(sp0 + 8u);
    wr32(sp0 - 0xc8u, t16);
    g->edi = edi;
    g->eax = sp0 - 0xa8u;
    g->ecx = t14;
    t17 = rd32(COW_IMG(0x109b27c8u));
    g->esp = sp0 - 0xbcu;
    t18 = cow_call_regs(g, COW_IMG(0x10317500u), g->eax, g->ecx, t15, 1, 3, t16, sp0 - 0xa8u, sp0 - 0x24u);
    t19 = g->ecx;
    t20 = g->edx;
    t21 = g->edi;
    wr32(COW_IMG(0x103d0734u) + edi * 0xcu, t18);
    wr32(sp0 - 0xccu, 6u);
    t22 = rd16(sp0 - 0x14u);
    wr32(COW_IMG(0x109b27b0u) + edi * 4u, t22);
    wr32(sp0 - 0xd0u, sp0 - 0x14u);
    t23 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0xd4u, t23);
    g->ecx = t19;
    g->edx = t20;
    g->esp = sp0 - 0xc0u;
    cow_cdecl(g, COW_IMG(0x103169e0u), 5, t23, sp0 - 0x14u, 6u, rd32(sp0 - 0xc8u), sp0 - 0xa8u);
    t24 = g->ecx;
    t25 = g->edx;
    if (t21 != 2u)
    {
        eax = rd32(sp0 - 0x1cu);
        ecx = t24;
        edx = t25;
        ebx = COW_IMG(0x109b27b0u) + edi * 4u;
        esi = edi * 0xcu;
        edi = t21;
    }
    else
    {
        eax = rd32(sp0 - 0x1cu);
        ecx = t24;
        edx = t25;
        ebx = COW_IMG(0x109b27b0u) + edi * 4u;
        esi = edi * 0xcu;
        edi = t21;
        wr32(COW_IMG(0x109b27c8u), eax);
    }
    if (edi == 1u)
    {
        wr32(COW_IMG(0x109b27ccu), eax);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    t26 = cow_thiscall(g, rd32(COW_IMG(0x103d0738u) + esi), ecx, 0);
    t27 = g->ecx;
    t28 = g->edx;
    if (t26 == 0u)
    {
        eax = t26;
        ecx = t27;
        edx = t28;
        goto L_10317c34;
    }
    ecx = t27;
    edx = t28;
    t29 = rd32(sp0 + 8u);
    wr32(sp0 - 0xb8u, t29);
    t30 = rd32(sp0 + 4u);
    wr32(COW_IMG(0x103d0734u) + esi, t30);
    g->ebx = ebx;
    g->esp = sp0 - 0xacu;
    cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, t29, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u));
    t31 = rd32(sp0 - 0x18u);
    wr32(ebx, t31);
    t32 = rd32(sp0 - 8u);
    wr32(COW_IMG(0x109b27c8u), t32);
    loc_4 = rd32(sp0 - 4u);
    loc_ac = rd32(sp0 - 0xacu);
    loc_b0 = rd32(sp0 - 0xb0u);
    loc_b4 = rd32(sp0 - 0xb4u);
L_10317c30: ;
    eax = 0u;
L_10317c4c: ;
    g->ebx = loc_ac;
    g->esi = loc_b0;
    g->edi = loc_b4;
    g->ebp = loc_4;
    return eax;
L_10317c34: ;
    if (rd32(sp0 + 4u) != COW_IMG(0x103d0620u))
    {
        t33 = rd32(sp0 + 4u);
        wr32(sp0 - 0xb8u, t33);
        g->ebx = ebx;
        g->esp = sp0 - 0xacu;
        cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, t33, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u));
    }
    eax = rd32(COW_IMG(0x103d0734u) + esi);
    loc_4 = rd32(sp0 - 4u);
    loc_ac = rd32(sp0 - 0xacu);
    loc_b0 = rd32(sp0 - 0xb0u);
    loc_b4 = rd32(sp0 - 0xb4u);
    goto L_10317c4c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10317b36(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10317b36(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

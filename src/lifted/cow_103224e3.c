/* f_0x103224e3 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_103224e3(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    if (rd32(COW_IMG(0x109b27c0u)) == 0u) goto L_103225f3;
    edi = rd16(COW_IMG(0x109b2a12u));
    g->ebx = 0u;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x10325a60u), in_eax, self, in_edx, 1, 4, 1u, edi, 0xeu, COW_IMG(0x109b29e0u));
    t2 = g->ecx;
    t3 = g->edx;
    g->ebx = 0u;
    g->esp = sp0 - 0x20u;
    t4 = cow_call_regs(g, COW_IMG(0x10325a60u), t1, t2, t3, 1, 4, 1u, edi, 0xfu, COW_IMG(0x109b29e4u));
    t5 = g->ecx;
    t6 = g->edx;
    g->ebx = 0u;
    g->esp = sp0 - 0x30u;
    t7 = cow_call_regs(g, COW_IMG(0x10325a60u), t4, t5, t6, 1, 4, 1u, edi, 0x10u, COW_IMG(0x109b29e8u));
    t8 = g->ecx;
    t9 = g->edx;
    g->ecx = t8;
    g->esp = sp0 - 0x40u;
    t10 = cow_call_regs(g, COW_IMG(0x103226b8u), t7, g->ecx, t9, 1, 1, rd32(COW_IMG(0x109b29e8u)));
    t11 = g->ecx;
    t12 = g->edx;
    if ((t1 | t4 | t7) == 0u)
    {
        ecx = t11;
        edx = t12;
        goto L_10322580;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    g->eax = eax;
    t13 = rd32(COW_IMG(0x109b29e0u));
    g->esp = sp0 - 4u;
    t14 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, t13, in_edi, in_ebp);
    t15 = g->ecx;
    t16 = g->edx;
    t17 = rd32(COW_IMG(0x109b29e4u));
    g->esp = sp0 - 8u;
    t18 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t15, t16, 1, 3, t17, t13, in_edi);
    t19 = g->ecx;
    t20 = g->edx;
    g->esp = sp0 - 0xcu;
    t21 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t19, t20, 1, 3, rd32(COW_IMG(0x109b29e8u)), t17, t13);
    t22 = g->edx;
    wr32(COW_IMG(0x109b29e0u), 0u);
    wr32(COW_IMG(0x109b29e4u), 0u);
    wr32(COW_IMG(0x109b29e8u), 0u);
    eax = t21;
    edx = t22;
L_10322578: ;
    eax = 0xffffffffu;
L_103226b4: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_10322580: ;
    if (rd32(rd32(COW_IMG(0x103d3900u))) != COW_IMG(0x103d38c8u))
    {
        eax = rd32(rd32(COW_IMG(0x103d3900u)));
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, eax, in_edi, in_ebp);
        t23 = g->ecx;
        t24 = g->edx;
        t25 = rd32(rd32(COW_IMG(0x103d3900u)) + 4u);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t23, t24, 1, 3, t25, eax, in_edi);
        t26 = g->ecx;
        t27 = g->edx;
        t28 = rd32(rd32(COW_IMG(0x103d3900u)) + 8u);
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t26, t27, 1, 3, t28, t25, eax);
        t29 = g->edx;
        edx = t29;
    }
    wr32(rd32(COW_IMG(0x103d3900u)), rd32(COW_IMG(0x109b29e0u)));
    wr32(rd32(COW_IMG(0x103d3900u)) + 4u, rd32(COW_IMG(0x109b29e4u)));
    wr32(rd32(COW_IMG(0x103d3900u)) + 8u, rd32(COW_IMG(0x109b29e8u)));
    t30 = rd32(rd32(COW_IMG(0x103d3900u)));
    t31 = rd8(rd32(rd32(COW_IMG(0x103d3900u))));
    wr32(COW_IMG(0x103d0244u), 1u);
    wr8(COW_IMG(0x103d0240u), (uint8_t)t31);
L_103226b2: ;
    eax = 0u;
    goto L_103226b4;
L_103225f3: ;
    g->eax = in_eax;
    t32 = rd32(COW_IMG(0x109b29e0u));
    g->esp = sp0 - 4u;
    t33 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, self, in_edx, 1, 3, t32, in_edi, in_ebp);
    t34 = g->ecx;
    t35 = g->edx;
    t36 = rd32(COW_IMG(0x109b29e4u));
    g->esp = sp0 - 8u;
    t37 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t34, t35, 1, 3, t36, t32, in_edi);
    t38 = g->ecx;
    t39 = g->edx;
    t40 = rd32(COW_IMG(0x109b29e8u));
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t38, t39, 1, 3, t40, t36, t32);
    t41 = g->ecx;
    t42 = g->edx;
    wr32(COW_IMG(0x109b29e0u), 0u);
    wr32(COW_IMG(0x109b29e4u), 0u);
    wr32(COW_IMG(0x109b29e8u), 0u);
    g->edx = t42;
    g->esp = sp0 - 0x10u;
    t43 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, 2u, t40, t36);
    t44 = g->edx;
    t45 = rd32(COW_IMG(0x103d3900u));
    wr32(t45, t43);
    if (rd32(rd32(COW_IMG(0x103d3900u))) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x103d3900u)));
        edx = t44;
        goto L_10322578;
    }
    eax = rd32(rd32(COW_IMG(0x103d3900u)));
    ecx = t45;
    edx = t44;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10317500u), g->eax, g->ecx, edx, 1, 3, eax, COW_IMG(0x10354054u), in_edi);
    t46 = g->ecx;
    t47 = g->edx;
    g->edx = t47;
    g->esp = sp0 - 0xcu;
    t48 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, 2u, eax, COW_IMG(0x10354054u));
    t49 = g->edx;
    t50 = rd32(COW_IMG(0x103d3900u));
    wr32(t50 + 4u, t48);
    if (rd32(rd32(COW_IMG(0x103d3900u)) + 4u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x103d3900u)) + 4u);
        edx = t49;
        goto L_10322578;
    }
    eax = rd32(rd32(COW_IMG(0x103d3900u)) + 4u);
    ecx = t50;
    edx = t49;
    wr8(eax, 0u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t51 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, 2u, in_edi, in_ebp);
    t52 = g->edx;
    wr32(rd32(COW_IMG(0x103d3900u)) + 8u, t51);
    if (rd32(rd32(COW_IMG(0x103d3900u)) + 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x103d3900u)) + 8u);
        edx = t52;
        goto L_10322578;
    }
    eax = rd32(rd32(COW_IMG(0x103d3900u)) + 8u);
    edx = t52;
    wr8(eax, 0u);
    t53 = rd32(rd32(COW_IMG(0x103d3900u)));
    t54 = rd8(rd32(rd32(COW_IMG(0x103d3900u))));
    wr32(COW_IMG(0x103d0244u), 1u);
    wr8(COW_IMG(0x103d0240u), (uint8_t)t54);
    goto L_103226b2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103224e3(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103224e3(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

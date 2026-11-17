/* f_0x10216250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10216250(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 548u);

    wr32(sp0 - 0x204u, in_ebx);
    wr32(sp0 - 0x208u, in_esi);
    wr32(sp0 - 0x20cu, in_edi);
    wr32(sp0 - 0x210u, COW_IMG(0x10385cacu));
    wr32(sp0 - 0x214u, COW_IMG(0x103d3c84u));
    wr32(sp0 - 0x218u, COW_IMG(0x10350ff8u));
    wr32(sp0 - 0x21cu, sp0 - 0x200u);
    g->ebx = (in_ebx & 0xffffff00u) | 1u;
    g->eax = sp0 - 0x200u;
    g->edx = in_edx;
    g->esp = sp0 - 0x208u;
    t1 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, COW_IMG(0x10350ff8u), COW_IMG(0x103d3c84u), COW_IMG(0x10385cacu), in_edi);
    t2 = g->edx;
    wr32(sp0 - 0x210u, 0x14u);
    wr32(sp0 - 0x214u, sp0 - 0x200u);
    g->edx = t2;
    t3 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x20cu;
    t4 = cow_thiscall(g, COW_IMG(0x101c4b80u), t3, 2, sp0 - 0x200u, 0x14u);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)t4 >= 0)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        esi = t4;
        goto L_1021629d;
    }
    eax = t4;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_1021629d: ;
    wr32(sp0 - 0x210u, esi);
    g->eax = eax;
    g->esp = sp0 - 0x204u;
    t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, esi, in_edi, in_esi);
    t8 = rd32(COW_IMG(0x10662dccu));
    wr32(COW_IMG(0x10664540u), t7);
    wr32(sp0 - 0x210u, 0u);
    wr32(sp0 - 0x214u, esi);
    wr32(sp0 - 0x218u, t7);
    wr32(sp0 - 0x21cu, 0x14u);
    wr32(sp0 - 0x220u, sp0 - 0x200u);
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x20cu;
    cow_thiscall(g, COW_IMG(0x101c47d0u), t8, 5, sp0 - 0x200u, 0x14u, t7, esi, 0u);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x210u, COW_IMG(0x10385c9cu));
    wr32(sp0 - 0x214u, COW_IMG(0x103d3c84u));
    wr32(sp0 - 0x218u, COW_IMG(0x10350ff8u));
    wr32(sp0 - 0x21cu, sp0 - 0x200u);
    g->ebx = (in_ebx & 0xffffff00u) | 1u;
    g->eax = sp0 - 0x200u;
    g->edx = t10;
    g->esp = sp0 - 0x208u;
    t11 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, COW_IMG(0x10350ff8u), COW_IMG(0x103d3c84u), COW_IMG(0x10385c9cu), in_edi);
    t12 = g->edx;
    wr32(sp0 - 0x210u, 0x14u);
    wr32(sp0 - 0x214u, sp0 - 0x200u);
    g->edx = t12;
    t13 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x20cu;
    t14 = cow_thiscall(g, COW_IMG(0x101c4b80u), t13, 2, sp0 - 0x200u, 0x14u);
    t15 = g->ecx;
    t16 = g->edx;
    if ((int32_t)t14 >= 0)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
        esi = t14;
        goto L_10216301;
    }
    eax = t14;
    g->ebx = rd32(sp0 - 0x204u);
    g->esi = rd32(sp0 - 0x208u);
    g->edi = rd32(sp0 - 0x20cu);
    return eax & 0xffffff00u;
L_10216301: ;
    wr32(sp0 - 0x210u, esi);
    g->eax = eax;
    g->esp = sp0 - 0x204u;
    t17 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, esi, rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u));
    t18 = rd32(COW_IMG(0x10662dccu));
    wr32(COW_IMG(0x10664544u), t17);
    wr32(sp0 - 0x210u, 0u);
    wr32(sp0 - 0x214u, esi);
    wr32(sp0 - 0x218u, t17);
    wr32(sp0 - 0x21cu, 0x14u);
    wr32(sp0 - 0x220u, sp0 - 0x200u);
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x20cu;
    cow_thiscall(g, COW_IMG(0x101c47d0u), t18, 5, sp0 - 0x200u, 0x14u, t17, esi, 0u);
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0x210u, COW_IMG(0x10385c90u));
    wr32(sp0 - 0x214u, COW_IMG(0x103d3c84u));
    wr32(sp0 - 0x218u, COW_IMG(0x10350ff8u));
    wr32(sp0 - 0x21cu, sp0 - 0x200u);
    g->ebx = (in_ebx & 0xffffff00u) | 1u;
    g->eax = sp0 - 0x200u;
    g->edx = t20;
    g->esp = sp0 - 0x208u;
    t21 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, COW_IMG(0x10350ff8u), COW_IMG(0x103d3c84u), COW_IMG(0x10385c90u), rd32(sp0 - 0x20cu));
    t22 = g->edx;
    wr32(sp0 - 0x210u, 0x14u);
    wr32(sp0 - 0x214u, sp0 - 0x200u);
    g->edx = t22;
    t23 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x20cu;
    t24 = cow_thiscall(g, COW_IMG(0x101c4b80u), t23, 2, sp0 - 0x200u, 0x14u);
    t25 = g->ecx;
    t26 = g->edx;
    if ((int32_t)t24 >= 0)
    {
        eax = t24;
        ecx = t25;
        edx = t26;
        esi = t24;
        goto L_10216365;
    }
    eax = t24;
    g->ebx = rd32(sp0 - 0x204u);
    g->esi = rd32(sp0 - 0x208u);
    g->edi = rd32(sp0 - 0x20cu);
    return eax & 0xffffff00u;
L_10216365: ;
    wr32(sp0 - 0x210u, esi);
    g->eax = eax;
    g->esp = sp0 - 0x204u;
    t27 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, esi, rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u));
    t28 = rd32(COW_IMG(0x10662dccu));
    wr32(COW_IMG(0x10664548u), t27);
    wr32(sp0 - 0x210u, 0u);
    wr32(sp0 - 0x214u, esi);
    wr32(sp0 - 0x218u, t27);
    wr32(sp0 - 0x21cu, 0x14u);
    wr32(sp0 - 0x220u, sp0 - 0x200u);
    g->esp = sp0 - 0x20cu;
    cow_thiscall(g, COW_IMG(0x101c47d0u), t28, 5, sp0 - 0x200u, 0x14u, t27, esi, 0u);
    wr32(sp0 - 0x210u, rd32(COW_IMG(0x10664544u)));
    wr32(sp0 - 0x214u, rd32(COW_IMG(0x10664548u)));
    wr32(sp0 - 0x218u, rd32(COW_IMG(0x10664540u)));
    g->eax = rd32(COW_IMG(0x10664544u));
    g->ecx = rd32(COW_IMG(0x10664548u));
    g->edx = rd32(COW_IMG(0x10664540u));
    t29 = rd32(COW_IMG(0x10664544u));
    t30 = rd32(COW_IMG(0x10664548u));
    t31 = rd32(COW_IMG(0x10664540u));
    t32 = cow_cdecl(g, COW_IMG(0x10310aecu), 3, t31, t30, t29);
    t33 = g->ecx;
    t34 = g->edx;
    if (t32 != 0u)
    {
        eax = t32;
        ecx = t33;
        edx = t34;
        goto L_102163b5;
    }
    eax = t32;
    g->ebx = rd32(sp0 - 0x204u);
    g->esi = rd32(sp0 - 0x208u);
    g->edi = rd32(sp0 - 0x20cu);
    return eax & 0xffffff00u;
L_102163b5: ;
    wr32(sp0 - 0x210u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x204u;
    t35 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, eax, rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u));
    t36 = g->ecx;
    t37 = g->edx;
    wr32(sp0 - 0x214u, t35);
    wr32(COW_IMG(0x1066454cu), t35);
    g->ecx = t36;
    g->edx = t37;
    g->esp = sp0 - 0x210u;
    t38 = cow_cdecl(g, COW_IMG(0x103109c3u), 1, t35);
    t39 = g->ecx;
    t40 = g->edx;
    g->ecx = t39;
    g->edx = t40;
    g->esp = sp0 - 0x214u;
    t41 = cow_stdcall(g, COW_IMG(0x103109efu), 0);
    t42 = g->ecx;
    t43 = g->edx;
    wr32(sp0 - 0x218u, 0u);
    g->ecx = t42;
    g->edx = t43;
    t44 = cow_cdecl(g, COW_IMG(0x103109e4u), 1, 0u);
    t45 = g->ecx;
    t46 = g->edx;
    g->edx = t46;
    g->esp = sp0 - 0x20cu;
    t47 = cow_stdcall(g, COW_IMG(0x10310a10u), 0);
    t48 = g->edx;
    g->edx = t48;
    t49 = cow_stdcall(g, COW_IMG(0x10216460u), 0);
    t50 = g->edx;
    t51 = cow_stdcall(g, COW_IMG(0x10216470u), 0);
    g->ebx = rd32(sp0 - 0x204u);
    g->esi = rd32(sp0 - 0x208u);
    g->edi = rd32(sp0 - 0x20cu);
    return (t51 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10216250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10216250(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

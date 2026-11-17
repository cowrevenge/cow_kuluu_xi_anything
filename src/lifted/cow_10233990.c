/* f_0x10233990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10233990(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_98;
    uint32_t loc_9c;
    uint32_t loc_a0;
    uint32_t loc_a4;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 216u);

    wr32(sp0 - 0x98u, in_ebx);
    wr32(sp0 - 0x9cu, in_ebp);
    wr32(sp0 - 0xa0u, in_esi);
    wr32(sp0 - 0xa4u, in_edi);
    wr32(sp0 - 0xa8u, 0x3bu);
    wr32(sp0 - 0xacu, 0xcu);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xa4u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x3bu);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0xb0u, 0x3cu);
    wr32(sp0 - 0xb4u, 0xcu);
    wr32(sp0 - 0x94u, t1);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0xacu;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x3cu);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0xb8u, 0x6du);
    wr32(sp0 - 0xbcu, 0xcu);
    wr32(sp0 - 0x90u, t4);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0xb4u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x6du);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0xc0u, 0x6eu);
    wr32(sp0 - 0xc4u, 0xcu);
    wr32(sp0 - 0x8cu, t7);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0xbcu;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x6eu);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0xc8u, 0x208u);
    wr32(sp0 - 0xccu, 0xcu);
    wr32(sp0 - 0x88u, t10);
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0xc4u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x208u);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0xd0u, 0x23u);
    wr32(sp0 - 0xd4u, 0u);
    wr32(sp0 - 0x84u, t13);
    g->edx = t15;
    g->esp = sp0 - 0xccu;
    t16 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 0u, 0x23u);
    t17 = g->edx;
    wr32(sp0 - 0xa8u, t16);
    wr32(sp0 - 0xacu, 5u);
    wr32(sp0 - 0xb0u, 4u);
    g->ebx = arg1;
    g->edi = self;
    g->edx = t17;
    g->esp = sp0 - 0xa4u;
    t18 = cow_thiscall(g, COW_IMG(0x101170f0u), arg1, 3, 4u, 5u, t16);
    t19 = g->edx;
    if (rd32(COW_IMG(0x10668eccu)) == 0u)
    {
        eax = t18;
        edx = t19;
        ebp = t7;
    }
    else
    {
        eax = t18;
        ecx = rd32(COW_IMG(0x10668eccu));
        edx = t19;
        ebp = t7;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xa4u;
        t20 = cow_thiscall(g, COW_IMG(0x10233910u), ecx, 0);
        t21 = g->edx;
        eax = t20;
        edx = t21;
    }
    if (arg2 != 4u) goto L_10233a3b;
    wr32(sp0 - 0xa8u, 5u);
    g->eax = eax;
    g->edx = edx;
    t22 = rd32(self + 8u);
    g->esp = sp0 - 0xa4u;
    t23 = cow_thiscall(g, COW_IMG(0x10118bc0u), t22, 1, 5u);
    t24 = g->ecx;
    t25 = g->edx;
    if (t23 != 5u)
    {
        edx = t25;
        goto L_10233ab1;
    }
    eax = t23;
    ecx = t24;
    edx = t25;
    wr32(sp0 - 0xa8u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t26 = cow_cdecl(g, COW_IMG(0x102225f0u), 1, 1u);
    t27 = g->edx;
    eax = t26;
    edx = t27;
    loc_98 = rd32(sp0 - 0x98u);
    loc_9c = rd32(sp0 - 0x9cu);
    loc_a0 = rd32(sp0 - 0xa0u);
    loc_a4 = rd32(sp0 - 0xa4u);
L_10233ab8: ;
    wr32(sp0 - 0xa8u, eax);
    t36 = rd32(arg2 * 4u + sp0 - 0x94u);
    wr32(sp0 - 0xacu, t36);
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xb4u, 0x10u);
    g->ebx = arg1;
    g->edi = self;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t37 = cow_thiscall(g, COW_IMG(0x101171b0u), arg1, 4, 0x10u, 0u, t36, eax);
    t38 = g->edx;
    if (arg2 == 3u)
    {
        eax = t37;
        edx = t38;
        g->ebx = arg1;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xa4u;
        t39 = cow_thiscall(g, COW_IMG(0x10233560u), self, 0);
        t40 = g->edx;
        wr32(sp0 - 0xa8u, 2u);
        wr32(sp0 - 0xacu, 0u);
        cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, 0u, 2u);
    }
    g->ebx = rd32(sp0 - 0x98u);
    g->esi = rd32(sp0 - 0xa0u);
    g->edi = rd32(sp0 - 0xa4u);
    g->ebp = rd32(sp0 - 0x9cu);
    return;
L_10233a3b: ;
    if (arg2 != 2u) goto L_10233ab1;
    wr8(sp0 - 0x80u, rd8(COW_IMG(0x103d3c84u)));
    edi = sp0 - 0x7fu;
    eax = 0u;
    ecx = 0x1fu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t28 = cow_stdcall(g, COW_IMG(0x10230ad0u), 0);
    t29 = g->ecx;
    t30 = g->edx;
    g->ecx = t29;
    g->edx = t30;
    t31 = cow_stdcall(g, COW_IMG(0x100990c0u), 0);
    t32 = g->ecx;
    t33 = g->edx;
    if ((uint16_t)t31 == 0u)
    {
        eax = t31;
        ecx = t32;
        edx = t33;
        esi = t28;
    }
    else
    {
        eax = t31;
        ecx = t32;
        edx = t33;
        esi = t28;
        esi = esi + 1u;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t34 = cow_stdcall(g, COW_IMG(0x100990d0u), 0);
    t35 = g->edx;
    if ((uint16_t)t34 == 0u)
    {
        eax = t34;
        edx = t35;
    }
    else
    {
        eax = t34;
        edx = t35;
        esi = esi + 1u;
    }
    wr32(sp0 - 0xa8u, 0x1eu);
    wr32(sp0 - 0xacu, esi);
    wr32(sp0 - 0xb0u, ebp);
    wr32(sp0 - 0xb4u, COW_IMG(0x103869e4u));
    wr32(sp0 - 0xb8u, sp0 - 0x80u);
    g->ebx = arg1;
    g->esp = sp0 - 0xa4u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x103869e4u), ebp, esi, 0x1eu);
    wr32(sp0 - 0xa8u, arg3);
    wr32(sp0 - 0xacu, sp0 - 0x80u);
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xb4u, 0x10u);
    g->ebx = arg1;
    g->edi = edi;
    cow_thiscall(g, COW_IMG(0x101171b0u), arg1, 4, 0x10u, 0u, sp0 - 0x80u, arg3);
    g->ebx = rd32(sp0 - 0x98u);
    g->esi = rd32(sp0 - 0xa0u);
    g->edi = rd32(sp0 - 0xa4u);
    g->ebp = rd32(sp0 - 0x9cu);
    return;
L_10233ab1: ;
    eax = arg3;
    loc_98 = in_ebx;
    loc_9c = in_ebp;
    loc_a0 = in_esi;
    loc_a4 = in_edi;
    goto L_10233ab8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10233990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10233990(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */

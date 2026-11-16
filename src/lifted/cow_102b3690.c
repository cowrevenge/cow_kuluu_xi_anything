/* f_0x102b3690 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102b3690(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const double xin0 = ST(0);
    const double xin1 = ST(1);
    const double xin2 = ST(2);
    const double xin3 = ST(3);
    const double xin4 = ST(4);
    const double xin5 = ST(5);
    const double xin6 = ST(6);
    const double xin7 = ST(7);

    t1 = rd32(rd32(rd32(sp0 + 4u) + 0x34u) + 0x14u);
    g->ecx = self;
    g->edx = in_edx;
    t2 = rd32(rd32(sp0 + 4u) + 0x34u);
    t3 = rd32(sp0 + 4u);
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t1, 4u, COW_IMG(0x103bfd88u), 0x2b5u, in_edi);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd32(t3 + 0x34u) == 0u)
    {
        eax = rd32(t3 + 0x34u);
        ecx = t5;
        edx = t6;
        goto L_102b375a;
    }
    eax = rd32(t3 + 0x34u);
    edx = t6;
    ebx = t4;
    esi = t2;
    if (rd32(eax + 0x14u) == 0u)
    {
        ecx = rd32(eax + 0x14u);
        goto L_102b375a;
    }
    t7 = rd32(esi + 0x14u);
    t8 = rd32(esi + 0x54u);
    g->ecx = t7;
    g->edx = t8;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x1028a750u), 2, t8, t7);
    t9 = g->ecx;
    t10 = g->edx;
    if (rd32(esi + 0x24u) != 1u)
    {
        eax = rd32(esi + 0x24u);
        edx = t10;
        t14 = rd32(esi + 0x60u);
        g->eax = eax;
        g->ecx = t14;
        g->esp = sp0 - 0xcu;
        t15 = cow_cdecl(g, COW_IMG(0x1028a7b0u), 1, t14);
        t16 = g->ecx;
        eax = t15;
        ecx = t16;
    }
    else
    {
        ecx = t9;
        edx = t10;
        t11 = rd32(esi + 0x60u);
        g->eax = t11;
        g->ecx = ecx;
        g->esp = sp0 - 0xcu;
        t12 = cow_cdecl(g, COW_IMG(0x1028a7d0u), 1, t11);
        t13 = g->ecx;
        eax = t12;
        ecx = t13;
    }
    t17 = rd32(esi + 0x58u);
    g->ecx = ecx;
    g->edx = t17;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x1028a770u), 1, t17);
    t18 = g->ecx;
    t19 = g->edx;
    t20 = rd32(esi + 0x5cu);
    g->eax = t20;
    g->ecx = t18;
    g->edx = t19;
    g->esp = sp0 - 0x10u;
    t21 = cow_cdecl(g, COW_IMG(0x1028a790u), 2, t20, 0u);
    t22 = g->ecx;
    t23 = g->edx;
    g->ecx = t22;
    g->edx = t23;
    fpush(g, xin0);
    fpush(g, xin1);
    fpush(g, xin2);
    fpush(g, xin3);
    fpush(g, xin4);
    fpush(g, xin5);
    fpush(g, xin6);
    fpush(g, xin7);
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x1028b000u), 0);
    t24 = g->ecx;
    t25 = g->edx;
    if ((int32_t)rd32(esi + 0x14u) <= 0)
    {
        ecx = t24;
        edx = t25;
        esi = rd32(esi + 0x14u);
        goto L_102b3726;
    }
    eax = 0u;
    ecx = t24;
    edx = t25;
    esi = rd32(esi + 0x14u);
L_102b371e: ;
    wr32(eax * 4u + ebx, eax);
    if ((int32_t)(eax + 1u) < (int32_t)esi)
    {
        eax = eax + 1u;
        goto L_102b371e;
    }
L_102b3726: ;
    if (rd32(sp0 + 8u) == 0u)
    {
        eax = rd32(sp0 + 8u);
        goto L_102b3746;
    }
    eax = rd32(sp0 + 8u);
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_102b3752;
    }
    eax = eax - 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t26 = cow_cdecl(g, COW_IMG(0x1028a820u), 3, 2u, esi, ebx);
    t27 = g->ecx;
    t28 = g->edx;
    g->esp = sp0;
    g->edx = t28;
    g->top = (g->top + 8u) & 7u;
    return cow_tailcall(g, COW_IMG(0x1028bbf0u), t26, t27, t28);
L_102b3746: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t29 = cow_cdecl(g, COW_IMG(0x1028a820u), 3, 1u, esi, ebx);
    t30 = g->ecx;
    t31 = g->edx;
    eax = t29;
    ecx = t30;
    edx = t31;
L_102b3752: ;
    g->esp = sp0;
    g->edx = edx;
    g->top = (g->top + 8u) & 7u;
    return cow_tailcall(g, COW_IMG(0x1028bbf0u), eax, ecx, edx);
L_102b375a: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t32 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bfd88u));
    t33 = g->ecx;
    t34 = g->edx;
    wr32(sp0 + 8u, COW_IMG(0x103bfd80u));
    wr32(sp0 + 4u, COW_IMG(0x103beaa4u));
    g->esp = sp0;
    g->edx = t34;
    return cow_tailcall(g, COW_IMG(0x102858b0u), t32, t33, t34);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b3690(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b3690(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

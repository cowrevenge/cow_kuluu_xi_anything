/* f_0x10178070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10178070(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x10336748u));
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x1017b1e0u), self, 0);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x10178b00u), self, 0);
    t3 = g->edx;
    if (rd32(self + 0x39454u) == 0u)
    {
        edx = t3;
    }
    else
    {
        eax = rd32(self + 0x39454u);
        t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->edx = rd32(t4);
        t5 = rd32(t4);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(t5 + 0x138u), t4, 2, t4, eax);
        t6 = g->edx;
        edx = t6;
    }
    if (rd32(self + 0x39458u) != 0u)
    {
        eax = rd32(self + 0x39458u);
        t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->edx = rd32(t7);
        t8 = rd32(t7);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(t8 + 0x138u), t7, 2, t7, eax);
        t9 = g->edx;
        edx = t9;
    }
    if (rd32(self + 0x3946cu) != 0u)
    {
        eax = rd32(self + 0x3946cu);
        t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->edx = rd32(t10);
        t11 = rd32(t10);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(t11 + 0x138u), t10, 2, t10, eax);
        t12 = g->edx;
        edx = t12;
    }
    if (rd32(self + 0x39470u) != 0u)
    {
        eax = rd32(self + 0x39470u);
        t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->edx = rd32(t13);
        t14 = rd32(t13);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(t14 + 0x138u), t13, 2, t13, eax);
        t15 = g->edx;
        edx = t15;
    }
    if (rd32(self + 0x39474u) != 0u)
    {
        eax = rd32(self + 0x39474u);
        t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->edx = rd32(t16);
        t17 = rd32(t16);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(t17 + 0x138u), t16, 2, t16, eax);
        t18 = g->edx;
        edx = t18;
    }
    if (rd32(self + 0x39478u) != 0u)
    {
        eax = rd32(self + 0x39478u);
        t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->edx = rd32(t19);
        t20 = rd32(t19);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(t20 + 0x138u), t19, 2, t19, eax);
        t21 = g->edx;
        edx = t21;
    }
    if (rd32(self + 0x3947cu) != 0u)
    {
        eax = rd32(self + 0x3947cu);
        t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->edx = rd32(t22);
        t23 = rd32(t22);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(t23 + 0x138u), t22, 2, t22, eax);
        t24 = g->edx;
        edx = t24;
    }
    if (rd32(self + 0x39494u) == 0u)
    {
        eax = rd32(self + 0x39494u);
    }
    else
    {
        eax = rd32(self + 0x39494u);
        t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->eax = eax;
        g->edx = rd32(t25);
        t26 = rd32(t25);
        g->esp = sp0 - 0xcu;
        t27 = cow_thiscall(g, rd32(t26 + 0x168u), t25, 2, t25, eax);
        t28 = g->edx;
        eax = t27;
        edx = t28;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t29 = cow_thiscall(g, COW_IMG(0x10055000u), self + 0x3959cu, 0);
    t30 = g->edx;
    g->edx = t30;
    t31 = cow_thiscall(g, COW_IMG(0x101674b0u), self + 0x34428u, 0);
    t32 = g->edx;
    g->edx = t32;
    t33 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t34 = g->edx;
    g->edx = t34;
    t35 = cow_thiscall(g, COW_IMG(0x10171920u), self + 0x34330u, 0);
    t36 = g->edx;
    g->edx = t36;
    t37 = cow_thiscall(g, COW_IMG(0x101678d0u), self + 0x178u, 0);
    t38 = g->edx;
    eax = t37;
    edx = t38;
    ebx = 2u;
    edi = self + 0x194u;
L_101781b1: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t39 = cow_fastcall(g, COW_IMG(0x1016fc80u), edi - 0x78u, edx, 0);
    t40 = g->edx;
    if (ebx != 1u)
    {
        eax = t39;
        edx = t40;
        ebx = ebx - 1u;
        edi = edi - 0x78u;
        goto L_101781b1;
    }
    eax = t39;
    edx = t40;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x100747c0u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10178070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10178070(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

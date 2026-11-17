/* f_0x100013c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100013c0(Guest* g)
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

    wr32(self, COW_IMG(0x103295a0u));
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10014c10u), rd32(COW_IMG(0x104568fcu)), 0);
    t2 = g->edx;
    if (rd32(COW_IMG(0x104568fcu)) == 0u)
    {
        eax = t1;
        ecx = rd32(COW_IMG(0x104568fcu));
        edx = t2;
    }
    else
    {
        ecx = rd32(COW_IMG(0x104568fcu));
        edx = t2;
        g->eax = rd32(ecx);
        g->edx = edx;
        t3 = rd32(ecx);
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, rd32(t3), ecx, 1, 1u);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(COW_IMG(0x104568fcu), 0u);
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_stdcall(g, COW_IMG(0x10016410u), 0);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 1u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
    }
    else
    {
        eax = t7;
        edx = t9;
        if (rd32(COW_IMG(0x103601bcu)) == 0u)
        {
            ecx = rd32(COW_IMG(0x103601bcu));
        }
        else
        {
            ecx = rd32(COW_IMG(0x103601bcu));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t10 = cow_thiscall(g, COW_IMG(0x100d9a40u), ecx, 0);
            t11 = g->ecx;
            t12 = g->edx;
            eax = t10;
            ecx = t11;
            edx = t12;
        }
    }
    if (rd32(COW_IMG(0x10455c20u)) != 0u)
    {
        edi = rd32(COW_IMG(0x10455c20u));
        g->esp = sp0 - 0xcu;
        t13 = cow_call_regs(g, COW_IMG(0x10005720u), eax, edi, edx, 1, 0);
        t14 = g->ecx;
        t15 = g->edx;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t14, t15, 1, 1, edi);
        t16 = g->ecx;
        t17 = g->edx;
        wr32(COW_IMG(0x10455c20u), 0u);
        ecx = t16;
        edx = t17;
    }
    if (rd32(self + 4u) != 0u)
    {
        eax = rd32(self + 4u);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t18 = g->ecx;
        t19 = g->edx;
        wr32(self + 4u, 0u);
        ecx = t18;
        edx = t19;
    }
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t20 = g->ecx;
        t21 = g->edx;
        wr32(self + 8u, 0u);
        ecx = t20;
        edx = t21;
    }
    if (rd32(self + 0xcu) == 0u)
    {
        eax = rd32(self + 0xcu);
    }
    else
    {
        eax = rd32(self + 0xcu);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t22 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t23 = g->edx;
        wr32(self + 0xcu, 0u);
        eax = t22;
        edx = t23;
    }
    if (rd32(COW_IMG(0x104566e8u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x104566e8u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x104566e8u));
        g->edx = rd32(ecx);
        t24 = rd32(ecx);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t24 + 0x18u), ecx, 1, 1u);
        t25 = g->ecx;
        t26 = g->edx;
        wr32(COW_IMG(0x104566e8u), 0u);
        ecx = t25;
        edx = t26;
    }
    if (rd32(COW_IMG(0x103d3c68u)) == 0u)
    {
        eax = rd32(COW_IMG(0x103d3c68u));
    }
    else
    {
        eax = rd32(COW_IMG(0x103d3c68u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t27 = cow_stdcall(g, rd32(COW_IMG(0x103293b0u)), 1, eax);   /* user32.dll!UnhookWindowsHookEx */
        t28 = g->edx;
        eax = t27;
        edx = t28;
    }
    if (rd32(COW_IMG(0x10456a7cu)) == 0u) goto L_10001499;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10001c80u), eax, self, edx);
    return;
L_10001499: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100013c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100013c0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

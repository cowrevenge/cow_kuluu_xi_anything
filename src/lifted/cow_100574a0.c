/* f_0x100574a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100574a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;

    wr32(self, COW_IMG(0x1032b860u));
    wr32(self + 0x34u, COW_IMG(0x1032b844u));
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t3 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
        g->edx = rd32(t3);
        t4 = rd32(t3);
        t5 = cow_thiscall(g, rd32(t4 + 0x16cu), t3, 0);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x1003b700u), self + 0x34u, 0);
    t8 = g->edx;
    if (t7 == 0u)
    {
        edx = t8;
    }
    else
    {
        eax = t7;
        edx = t8;
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t9 = cow_thiscall(g, COW_IMG(0x1003b700u), self + 0x34u, 0);
        g->edx = rd32(t9);
        t10 = rd32(t9);
        cow_thiscall(g, rd32(t10 + 0x16cu), t9, 0);
        t11 = g->edx;
        edx = t11;
    }
    if (rd32(rd32(COW_IMG(0x1047d140u)) + 0xd50u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1047d140u)) + 0xd50u);
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x1047d140u)) + 0xd50u);
L_10057504: ;
        if (rd32(eax + 0x1cu) == 0x4d730000u)
        {
            if (rd32(eax + 0x84u) == self)
            {
                wr32(eax + 0x84u, 0u);
            }
        }
        if (rd32(eax + 0xcu) != 0u)
        {
            eax = rd32(eax + 0xcu);
            goto L_10057504;
        }
        eax = rd32(eax + 0xcu);
    }
    if (rd32(self + 0x84u) != 0u)
    {
        ecx = rd32(self + 0x84u);
        g->ebp = self + 0x34u;
        g->esp = sp0 - 0x10u;
        t12 = cow_call_regs(g, COW_IMG(0x10074a50u), eax, ecx, edx, 1, 0);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    if (rd32(self + 0x90u) != 0u)
    {
        ecx = rd32(self + 0x90u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t14 = cow_call_regs(g, COW_IMG(0x1018cea0u), eax, ecx, g->edx, 1, 0);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    }
    g->edx = edx;
    t16 = rd32(rd32(self + 0x80u));
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10071ec0u), t16, 0);
    t17 = g->ecx;
    t18 = g->edx;
    if (rd32(self + 0xacu) == 0u)
    {
        eax = rd32(self + 0xacu);
        edx = t18;
    }
    else
    {
        eax = rd32(self + 0xacu);
        ecx = t17;
        t19 = rd32(self + 0xb0u);
        g->eax = eax;
        g->edx = t19;
        g->esp = sp0 - 0x10u;
        t20 = cow_thiscall_cdecl(g, eax, ecx, 2, self, t19);
        t21 = g->edx;
        eax = t20;
        edx = t21;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t22 = cow_thiscall(g, COW_IMG(0x1003b690u), self + 0x34u, 0);
    t23 = g->edx;
    eax = t22;
    edx = t23;
    ebx = 0x10u;
    edi = self + 0x140u;
L_10057572: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t24 = cow_thiscall(g, COW_IMG(0x100683d0u), edi - 8u, 0);
    t25 = g->edx;
    if (ebx != 1u)
    {
        eax = t24;
        edx = t25;
        ebx = ebx - 1u;
        edi = edi - 8u;
        goto L_10057572;
    }
    eax = t24;
    edx = t25;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t26 = cow_thiscall(g, COW_IMG(0x10055650u), self + 0xb4u, 0);
    t27 = g->edx;
    g->edx = t27;
    t28 = cow_thiscall(g, COW_IMG(0x1003b5c0u), self + 0x34u, 0);
    t29 = g->edx;
    g->esp = sp0;
    g->ebp = in_ebp;
    g->edx = t29;
    cow_tailcall(g, COW_IMG(0x100747c0u), t28, self, t29);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100574a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100574a0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* f_0x10044970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10044970(Guest* g)
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

    wr32(self, COW_IMG(0x1032b018u));
    t1 = rd32(COW_IMG(0x1047bc6cu)) - 1u;
    wr32(COW_IMG(0x1047bc6cu), t1);
    if (rd32(self + 0xfcu) == 0u)
    {
        edx = t1;
        ebx = 0u;
    }
    else
    {
        eax = rd32(self + 0xfcu);
        edx = t1;
        ebx = rd32(eax);
    }
    t2 = rd32(self + 0x100u);
    wr32(self + 0xfcu, 0u);
    if (t2 == 0u)
    {
        eax = rd32(self + 0xfcu);
    }
    else
    {
        eax = t2;
    }
    if (eax == 0u)
    {
        ecx = 0u;
    }
    else
    {
        ecx = rd32(eax);
    }
    wr32(self + 0x100u, 0u);
    if (ecx != 0u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t3 = cow_thiscall(g, COW_IMG(0x100481d0u), ecx, 1, self);
        t4 = g->ecx;
        t5 = g->edx;
        eax = t3;
        ecx = t4;
        edx = t5;
    }
    if (ebx != 0u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t6 = cow_thiscall(g, COW_IMG(0x10048140u), ebx, 1, self);
        t7 = g->edx;
        g->edx = t7;
        cow_thiscall(g, COW_IMG(0x10071ec0u), ebx, 0);
        t8 = g->ecx;
        t9 = g->edx;
        ecx = t8;
        edx = t9;
    }
    if (rd32(self + 0x164u) == 0u)
    {
        eax = rd32(self + 0x164u);
    }
    else
    {
        eax = rd32(self + 0x164u);
        g->eax = eax;
        g->edx = edx;
        t10 = rd32(eax);
        g->esp = sp0 - 0x10u;
        t11 = cow_thiscall(g, COW_IMG(0x10071ec0u), t10, 0);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(t10 + 0xf8u, 0u);
        wr32(self + 0x164u, 0u);
        if ((rd16(t10 + 0x18u) & 0x7fffu) != 0u)
        {
            eax = t11;
            ecx = t12;
            edx = t13;
        }
        else
        {
            edx = t13;
            edi = t10;
            t14 = rd32(edi + 0x14u);
            g->eax = t14;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t15 = cow_stdcall(g, COW_IMG(0x10073b20u), 1, t14);
            t16 = g->edx;
            t17 = rd32(edi + 0x14u);
            g->edx = t16;
            t18 = rd32(COW_IMG(0x1047d128u));
            t19 = cow_thiscall(g, COW_IMG(0x10074180u), t18, 1, t17);
            t20 = g->ecx;
            t21 = g->edx;
            eax = t19;
            ecx = t20;
            edx = t21;
        }
    }
    if (ebx != 0u)
    {
        if (rd8(ebx + 0x1au) >> 2u & 1u)
        {
            if ((rd16(ebx + 0x18u) & 0x7fffu) == 0u)
            {
                t22 = rd32(ebx + 0x14u);
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_stdcall(g, COW_IMG(0x10073b20u), 1, t22);
                t23 = g->edx;
                t24 = rd32(ebx + 0x14u);
                g->edx = t23;
                t25 = rd32(COW_IMG(0x1047d128u));
                cow_thiscall(g, COW_IMG(0x10074180u), t25, 1, t24);
                t26 = g->ecx;
                t27 = g->edx;
                ecx = t26;
                edx = t27;
            }
        }
    }
    if (rd32(self + 0x108u) == 0u)
    {
        eax = rd32(self + 0x108u);
    }
    else
    {
        eax = rd32(self + 0x108u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t28 = cow_cdecl(g, COW_IMG(0x1006c110u), 1, eax);
        t29 = g->edx;
        wr32(self + 0x108u, 0u);
        eax = t28;
        edx = t29;
    }
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t30 = cow_fastcall(g, COW_IMG(0x1006c270u), self + 0x17fu, edx, 0);
    t31 = g->edx;
    wr32(self, COW_IMG(0x1032aeb0u));
    g->edx = t31;
    t32 = cow_thiscall(g, COW_IMG(0x10055250u), self + 0x34u, 0);
    t33 = g->edx;
    g->esp = sp0;
    g->edx = t33;
    cow_tailcall(g, COW_IMG(0x100747c0u), t32, self, t33);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10044970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10044970(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

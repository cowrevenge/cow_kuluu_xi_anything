/* f_0x100c5c00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100c5c00(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    wr32(self, COW_IMG(0x10330f40u));
    if (rd32(self + 0x764u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x764u);
        if (rd32(eax) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            if (eax == 0u)
            {
                edi = 0u;
            }
            else
            {
                edi = rd32(eax);
            }
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0 - 8u;
            t1 = cow_thiscall(g, COW_IMG(0x10071ec0u), edi, 0);
            t2 = g->ecx;
            t3 = g->edx;
            g->edx = t3;
            g->esp = sp0;
            cow_thiscall_cdecl(g, COW_IMG(0x100543a0u), t2, 3, edi, in_edi, in_esi);
            t4 = g->edx;
            wr32(self + 0x764u, 0u);
            edx = t4;
        }
    }
    if (rd32(self + 0x814u) == 0u)
    {
        eax = rd32(self + 0x814u);
    }
    else
    {
        eax = rd32(self + 0x814u);
        if (rd32(eax) != 0u)
        {
            ecx = rd32(eax);
            if (eax != 0u)
            {
                if (ecx != 0u)
                {
                    edi = ecx;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 8u;
                    t5 = cow_thiscall(g, COW_IMG(0x10071ec0u), ecx, 0);
                    t6 = g->ecx;
                    t7 = g->edx;
                    g->edx = t7;
                    g->esp = sp0;
                    t8 = cow_thiscall_cdecl(g, COW_IMG(0x100543a0u), t6, 3, edi, in_edi, in_esi);
                    t9 = g->edx;
                    eax = t8;
                    edx = t9;
                }
            }
            wr32(self + 0x814u, 0u);
        }
    }
    g->eax = eax;
    g->esp = sp0 - 8u;
    t10 = cow_fastcall(g, COW_IMG(0x10082b10u), self, edx, 0);
    t11 = g->edx;
    g->edx = t11;
    cow_thiscall(g, COW_IMG(0x100d44f0u), self, 0);
    t12 = g->edx;
    if (rd32(self + 0x864u) == 0u)
    {
        eax = rd32(self + 0x864u);
        edx = t12;
    }
    else
    {
        eax = rd32(self + 0x864u);
        edx = t12;
        if (rd32(eax) != 0u)
        {
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t13 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
            t14 = g->edx;
            g->edx = t14;
            t15 = cow_thiscall(g, COW_IMG(0x10071050u), self + 0x864u, 0);
            t16 = g->edx;
            eax = t15;
            edx = t16;
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t17 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t18 = g->edx;
    if (t17 != self)
    {
        edx = t18;
    }
    else
    {
        eax = t17;
        edx = t18;
        if (rd8(self + 0xf9u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xf9u);
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x10157660u), rd32(COW_IMG(0x1057876cu)), 1, 0u);
            t19 = g->edx;
            edx = t19;
        }
    }
    if (rd32(COW_IMG(0x1048a358u) + rd32(self + 0x9f0u) * 4u) != 0u)
    {
        eax = rd32(self + 0x9f0u);
        ecx = rd32(COW_IMG(0x1048a358u) + rd32(self + 0x9f0u) * 4u);
        wr32(COW_IMG(0x1048a358u) + eax * 4u, ecx - 1u);
    }
    if (rd32(COW_IMG(0x1048a368u) + rd32(self + 0x9fcu) * 4u) == 0u)
    {
        eax = rd32(self + 0x9fcu);
    }
    else
    {
        eax = rd32(self + 0x9fcu);
        ecx = rd32(COW_IMG(0x1048a368u) + rd32(self + 0x9fcu) * 4u);
        wr32(COW_IMG(0x1048a368u) + eax * 4u, ecx - 1u);
    }
    if (rd32(self + 0xa08u) != 0u)
    {
        ecx = rd32(self + 0xa08u);
        g->eax = eax;
        g->edx = rd32(ecx);
        t20 = rd32(ecx);
        g->esp = sp0 - 8u;
        t21 = cow_thiscall(g, rd32(t20 + 0x18u), ecx, 1, 1u);
        t22 = g->edx;
        wr32(self + 0xa08u, 0u);
        eax = t21;
        edx = t22;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t23 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t24 = g->edx;
    t25 = cow_fastcall(g, COW_IMG(0x1006c270u), self + 0x8f0u, t24, 0);
    t26 = g->edx;
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x10055250u), self + 0x8c8u, 0);
    t28 = g->edx;
    g->edx = t28;
    t29 = cow_thiscall(g, COW_IMG(0x100814e0u), self + 0x7a8u, 0);
    t30 = g->edx;
    t31 = cow_fastcall(g, COW_IMG(0x1002b550u), self + 0x674u, t30, 0);
    t32 = g->edx;
    g->esp = sp0;
    g->edx = t32;
    cow_tailcall(g, COW_IMG(0x100a8ca0u), t31, self, t32);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c5c00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100c5c00(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

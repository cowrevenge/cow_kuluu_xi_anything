/* f_0x101e2f90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e2f90(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(self + 0xcu);
    wr32(self + 8u, 0xau);
    if (t1 == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = t1;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t2 = g->ecx;
        t3 = g->edx;
        wr32(self + 0xcu, 0u);
        ecx = t2;
        edx = t3;
    }
    if (rd32(self + 0xcu) != 0u)
    {
        esi = in_esi;
    }
    else
    {
        t4 = rd32(self + 8u) * 0x54u;
        g->edx = edx;
        t5 = rd32(self + 8u);
        g->esp = sp0 - 8u;
        t6 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, t4, in_edi, in_esi);
        t7 = g->edx;
        if (t6 == 0u)
        {
            edx = t7;
            esi = t5;
            ebp = 0u;
        }
        else
        {
            edx = t7;
            ebp = t6;
            esi = t5;
            if ((int32_t)(esi - 1u) >= 0)
            {
                eax = esi - 1u;
                edi = ebp;
                esi = eax + 1u;
L_101e2fe8: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t8 = cow_thiscall(g, COW_IMG(0x101f4af0u), edi, 0);
                t9 = g->edx;
                if (esi != 1u)
                {
                    eax = t8;
                    edx = t9;
                    esi = esi - 1u;
                    edi = edi + 0x54u;
                    goto L_101e2fe8;
                }
                edx = t9;
                esi = esi - 1u;
            }
        }
        wr32(self + 0xcu, ebp);
    }
    wr32(self + 4u, 0u);
    ebp = 0u;
L_101e3001: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, COW_IMG(0x101e1b10u), rd32(COW_IMG(0x106634b8u)), 2, 0u, ebp);
    t11 = g->edx;
    if (t10 == 0u)
    {
        eax = t10;
        edx = t11;
    }
    else
    {
        edi = t10;
        t12 = rd16(edi + 6u);
        t13 = rd32(self + 0xcu) + rd32(self + 4u) * 0x54u;
        g->eax = t12;
        t14 = rd32(self + 0xcu);
        g->esp = sp0 - 0x10u;
        t15 = cow_fastcall(g, COW_IMG(0x101f4b20u), t13, t14, 4, 0u, 0x42u, t12, 0x80808080u);
        t16 = g->edx;
        t17 = rd16(edi + 6u);
        t18 = cow_fastcall(g, COW_IMG(0x101f4b20u), t13, t16, 4, 1u, 0x43u, t17, 0x80808080u);
        t19 = g->edx;
        t20 = rd16(edi + 8u) >> 0xfu;
        cow_fastcall(g, COW_IMG(0x101f4b20u), t13, t20, 4, 2u, 0x44u, t20, 0x80808080u);
        t21 = g->edx;
        wr32(t13 + 0x48u, edi);
        t22 = rd32(self + 4u) + 1u;
        wr32(self + 4u, t22);
        eax = t22;
        edx = t21;
        esi = t13;
    }
    if ((int32_t)(ebp + 1u) < 10)
    {
        ebp = ebp + 1u;
        goto L_101e3001;
    }
    t23 = (eax & 0xffff0000u) | rd16(self + 4u);
    t24 = rd32(self + 0xcu);
    g->esi = esi;
    g->eax = t23;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t25 = cow_thiscall(g, COW_IMG(0x101f7020u), arg1, 3, t24, t23, 0u);
    t26 = g->edx;
    g->esi = in_esi;
    g->edx = t26;
    return t25;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e2f90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e2f90(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */

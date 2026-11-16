/* f_0x101d0210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101d0210(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(sp0 + 8u) != 0u)
    {
        wr32(sp0 + 8u, self + 0x7bcu);
        eax = self + 0xafcu;
        ecx = self + 0x7acu;
        edx = self + 0xadcu;
    }
    else
    {
        wr32(sp0 + 8u, self + 0x6acu);
        eax = self + 0x8dcu;
        ecx = self + 0x69cu;
        edx = self + 0x8bcu;
    }
    if ((int32_t)rd32(arg1) >= 0)
    {
        ebx = rd32(arg1);
        loc_8 = eax;
        eax = rd32(arg1);
    }
    else
    {
        ebx = rd32(arg1);
        loc_8 = eax;
        eax = rd32(arg1);
        eax = -eax;
        ebx = ebx - 1u;
    }
    if (eax == 0u)
    {
        edi = 0u;
        goto L_101d0279;
    }
    edi = 0u;
L_101d0274: ;
    if ((uint32_t)((int32_t)eax >> 1u) != 0u)
    {
        eax = (uint32_t)((int32_t)eax >> 1u);
        edi = edi + 1u;
        goto L_101d0274;
    }
    eax = (uint32_t)((int32_t)eax >> 1u);
    edi = edi + 1u;
L_101d0279: ;
    t1 = (uint32_t)(int8_t)rd8(ecx + edi);
    t2 = (edx & 0xffff0000u) | rd16(edi * 2u + edx);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t3 = cow_fastcall(g, COW_IMG(0x101d0970u), rd32(self + 8u), t2, 2, t2, t1);
    t4 = g->edx;
    if (edi != 0u)
    {
        eax = t3;
        edx = t4;
        g->esp = sp0 - 0x18u;
        cow_fastcall(g, COW_IMG(0x101d0970u), rd32(self + 8u), edx, 2, ebx, edi);
    }
    eax = COW_IMG(0x1037e334u);
    ebp = 0u;
    loc_4 = COW_IMG(0x1037e334u);
L_101d02a4: ;
    if (rd32(arg1 + rd32(eax) * 4u) == 0u)
    {
        ebp = ebp + 1u;
    }
    else
    {
        ebx = rd32(arg1 + rd32(eax) * 4u);
        if ((int32_t)ebp >= 16)
        {
            edi = ebp >> 4u;
            ebp = ebp - (ebp >> 4u) * 0x10u;
L_101d02c8: ;
            t5 = (uint32_t)(int8_t)rd8(rd32(sp0 + 8u) + 0xf0u);
            t6 = (rd32(sp0 + 8u) & 0xffff0000u) | rd16(loc_8 + 0x1e0u);
            g->esp = sp0 - 0x18u;
            cow_fastcall(g, COW_IMG(0x101d0970u), rd32(self + 8u), t5, 2, t6, t5);
            if (edi != 1u)
            {
                edi = edi - 1u;
                goto L_101d02c8;
            }
        }
        if ((int32_t)ebx >= 0)
        {
            eax = ebx;
        }
        else
        {
            eax = ebx;
            eax = -eax;
            ebx = ebx - 1u;
        }
        if ((uint32_t)((int32_t)eax >> 1u) == 0u)
        {
            edi = 1u;
            goto L_101d0302;
        }
        eax = (uint32_t)((int32_t)eax >> 1u);
        edi = 1u;
L_101d02fd: ;
        if ((uint32_t)((int32_t)eax >> 1u) != 0u)
        {
            eax = (uint32_t)((int32_t)eax >> 1u);
            edi = edi + 1u;
            goto L_101d02fd;
        }
        edi = edi + 1u;
L_101d0302: ;
        t7 = (uint32_t)(int8_t)rd8(ebp * 0x10u + edi + rd32(sp0 + 8u));
        t8 = (ebp * 0x10u + edi & 0xffff0000u) | rd16(ebp * 0x20u + edi * 2u + loc_8);
        g->eax = t8;
        g->esp = sp0 - 0x18u;
        t9 = cow_fastcall(g, COW_IMG(0x101d0970u), rd32(self + 8u), loc_8, 2, t8, t7);
        t10 = g->edx;
        cow_fastcall(g, COW_IMG(0x101d0970u), rd32(self + 8u), t10, 2, ebx, edi);
        eax = loc_4;
        ebp = 0u;
    }
    if ((int32_t)(eax + 4u) < (int32_t)COW_IMG(0x1037e430u))
    {
        loc_4 = eax + 4u;
        eax = eax + 4u;
        goto L_101d02a4;
    }
    if ((int32_t)ebp > 0)
    {
        t11 = (uint32_t)(int8_t)rd8(rd32(sp0 + 8u));
        t12 = (rd32(sp0 + 8u) & 0xffff0000u) | rd16(loc_8);
        g->esp = sp0 - 0xcu;
        cow_fastcall(g, COW_IMG(0x101d0970u), rd32(self + 8u), t11, 2, t12, t11);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d0210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d0210(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

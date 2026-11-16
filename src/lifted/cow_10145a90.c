/* f_0x10145a90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10145a90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_10145b3c;
    }
    if ((int16_t)arg2 < 1)
    {
        eax = arg2;
        edx = in_edx;
        goto L_10145b3c;
    }
    if ((int16_t)arg2 >= 24)
    {
        eax = arg2;
        edx = in_edx;
        goto L_10145b3c;
    }
    if ((uint32_t)(int16_t)arg2 == rd8(self + 0x34u))
    {
        ecx = rd8(self + 0x34u);
        goto L_10145b37;
    }
    if ((uint32_t)(int16_t)arg2 == rd8(self + 0x35u))
    {
        ecx = rd8(self + 0x35u);
        goto L_10145b37;
    }
    if (rd32(COW_IMG(0x106631d4u)) == 0u)
    {
        if (rd32(COW_IMG(0x106631d8u)) == 0u)
        {
            ecx = rd32(COW_IMG(0x106631d8u));
            edx = (uint32_t)(int16_t)arg2;
        }
        else
        {
            ecx = rd32(COW_IMG(0x106631d8u));
            if (rd32(self + 0x14u) != 1u)
            {
                loc_8 = arg2;
                loc_c = 0u;
            }
            else
            {
                loc_8 = 0u;
                loc_c = arg2;
            }
            g->edx = (uint32_t)(int16_t)arg2;
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x101d52d0u), arg2, ecx, g->edx, 0, 2, loc_c, loc_8);
            t5 = g->ecx;
            t6 = g->edx;
            ecx = t5;
            edx = t6;
        }
    }
    else
    {
        ecx = rd32(COW_IMG(0x106631d4u));
        if (rd32(self + 0x14u) != 1u)
        {
            g->edx = (uint32_t)(int16_t)arg2;
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x101d32c0u), arg2, ecx, g->edx, 0, 2, 0u, arg2);
            t3 = g->ecx;
            t4 = g->edx;
            ecx = t3;
            edx = t4;
        }
        else
        {
            g->edx = (uint32_t)(int16_t)arg2;
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x101d32c0u), arg2, ecx, g->edx, 0, 2, arg2, 0u);
            t1 = g->ecx;
            t2 = g->edx;
            ecx = t1;
            edx = t2;
        }
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x1025b5c0u), 1, 6u);
    t8 = g->edx;
    g->edx = t8;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, t7);
    t9 = g->ecx;
    t10 = g->edx;
    g->edx = t10;
    t11 = rd32(COW_IMG(0x105782b4u));
    t12 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t13 = g->edx;
    wr32(t11 + 0x18u, t12 + 3u);
    g->edx = t13;
    return t12 + 3u;
L_10145b37: ;
    g->eax = arg2;
    g->edx = (uint32_t)(int16_t)arg2;
    g->esp = sp0 - 4u;
    t14 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t15 = g->edx;
    eax = t14;
    edx = t15;
L_10145b3c: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10145a90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10145a90(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */

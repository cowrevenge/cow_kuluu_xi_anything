/* f_0x1015e6e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_1015e6e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1015e788;
    }
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10118830u), arg1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(arg1 + 0x10u) != 0xeu)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_1015e719;
    }
    eax = t1;
    edx = t3;
    if ((uint8_t)arg5 == 0u) goto L_1015e710;
    wr8(arg1 + 0x75u, 1u);
    g->edx = edx;
    return eax;
L_1015e710: ;
    wr8(arg1 + 0x75u, 0u);
    g->edx = edx;
    return eax;
L_1015e719: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t4 = cow_stdcall(g, COW_IMG(0x10123ea0u), 0);
    t5 = g->ecx;
    wr8(arg1 + 0x73u, (uint8_t)arg3);
    wr8(arg1 + 0x72u, (uint8_t)arg4);
    g->eax = (t4 & 0xffffff00u) | (uint8_t)arg4;
    g->edx = arg2;
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, COW_IMG(0x101187f0u), arg1, 1, arg2);
    t7 = g->ecx;
    t8 = g->edx;
    if (rd8(arg1 + 0x34u) & 1u)
    {
        eax = (t6 & 0xffffff00u) | rd8(arg1 + 0x34u);
        ecx = (t7 & 0xffffff00u) | 1u;
        edx = t8;
    }
    else
    {
        eax = (t6 & 0xffffff00u) | rd8(arg1 + 0x34u);
        ecx = (t7 & 0xffffff00u) | 1u;
        edx = t8;
        if (rd8(arg1 + 0x72u) == 0u)
        {
            if (rd32(COW_IMG(0x1057876cu)) == 0u)
            {
                eax = rd32(COW_IMG(0x1057876cu));
            }
            else
            {
                eax = rd32(COW_IMG(0x1057876cu));
                t9 = rd8(arg1 + 0x6fu);
                wr16(eax + 0x6au, (uint16_t)(rd16(eax + 0x6au) - (uint16_t)(uint32_t)(int8_t)t9));
                wr8(arg1 + 0x6fu, 0u);
                edx = (edx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)t9;
            }
        }
    }
    if (arg1 == rd32(self + 0x58u))
    {
        wr32(self + 0x58u, 0u);
    }
    if ((uint8_t)arg5 == 0u) goto L_1015e77e;
    wr8(arg1 + 0x75u, (uint8_t)ecx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_thiscall(g, COW_IMG(0x1011a3b0u), arg1, 0);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_1015e77e: ;
    wr8(arg1 + 0x75u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, COW_IMG(0x1011a3b0u), arg1, 0);
    t13 = g->edx;
    eax = t12;
    edx = t13;
L_1015e788: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015e6e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015e6e0(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */

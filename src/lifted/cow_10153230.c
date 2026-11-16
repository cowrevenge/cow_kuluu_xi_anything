/* f_0x10153230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10153230(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    int64_t q7;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg3 < 10)
    {
        ecx = 1u;
        edi = 1u;
        goto L_10153252;
    }
    ecx = 1u;
    edi = 1u;
L_10153242: ;
    t1 = cow_divs(g, arg3, ecx * 0xau);
    t2 = cow_mods(g, arg3, ecx * 0xau);
    if ((int32_t)t1 >= 10)
    {
        ecx = ecx * 0xau;
        edi = edi + 1u;
        goto L_10153242;
    }
    ecx = ecx * 0xau;
    edi = edi + 1u;
L_10153252: ;
    if (arg2 >= edi + 1u) goto L_10153263;
    eax = edi + 1u;
    g->edx = arg2;
    return 0xffffffffu;
L_10153263: ;
    if ((int32_t)edi <= 0)
    {
        esi = 0u;
    }
    else
    {
        esi = 0u;
L_1015326b: ;
        t3 = cow_divs(g, arg3, ecx);
        t4 = cow_mods(g, arg3, ecx);
        t5 = cow_divs(g, t3, 0xau);
        t6 = cow_mods(g, t3, 0xau);
        wr8(arg1 + esi, (uint8_t)((uint8_t)t6 + 0x30u));
        q7 = (int64_t)cow_muls(0x66666667u, ecx);
        t8 = (uint32_t)((int32_t)cow_qhi(q7) >> 2u);
        t9 = t8 + (t8 >> 0x1fu);
        if ((int32_t)(esi + 1u) < (int32_t)edi)
        {
            ecx = t9;
            esi = esi + 1u;
            goto L_1015326b;
        }
        esi = esi + 1u;
    }
    wr8(arg1 + esi, 0u);
    g->edx = arg1;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10153230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10153230(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

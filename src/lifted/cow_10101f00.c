/* f_0x10101f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=12 */
uint32_t cow_fn_10101f00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg11 = rd32(g->esp + 0x2cu);
    const uint32_t arg12 = rd32(g->esp + 0x30u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint8_t)arg4 == 0u) goto L_10101f0c;
    return in_eax & 0xffff0000u;
L_10101f0c: ;
    if ((uint8_t)arg2 == 1u) goto L_10101f9c;
    if ((uint8_t)arg2 == 2u) goto L_10101f49;
    if ((uint8_t)arg2 - 2u != 0x61u)
    {
        eax = arg1;
        goto L_10102028;
    }
    if ((uint8_t)arg12 == 0u)
    {
        eax = arg1;
        goto L_10102028;
    }
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x10102030u), 2, (uint16_t)arg1, 0x96u);
    return t1;
L_10101f49: ;
    if ((uint8_t)arg7 == 0u) goto L_10101f7d;
    if ((uint8_t)arg11 == 0u)
    {
        eax = arg1;
        ecx = ((uint8_t)arg2 - 2u & 0xffffff00u) | 1u;
        edx = (in_edx & 0xffffff00u) | (uint8_t)arg11;
    }
    else
    {
        if ((arg3 & 2u) == 0u)
        {
            eax = arg1;
            ecx = ((uint8_t)arg2 - 2u & 0xffffff00u) | 1u;
            edx = (in_edx & 0xffffff00u) | (uint8_t)arg11;
        }
        else
        {
            g->ecx = ((uint8_t)arg2 - 2u & 0xffffff00u) | 1u;
            g->edx = (in_edx & 0xffffff00u) | (uint8_t)arg11;
            g->esp = sp0;
            t2 = cow_cdecl(g, COW_IMG(0x10102030u), 2, (uint16_t)arg1, 0xc8u);
            t3 = g->ecx;
            t4 = g->edx;
            eax = t2;
            ecx = t3 & 0xffffff00u;
            edx = t4;
        }
    }
    edx = (edx & 0xffffff00u) | (uint8_t)arg10;
L_10101fcd: ;
    if ((uint8_t)edx == 0u) goto L_10101fe2;
    g->esp = sp0;
    t9 = cow_cdecl(g, COW_IMG(0x10102030u), 2, (uint16_t)eax, 0x32u);
    return t9;
L_10101f7d: ;
    if ((uint8_t)arg5 == 0u) goto L_10101f96;
    g->esp = sp0;
    t5 = cow_cdecl(g, COW_IMG(0x10102030u), 2, (uint16_t)arg1, 0x5au);
    return t5;
L_10101f96: ;
    ecx = ((uint8_t)arg2 - 2u & 0xffffff00u) | (uint8_t)arg6;
L_10102014: ;
    if ((uint8_t)ecx == 0u)
    {
        eax = arg1;
    }
    else
    {
        g->esp = sp0;
        t12 = cow_cdecl(g, COW_IMG(0x10102030u), 2, (uint16_t)arg1, 0x78u);
        eax = t12;
    }
L_10102028: ;
    return eax;
L_10101f9c: ;
    if ((uint8_t)arg6 == 0u) goto L_10101ff7;
    if ((uint8_t)arg9 == 0u)
    {
        eax = arg1;
        ecx = ((uint8_t)arg2 - 1u & 0xffffff00u) | 1u;
        edx = (in_edx & 0xffffff00u) | (uint8_t)arg9;
    }
    else
    {
        if (!(arg3 & 1u))
        {
            eax = arg1;
            ecx = ((uint8_t)arg2 - 1u & 0xffffff00u) | 1u;
            edx = (in_edx & 0xffffff00u) | (uint8_t)arg9;
        }
        else
        {
            g->ecx = ((uint8_t)arg2 - 1u & 0xffffff00u) | 1u;
            g->edx = (in_edx & 0xffffff00u) | (uint8_t)arg9;
            g->esp = sp0;
            t6 = cow_cdecl(g, COW_IMG(0x10102030u), 2, (uint16_t)arg1, 0xc8u);
            t7 = g->ecx;
            t8 = g->edx;
            eax = t6;
            ecx = t7 & 0xffffff00u;
            edx = t8;
        }
    }
    edx = (edx & 0xffffff00u) | (uint8_t)arg8;
    goto L_10101fcd;
L_10101fe2: ;
    if ((uint8_t)ecx == 0u) goto L_10102028;
    g->esp = sp0;
    t10 = cow_cdecl(g, COW_IMG(0x10102030u), 2, (uint16_t)eax, 0x5au);
    return t10;
L_10101ff7: ;
    if ((uint8_t)arg5 == 0u) goto L_10102010;
    g->esp = sp0;
    t11 = cow_cdecl(g, COW_IMG(0x10102030u), 2, (uint16_t)arg1, 0x5au);
    return t11;
L_10102010: ;
    ecx = ((uint8_t)arg2 - 1u & 0xffffff00u) | (uint8_t)arg7;
    goto L_10102014;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10101f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10101f00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

/* f_0x10101360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10101360(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = 0u;
    g->esp = sp0 - 0x10u;
    t1 = cow_stdcall(g, COW_IMG(0x10101350u), 0);
    t2 = g->ecx;
    t3 = rd32(rd32(sp0 + 8u) + 4u) & 3u;
    t4 = rd32(sp0 + 8u);
    wr32(arg1 + 0x134u, t3);
    t5 = rd32(t4 + 4u) >> 0x12u & 0x1fu;
    wr32(arg1 + 0x138u, t5);
    if ((rd32(t4 + 4u) >> 0x17u & 3u) * 5u + 0xfu > 0x1eu)
    {
        ecx = t2;
        ebp = t1;
        esi = t4;
        edi = 0x1eu;
    }
    else
    {
        eax = (rd32(t4 + 4u) >> 0x17u & 3u) * 5u + 0xfu;
        ecx = t2;
        ebp = t1;
        esi = t4;
        edi = eax;
    }
    wr32(arg1 + 0x140u, edi);
    t6 = rd32(esi + 4u);
    if ((t6 >> 0x12u & 0x1fu) != edi)
    {
        eax = t6;
        edx = t6 >> 0x12u & 0x1fu;
        t7 = rd16(ebp + edx * 2u + (eax >> 0x1au & 3u) * 0x40u) - (uint16_t)(eax >> 2u);
        wr32(arg1 + 0x13cu, t7);
    }
    else
    {
        wr32(arg1 + 0x13cu, 0u);
    }
    t8 = rd32(ebp + (uint32_t)(int16_t)rd16(esi + 8u) * 0xcu + 0x88u);
    wr32(arg1 + 0x154u, t8);
    if (rd16(esi + 8u) != 0u)
    {
        wr32(sp0 + 8u, arg1 + 0x144u);
        edi = 0u;
L_10101417: ;
        if (rd16(ebp + edi * 2u + (uint32_t)(int16_t)rd16(esi + 8u) * 0xcu + 0x80u) == 0u) goto L_1010145f;
        eax = (edi + (uint32_t)(int16_t)rd16(esi + 8u) * 6u & 0xffff0000u) | rd16(ebp + edi * 2u + (uint32_t)(int16_t)rd16(esi + 8u) * 0xcu + 0x80u);
        t9 = ebp + (uint32_t)(int16_t)eax * 0x4cu + 0x3080u;
        g->esi = esi;
        g->eax = t9;
        g->esp = sp0 - 0x10u;
        t10 = cow_cdecl(g, COW_IMG(0x10101470u), 4, arg1, esi, t9, ecx);
        t11 = rd32(sp0 + 8u);
        wr32(t11, t10);
        wr32(sp0 + 8u, t11 + 4u);
        if ((int32_t)(edi + 1u) < 4)
        {
            ecx = t10;
            edi = edi + 1u;
            goto L_10101417;
        }
        ecx = t10;
    }
L_1010145f: ;
    g->esi = in_esi;
    return ecx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10101360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10101360(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

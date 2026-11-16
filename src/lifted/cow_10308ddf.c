/* f_0x10308ddf - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10308ddf(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0u)
    {
        if (rd32(sp0 + 0xcu) == 0u)
        {
            esi = (uint16_t)arg1;
            edi = arg1 >> 0x10u;
        }
        else
        {
            ecx = arg2;
            esi = (uint16_t)arg1;
            edi = arg1 >> 0x10u;
L_10308e0c: ;
            if (rd32(sp0 + 0xcu) >= 0x15b0u)
            {
                edx = 0x15b0u;
            }
            else
            {
                edx = rd32(sp0 + 0xcu);
            }
            wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) - edx);
            if ((int32_t)edx >= 16)
            {
                eax = edx >> 4u;
                edx = edx - (edx >> 4u) * 0x10u;
L_10308e33: ;
                t1 = edi + esi * 2u + rd8(ecx) * 2u + rd8(ecx + 1u) + esi + rd8(ecx) + rd8(ecx + 1u) + rd8(ecx + 2u) + esi + rd8(ecx) + rd8(ecx + 1u) + rd8(ecx + 2u) + rd8(ecx + 3u);
                t2 = t1 + esi + rd8(ecx) + rd8(ecx + 1u) + rd8(ecx + 2u) + rd8(ecx + 3u) + rd8(ecx + 4u) + esi + rd8(ecx) + rd8(ecx + 1u) + rd8(ecx + 2u) + rd8(ecx + 3u) + rd8(ecx + 4u) + rd8(ecx + 5u);
                t3 = t2 + esi + rd8(ecx) + rd8(ecx + 1u) + rd8(ecx + 2u) + rd8(ecx + 3u) + rd8(ecx + 4u) + rd8(ecx + 5u) + rd8(ecx + 6u) + esi + rd8(ecx) + rd8(ecx + 1u) + rd8(ecx + 2u) + rd8(ecx + 3u) + rd8(ecx + 4u) + rd8(ecx + 5u) + rd8(ecx + 6u) + rd8(ecx + 7u);
                t4 = esi + rd8(ecx) + rd8(ecx + 1u) + rd8(ecx + 2u) + rd8(ecx + 3u) + rd8(ecx + 4u) + rd8(ecx + 5u) + rd8(ecx + 6u) + rd8(ecx + 7u) + rd8(ecx + 8u) + rd8(ecx + 9u);
                t5 = t3 + esi + rd8(ecx) + rd8(ecx + 1u) + rd8(ecx + 2u) + rd8(ecx + 3u) + rd8(ecx + 4u) + rd8(ecx + 5u) + rd8(ecx + 6u) + rd8(ecx + 7u) + rd8(ecx + 8u) + t4 + t4 + rd8(ecx + 0xau);
                t6 = t4 + t5 + rd8(ecx + 0xau) + rd8(ecx + 0xbu) + t4 + rd8(ecx + 0xau) + rd8(ecx + 0xbu) + rd8(ecx + 0xcu) + t4 + rd8(ecx + 0xau) + rd8(ecx + 0xbu) + rd8(ecx + 0xcu) + rd8(ecx + 0xdu);
                t7 = t6 + t4 + rd8(ecx + 0xau) + rd8(ecx + 0xbu) + rd8(ecx + 0xcu) + rd8(ecx + 0xdu) + rd8(ecx + 0xeu) + t4 + rd8(ecx + 0xau) + rd8(ecx + 0xbu) + rd8(ecx + 0xcu) + rd8(ecx + 0xdu) + rd8(ecx + 0xeu) + rd8(ecx + 0xfu);
                if (eax != 1u)
                {
                    eax = eax - 1u;
                    esi = t4 + rd8(ecx + 0xau) + rd8(ecx + 0xbu) + rd8(ecx + 0xcu) + rd8(ecx + 0xdu) + rd8(ecx + 0xeu) + rd8(ecx + 0xfu);
                    ecx = ecx + 0x10u;
                    edi = t7;
                    goto L_10308e33;
                }
                esi = t4 + rd8(ecx + 0xau) + rd8(ecx + 0xbu) + rd8(ecx + 0xcu) + rd8(ecx + 0xdu) + rd8(ecx + 0xeu) + rd8(ecx + 0xfu);
                ecx = ecx + 0x10u;
                edi = t7;
            }
            if (edx == 0u) goto L_10308ecb;
L_10308ec0: ;
            if (edx != 1u)
            {
                edx = edx - 1u;
                edi = edi + esi + rd8(ecx);
                esi = esi + rd8(ecx);
                ecx = ecx + 1u;
                goto L_10308ec0;
            }
            edi = edi + esi + rd8(ecx);
            esi = esi + rd8(ecx);
            ecx = ecx + 1u;
L_10308ecb: ;
            t8 = cow_divu(g, esi, 0xfff1u);
            t9 = cow_modu(g, esi, 0xfff1u);
            t10 = cow_divu(g, edi, 0xfff1u);
            t11 = cow_modu(g, edi, 0xfff1u);
            if (rd32(sp0 + 0xcu) != 0u)
            {
                esi = t9;
                edi = t11;
                goto L_10308e0c;
            }
            esi = t9;
            edi = t11;
        }
        eax = edi << 0x10u | esi;
    }
    else
    {
        eax = 1u;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10308ddf(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10308ddf(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

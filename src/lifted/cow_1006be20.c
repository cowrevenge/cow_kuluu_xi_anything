/* f_0x1006be20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1006be20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;

    if ((int32_t)rd32(COW_IMG(0x10354040u)) < 624)
    {
        eax = rd32(COW_IMG(0x10354040u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10354040u));
        if (eax == 0x271u)
        {
            g->esp = sp0;
            cow_cdecl(g, COW_IMG(0x1006bd90u), 1, 0x1105u);
        }
        ecx = 0u;
L_1006be46: ;
        t1 = ((rd32(COW_IMG(0x1047c114u) + ecx * 4u) ^ rd32(COW_IMG(0x1047c110u) + ecx * 4u)) & 0x7fffffffu) ^ rd32(COW_IMG(0x1047c110u) + ecx * 4u);
        t2 = rd32(COW_IMG(0x1035404cu) + (t1 & 1u) * 4u) ^ t1 >> 1u ^ rd32(COW_IMG(0x1047c744u) + ecx * 4u);
        wr32(COW_IMG(0x1047c110u) + ecx * 4u, t2);
        if ((int32_t)(ecx + 1u) < 227)
        {
            ecx = ecx + 1u;
            goto L_1006be46;
        }
        ecx = ecx + 1u;
        if ((int32_t)ecx < 623)
        {
            ecx = COW_IMG(0x1047c110u) + ecx * 4u;
L_1006be96: ;
            t3 = ((rd32(ecx + 4u) ^ rd32(ecx)) & 0x7fffffffu) ^ rd32(ecx);
            t4 = rd32(COW_IMG(0x1035404cu) + (t3 & 1u) * 4u) ^ rd32(ecx - 0x38cu) ^ t3 >> 1u;
            wr32(ecx, t4);
            if ((int32_t)(ecx + 4u) < (int32_t)COW_IMG(0x1047caccu))
            {
                ecx = ecx + 4u;
                goto L_1006be96;
            }
        }
        t5 = ((rd32(COW_IMG(0x1047c110u)) ^ rd32(COW_IMG(0x1047caccu))) & 0x7fffffffu) ^ rd32(COW_IMG(0x1047caccu));
        t6 = rd32(COW_IMG(0x1035404cu) + (t5 & 1u) * 4u) ^ t5 >> 1u ^ rd32(COW_IMG(0x1047c740u));
        wr32(COW_IMG(0x1047caccu), t6);
        eax = 0u;
    }
    t7 = rd32(COW_IMG(0x1047c110u) + eax * 4u);
    wr32(COW_IMG(0x10354040u), eax + 1u);
    t8 = t7 ^ t7 >> 0xbu;
    t9 = t8 ^ (t8 & 0xff3a58adu) << 7u;
    t10 = t9 ^ (t9 & 0xffffdf8cu) << 0xfu;
    g->edx = (t8 & 0xff3a58adu) << 7u;
    return t10 >> 0x12u ^ t10;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006be20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006be20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

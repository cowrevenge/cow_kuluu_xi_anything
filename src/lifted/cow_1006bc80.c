/* f_0x1006bc80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1006bc80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t self = g->ecx;

    if ((int32_t)rd32(self + 0x9c0u) < 624)
    {
        ecx = self;
    }
    else
    {
        eax = rd32(self + 0x9c0u);
        if (eax != 0x271u)
        {
            ecx = self;
        }
        else
        {
            t1 = rd32(self + 0x9c4u);
            g->esp = sp0;
            cow_thiscall(g, COW_IMG(0x1006bc10u), self, 1, t1);
            t2 = g->ecx;
            ecx = t2;
        }
        eax = 0u;
L_1006bca7: ;
        t3 = ((rd32(eax * 4u + ecx + 4u) ^ rd32(eax * 4u + ecx)) & 0x7fffffffu) ^ rd32(eax * 4u + ecx);
        t4 = rd32(COW_IMG(0x10354044u) + (t3 & 1u) * 4u) ^ t3 >> 1u ^ rd32(eax * 4u + ecx + 0x634u);
        wr32(eax * 4u + ecx, t4);
        if ((int32_t)(eax + 1u) < 227)
        {
            eax = eax + 1u;
            goto L_1006bca7;
        }
        eax = eax + 1u;
        if ((int32_t)eax >= 623) goto L_1006bd18;
L_1006bce3: ;
        t5 = ((rd32(eax * 4u + ecx + 4u) ^ rd32(eax * 4u + ecx)) & 0x7fffffffu) ^ rd32(eax * 4u + ecx);
        t6 = rd32(COW_IMG(0x10354044u) + (t5 & 1u) * 4u) ^ t5 >> 1u ^ rd32(eax * 4u + ecx - 0x38cu);
        wr32(eax * 4u + ecx, t6);
        if ((int32_t)(eax + 1u) < 623)
        {
            eax = eax + 1u;
            goto L_1006bce3;
        }
L_1006bd18: ;
        t7 = ((rd32(ecx) ^ rd32(ecx + 0x9bcu)) & 0x7fffffffu) ^ rd32(ecx + 0x9bcu);
        t8 = rd32(COW_IMG(0x10354044u) + (t7 & 1u) * 4u);
        t9 = rd32(ecx + 0x630u);
        wr32(ecx + 0x9c0u, 0u);
        t10 = t8 ^ t9 ^ t7 >> 1u;
        wr32(ecx + 0x9bcu, t10);
    }
    t11 = rd32(ecx + 0x9c0u) + 1u;
    t12 = rd32(ecx + rd32(ecx + 0x9c0u) * 4u);
    wr32(ecx + 0x9c0u, t11);
    t13 = t12 ^ t12 >> 0xbu;
    t14 = t13 ^ (t13 & 0xff3a58adu) << 7u;
    t15 = t14 ^ (t14 & 0xffffdf8cu) << 0xfu;
    return t15 >> 0x12u ^ t15;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006bc80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006bc80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

/* f_0x101c74b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101c74b0(Guest* g)
{
    double d13;
    double d3;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_1c;
    uint32_t loc_24;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((int32_t)rd32(self + 8u) <= 0)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 4u);
        loc_1c = 0u;
L_101c74cf: ;
        if ((int32_t)eax <= 0) goto L_101c75bf;
        loc_24 = 0u;
L_101c74db: ;
        t1 = rd32(loc_24 * 4u + eax * loc_1c * 4u + rd32(self + 0xcu));
        g->ecx = rd32(self + 0xcu);
        g->edx = (uint8_t)t1;
        t2 = rd32(self + 0xcu);
        d3 = fr(g, (double)(int64_t)cow_i64((uint8_t)t1, 0u) * (double)rdf32(sp0 + 4u));
        fpush(g, d3);
        g->esp = sp0 - 0x34u;
        t4 = cow_call_regs(g, COW_IMG(0x10311c6cu), loc_24 + eax * loc_1c, g->ecx, g->edx, 1, 0);
        t5 = g->ecx;
        t6 = g->edx;
        t7 = (uint8_t)(t1 >> 8u);
        g->ecx = t5;
        g->edx = t6;
        d8 = fr(g, (double)(int64_t)cow_i64(t7, 0u) * (double)rdf32(sp0 + 4u));
        fpush(g, d8);
        t9 = cow_call_regs(g, COW_IMG(0x10311c6cu), t7, g->ecx, g->edx, 1, 0);
        t10 = g->ecx;
        t11 = g->edx;
        t12 = (uint8_t)(t1 >> 0x10u);
        d13 = fr(g, (double)(int64_t)cow_i64(t12, 0u) * (double)rdf32(sp0 + 4u));
        fpush(g, d13);
        t14 = cow_call_regs(g, COW_IMG(0x10311c6cu), t9, g->ecx, g->edx, 1, 0);
        if ((int32_t)t4 <= 255)
        {
            ebx = t9;
            ebp = loc_24 * 4u + eax * loc_1c * 4u + t2;
            eax = t14;
            edi = t4;
            if ((int32_t)edi < 0)
            {
                edi = 0u;
            }
        }
        else
        {
            ebx = t9;
            ebp = loc_24 * 4u + eax * loc_1c * 4u + t2;
            eax = t14;
            edi = 0xffu;
        }
        if ((int32_t)ebx <= 255)
        {
            if ((int32_t)ebx < 0)
            {
                ebx = 0u;
            }
        }
        else
        {
            ebx = 0xffu;
        }
        if ((int32_t)eax <= 255)
        {
            if ((int32_t)eax < 0)
            {
                eax = 0u;
            }
        }
        else
        {
            eax = 0xffu;
        }
        t15 = ((uint8_t)eax << 8u | (uint8_t)ebx) << 8u | (uint8_t)edi;
        wr32(ebp, t15);
        if ((int32_t)(loc_24 + 1u) < (int32_t)rd32(self + 4u))
        {
            eax = rd32(self + 4u);
            loc_24 = loc_24 + 1u;
            goto L_101c74db;
        }
        eax = rd32(self + 4u);
L_101c75bf: ;
        if ((int32_t)(loc_1c + 1u) < (int32_t)rd32(self + 8u))
        {
            loc_1c = loc_1c + 1u;
            goto L_101c74cf;
        }
        edx = loc_1c + 1u;
    }
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c74b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c74b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */

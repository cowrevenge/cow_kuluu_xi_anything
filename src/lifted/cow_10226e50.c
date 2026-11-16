/* f_0x10226e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10226e50(Guest* g)
{
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    int64_t q12;
    int64_t q5;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg1 < 0) goto L_10226f19;
    if ((int32_t)arg1 >= 64) goto L_10226f19;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x10226e00u), 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0xffu) goto L_10226f19;
    eax = t1;
    ecx = t2;
    edx = t3;
    esi = t1;
    if (rd16(esi * 8u + self + 4u) != 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(esi * 8u + self + 4u);
        t4 = (uint32_t)(int16_t)eax + rd32(sp0 + 0xcu);
        wr32(sp0 + 0xcu, t4);
        ecx = t4;
    }
    if (arg2 != 0u) goto L_10226ebd;
    q5 = (int64_t)cow_muls(0x88888889u, rd32(esi * 4u + self + 8u) + 0x3bu);
    t6 = (uint32_t)((int32_t)(cow_qhi(q5) + rd32(esi * 4u + self + 8u) + 0x3bu) >> 5u);
    return t6 + (t6 >> 0x1fu);
L_10226ebd: ;
    t7 = rd8(esi * 8u + self + 2u) & 0x3fu;
    t8 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t7);
    g->edx = t7;
    d9 = fr(g, fr(g, (double)(int32_t)t8 - fr(g, fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032b160u))) * (double)(int32_t)t8)) / (double)(int32_t)arg2);
    fpush(g, d9);
    g->esp = sp0 - 0xcu;
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), arg2, g->ecx, g->edx, 1, 0);
    t11 = g->edx;
    q12 = (int64_t)cow_muls(0x88888889u, rd32(esi * 4u + self + 8u) + 0x3bu);
    t13 = (uint32_t)((int32_t)(cow_qhi(q12) + rd32(esi * 4u + self + 8u) + 0x3bu) >> 5u);
    t14 = cow_divs(g, t13 + (t13 >> 0x1fu), t10);
    t15 = cow_mods(g, t13 + (t13 >> 0x1fu), t10);
    if (t15 != 0u)
    {
        eax = t15;
    }
    else
    {
        eax = t15;
        ebx = t10;
        esi = rd32(esi * 4u + self + 8u);
        if (esi != 0u)
        {
            eax = ebx;
        }
    }
    return eax;
L_10226f19: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10226e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10226e50(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */

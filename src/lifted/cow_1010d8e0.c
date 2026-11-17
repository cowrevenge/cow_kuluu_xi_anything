/* f_0x1010d8e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1010d8e0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = rd32(self + 0x34u);
    esi = 0u;
L_1010d8ec: ;
    if (rd32(eax + 4u) == 0u) goto L_1010d905;
    if (rd32(eax + 8u) == 0u) goto L_1010d905;
    edx = rd32(eax + 8u);
    if ((uint16_t)esi >= rd16(self + 0x44u)) goto L_1010d905;
    eax = edx;
    esi = esi + 1u;
    goto L_1010d8ec;
L_1010d905: ;
    if (rd32(eax + 4u) == 0u) goto L_1010da05;
    if (rd32(eax + 8u) == 0u) goto L_1010da05;
    ebp = rd32(sp0 + 8u);
L_1010d91f: ;
    t1 = rd32(eax + 4u);
    if (rd32(eax + 4u) == 0u) goto L_1010da05;
    loc_10 = t1;
    if (rd32(eax + 8u) == 0u) goto L_1010da05;
    t2 = rd32(rd32(eax) + 0x18u);
    eax = t2;
    loc_4 = t2;
L_1010d945: ;
    if (rd32(eax + 4u) == 0u) goto L_1010d9fc;
    t3 = rd32(eax + 8u);
    t4 = rd32(eax + 8u);
    wr32(sp0 + 8u, t3);
    if (t4 == 0u) goto L_1010d9fc;
    ebx = rd32(eax);
    esi = 0u;
    edi = rd32(eax) - arg1;
    eax = arg1;
L_1010d96b: ;
    if (rd32(eax + edi) > rd32(eax)) goto L_1010d9fc;
    cf = rd32(eax + edi) < rd32(eax);
    if (cf) goto L_1010d983;
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010d96b;
    }
L_1010d983: ;
    eax = arg1;
    esi = 0u;
    edi = ebx - arg1;
L_1010d98d: ;
    if (rd32(eax + edi) > rd32(eax)) goto L_1010d9a1;
    cf = rd32(eax + edi) < rd32(eax);
    if (cf) goto L_1010d9ef;
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010d98d;
    }
L_1010d9a1: ;
    eax = ebp;
    esi = 0u;
    edi = ebx + 0xcu - ebp;
    ebx = ebx + 0xcu;
L_1010d9ac: ;
    if (rd32(eax + edi) > rd32(eax)) goto L_1010d9fc;
    cf = rd32(eax + edi) < rd32(eax);
    if (cf) goto L_1010d9c0;
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010d9ac;
    }
L_1010d9c0: ;
    eax = ebp;
    esi = 0u;
    edi = ebx - ebp;
L_1010d9c8: ;
    if (rd32(eax + edi) > rd32(eax)) goto L_1010d9dc;
    cf = rd32(eax + edi) < rd32(eax);
    if (cf) goto L_1010d9ef;
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010d9c8;
    }
L_1010d9dc: ;
    return rd32(loc_4) + 0x18u;
L_1010d9ef: ;
    t5 = rd32(sp0 + 8u);
    eax = t5;
    loc_4 = t5;
    goto L_1010d945;
L_1010d9fc: ;
    eax = loc_10;
    goto L_1010d91f;
L_1010da05: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010d8e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010d8e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */

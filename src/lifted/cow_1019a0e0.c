/* f_0x1019a0e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1019a0e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1019a15a;
    }
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_1019a13b;
    if ((uint32_t)(int16_t)arg2 == 2u) goto L_1019a12c;
    if ((uint32_t)(int16_t)arg2 != 3u)
    {
        eax = (uint32_t)(int16_t)arg2 - 3u;
        edx = in_edx;
        goto L_1019a15a;
    }
    g->edx = in_edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a744u), 1u, 0u);
    t1 = g->edx;
    t2 = rd32(COW_IMG(0x1066273cu));
    wr32(t2 + 0x14u, 1u);
    if (rd32(rd32(COW_IMG(0x1066273cu)) + 8u) == 0u)
    {
        eax = t2;
        edx = t1;
        goto L_1019a15a;
    }
    eax = t2;
    ecx = rd32(rd32(COW_IMG(0x1066273cu)) + 8u);
    edx = t1;
    g->edx = edx;
    g->esp = sp0;
    t3 = cow_call_regs(g, COW_IMG(0x10118e90u), eax, ecx, g->edx, 0, 1, 2u);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_1019a12c: ;
    t5 = rd32(COW_IMG(0x10662744u));
    wr32(t5 + 0x14u, 1u);
    edx = t5;
L_1019a147: ;
    g->edx = edx;
    g->esp = sp0;
    t6 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a7d0u), 1u, 0u);
    t7 = g->edx;
    eax = t6;
    edx = t7;
L_1019a15a: ;
    g->edx = edx;
    return eax;
L_1019a13b: ;
    wr32(rd32(COW_IMG(0x10662744u)) + 0x14u, 0u);
    edx = in_edx;
    goto L_1019a147;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019a0e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019a0e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */

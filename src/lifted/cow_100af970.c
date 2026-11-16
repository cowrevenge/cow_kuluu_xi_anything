/* f_0x100af970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100af970(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int8_t)((arg2 + t1) >> 8u) < 0) goto L_100afa7c;
    eax = arg2 + t1;
    ecx = t2;
    edx = t3;
    if ((int32_t)eax >= 2048) goto L_100af9b7;
    if ((int32_t)eax < 80) goto L_100af9a9;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return 0u;
L_100af9a9: ;
    edx = eax * 4u + rd32(self + 0x260u);
L_100afa37: ;
    wr32(COW_IMG(0x10487fccu), rd32(edx));
    t4 = rd32(edx + 4u);
    wr32(COW_IMG(0x10487fd0u), t4);
    t5 = rd32(edx + 8u);
    wr32(COW_IMG(0x10487fd4u), t5);
    t6 = rd32(edx + 0xcu);
    wr32(COW_IMG(0x10487fd8u), t6);
    wr8(COW_IMG(0x10487fdbu), 0u);
    return COW_IMG(0x10487fccu);
L_100af9b7: ;
    if ((int32_t)eax >= 4352) goto L_100af9e9;
    if ((int32_t)(eax - 0x1000u) >= 96)
    {
        eax = eax - 0x1000u;
        goto L_100af9d5;
    }
    eax = eax - 0x1000u;
    if ((int32_t)eax < 0) goto L_100af9d5;
    edx = COW_IMG(0x104887f8u) + eax * 4u;
    goto L_100afa37;
L_100af9d5: ;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return 0u;
L_100af9e9: ;
    if ((int32_t)eax >= 4608) goto L_100afa1b;
    if ((int32_t)(eax - 0x1100u) >= 64)
    {
        eax = eax - 0x1100u;
        goto L_100afa07;
    }
    eax = eax - 0x1100u;
    if ((int32_t)eax < 0) goto L_100afa07;
    edx = COW_IMG(0x10488a00u) + eax * 4u;
    goto L_100afa37;
L_100afa07: ;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return 0u;
L_100afa1b: ;
    if ((int32_t)eax >= 6144) goto L_100afa7c;
    if ((int32_t)(eax - 0x1700u) >= 32)
    {
        eax = eax - 0x1700u;
        goto L_100afa68;
    }
    eax = eax - 0x1700u;
    if ((int32_t)eax < 0) goto L_100afa68;
    edx = COW_IMG(0x10488980u) + eax * 4u;
    goto L_100afa37;
L_100afa68: ;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return 0u;
L_100afa7c: ;
    return COW_IMG(0x103d3c84u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100af970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100af970(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */

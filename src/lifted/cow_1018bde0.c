/* f_0x1018bde0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1018bde0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    int64_t q11;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t in_edx = g->edx;
    cow_frame(g, sp0, 16u);

    if (rd8(rd32(COW_IMG(0x104568fcu)) + 9u) == 0u)
    {
        eax = rd32(COW_IMG(0x104568fcu));
        goto L_1018be0a;
    }
    eax = rd32(COW_IMG(0x104568fcu));
    ecx = (self & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 9u);
    if (rd8(COW_IMG(0x1065cb20u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1065cb20u));
        goto L_1018be0a;
    }
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0xcu, t1);
    t4 = cow_cdecl(g, COW_IMG(0x10103b60u), 1, t1);
    return t4;
L_1018be0a: ;
    wr32(sp0 - 0xcu, sp0 - 8u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x1018c180u), sp0 - 8u, 1, sp0 - 8u);
    t5 = g->edx;
    wr32(sp0 - 0xcu, 0x278d00u);
    cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 4u, 1, 0x278d00u);
    t6 = rd32(sp0 - 4u) + rd32(sp0 - 8u);
    wr32(sp0 - 0xcu, t6);
    g->edx = rd32(sp0 - 8u);
    t7 = rd32(sp0 - 8u);
    cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 8u, 1, t6);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x1018bd30u), sp0 - 8u, 0);
    t10 = g->edx;
    q11 = (int64_t)cow_muls(0x92492493u, t9);
    t12 = (uint32_t)((int32_t)(t9 + cow_qhi(q11)) >> 2u);
    t13 = cow_divs(g, t12 + (t12 >> 0x1fu), 0xcu);
    t14 = cow_mods(g, t12 + (t12 >> 0x1fu), 0xcu);
    return t14;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018bde0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018bde0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
